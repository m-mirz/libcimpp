#ifndef CIMPARSER_H
#define CIMPARSER_H

#include <libxml++/libxml++.h>
#include <glibmm/ustring.h>
#include <stack>
#include <queue>
#include <unordered_map>

#include "BaseClass.h"
#include "task.h"

class CIMParser : public xmlpp::SaxParser
{
public:
	CIMParser();
	~CIMParser();

    void print();

	std::unordered_map<std::string, BaseClass*> elements;

protected:
	//void on_start_document() override;
    void on_end_document() override;
    void on_start_element(const Glib::ustring& name, const AttributeList& properties) override;
    void on_end_element(const Glib::ustring& name) override;
    void on_characters(const Glib::ustring& characters) override;
    //void on_comment(const Glib::ustring& text) override;
    //void on_warning(const Glib::ustring& text) override;
    //void on_error(const Glib::ustring& text) override;
    //void on_fatal_error(const Glib::ustring& text) override;

	static Glib::ustring get_rdf_id(const AttributeList &properties);
	static Glib::ustring get_rdf_resource(const AttributeList &properties);
	std::string get_rdf_enum(const AttributeList &properties);
	static bool is_only_whitespace(const Glib::ustring &characters);

private:
	std::stack<BaseClass*> elementStack;
	std::stack<Glib::ustring> tagStack;
	std::queue<Task> taskQueue;
};



#endif // CIMPARSER_H