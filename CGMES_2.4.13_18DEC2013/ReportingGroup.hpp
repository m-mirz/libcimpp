#ifndef ReportingGroup_H
#define ReportingGroup_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class BusNameMarker;
	class TopologicalNode;

	/*
	A reporting group is used for various ad-hoc groupings used for reporting.
	*/
	class ReportingGroup : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		ReportingGroup();
		~ReportingGroup() override;

		std::list<CIMPP::BusNameMarker*> BusNameMarker;  /* The reporting group to which this bus name marker belongs. Default: 0 */
		std::list<CIMPP::TopologicalNode*> TopologicalNode;  /* The reporting group to which the topological node belongs. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ReportingGroup_factory();
}
#endif
