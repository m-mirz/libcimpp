#ifndef GovHydroR_H
#define GovHydroR_H

#include "TurbineGovernorDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Frequency.hpp"
#include "ActivePower.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP {


	/*
	Fourth order lead-lag governor and hydro turbine.
	*/
	class GovHydroR: public TurbineGovernorDynamics
	{

	public:
					CIMPP::PU at; 	/* Turbine gain (At).  Typical Value = 1.2. Default: nullptr */
					CIMPP::Frequency db1; 	/* Intentional dead-band width (db1).  Unit = Hz.  Typical Value = 0. Default: nullptr */
					CIMPP::ActivePower db2; 	/* Unintentional dead-band (db2).  Unit = MW.  Typical Value = 0. Default: nullptr */
					CIMPP::PU dturb; 	/* Turbine damping factor (Dturb).  Typical Value = 0.2. Default: nullptr */
					CIMPP::Frequency eps; 	/* Intentional db hysteresis (eps).  Unit = Hz.  Typical Value = 0. Default: nullptr */
					CIMPP::PU gmax; 	/* Maximum governor output (Gmax).  Typical Value = 1.05. Default: nullptr */
					CIMPP::PU gmin; 	/* Minimum governor output (Gmin).  Typical Value = -0.05. Default: nullptr */
					CIMPP::PU gv1; 	/* Nonlinear gain point 1, PU gv (Gv1).  Typical Value = 0. Default: nullptr */
					CIMPP::PU gv2; 	/* Nonlinear gain point 2, PU gv (Gv2).  Typical Value = 0. Default: nullptr */
					CIMPP::PU gv3; 	/* Nonlinear gain point 3, PU gv (Gv3).  Typical Value = 0. Default: nullptr */
					CIMPP::PU gv4; 	/* Nonlinear gain point 4, PU gv (Gv4).  Typical Value = 0. Default: nullptr */
					CIMPP::PU gv5; 	/* Nonlinear gain point 5, PU gv (Gv5).  Typical Value = 0. Default: nullptr */
					CIMPP::PU gv6; 	/* Nonlinear gain point 6, PU gv (Gv6).  Typical Value = 0. Default: nullptr */
					CIMPP::PU h0; 	/* Turbine nominal head (H0).  Typical Value = 1. Default: nullptr */
					CIMPP::Boolean inputSignal; 	/* Input signal switch (Flag). true = Pe input is used false = feedback is received from CV. Flag is normally dependent on Tt.  If Tf is zero, Flag is set to false. If Tf is not zero, Flag is set to true.  Typical Value = true. Default: false */
					CIMPP::PU kg; 	/* Gate servo gain (Kg).  Typical Value = 2. Default: nullptr */
					CIMPP::PU ki; 	/* Integral gain (Ki).  Typical Value = 0.5. Default: nullptr */
					CIMPP::ActivePower mwbase; 	/* Base for power values (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
					CIMPP::PU pgv1; 	/* Nonlinear gain point 1, PU power (Pgv1).  Typical Value = 0. Default: nullptr */
					CIMPP::PU pgv2; 	/* Nonlinear gain point 2, PU power (Pgv2).  Typical Value = 0. Default: nullptr */
					CIMPP::PU pgv3; 	/* Nonlinear gain point 3, PU power (Pgv3).  Typical Value = 0. Default: nullptr */
					CIMPP::PU pgv4; 	/* Nonlinear gain point 4, PU power (Pgv4).  Typical Value = 0. Default: nullptr */
					CIMPP::PU pgv5; 	/* Nonlinear gain point 5, PU power (Pgv5).  Typical Value = 0. Default: nullptr */
					CIMPP::PU pgv6; 	/* Nonlinear gain point 6, PU power (Pgv6).  Typical Value = 0. Default: nullptr */
					CIMPP::PU pmax; 	/* Maximum gate opening, PU of MWbase (Pmax).  Typical Value = 1. Default: nullptr */
					CIMPP::PU pmin; 	/* Minimum gate opening, PU of MWbase (Pmin).  Typical Value = 0. Default: nullptr */
					CIMPP::PU qnl; 	/* No-load turbine flow at nominal head (Qnl).  Typical Value = 0.08. Default: nullptr */
					CIMPP::PU r; 	/* Steady-state droop (R).  Typical Value = 0.05. Default: nullptr */
					CIMPP::Seconds t1; 	/* Lead time constant 1 (T1).  Typical Value = 1.5. Default: nullptr */
					CIMPP::Seconds t2; 	/* Lag time constant 1 (T2).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Seconds t3; 	/* Lead time constant 2 (T3).  Typical Value = 1.5. Default: nullptr */
					CIMPP::Seconds t4; 	/* Lag time constant 2 (T4).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Seconds t5; 	/* Lead time constant 3 (T5).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds t6; 	/* Lag time constant 3 (T6).  Typical Value = 0.05. Default: nullptr */
					CIMPP::Seconds t7; 	/* Lead time constant 4 (T7).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds t8; 	/* Lag time constant 4 (T8).  Typical Value = 0.05. Default: nullptr */
					CIMPP::Seconds td; 	/* Input filter time constant (Td).  Typical Value = 0.05. Default: nullptr */
					CIMPP::Seconds tp; 	/* Gate servo time constant (Tp).  Typical Value = 0.05. Default: nullptr */
					CIMPP::Seconds tt; 	/* Power feedback time constant (Tt).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tw; 	/* Water inertia time constant (Tw).  Typical Value = 1. Default: nullptr */
					CIMPP::Simple_Float velcl; 	/* Maximum gate closing velocity (Velcl).  Unit = PU/sec.  Typical Value = -0.2. Default: nullptr */
					CIMPP::Simple_Float velop; 	/* Maximum gate opening velocity (Velop).  Unit = PU/sec.  Typical Value = 0.2. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		GovHydroR();
		virtual ~GovHydroR();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* GovHydroR_factory();
}
#endif
