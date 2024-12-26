#ifndef AsynchronousMachineDynamics_H
#define AsynchronousMachineDynamics_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "RotatingMachineDynamics.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class AsynchronousMachine;
	class MechanicalLoadDynamics;
	class TurbineGovernorDynamics;
	class WindTurbineType1or2Dynamics;

	/*
	Asynchronous machine whose behaviour is described by reference to a standard model expressed in either time constant reactance form or equivalent circuit form <font color="#0f0f0f">or by definition of a user-defined model.</font> Parameter details: <ol> 	<li>Asynchronous machine parameters such as <i>Xl, Xs,</i> etc. are actually used as inductances in the model, but are commonly referred to as reactances since, at nominal frequency, the PU values are the same. However, some references use the symbol <i>L</i> instead of <i>X</i>.</li> </ol>
	*/
	class AsynchronousMachineDynamics : public RotatingMachineDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		AsynchronousMachineDynamics();
		~AsynchronousMachineDynamics() override;

		CIMPP::AsynchronousMachine* AsynchronousMachine;  /* Asynchronous machine to which this asynchronous machine dynamics model applies. Default: 0 */
		CIMPP::MechanicalLoadDynamics* MechanicalLoadDynamics;  /* Mechanical load model associated with this asynchronous machine model. Default: 0 */
		CIMPP::TurbineGovernorDynamics* TurbineGovernorDynamics;  /* Turbine-governor model associated with this asynchronous machine model. Default: 0 */
		CIMPP::WindTurbineType1or2Dynamics* WindTurbineType1or2Dynamics;  /* Wind generator type 1 or type 2 model associated with this asynchronous machine model. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* AsynchronousMachineDynamics_factory();
}
#endif
