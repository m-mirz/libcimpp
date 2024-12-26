#ifndef ExcST7B_H
#define ExcST7B_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "ExcST7BOELselectorKind.hpp"
#include "ExcST7BUELselectorKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Modified IEEE ST7B static excitation system without stator current limiter (SCL) and current compensator (DROOP) inputs.
	*/
	class ExcST7B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST7B();
		~ExcST7B() override;

		CIMPP::PU kh;  /* High-value gate feedback gain (&lt;i&gt;Kh&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::PU kia;  /* Voltage regulator integral gain (&lt;i&gt;Kia&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::PU kl;  /* Low-value gate feedback gain (&lt;i&gt;Kl&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::PU kpa;  /* Voltage regulator proportional gain (&lt;i&gt;Kpa&lt;/i&gt;) (&amp;gt; 0).  Typical value = 40. Default: nullptr */
		CIMPP::ExcST7BOELselectorKind oelin;  /* OEL input selector (&lt;i&gt;OELin&lt;/i&gt;). Typical value = noOELinput. Default: 0 */
		CIMPP::Seconds tb;  /* Regulator lag time constant (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tc;  /* Regulator lead time constant (&lt;i&gt;Tc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tf;  /* Excitation control system stabilizer time constant (&lt;i&gt;Tf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tg;  /* Feedback time constant of inner loop field voltage regulator (&lt;i&gt;Tg&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tia;  /* Feedback time constant (&lt;i&gt;Tia&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 3. Default: nullptr */
		CIMPP::Seconds ts;  /* Rectifier firing time constant (&lt;i&gt;Ts&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::ExcST7BUELselectorKind uelin;  /* UEL input selector (&lt;i&gt;UELin&lt;/i&gt;). Typical value = noUELinput. Default: 0 */
		CIMPP::PU vmax;  /* Maximum voltage reference signal (&lt;i&gt;Vmax&lt;/i&gt;) (&amp;gt; 0 and &amp;gt; ExcST7B.vmin)).  Typical value = 1,1. Default: nullptr */
		CIMPP::PU vmin;  /* Minimum voltage reference signal (&lt;i&gt;Vmin&lt;/i&gt;) (&amp;gt; 0 and &amp;lt; ExcST7B.vmax).  Typical value = 0,9. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; 0).  Typical value = 5. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; 0).  Typical value = -4,5. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcST7B_factory();
}
#endif
