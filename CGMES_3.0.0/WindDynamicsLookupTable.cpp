/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindDynamicsLookupTable.hpp"

#include <algorithm>
#include <sstream>

#include "WindContCurrLimIEC.hpp"
#include "WindContPType3IEC.hpp"
#include "WindContQPQULimIEC.hpp"
#include "WindContRotorRIEC.hpp"
#include "WindGenType3bIEC.hpp"
#include "WindPitchContPowerIEC.hpp"
#include "WindPlantFreqPcontrolIEC.hpp"
#include "WindPlantReactiveControlIEC.hpp"
#include "WindProtectionIEC.hpp"
#include "Float.hpp"
#include "WindLookupTableFunctionKind.hpp"
#include "Float.hpp"
#include "Integer.hpp"

using namespace CIMPP;

WindDynamicsLookupTable::WindDynamicsLookupTable() : WindContCurrLimIEC(nullptr), WindContPType3IEC(nullptr), WindContQPQULimIEC(nullptr), WindContRotorRIEC(nullptr), WindGenType3bIEC(nullptr), WindPitchContPowerIEC(nullptr), WindPlantFreqPcontrolIEC(nullptr), WindPlantReactiveControlIEC(nullptr), WindProtectionIEC(nullptr) {};
WindDynamicsLookupTable::~WindDynamicsLookupTable() {};











bool assign_WindDynamicsLookupTable_input(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		buffer >> element->input;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindDynamicsLookupTable_lookupTableFunctionType(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		buffer >> element->lookupTableFunctionType;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindDynamicsLookupTable_output(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		buffer >> element->output;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindDynamicsLookupTable_sequence(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		buffer >> element->sequence;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindContCurrLimIEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindContCurrLimIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindContCurrLimIEC* element2 = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContCurrLimIEC != element2)
		{
			element->WindContCurrLimIEC = element2;
			return assign_WindContCurrLimIEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContPType3IEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindContPType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindContPType3IEC* element2 = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContPType3IEC != element2)
		{
			element->WindContPType3IEC = element2;
			return assign_WindContPType3IEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContQPQULimIEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindContQPQULimIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindContQPQULimIEC* element2 = dynamic_cast<WindContQPQULimIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContQPQULimIEC != element2)
		{
			element->WindContQPQULimIEC = element2;
			return assign_WindContQPQULimIEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContRotorRIEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindContRotorRIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindContRotorRIEC* element2 = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContRotorRIEC != element2)
		{
			element->WindContRotorRIEC = element2;
			return assign_WindContRotorRIEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindGenType3bIEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindGenType3bIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindGenType3bIEC* element2 = dynamic_cast<WindGenType3bIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenType3bIEC != element2)
		{
			element->WindGenType3bIEC = element2;
			return assign_WindGenType3bIEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPitchContPowerIEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindPitchContPowerIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindPitchContPowerIEC* element2 = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPitchContPowerIEC != element2)
		{
			element->WindPitchContPowerIEC = element2;
			return assign_WindPitchContPowerIEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindPlantFreqPcontrolIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindPlantFreqPcontrolIEC* element2 = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPlantFreqPcontrolIEC != element2)
		{
			element->WindPlantFreqPcontrolIEC = element2;
			return assign_WindPlantFreqPcontrolIEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindPlantReactiveControlIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindPlantReactiveControlIEC* element2 = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPlantReactiveControlIEC != element2)
		{
			element->WindPlantReactiveControlIEC = element2;
			return assign_WindPlantReactiveControlIEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindProtectionIEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindProtectionIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindProtectionIEC* element2 = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindProtectionIEC != element2)
		{
			element->WindProtectionIEC = element2;
			return assign_WindProtectionIEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}





const char WindDynamicsLookupTable::debugName[] = "WindDynamicsLookupTable";
const char* WindDynamicsLookupTable::debugString() const
{
	return WindDynamicsLookupTable::debugName;
}

void WindDynamicsLookupTable::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable"), &WindDynamicsLookupTable_factory));
}

void WindDynamicsLookupTable::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.input"), &assign_WindDynamicsLookupTable_input));
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.lookupTableFunctionType"), &assign_WindDynamicsLookupTable_lookupTableFunctionType));
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.output"), &assign_WindDynamicsLookupTable_output));
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.sequence"), &assign_WindDynamicsLookupTable_sequence));
}

void WindDynamicsLookupTable::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.WindContCurrLimIEC"), &assign_WindDynamicsLookupTable_WindContCurrLimIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.WindContPType3IEC"), &assign_WindDynamicsLookupTable_WindContPType3IEC));
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.WindContQPQULimIEC"), &assign_WindDynamicsLookupTable_WindContQPQULimIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.WindContRotorRIEC"), &assign_WindDynamicsLookupTable_WindContRotorRIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.WindGenType3bIEC"), &assign_WindDynamicsLookupTable_WindGenType3bIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.WindPitchContPowerIEC"), &assign_WindDynamicsLookupTable_WindPitchContPowerIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.WindPlantFreqPcontrolIEC"), &assign_WindDynamicsLookupTable_WindPlantFreqPcontrolIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.WindPlantReactiveControlIEC"), &assign_WindDynamicsLookupTable_WindPlantReactiveControlIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.WindProtectionIEC"), &assign_WindDynamicsLookupTable_WindProtectionIEC));
}

const BaseClassDefiner WindDynamicsLookupTable::declare()
{
	return BaseClassDefiner(WindDynamicsLookupTable::addConstructToMap, WindDynamicsLookupTable::addPrimitiveAssignFnsToMap, WindDynamicsLookupTable::addClassAssignFnsToMap, WindDynamicsLookupTable::debugName);
}

namespace CIMPP
{
	BaseClass* WindDynamicsLookupTable_factory()
	{
		return new WindDynamicsLookupTable;
	}
}
