#include "CIMParser.h"
#include <iostream>
#include <sstream>
#include <regex>

#include <stdexcept>

#include "IEC61970.h"
#include "CIMFactory.h"
#include "assignments.h"

CIMParser::CIMParser()
{
}

CIMParser::~CIMParser()
{
	if(!objectStack.empty())
		std::cerr << "Error: objectStack is not empty!" << std::endl;
	if(!tagStack.empty())
		std::cerr << "Error: tagStack is not empty!" << std::endl;
}

void CIMParser::on_end_document()
{
	unsigned int size, unresolved;
	size = taskQueue.size();
	unresolved = 0;
	while(!taskQueue.empty())
	{
		if(!taskQueue.front().resolve())
		{
			std::cout << "Note: Cannot resolve following RDF raltionship: ";
			taskQueue.front().print();
			unresolved++;
		}
		taskQueue.pop();
	}
	std::cout << "Note: " << unresolved << " out of " << size << " tasks remain unresolved!" << std::endl;
}

void CIMParser::on_start_element(const Glib::ustring &name, const AttributeList &properties)
{
	// Only process tags in cim namespace
	if(name.find("cim:") == std::string::npos)
	{
		//std::cerr << name << " not in namespace \"cim\"" << std::endl;
		return;
	}

	// Remember last opened tag
	tagStack.push(name);

	// Is the value of the tag a literal?
	if(properties.empty()) // TODO: Was habe ich damit gemeint?
		return;

	// If name is a CIM class check if to create a new object
	if(CIMFactory::IsCIMClass(name))
	{
		// Get rdf_id
		std::string rdf_id;
		try
		{
			rdf_id = get_rdf_id(properties);
		}
		catch(std::logic_error &excep)
		{
			std::cerr << excep.what() << std::endl;
			exit(1);
		}
		// check if object already exists
		std::unordered_map<std::string, BaseClass*>::iterator it = Task::RDFMap.find(rdf_id);
		if(it != Task::RDFMap.end()) // object exists -> push it on the stack
		{
			elementStack.push(it->second);
		}
		else // object does not exist -> create object
		{
			BaseClass* BaseClass_ptr = CIMFactory::CreateNew(name);
			Task::RDFMap.emplace(rdf_id, BaseClass_ptr);
			elementStack.push(BaseClass_ptr);
			Objects.push_back(BaseClass_ptr);
		}
		return;
	}

	// Lege einen neuen Task an
	try // FIXME: No exep
	{
		std::string rdf_id = get_rdf_resource(properties);
		taskQueue.push(Task(objectStack.top(), name, rdf_id));
		return;
	}
	catch(std::logic_error &excep)
	{}

	try
	{
		std::string enumSymbol = get_rdf_enum(properties);
		if(!assign(objectStack.top(), name, enumSymbol))
			std::cerr << "Error: " << enumSymbol << " can not be assigned" << std::endl;
		return;
	}
	catch(std::logic_error &excep)
	{}

	// Nobody knows what to do
	std::cerr << "Error: Nobody knows, the " << name << " I've seen... *sing*" << std::endl;
}

void CIMParser::on_end_element(const Glib::ustring &name)
{
	// Only process tags in cim namespace
	if(name.find("cim:") == std::string::npos)
	{
		return;
	}

	// Pop Stacks
	tagStack.pop();
	if(CIMFactory::IsCIMClass(name))
	{
		objectStack.pop();
		//std::cout << "Popped " << name << std::endl;
	}
}

void CIMParser::on_characters(const Glib::ustring &characters)
{
	// Only process tags in "cim" namespace
	if(tagStack.empty())
	{
		return;
	}
	if(objectStack.empty())
	{
		throw std::runtime_error("objectStack empty");
	}

#ifndef DEBUG
	assign(objectStack.top(), tagStack.top(), characters);
#else
	// Check if the characters only contain whitespace
	if(is_only_whitespace(characters))
	{
		return;
	}
	if(!assign(objectStack.top(), tagStack.top(), characters))
		std::cout << "Note: Cannot assign '" << characters << "' to " << tagStack.top() << std::endl;
#endif
}

Glib::ustring CIMParser::get_rdf_id(const AttributeList &properties)
{
	for(auto&& attribute : properties)
	{
		if(attribute.name == "rdf:ID")
			return attribute.value;
		if(attribute.name == "rdf:about")
			return attribute.value.substr(1);
	}
	throw std::logic_error("Attributes contain no rdf:ID");
}

Glib::ustring CIMParser::get_rdf_resource(const AttributeList &properties)
{
	for(auto&& attribute : properties)
	{
		if(attribute.name == "rdf:resource")
		{
			if(attribute.value.at(0) == '#')
			{
				return attribute.value.substr(1);
			}
			throw std::logic_error("rdf:resource does not relate to an object in this file");
		}
	}
	throw std::logic_error("Attribute contain no rdf:resource");
}

bool CIMParser::is_only_whitespace(const Glib::ustring& characters)
{
	return std::regex_match(characters.c_str(), std::regex("^[[:space:]]*$"));
}

std::string CIMParser::get_rdf_enum(const AttributeList &properties)
{
	for(auto&& attribute : properties)
	{
		if(attribute.name == "rdf:resource")
		{
			std::regex expr("^http[s]*://[a-zA-Z0-9./_]*CIM-schema-cim[0-9]+#([a-zA-z0-9]*).([a-zA-z0-9]*)");
			std::smatch m;
			std::string str = attribute.value;
			if(std::regex_match(str, m, expr))
			{
				return std::string(m[1]).append(".").append(m[2]);
			}
			throw std::logic_error("rdf:resource does not relate to an object in this file");
		}
	}
	throw std::logic_error("Attribute contain no rdf:resource");
}
