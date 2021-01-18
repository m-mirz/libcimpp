#ifndef CIMCLASSLIST_H
#define CIMCLASSLIST_H
using namespace CIMPP;
#include <list>
static std::list<BaseClassDefiner> CIMClassList = {
    ACDCConverter::declare(),
    ACDCConverterDCTerminal::declare(),
    ACDCTerminal::declare(),
    ACLineSegment::declare(),
    Accumulator::declare(),
    AccumulatorLimit::declare(),
    AccumulatorLimitSet::declare(),
    AccumulatorReset::declare(),
    AccumulatorValue::declare(),
    ActivePower::declare(),
    ActivePowerLimit::declare(),
    ActivePowerPerCurrentFlow::declare(),
    ActivePowerPerFrequency::declare(),
    Analog::declare(),
    AnalogControl::declare(),
    AnalogLimit::declare(),
    AnalogLimitSet::declare(),
    AnalogValue::declare(),
    AngleDegrees::declare(),
    AngleRadians::declare(),
    ApparentPower::declare(),
    ApparentPowerLimit::declare(),
    Area::declare(),
    AsynchronousMachine::declare(),
    AsynchronousMachineDynamics::declare(),
    AsynchronousMachineEquivalentCircuit::declare(),
    AsynchronousMachineTimeConstantReactance::declare(),
    AsynchronousMachineUserDefined::declare(),
    BaseVoltage::declare(),
    BasicIntervalSchedule::declare(),
    Bay::declare(),
    Boolean::declare(),
    Breaker::declare(),
    BusNameMarker::declare(),
    BusbarSection::declare(),
    Capacitance::declare(),
    CapacitancePerLength::declare(),
    Command::declare(),
    Conductance::declare(),
    ConductingEquipment::declare(),
    Conductor::declare(),
    ConformLoad::declare(),
    ConformLoadGroup::declare(),
    ConformLoadSchedule::declare(),
    ConnectivityNode::declare(),
    ConnectivityNodeContainer::declare(),
    Connector::declare(),
    Control::declare(),
    ControlArea::declare(),
    ControlAreaGeneratingUnit::declare(),
    CoordinateSystem::declare(),
    CsConverter::declare(),
    CurrentFlow::declare(),
    CurrentLimit::declare(),
    Curve::declare(),
    CurveData::declare(),
    DCBaseTerminal::declare(),
    DCBreaker::declare(),
    DCBusbar::declare(),
    DCChopper::declare(),
    DCConductingEquipment::declare(),
    DCConverterUnit::declare(),
    DCDisconnector::declare(),
    DCEquipmentContainer::declare(),
    DCGround::declare(),
    DCLine::declare(),
    DCLineSegment::declare(),
    DCNode::declare(),
    DCSeriesDevice::declare(),
    DCShunt::declare(),
    DCSwitch::declare(),
    DCTerminal::declare(),
    DCTopologicalIsland::declare(),
    DCTopologicalNode::declare(),
    Date::declare(),
    DateTime::declare(),
    DayType::declare(),
    Decimal::declare(),
    Diagram::declare(),
    DiagramLayoutVersion::declare(),
    DiagramObject::declare(),
    DiagramObjectGluePoint::declare(),
    DiagramObjectPoint::declare(),
    DiagramObjectStyle::declare(),
    DiagramStyle::declare(),
    DiscExcContIEEEDEC1A::declare(),
    DiscExcContIEEEDEC2A::declare(),
    DiscExcContIEEEDEC3A::declare(),
    Disconnector::declare(),
    DiscontinuousExcitationControlDynamics::declare(),
    DiscontinuousExcitationControlUserDefined::declare(),
    Discrete::declare(),
    DiscreteValue::declare(),
    DynamicsFunctionBlock::declare(),
    DynamicsVersion::declare(),
    EarthFaultCompensator::declare(),
    EnergyArea::declare(),
    EnergyConsumer::declare(),
    EnergySchedulingType::declare(),
    EnergySource::declare(),
    Equipment::declare(),
    EquipmentBoundaryVersion::declare(),
    EquipmentContainer::declare(),
    EquipmentVersion::declare(),
    EquivalentBranch::declare(),
    EquivalentEquipment::declare(),
    EquivalentInjection::declare(),
    EquivalentNetwork::declare(),
    EquivalentShunt::declare(),
    ExcAC1A::declare(),
    ExcAC2A::declare(),
    ExcAC3A::declare(),
    ExcAC4A::declare(),
    ExcAC5A::declare(),
    ExcAC6A::declare(),
    ExcAC8B::declare(),
    ExcANS::declare(),
    ExcAVR1::declare(),
    ExcAVR2::declare(),
    ExcAVR3::declare(),
    ExcAVR4::declare(),
    ExcAVR5::declare(),
    ExcAVR7::declare(),
    ExcBBC::declare(),
    ExcCZ::declare(),
    ExcDC1A::declare(),
    ExcDC2A::declare(),
    ExcDC3A1::declare(),
    ExcDC3A::declare(),
    ExcELIN1::declare(),
    ExcELIN2::declare(),
    ExcHU::declare(),
    ExcIEEEAC1A::declare(),
    ExcIEEEAC2A::declare(),
    ExcIEEEAC3A::declare(),
    ExcIEEEAC4A::declare(),
    ExcIEEEAC5A::declare(),
    ExcIEEEAC6A::declare(),
    ExcIEEEAC7B::declare(),
    ExcIEEEAC8B::declare(),
    ExcIEEEDC1A::declare(),
    ExcIEEEDC2A::declare(),
    ExcIEEEDC3A::declare(),
    ExcIEEEDC4B::declare(),
    ExcIEEEST1A::declare(),
    ExcIEEEST2A::declare(),
    ExcIEEEST3A::declare(),
    ExcIEEEST4B::declare(),
    ExcIEEEST5B::declare(),
    ExcIEEEST6B::declare(),
    ExcIEEEST7B::declare(),
    ExcOEX3T::declare(),
    ExcPIC::declare(),
    ExcREXS::declare(),
    ExcSCRX::declare(),
    ExcSEXS::declare(),
    ExcSK::declare(),
    ExcST1A::declare(),
    ExcST2A::declare(),
    ExcST3A::declare(),
    ExcST4B::declare(),
    ExcST6B::declare(),
    ExcST7B::declare(),
    ExcitationSystemDynamics::declare(),
    ExcitationSystemUserDefined::declare(),
    ExternalNetworkInjection::declare(),
    Float::declare(),
    FossilFuel::declare(),
    Frequency::declare(),
    GenICompensationForGenJ::declare(),
    GeneratingUnit::declare(),
    GeographicalLocationVersion::declare(),
    GeographicalRegion::declare(),
    GovCT1::declare(),
    GovCT2::declare(),
    GovGAST1::declare(),
    GovGAST2::declare(),
    GovGAST3::declare(),
    GovGAST4::declare(),
    GovGAST::declare(),
    GovGASTWD::declare(),
    GovHydro1::declare(),
    GovHydro2::declare(),
    GovHydro3::declare(),
    GovHydro4::declare(),
    GovHydroDD::declare(),
    GovHydroFrancis::declare(),
    GovHydroIEEE0::declare(),
    GovHydroIEEE2::declare(),
    GovHydroPID2::declare(),
    GovHydroPID::declare(),
    GovHydroPelton::declare(),
    GovHydroR::declare(),
    GovHydroWEH::declare(),
    GovHydroWPID::declare(),
    GovSteam0::declare(),
    GovSteam1::declare(),
    GovSteam2::declare(),
    GovSteamCC::declare(),
    GovSteamEU::declare(),
    GovSteamFV2::declare(),
    GovSteamFV3::declare(),
    GovSteamFV4::declare(),
    GovSteamIEEE1::declare(),
    GovSteamSGO::declare(),
    GrossToNetActivePowerCurve::declare(),
    Ground::declare(),
    GroundDisconnector::declare(),
    GroundingImpedance::declare(),
    HydroGeneratingUnit::declare(),
    HydroPowerPlant::declare(),
    HydroPump::declare(),
    IdentifiedObject::declare(),
    Inductance::declare(),
    InductancePerLength::declare(),
    Integer::declare(),
    Junction::declare(),
    Length::declare(),
    Limit::declare(),
    LimitSet::declare(),
    Line::declare(),
    LinearShuntCompensator::declare(),
    LoadAggregate::declare(),
    LoadArea::declare(),
    LoadBreakSwitch::declare(),
    LoadComposite::declare(),
    LoadDynamics::declare(),
    LoadGenericNonLinear::declare(),
    LoadGroup::declare(),
    LoadMotor::declare(),
    LoadResponseCharacteristic::declare(),
    LoadStatic::declare(),
    LoadUserDefined::declare(),
    Location::declare(),
    Measurement::declare(),
    MeasurementValue::declare(),
    MeasurementValueQuality::declare(),
    MeasurementValueSource::declare(),
    MechLoad1::declare(),
    MechanicalLoadDynamics::declare(),
    MechanicalLoadUserDefined::declare(),
    Money::declare(),
    MonthDay::declare(),
    MutualCoupling::declare(),
    NonConformLoad::declare(),
    NonConformLoadGroup::declare(),
    NonConformLoadSchedule::declare(),
    NonlinearShuntCompensator::declare(),
    NonlinearShuntCompensatorPoint::declare(),
    NuclearGeneratingUnit::declare(),
    OperationalLimit::declare(),
    OperationalLimitSet::declare(),
    OperationalLimitType::declare(),
    OverexcLim2::declare(),
    OverexcLimIEEE::declare(),
    OverexcLimX1::declare(),
    OverexcLimX2::declare(),
    OverexcitationLimiterDynamics::declare(),
    OverexcitationLimiterUserDefined::declare(),
    PFVArControllerType1Dynamics::declare(),
    PFVArControllerType1UserDefined::declare(),
    PFVArControllerType2Dynamics::declare(),
    PFVArControllerType2UserDefined::declare(),
    PFVArType1IEEEPFController::declare(),
    PFVArType1IEEEVArController::declare(),
    PFVArType2Common1::declare(),
    PFVArType2IEEEPFController::declare(),
    PFVArType2IEEEVArController::declare(),
    PU::declare(),
    PerCent::declare(),
    PerLengthDCLineParameter::declare(),
    PetersenCoil::declare(),
    PhaseTapChanger::declare(),
    PhaseTapChangerAsymmetrical::declare(),
    PhaseTapChangerLinear::declare(),
    PhaseTapChangerNonLinear::declare(),
    PhaseTapChangerSymmetrical::declare(),
    PhaseTapChangerTable::declare(),
    PhaseTapChangerTablePoint::declare(),
    PhaseTapChangerTabular::declare(),
    PositionPoint::declare(),
    PowerSystemResource::declare(),
    PowerSystemStabilizerDynamics::declare(),
    PowerSystemStabilizerUserDefined::declare(),
    PowerTransformer::declare(),
    PowerTransformerEnd::declare(),
    ProprietaryParameterDynamics::declare(),
    ProtectedSwitch::declare(),
    Pss1::declare(),
    Pss1A::declare(),
    Pss2B::declare(),
    Pss2ST::declare(),
    Pss5::declare(),
    PssELIN2::declare(),
    PssIEEE1A::declare(),
    PssIEEE2B::declare(),
    PssIEEE3B::declare(),
    PssIEEE4B::declare(),
    PssPTIST1::declare(),
    PssPTIST3::declare(),
    PssSB4::declare(),
    PssSH::declare(),
    PssSK::declare(),
    PssWECC::declare(),
    Quality61850::declare(),
    RaiseLowerCommand::declare(),
    RatioTapChanger::declare(),
    RatioTapChangerTable::declare(),
    RatioTapChangerTablePoint::declare(),
    Reactance::declare(),
    ReactiveCapabilityCurve::declare(),
    ReactivePower::declare(),
    RegularIntervalSchedule::declare(),
    RegularTimePoint::declare(),
    RegulatingCondEq::declare(),
    RegulatingControl::declare(),
    RegulationSchedule::declare(),
    RemoteInputSignal::declare(),
    ReportingGroup::declare(),
    Resistance::declare(),
    ResistancePerLength::declare(),
    RotatingMachine::declare(),
    RotatingMachineDynamics::declare(),
    RotationSpeed::declare(),
    Season::declare(),
    SeasonDayTypeSchedule::declare(),
    Seconds::declare(),
    SeriesCompensator::declare(),
    SetPoint::declare(),
    ShuntCompensator::declare(),
    Simple_Float::declare(),
    SolarGeneratingUnit::declare(),
    StateVariablesVersion::declare(),
    StaticVarCompensator::declare(),
    StationSupply::declare(),
    SteadyStateHypothesisVersion::declare(),
    StringMeasurement::declare(),
    StringMeasurementValue::declare(),
    SubGeographicalRegion::declare(),
    SubLoadArea::declare(),
    Substation::declare(),
    Susceptance::declare(),
    SvInjection::declare(),
    SvPowerFlow::declare(),
    SvShuntCompensatorSections::declare(),
    SvStatus::declare(),
    SvTapStep::declare(),
    SvVoltage::declare(),
    Switch::declare(),
    SwitchSchedule::declare(),
    SynchronousMachine::declare(),
    SynchronousMachineDetailed::declare(),
    SynchronousMachineDynamics::declare(),
    SynchronousMachineEquivalentCircuit::declare(),
    SynchronousMachineSimplified::declare(),
    SynchronousMachineTimeConstantReactance::declare(),
    SynchronousMachineUserDefined::declare(),
    TapChanger::declare(),
    TapChangerControl::declare(),
    TapChangerTablePoint::declare(),
    TapSchedule::declare(),
    Temperature::declare(),
    Terminal::declare(),
    TextDiagramObject::declare(),
    ThermalGeneratingUnit::declare(),
    TieFlow::declare(),
    TopologicalIsland::declare(),
    TopologicalNode::declare(),
    TopologyBoundaryVersion::declare(),
    TopologyVersion::declare(),
    TransformerEnd::declare(),
    TurbLCFB1::declare(),
    TurbineGovernorDynamics::declare(),
    TurbineGovernorUserDefined::declare(),
    TurbineLoadControllerDynamics::declare(),
    TurbineLoadControllerUserDefined::declare(),
    UnderexcLim2Simplified::declare(),
    UnderexcLimIEEE1::declare(),
    UnderexcLimIEEE2::declare(),
    UnderexcLimX1::declare(),
    UnderexcLimX2::declare(),
    UnderexcitationLimiterDynamics::declare(),
    UnderexcitationLimiterUserDefined::declare(),
    VAdjIEEE::declare(),
    VCompIEEEType1::declare(),
    VCompIEEEType2::declare(),
    ValueAliasSet::declare(),
    ValueToAlias::declare(),
    VisibilityLayer::declare(),
    Voltage::declare(),
    VoltageAdjusterDynamics::declare(),
    VoltageAdjusterUserDefined::declare(),
    VoltageCompensatorDynamics::declare(),
    VoltageCompensatorUserDefined::declare(),
    VoltageLevel::declare(),
    VoltageLimit::declare(),
    VoltagePerReactivePower::declare(),
    VolumeFlowRate::declare(),
    VsCapabilityCurve::declare(),
    VsConverter::declare(),
    WindAeroConstIEC::declare(),
    WindAeroLinearIEC::declare(),
    WindContCurrLimIEC::declare(),
    WindContPType3IEC::declare(),
    WindContPType4aIEC::declare(),
    WindContPType4bIEC::declare(),
    WindContPitchAngleIEC::declare(),
    WindContQIEC::declare(),
    WindContRotorRIEC::declare(),
    WindDynamicsLookupTable::declare(),
    WindGenTurbineType1IEC::declare(),
    WindGenTurbineType2IEC::declare(),
    WindGenTurbineType3IEC::declare(),
    WindGenTurbineType3aIEC::declare(),
    WindGenTurbineType3bIEC::declare(),
    WindGenType4IEC::declare(),
    WindGeneratingUnit::declare(),
    WindMechIEC::declare(),
    WindPitchContEmulIEC::declare(),
    WindPlantDynamics::declare(),
    WindPlantFreqPcontrolIEC::declare(),
    WindPlantIEC::declare(),
    WindPlantReactiveControlIEC::declare(),
    WindPlantUserDefined::declare(),
    WindProtectionIEC::declare(),
    WindTurbineType1or2Dynamics::declare(),
    WindTurbineType1or2IEC::declare(),
    WindTurbineType3or4Dynamics::declare(),
    WindTurbineType3or4IEC::declare(),
    WindTurbineType4aIEC::declare(),
    WindTurbineType4bIEC::declare(),
    WindType1or2UserDefined::declare(),
    WindType3or4UserDefined::declare(),
    UnknownType::declare() };
#endif // CIMCLASSLIST_H