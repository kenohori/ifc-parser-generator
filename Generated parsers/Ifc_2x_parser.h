#ifndef Ifc_parser_h
#define Ifc_parser_h

#include <boost/algorithm/string.hpp>

#include "Step_parser.hpp"

// Defined types (89)
typedef double Ifc_absorbed_dose_measure;
typedef double Ifc_acceleration_measure;
typedef double Ifc_amount_of_substance_measure;
typedef double Ifc_angular_velocity_measure;
typedef double Ifc_area_measure;
typedef bool Ifc_boolean;
typedef std::vector<int> Ifc_compound_plane_angle_measure;
typedef double Ifc_context_dependent_measure;
typedef unsigned int Ifc_count_measure;
typedef int Ifc_day_in_month_number;
typedef int Ifc_daylight_saving_hour;
typedef std::string Ifc_descriptive_measure;
typedef int Ifc_dimension_count;
typedef double Ifc_dose_equivalent_measure;
typedef double Ifc_dynamic_viscosity_measure;
typedef double Ifc_electric_capacitance_measure;
typedef double Ifc_electric_charge_measure;
typedef double Ifc_electric_conductance_measure;
typedef double Ifc_electric_current_measure;
typedef double Ifc_electric_resistance_measure;
typedef double Ifc_electric_voltage_measure;
typedef double Ifc_energy_measure;
typedef double Ifc_force_measure;
typedef double Ifc_frequency_measure;
typedef std::string Ifc_globally_unique_id;
typedef double Ifc_heat_flux_density_measure;
typedef int Ifc_hour_in_day;
typedef std::string Ifc_identifier;
typedef double Ifc_illuminance_measure;
typedef double Ifc_inductance_measure;
typedef int Ifc_integer;
typedef int Ifc_integer_count_rate_measure;
typedef double Ifc_isothermal_moisture_capacity_measure;
typedef double Ifc_kinematic_viscosity_measure;
typedef std::string Ifc_label;
typedef double Ifc_length_measure;
typedef double Ifc_linear_force_measure;
typedef double Ifc_linear_moment_measure;
typedef double Ifc_linear_stiffness_measure;
typedef double Ifc_linear_velocity_measure;
typedef int Ifc_logical;
typedef double Ifc_luminous_flux_measure;
typedef double Ifc_luminous_intensity_measure;
typedef double Ifc_magnetic_flux_density_measure;
typedef double Ifc_magnetic_flux_measure;
typedef double Ifc_mass_density_measure;
typedef double Ifc_mass_flow_rate_measure;
typedef double Ifc_mass_measure;
typedef int Ifc_minute_in_hour;
typedef double Ifc_modulus_of_elasticity_measure;
typedef double Ifc_modulus_of_subgrade_reaction_measure;
typedef double Ifc_moisture_diffusivity_measure;
typedef double Ifc_molecular_weight_measure;
typedef double Ifc_moment_of_inertia_measure;
typedef double Ifc_monetary_measure;
typedef int Ifc_month_in_year_number;
typedef unsigned int Ifc_numeric_measure;
typedef double Ifc_parameter_value;
typedef double Ifc_planar_force_measure;
typedef double Ifc_plane_angle_measure;
typedef Ifc_length_measure Ifc_positive_length_measure;
typedef Ifc_plane_angle_measure Ifc_positive_plane_angle_measure;
typedef double Ifc_power_measure;
typedef double Ifc_pressure_measure;
typedef double Ifc_radio_activity_measure;
typedef double Ifc_ratio_measure;
typedef double Ifc_real;
typedef double Ifc_rotational_frequency_measure;
typedef double Ifc_rotational_stiffness_measure;
typedef double Ifc_second_in_minute;
typedef double Ifc_shear_modulus_measure;
typedef double Ifc_solid_angle_measure;
typedef double Ifc_specific_heat_capacity_measure;
typedef std::string Ifc_text;
typedef double Ifc_thermal_admittance_measure;
typedef double Ifc_thermal_conductivity_measure;
typedef double Ifc_thermal_resistance_measure;
typedef double Ifc_thermal_transmittance_measure;
typedef double Ifc_thermodynamic_temperature_measure;
typedef double Ifc_time_measure;
typedef int Ifc_time_stamp;
typedef double Ifc_torque_measure;
typedef double Ifc_vapor_permeability_measure;
typedef double Ifc_volume_measure;
typedef double Ifc_volumetric_flow_rate_measure;
typedef int Ifc_year_number;
typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
typedef std::vector<Ifc_normalised_ratio_measure> Ifc_color_r_g_b;

// Enums (116)
typedef std::string Ifc_actuator_fail_position_enum;
typedef std::string Ifc_actuator_type_enum;
typedef std::string Ifc_address_type_enum;
typedef std::string Ifc_aggregator_enum;
typedef std::string Ifc_ahead_or_behind;
typedef std::string Ifc_air_flow_type_enum;
typedef std::string Ifc_air_terminal_box_enum;
typedef std::string Ifc_air_terminal_core_type_enum;
typedef std::string Ifc_air_terminal_face_type_enum;
typedef std::string Ifc_air_terminal_finish_type_enum;
typedef std::string Ifc_air_terminal_mounting_type_enum;
typedef std::string Ifc_approval_status_enum;
typedef std::string Ifc_benchmark_enum;
typedef std::string Ifc_boiler_type_enum;
typedef std::string Ifc_boolean_operator;
typedef std::string Ifc_built_in_type_enum;
typedef std::string Ifc_change_action_enum;
typedef std::string Ifc_change_order_status_enum;
typedef std::string Ifc_chiller_type_enum;
typedef std::string Ifc_coil_flow_arrangement_enum;
typedef std::string Ifc_coil_type_enum;
typedef std::string Ifc_compressor_type_enum;
typedef std::string Ifc_connection_type_enum;
typedef std::string Ifc_constraint_enum;
typedef std::string Ifc_constraint_intent_enum;
typedef std::string Ifc_cooling_tower_type_enum;
typedef std::string Ifc_cost_modifier_basis_enum;
typedef std::string Ifc_cost_operator_enum;
typedef std::string Ifc_cost_use_enum;
typedef std::string Ifc_covering_type_enum;
typedef std::string Ifc_currency_enum;
typedef std::string Ifc_damper_sizing_method_enum;
typedef std::string Ifc_damper_type_enum;
typedef std::string Ifc_derived_unit_enum;
typedef std::string Ifc_direction_sense_enum;
typedef std::string Ifc_discrete_element_type_enum;
typedef std::string Ifc_distribution_flow_element_type_enum;
typedef std::string Ifc_document_confidentiality_enum;
typedef std::string Ifc_document_status_enum;
typedef std::string Ifc_door_panel_operation_enum;
typedef std::string Ifc_door_panel_position_enum;
typedef std::string Ifc_door_style_construction_enum;
typedef std::string Ifc_door_style_operation_enum;
typedef std::string Ifc_electric_current_enum;
typedef std::string Ifc_electrical_appliance_type_enum;
typedef std::string Ifc_element_composition_enum;
typedef std::string Ifc_energy_source_enum;
typedef std::string Ifc_fan_arrangement_enum;
typedef std::string Ifc_fan_discharge_type_enum;
typedef std::string Ifc_fan_drive_arrangement_enum;
typedef std::string Ifc_fan_mounting_type_enum;
typedef std::string Ifc_fan_pressure_class_enum;
typedef std::string Ifc_fan_rotation_enum;
typedef std::string Ifc_fan_wheel_type_enum;
typedef std::string Ifc_flow_direction_enum;
typedef std::string Ifc_flow_fitting_type_enum;
typedef std::string Ifc_flow_segment_type_enum;
typedef std::string Ifc_heat_exchanger_arrangement_enum;
typedef std::string Ifc_heat_exchanger_type_enum;
typedef std::string Ifc_hydronic_heater_type_enum;
typedef std::string Ifc_internal_or_external_enum;
typedef std::string Ifc_inventory_type_enum;
typedef std::string Ifc_joint_enum;
typedef std::string Ifc_layer_set_direction_enum;
typedef std::string Ifc_loss_or_gain_enum;
typedef std::string Ifc_maintenance_type_enum;
typedef std::string Ifc_metric_data_enum;
typedef std::string Ifc_moter_connection_type_enum;
typedef std::string Ifc_motor_housing_enum;
typedef std::string Ifc_motor_winding_enum;
typedef std::string Ifc_multiplier_or_divider;
typedef std::string Ifc_object_type_enum;
typedef std::string Ifc_objective_enum;
typedef std::string Ifc_occupant_type_enum;
typedef std::string Ifc_outlet_type_enum;
typedef std::string Ifc_permeable_covering_operation_enum;
typedef std::string Ifc_physical_or_virtual_enum;
typedef std::string Ifc_port_connection_type_enum;
typedef std::string Ifc_primary_fitting_enum;
typedef std::string Ifc_priority_enum;
typedef std::string Ifc_profile_type_enum;
typedef std::string Ifc_pump_base_type_enum;
typedef std::string Ifc_pump_type_enum;
typedef std::string Ifc_purchase_order_status_enum;
typedef std::string Ifc_quantity_round_off_basis_enum;
typedef std::string Ifc_railing_type_enum;
typedef std::string Ifc_ramp_type_enum;
typedef std::string Ifc_requirement_or_criteria_enum;
typedef std::string Ifc_resource_consumption_enum;
typedef std::string Ifc_risk_type_enum;
typedef std::string Ifc_role_enum;
typedef std::string Ifc_roof_type_enum;
typedef std::string Ifc_s_i_prefix;
typedef std::string Ifc_s_i_unit_name;
typedef std::string Ifc_sanitary_terminal_type_enum;
typedef std::string Ifc_sensor_type_enum;
typedef std::string Ifc_sequence_enum;
typedef std::string Ifc_slab_type_enum;
typedef std::string Ifc_stair_type_enum;
typedef std::string Ifc_state_enum;
typedef std::string Ifc_surface_side_enum;
typedef std::string Ifc_task_milestone_enum;
typedef std::string Ifc_task_status_enum;
typedef std::string Ifc_thermal_load_type_enum;
typedef std::string Ifc_transition_code;
typedef std::string Ifc_transport_element_type_enum;
typedef std::string Ifc_trimming_preference;
typedef std::string Ifc_unit_enum;
typedef std::string Ifc_valve_enum;
typedef std::string Ifc_window_panel_operation_enum;
typedef std::string Ifc_window_panel_position_enum;
typedef std::string Ifc_window_style_construction_enum;
typedef std::string Ifc_window_style_operation_enum;
typedef std::string Ifc_work_control_type_enum;
typedef std::string Ifc_work_order_risk_type_enum;
typedef std::string Ifc_work_order_status_enum;