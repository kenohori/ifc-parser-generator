#ifndef Ifc_2x3_schema_hpp
#define Ifc_2x3_schema_hpp

#include <boost/algorithm/string.hpp>

#include "Ifc.hpp"
#include "Step_parser.hpp"

namespace Ifc_2x3_schema {

	// Defined types (117)
	typedef double Ifc_absorbed_dose_measure;
	typedef double Ifc_acceleration_measure;
	typedef double Ifc_amount_of_substance_measure;
	typedef double Ifc_angular_velocity_measure;
	typedef double Ifc_area_measure;
	typedef bool Ifc_boolean;
	typedef std::vector<double> Ifc_complex_number;
	typedef std::vector<int> Ifc_compound_plane_angle_measure;
	typedef double Ifc_context_dependent_measure;
	typedef unsigned int Ifc_count_measure;
	typedef double Ifc_curvature_measure;
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
	typedef std::string Ifc_font_style;
	typedef std::string Ifc_font_variant;
	typedef std::string Ifc_font_weight;
	typedef double Ifc_force_measure;
	typedef double Ifc_frequency_measure;
	typedef std::string Ifc_globally_unique_id;
	typedef double Ifc_heat_flux_density_measure;
	typedef double Ifc_heating_value_measure;
	typedef int Ifc_hour_in_day;
	typedef std::string Ifc_identifier;
	typedef double Ifc_illuminance_measure;
	typedef double Ifc_inductance_measure;
	typedef int Ifc_integer;
	typedef int Ifc_integer_count_rate_measure;
	typedef double Ifc_ion_concentration_measure;
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
	typedef double Ifc_luminous_intensity_distribution_measure;
	typedef double Ifc_luminous_intensity_measure;
	typedef double Ifc_magnetic_flux_density_measure;
	typedef double Ifc_magnetic_flux_measure;
	typedef double Ifc_mass_density_measure;
	typedef double Ifc_mass_flow_rate_measure;
	typedef double Ifc_mass_measure;
	typedef double Ifc_mass_per_length_measure;
	typedef int Ifc_minute_in_hour;
	typedef double Ifc_modulus_of_elasticity_measure;
	typedef double Ifc_modulus_of_linear_subgrade_reaction_measure;
	typedef double Ifc_modulus_of_rotational_subgrade_reaction_measure;
	typedef double Ifc_modulus_of_subgrade_reaction_measure;
	typedef double Ifc_moisture_diffusivity_measure;
	typedef double Ifc_molecular_weight_measure;
	typedef double Ifc_moment_of_inertia_measure;
	typedef double Ifc_monetary_measure;
	typedef int Ifc_month_in_year_number;
	typedef unsigned int Ifc_numeric_measure;
	typedef double Ifc_p_h_measure;
	typedef double Ifc_parameter_value;
	typedef double Ifc_planar_force_measure;
	typedef double Ifc_plane_angle_measure;
	typedef Ifc_length_measure Ifc_positive_length_measure;
	typedef Ifc_plane_angle_measure Ifc_positive_plane_angle_measure;
	typedef double Ifc_power_measure;
	typedef std::string Ifc_presentable_text;
	typedef double Ifc_pressure_measure;
	typedef double Ifc_radio_activity_measure;
	typedef double Ifc_ratio_measure;
	typedef double Ifc_real;
	typedef double Ifc_rotational_frequency_measure;
	typedef double Ifc_rotational_mass_measure;
	typedef double Ifc_rotational_stiffness_measure;
	typedef double Ifc_second_in_minute;
	typedef double Ifc_section_modulus_measure;
	typedef double Ifc_sectional_area_integral_measure;
	typedef double Ifc_shear_modulus_measure;
	typedef double Ifc_solid_angle_measure;
	typedef double Ifc_sound_power_measure;
	typedef double Ifc_sound_pressure_measure;
	typedef double Ifc_specific_heat_capacity_measure;
	typedef double Ifc_specular_exponent;
	typedef double Ifc_specular_roughness;
	typedef double Ifc_temperature_gradient_measure;
	typedef std::string Ifc_text;
	typedef std::string Ifc_text_alignment;
	typedef std::string Ifc_text_decoration;
	typedef std::string Ifc_text_font_name;
	typedef std::string Ifc_text_transformation;
	typedef double Ifc_thermal_admittance_measure;
	typedef double Ifc_thermal_conductivity_measure;
	typedef double Ifc_thermal_expansion_coefficient_measure;
	typedef double Ifc_thermal_resistance_measure;
	typedef double Ifc_thermal_transmittance_measure;
	typedef double Ifc_thermodynamic_temperature_measure;
	typedef double Ifc_time_measure;
	typedef int Ifc_time_stamp;
	typedef double Ifc_torque_measure;
	typedef double Ifc_vapor_permeability_measure;
	typedef double Ifc_volume_measure;
	typedef double Ifc_volumetric_flow_rate_measure;
	typedef double Ifc_warping_constant_measure;
	typedef double Ifc_warping_moment_measure;
	typedef int Ifc_year_number;
	typedef Ifc_label Ifc_box_alignment;
	typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
	typedef Ifc_ratio_measure Ifc_positive_ratio_measure;

	// Enums (164)
	typedef std::string Ifc_action_source_type_enum;
	typedef std::string Ifc_action_type_enum;
	typedef std::string Ifc_actuator_type_enum;
	typedef std::string Ifc_address_type_enum;
	typedef std::string Ifc_ahead_or_behind;
	typedef std::string Ifc_air_terminal_box_type_enum;
	typedef std::string Ifc_air_terminal_type_enum;
	typedef std::string Ifc_air_to_air_heat_recovery_type_enum;
	typedef std::string Ifc_alarm_type_enum;
	typedef std::string Ifc_analysis_model_type_enum;
	typedef std::string Ifc_analysis_theory_type_enum;
	typedef std::string Ifc_arithmetic_operator_enum;
	typedef std::string Ifc_assembly_place_enum;
	typedef std::string Ifc_b_spline_curve_form;
	typedef std::string Ifc_beam_type_enum;
	typedef std::string Ifc_benchmark_enum;
	typedef std::string Ifc_boiler_type_enum;
	typedef std::string Ifc_boolean_operator;
	typedef std::string Ifc_building_element_proxy_type_enum;
	typedef std::string Ifc_cable_carrier_fitting_type_enum;
	typedef std::string Ifc_cable_carrier_segment_type_enum;
	typedef std::string Ifc_cable_segment_type_enum;
	typedef std::string Ifc_change_action_enum;
	typedef std::string Ifc_chiller_type_enum;
	typedef std::string Ifc_coil_type_enum;
	typedef std::string Ifc_column_type_enum;
	typedef std::string Ifc_compressor_type_enum;
	typedef std::string Ifc_condenser_type_enum;
	typedef std::string Ifc_connection_type_enum;
	typedef std::string Ifc_constraint_enum;
	typedef std::string Ifc_controller_type_enum;
	typedef std::string Ifc_cooled_beam_type_enum;
	typedef std::string Ifc_cooling_tower_type_enum;
	typedef std::string Ifc_cost_schedule_type_enum;
	typedef std::string Ifc_covering_type_enum;
	typedef std::string Ifc_currency_enum;
	typedef std::string Ifc_curtain_wall_type_enum;
	typedef std::string Ifc_damper_type_enum;
	typedef std::string Ifc_data_origin_enum;
	typedef std::string Ifc_derived_unit_enum;
	typedef std::string Ifc_dimension_extent_usage;
	typedef std::string Ifc_direction_sense_enum;
	typedef std::string Ifc_distribution_chamber_element_type_enum;
	typedef std::string Ifc_document_confidentiality_enum;
	typedef std::string Ifc_document_status_enum;
	typedef std::string Ifc_door_panel_operation_enum;
	typedef std::string Ifc_door_panel_position_enum;
	typedef std::string Ifc_door_style_construction_enum;
	typedef std::string Ifc_door_style_operation_enum;
	typedef std::string Ifc_duct_fitting_type_enum;
	typedef std::string Ifc_duct_segment_type_enum;
	typedef std::string Ifc_duct_silencer_type_enum;
	typedef std::string Ifc_electric_appliance_type_enum;
	typedef std::string Ifc_electric_current_enum;
	typedef std::string Ifc_electric_distribution_point_function_enum;
	typedef std::string Ifc_electric_flow_storage_device_type_enum;
	typedef std::string Ifc_electric_generator_type_enum;
	typedef std::string Ifc_electric_heater_type_enum;
	typedef std::string Ifc_electric_motor_type_enum;
	typedef std::string Ifc_electric_time_control_type_enum;
	typedef std::string Ifc_element_assembly_type_enum;
	typedef std::string Ifc_element_composition_enum;
	typedef std::string Ifc_energy_sequence_enum;
	typedef std::string Ifc_environmental_impact_category_enum;
	typedef std::string Ifc_evaporative_cooler_type_enum;
	typedef std::string Ifc_evaporator_type_enum;
	typedef std::string Ifc_fan_type_enum;
	typedef std::string Ifc_filter_type_enum;
	typedef std::string Ifc_fire_suppression_terminal_type_enum;
	typedef std::string Ifc_flow_direction_enum;
	typedef std::string Ifc_flow_instrument_type_enum;
	typedef std::string Ifc_flow_meter_type_enum;
	typedef std::string Ifc_footing_type_enum;
	typedef std::string Ifc_gas_terminal_type_enum;
	typedef std::string Ifc_geometric_projection_enum;
	typedef std::string Ifc_global_or_local_enum;
	typedef std::string Ifc_heat_exchanger_type_enum;
	typedef std::string Ifc_humidifier_type_enum;
	typedef std::string Ifc_internal_or_external_enum;
	typedef std::string Ifc_inventory_type_enum;
	typedef std::string Ifc_junction_box_type_enum;
	typedef std::string Ifc_lamp_type_enum;
	typedef std::string Ifc_layer_set_direction_enum;
	typedef std::string Ifc_light_distribution_curve_enum;
	typedef std::string Ifc_light_emission_source_enum;
	typedef std::string Ifc_light_fixture_type_enum;
	typedef std::string Ifc_load_group_type_enum;
	typedef std::string Ifc_logical_operator_enum;
	typedef std::string Ifc_member_type_enum;
	typedef std::string Ifc_motor_connection_type_enum;
	typedef std::string Ifc_null_style;
	typedef std::string Ifc_object_type_enum;
	typedef std::string Ifc_objective_enum;
	typedef std::string Ifc_occupant_type_enum;
	typedef std::string Ifc_outlet_type_enum;
	typedef std::string Ifc_permeable_covering_operation_enum;
	typedef std::string Ifc_physical_or_virtual_enum;
	typedef std::string Ifc_pile_construction_enum;
	typedef std::string Ifc_pile_type_enum;
	typedef std::string Ifc_pipe_fitting_type_enum;
	typedef std::string Ifc_pipe_segment_type_enum;
	typedef std::string Ifc_plate_type_enum;
	typedef std::string Ifc_procedure_type_enum;
	typedef std::string Ifc_profile_type_enum;
	typedef std::string Ifc_project_order_record_type_enum;
	typedef std::string Ifc_project_order_type_enum;
	typedef std::string Ifc_projected_or_true_length_enum;
	typedef std::string Ifc_property_source_enum;
	typedef std::string Ifc_protective_device_type_enum;
	typedef std::string Ifc_pump_type_enum;
	typedef std::string Ifc_railing_type_enum;
	typedef std::string Ifc_ramp_flight_type_enum;
	typedef std::string Ifc_ramp_type_enum;
	typedef std::string Ifc_reflectance_method_enum;
	typedef std::string Ifc_reinforcing_bar_role_enum;
	typedef std::string Ifc_reinforcing_bar_surface_enum;
	typedef std::string Ifc_resource_consumption_enum;
	typedef std::string Ifc_rib_plate_direction_enum;
	typedef std::string Ifc_role_enum;
	typedef std::string Ifc_roof_type_enum;
	typedef std::string Ifc_s_i_prefix;
	typedef std::string Ifc_s_i_unit_name;
	typedef std::string Ifc_sanitary_terminal_type_enum;
	typedef std::string Ifc_section_type_enum;
	typedef std::string Ifc_sensor_type_enum;
	typedef std::string Ifc_sequence_enum;
	typedef std::string Ifc_service_life_factor_type_enum;
	typedef std::string Ifc_service_life_type_enum;
	typedef std::string Ifc_slab_type_enum;
	typedef std::string Ifc_sound_scale_enum;
	typedef std::string Ifc_space_heater_type_enum;
	typedef std::string Ifc_space_type_enum;
	typedef std::string Ifc_stack_terminal_type_enum;
	typedef std::string Ifc_stair_flight_type_enum;
	typedef std::string Ifc_stair_type_enum;
	typedef std::string Ifc_state_enum;
	typedef std::string Ifc_structural_curve_type_enum;
	typedef std::string Ifc_structural_surface_type_enum;
	typedef std::string Ifc_surface_side;
	typedef std::string Ifc_surface_texture_enum;
	typedef std::string Ifc_switching_device_type_enum;
	typedef std::string Ifc_tank_type_enum;
	typedef std::string Ifc_tendon_type_enum;
	typedef std::string Ifc_text_path;
	typedef std::string Ifc_thermal_load_source_enum;
	typedef std::string Ifc_thermal_load_type_enum;
	typedef std::string Ifc_time_series_data_type_enum;
	typedef std::string Ifc_time_series_schedule_type_enum;
	typedef std::string Ifc_transformer_type_enum;
	typedef std::string Ifc_transition_code;
	typedef std::string Ifc_transport_element_type_enum;
	typedef std::string Ifc_trimming_preference;
	typedef std::string Ifc_tube_bundle_type_enum;
	typedef std::string Ifc_unit_enum;
	typedef std::string Ifc_unitary_equipment_type_enum;
	typedef std::string Ifc_valve_type_enum;
	typedef std::string Ifc_vibration_isolator_type_enum;
	typedef std::string Ifc_wall_type_enum;
	typedef std::string Ifc_waste_terminal_type_enum;
	typedef std::string Ifc_window_panel_operation_enum;
	typedef std::string Ifc_window_panel_position_enum;
	typedef std::string Ifc_window_style_construction_enum;
	typedef std::string Ifc_window_style_operation_enum;
	typedef std::string Ifc_work_control_type_enum;

	// Forward declarations (653)
	struct Ifc_2_d_composite_curve;
	struct Ifc_action_request;
	struct Ifc_actor;
	struct Ifc_actor_role;
	struct Ifc_actuator_type;
	struct Ifc_address;
	struct Ifc_air_terminal_box_type;
	struct Ifc_air_terminal_type;
	struct Ifc_air_to_air_heat_recovery_type;
	struct Ifc_alarm_type;
	struct Ifc_angular_dimension;
	struct Ifc_annotation;
	struct Ifc_annotation_curve_occurrence;
	struct Ifc_annotation_fill_area;
	struct Ifc_annotation_fill_area_occurrence;
	struct Ifc_annotation_occurrence;
	struct Ifc_annotation_surface;
	struct Ifc_annotation_surface_occurrence;
	struct Ifc_annotation_symbol_occurrence;
	struct Ifc_annotation_text_occurrence;
	struct Ifc_application;
	struct Ifc_applied_value;
	struct Ifc_applied_value_relationship;
	struct Ifc_approval;
	struct Ifc_approval_actor_relationship;
	struct Ifc_approval_property_relationship;
	struct Ifc_approval_relationship;
	struct Ifc_arbitrary_closed_profile_def;
	struct Ifc_arbitrary_open_profile_def;
	struct Ifc_arbitrary_profile_def_with_voids;
	struct Ifc_asset;
	struct Ifc_asymmetric_i_shape_profile_def;
	struct Ifc_axis_1_placement;
	struct Ifc_axis_2_placement_2_d;
	struct Ifc_axis_2_placement_3_d;
	struct Ifc_b_spline_curve;
	struct Ifc_beam;
	struct Ifc_beam_type;
	struct Ifc_bezier_curve;
	struct Ifc_blob_texture;
	struct Ifc_block;
	struct Ifc_boiler_type;
	struct Ifc_boolean_clipping_result;
	struct Ifc_boolean_result;
	struct Ifc_boundary_condition;
	struct Ifc_boundary_edge_condition;
	struct Ifc_boundary_face_condition;
	struct Ifc_boundary_node_condition;
	struct Ifc_boundary_node_condition_warping;
	struct Ifc_bounded_curve;
	struct Ifc_bounded_surface;
	struct Ifc_bounding_box;
	struct Ifc_boxed_half_space;
	struct Ifc_building;
	struct Ifc_building_element;
	struct Ifc_building_element_component;
	struct Ifc_building_element_part;
	struct Ifc_building_element_proxy;
	struct Ifc_building_element_proxy_type;
	struct Ifc_building_element_type;
	struct Ifc_building_storey;
	struct Ifc_c_shape_profile_def;
	struct Ifc_cable_carrier_fitting_type;
	struct Ifc_cable_carrier_segment_type;
	struct Ifc_cable_segment_type;
	struct Ifc_calendar_date;
	struct Ifc_cartesian_point;
	struct Ifc_cartesian_transformation_operator;
	struct Ifc_cartesian_transformation_operator_2_d;
	struct Ifc_cartesian_transformation_operator_2_dnon_uniform;
	struct Ifc_cartesian_transformation_operator_3_d;
	struct Ifc_cartesian_transformation_operator_3_dnon_uniform;
	struct Ifc_center_line_profile_def;
	struct Ifc_chamfer_edge_feature;
	struct Ifc_chiller_type;
	struct Ifc_circle;
	struct Ifc_circle_hollow_profile_def;
	struct Ifc_circle_profile_def;
	struct Ifc_classification;
	struct Ifc_classification_item;
	struct Ifc_classification_item_relationship;
	struct Ifc_classification_notation;
	struct Ifc_classification_notation_facet;
	struct Ifc_classification_reference;
	struct Ifc_closed_shell;
	struct Ifc_coil_type;
	struct Ifc_colour_rgb;
	struct Ifc_colour_specification;
	struct Ifc_column;
	struct Ifc_column_type;
	struct Ifc_complex_property;
	struct Ifc_composite_curve;
	struct Ifc_composite_curve_segment;
	struct Ifc_composite_profile_def;
	struct Ifc_compressor_type;
	struct Ifc_condenser_type;
	struct Ifc_condition;
	struct Ifc_condition_criterion;
	struct Ifc_conic;
	struct Ifc_connected_face_set;
	struct Ifc_connection_curve_geometry;
	struct Ifc_connection_geometry;
	struct Ifc_connection_point_eccentricity;
	struct Ifc_connection_point_geometry;
	struct Ifc_connection_port_geometry;
	struct Ifc_connection_surface_geometry;
	struct Ifc_constraint;
	struct Ifc_constraint_aggregation_relationship;
	struct Ifc_constraint_classification_relationship;
	struct Ifc_constraint_relationship;
	struct Ifc_construction_equipment_resource;
	struct Ifc_construction_material_resource;
	struct Ifc_construction_product_resource;
	struct Ifc_construction_resource;
	struct Ifc_context_dependent_unit;
	struct Ifc_control;
	struct Ifc_controller_type;
	struct Ifc_conversion_based_unit;
	struct Ifc_cooled_beam_type;
	struct Ifc_cooling_tower_type;
	struct Ifc_coordinated_universal_time_offset;
	struct Ifc_cost_item;
	struct Ifc_cost_schedule;
	struct Ifc_cost_value;
	struct Ifc_covering;
	struct Ifc_covering_type;
	struct Ifc_crane_rail_a_shape_profile_def;
	struct Ifc_crane_rail_f_shape_profile_def;
	struct Ifc_crew_resource;
	struct Ifc_csg_primitive_3_d;
	struct Ifc_csg_solid;
	struct Ifc_currency_relationship;
	struct Ifc_curtain_wall;
	struct Ifc_curtain_wall_type;
	struct Ifc_curve;
	struct Ifc_curve_bounded_plane;
	struct Ifc_curve_style;
	struct Ifc_curve_style_font;
	struct Ifc_curve_style_font_and_scaling;
	struct Ifc_curve_style_font_pattern;
	struct Ifc_damper_type;
	struct Ifc_date_and_time;
	struct Ifc_defined_symbol;
	struct Ifc_derived_profile_def;
	struct Ifc_derived_unit;
	struct Ifc_derived_unit_element;
	struct Ifc_diameter_dimension;
	struct Ifc_dimension_callout_relationship;
	struct Ifc_dimension_curve;
	struct Ifc_dimension_curve_directed_callout;
	struct Ifc_dimension_curve_terminator;
	struct Ifc_dimension_pair;
	struct Ifc_dimensional_exponents;
	struct Ifc_direction;
	struct Ifc_discrete_accessory;
	struct Ifc_discrete_accessory_type;
	struct Ifc_distribution_chamber_element;
	struct Ifc_distribution_chamber_element_type;
	struct Ifc_distribution_control_element;
	struct Ifc_distribution_control_element_type;
	struct Ifc_distribution_element;
	struct Ifc_distribution_element_type;
	struct Ifc_distribution_flow_element;
	struct Ifc_distribution_flow_element_type;
	struct Ifc_distribution_port;
	struct Ifc_document_electronic_format;
	struct Ifc_document_information;
	struct Ifc_document_information_relationship;
	struct Ifc_document_reference;
	struct Ifc_door;
	struct Ifc_door_lining_properties;
	struct Ifc_door_panel_properties;
	struct Ifc_door_style;
	struct Ifc_draughting_callout;
	struct Ifc_draughting_callout_relationship;
	struct Ifc_draughting_pre_defined_colour;
	struct Ifc_draughting_pre_defined_curve_font;
	struct Ifc_draughting_pre_defined_text_font;
	struct Ifc_duct_fitting_type;
	struct Ifc_duct_segment_type;
	struct Ifc_duct_silencer_type;
	struct Ifc_edge;
	struct Ifc_edge_curve;
	struct Ifc_edge_feature;
	struct Ifc_edge_loop;
	struct Ifc_electric_appliance_type;
	struct Ifc_electric_distribution_point;
	struct Ifc_electric_flow_storage_device_type;
	struct Ifc_electric_generator_type;
	struct Ifc_electric_heater_type;
	struct Ifc_electric_motor_type;
	struct Ifc_electric_time_control_type;
	struct Ifc_electrical_base_properties;
	struct Ifc_electrical_circuit;
	struct Ifc_electrical_element;
	struct Ifc_element;
	struct Ifc_element_assembly;
	struct Ifc_element_component;
	struct Ifc_element_component_type;
	struct Ifc_element_quantity;
	struct Ifc_element_type;
	struct Ifc_elementary_surface;
	struct Ifc_ellipse;
	struct Ifc_ellipse_profile_def;
	struct Ifc_energy_conversion_device;
	struct Ifc_energy_conversion_device_type;
	struct Ifc_energy_properties;
	struct Ifc_environmental_impact_value;
	struct Ifc_equipment_element;
	struct Ifc_equipment_standard;
	struct Ifc_evaporative_cooler_type;
	struct Ifc_evaporator_type;
	struct Ifc_extended_material_properties;
	struct Ifc_external_reference;
	struct Ifc_externally_defined_hatch_style;
	struct Ifc_externally_defined_surface_style;
	struct Ifc_externally_defined_symbol;
	struct Ifc_externally_defined_text_font;
	struct Ifc_extruded_area_solid;
	struct Ifc_face;
	struct Ifc_face_based_surface_model;
	struct Ifc_face_bound;
	struct Ifc_face_outer_bound;
	struct Ifc_face_surface;
	struct Ifc_faceted_brep;
	struct Ifc_faceted_brep_with_voids;
	struct Ifc_failure_connection_condition;
	struct Ifc_fan_type;
	struct Ifc_fastener;
	struct Ifc_fastener_type;
	struct Ifc_feature_element;
	struct Ifc_feature_element_addition;
	struct Ifc_feature_element_subtraction;
	struct Ifc_fill_area_style;
	struct Ifc_fill_area_style_hatching;
	struct Ifc_fill_area_style_tile_symbol_with_style;
	struct Ifc_fill_area_style_tiles;
	struct Ifc_filter_type;
	struct Ifc_fire_suppression_terminal_type;
	struct Ifc_flow_controller;
	struct Ifc_flow_controller_type;
	struct Ifc_flow_fitting;
	struct Ifc_flow_fitting_type;
	struct Ifc_flow_instrument_type;
	struct Ifc_flow_meter_type;
	struct Ifc_flow_moving_device;
	struct Ifc_flow_moving_device_type;
	struct Ifc_flow_segment;
	struct Ifc_flow_segment_type;
	struct Ifc_flow_storage_device;
	struct Ifc_flow_storage_device_type;
	struct Ifc_flow_terminal;
	struct Ifc_flow_terminal_type;
	struct Ifc_flow_treatment_device;
	struct Ifc_flow_treatment_device_type;
	struct Ifc_fluid_flow_properties;
	struct Ifc_footing;
	struct Ifc_fuel_properties;
	struct Ifc_furnishing_element;
	struct Ifc_furnishing_element_type;
	struct Ifc_furniture_standard;
	struct Ifc_furniture_type;
	struct Ifc_gas_terminal_type;
	struct Ifc_general_material_properties;
	struct Ifc_general_profile_properties;
	struct Ifc_geometric_curve_set;
	struct Ifc_geometric_representation_context;
	struct Ifc_geometric_representation_item;
	struct Ifc_geometric_representation_sub_context;
	struct Ifc_geometric_set;
	struct Ifc_grid;
	struct Ifc_grid_axis;
	struct Ifc_grid_placement;
	struct Ifc_group;
	struct Ifc_half_space_solid;
	struct Ifc_heat_exchanger_type;
	struct Ifc_humidifier_type;
	struct Ifc_hygroscopic_material_properties;
	struct Ifc_i_shape_profile_def;
	struct Ifc_image_texture;
	struct Ifc_inventory;
	struct Ifc_irregular_time_series;
	struct Ifc_irregular_time_series_value;
	struct Ifc_junction_box_type;
	struct Ifc_l_shape_profile_def;
	struct Ifc_labor_resource;
	struct Ifc_lamp_type;
	struct Ifc_library_information;
	struct Ifc_library_reference;
	struct Ifc_light_distribution_data;
	struct Ifc_light_fixture_type;
	struct Ifc_light_intensity_distribution;
	struct Ifc_light_source;
	struct Ifc_light_source_ambient;
	struct Ifc_light_source_directional;
	struct Ifc_light_source_goniometric;
	struct Ifc_light_source_positional;
	struct Ifc_light_source_spot;
	struct Ifc_line;
	struct Ifc_linear_dimension;
	struct Ifc_local_placement;
	struct Ifc_local_time;
	struct Ifc_loop;
	struct Ifc_manifold_solid_brep;
	struct Ifc_mapped_item;
	struct Ifc_material;
	struct Ifc_material_classification_relationship;
	struct Ifc_material_definition_representation;
	struct Ifc_material_layer;
	struct Ifc_material_layer_set;
	struct Ifc_material_layer_set_usage;
	struct Ifc_material_list;
	struct Ifc_material_properties;
	struct Ifc_measure_with_unit;
	struct Ifc_mechanical_concrete_material_properties;
	struct Ifc_mechanical_fastener;
	struct Ifc_mechanical_fastener_type;
	struct Ifc_mechanical_material_properties;
	struct Ifc_mechanical_steel_material_properties;
	struct Ifc_member;
	struct Ifc_member_type;
	struct Ifc_metric;
	struct Ifc_monetary_unit;
	struct Ifc_motor_connection_type;
	struct Ifc_move;
	struct Ifc_named_unit;
	struct Ifc_object;
	struct Ifc_object_definition;
	struct Ifc_object_placement;
	struct Ifc_objective;
	struct Ifc_occupant;
	struct Ifc_offset_curve_2_d;
	struct Ifc_offset_curve_3_d;
	struct Ifc_one_direction_repeat_factor;
	struct Ifc_open_shell;
	struct Ifc_opening_element;
	struct Ifc_optical_material_properties;
	struct Ifc_order_action;
	struct Ifc_organization;
	struct Ifc_organization_relationship;
	struct Ifc_oriented_edge;
	struct Ifc_outlet_type;
	struct Ifc_owner_history;
	struct Ifc_parameterized_profile_def;
	struct Ifc_path;
	struct Ifc_performance_history;
	struct Ifc_permeable_covering_properties;
	struct Ifc_permit;
	struct Ifc_person;
	struct Ifc_person_and_organization;
	struct Ifc_physical_complex_quantity;
	struct Ifc_physical_quantity;
	struct Ifc_physical_simple_quantity;
	struct Ifc_pile;
	struct Ifc_pipe_fitting_type;
	struct Ifc_pipe_segment_type;
	struct Ifc_pixel_texture;
	struct Ifc_placement;
	struct Ifc_planar_box;
	struct Ifc_planar_extent;
	struct Ifc_plane;
	struct Ifc_plate;
	struct Ifc_plate_type;
	struct Ifc_point;
	struct Ifc_point_on_curve;
	struct Ifc_point_on_surface;
	struct Ifc_poly_loop;
	struct Ifc_polygonal_bounded_half_space;
	struct Ifc_polyline;
	struct Ifc_port;
	struct Ifc_postal_address;
	struct Ifc_pre_defined_colour;
	struct Ifc_pre_defined_curve_font;
	struct Ifc_pre_defined_dimension_symbol;
	struct Ifc_pre_defined_item;
	struct Ifc_pre_defined_point_marker_symbol;
	struct Ifc_pre_defined_symbol;
	struct Ifc_pre_defined_terminator_symbol;
	struct Ifc_pre_defined_text_font;
	struct Ifc_presentation_layer_assignment;
	struct Ifc_presentation_layer_with_style;
	struct Ifc_presentation_style;
	struct Ifc_presentation_style_assignment;
	struct Ifc_procedure;
	struct Ifc_process;
	struct Ifc_product;
	struct Ifc_product_definition_shape;
	struct Ifc_product_representation;
	struct Ifc_products_of_combustion_properties;
	struct Ifc_profile_def;
	struct Ifc_profile_properties;
	struct Ifc_project;
	struct Ifc_project_order;
	struct Ifc_project_order_record;
	struct Ifc_projection_curve;
	struct Ifc_projection_element;
	struct Ifc_property;
	struct Ifc_property_bounded_value;
	struct Ifc_property_constraint_relationship;
	struct Ifc_property_definition;
	struct Ifc_property_dependency_relationship;
	struct Ifc_property_enumerated_value;
	struct Ifc_property_enumeration;
	struct Ifc_property_list_value;
	struct Ifc_property_reference_value;
	struct Ifc_property_set;
	struct Ifc_property_set_definition;
	struct Ifc_property_single_value;
	struct Ifc_property_table_value;
	struct Ifc_protective_device_type;
	struct Ifc_proxy;
	struct Ifc_pump_type;
	struct Ifc_quantity_area;
	struct Ifc_quantity_count;
	struct Ifc_quantity_length;
	struct Ifc_quantity_time;
	struct Ifc_quantity_volume;
	struct Ifc_quantity_weight;
	struct Ifc_radius_dimension;
	struct Ifc_railing;
	struct Ifc_railing_type;
	struct Ifc_ramp;
	struct Ifc_ramp_flight;
	struct Ifc_ramp_flight_type;
	struct Ifc_rational_bezier_curve;
	struct Ifc_rectangle_hollow_profile_def;
	struct Ifc_rectangle_profile_def;
	struct Ifc_rectangular_pyramid;
	struct Ifc_rectangular_trimmed_surface;
	struct Ifc_references_value_document;
	struct Ifc_regular_time_series;
	struct Ifc_reinforcement_bar_properties;
	struct Ifc_reinforcement_definition_properties;
	struct Ifc_reinforcing_bar;
	struct Ifc_reinforcing_element;
	struct Ifc_reinforcing_mesh;
	struct Ifc_rel_aggregates;
	struct Ifc_rel_assigns;
	struct Ifc_rel_assigns_tasks;
	struct Ifc_rel_assigns_to_actor;
	struct Ifc_rel_assigns_to_control;
	struct Ifc_rel_assigns_to_group;
	struct Ifc_rel_assigns_to_process;
	struct Ifc_rel_assigns_to_product;
	struct Ifc_rel_assigns_to_project_order;
	struct Ifc_rel_assigns_to_resource;
	struct Ifc_rel_associates;
	struct Ifc_rel_associates_applied_value;
	struct Ifc_rel_associates_approval;
	struct Ifc_rel_associates_classification;
	struct Ifc_rel_associates_constraint;
	struct Ifc_rel_associates_document;
	struct Ifc_rel_associates_library;
	struct Ifc_rel_associates_material;
	struct Ifc_rel_associates_profile_properties;
	struct Ifc_rel_connects;
	struct Ifc_rel_connects_elements;
	struct Ifc_rel_connects_path_elements;
	struct Ifc_rel_connects_port_to_element;
	struct Ifc_rel_connects_ports;
	struct Ifc_rel_connects_structural_activity;
	struct Ifc_rel_connects_structural_element;
	struct Ifc_rel_connects_structural_member;
	struct Ifc_rel_connects_with_eccentricity;
	struct Ifc_rel_connects_with_realizing_elements;
	struct Ifc_rel_contained_in_spatial_structure;
	struct Ifc_rel_covers_bldg_elements;
	struct Ifc_rel_covers_spaces;
	struct Ifc_rel_decomposes;
	struct Ifc_rel_defines;
	struct Ifc_rel_defines_by_properties;
	struct Ifc_rel_defines_by_type;
	struct Ifc_rel_fills_element;
	struct Ifc_rel_flow_control_elements;
	struct Ifc_rel_interaction_requirements;
	struct Ifc_rel_nests;
	struct Ifc_rel_occupies_spaces;
	struct Ifc_rel_overrides_properties;
	struct Ifc_rel_projects_element;
	struct Ifc_rel_referenced_in_spatial_structure;
	struct Ifc_rel_schedules_cost_items;
	struct Ifc_rel_sequence;
	struct Ifc_rel_services_buildings;
	struct Ifc_rel_space_boundary;
	struct Ifc_rel_voids_element;
	struct Ifc_relationship;
	struct Ifc_relaxation;
	struct Ifc_representation;
	struct Ifc_representation_context;
	struct Ifc_representation_item;
	struct Ifc_representation_map;
	struct Ifc_resource;
	struct Ifc_revolved_area_solid;
	struct Ifc_rib_plate_profile_properties;
	struct Ifc_right_circular_cone;
	struct Ifc_right_circular_cylinder;
	struct Ifc_roof;
	struct Ifc_root;
	struct Ifc_rounded_edge_feature;
	struct Ifc_rounded_rectangle_profile_def;
	struct Ifc_s_i_unit;
	struct Ifc_sanitary_terminal_type;
	struct Ifc_schedule_time_control;
	struct Ifc_section_properties;
	struct Ifc_section_reinforcement_properties;
	struct Ifc_sectioned_spine;
	struct Ifc_sensor_type;
	struct Ifc_service_life;
	struct Ifc_service_life_factor;
	struct Ifc_shape_aspect;
	struct Ifc_shape_model;
	struct Ifc_shape_representation;
	struct Ifc_shell_based_surface_model;
	struct Ifc_simple_property;
	struct Ifc_site;
	struct Ifc_slab;
	struct Ifc_slab_type;
	struct Ifc_slippage_connection_condition;
	struct Ifc_solid_model;
	struct Ifc_sound_properties;
	struct Ifc_sound_value;
	struct Ifc_space;
	struct Ifc_space_heater_type;
	struct Ifc_space_program;
	struct Ifc_space_thermal_load_properties;
	struct Ifc_space_type;
	struct Ifc_spatial_structure_element;
	struct Ifc_spatial_structure_element_type;
	struct Ifc_sphere;
	struct Ifc_stack_terminal_type;
	struct Ifc_stair;
	struct Ifc_stair_flight;
	struct Ifc_stair_flight_type;
	struct Ifc_structural_action;
	struct Ifc_structural_activity;
	struct Ifc_structural_analysis_model;
	struct Ifc_structural_connection;
	struct Ifc_structural_connection_condition;
	struct Ifc_structural_curve_connection;
	struct Ifc_structural_curve_member;
	struct Ifc_structural_curve_member_varying;
	struct Ifc_structural_item;
	struct Ifc_structural_linear_action;
	struct Ifc_structural_linear_action_varying;
	struct Ifc_structural_load;
	struct Ifc_structural_load_group;
	struct Ifc_structural_load_linear_force;
	struct Ifc_structural_load_planar_force;
	struct Ifc_structural_load_single_displacement;
	struct Ifc_structural_load_single_displacement_distortion;
	struct Ifc_structural_load_single_force;
	struct Ifc_structural_load_single_force_warping;
	struct Ifc_structural_load_static;
	struct Ifc_structural_load_temperature;
	struct Ifc_structural_member;
	struct Ifc_structural_planar_action;
	struct Ifc_structural_planar_action_varying;
	struct Ifc_structural_point_action;
	struct Ifc_structural_point_connection;
	struct Ifc_structural_point_reaction;
	struct Ifc_structural_profile_properties;
	struct Ifc_structural_reaction;
	struct Ifc_structural_result_group;
	struct Ifc_structural_steel_profile_properties;
	struct Ifc_structural_surface_connection;
	struct Ifc_structural_surface_member;
	struct Ifc_structural_surface_member_varying;
	struct Ifc_structured_dimension_callout;
	struct Ifc_style_model;
	struct Ifc_styled_item;
	struct Ifc_styled_representation;
	struct Ifc_sub_contract_resource;
	struct Ifc_subedge;
	struct Ifc_surface;
	struct Ifc_surface_curve_swept_area_solid;
	struct Ifc_surface_of_linear_extrusion;
	struct Ifc_surface_of_revolution;
	struct Ifc_surface_style;
	struct Ifc_surface_style_lighting;
	struct Ifc_surface_style_refraction;
	struct Ifc_surface_style_rendering;
	struct Ifc_surface_style_shading;
	struct Ifc_surface_style_with_textures;
	struct Ifc_surface_texture;
	struct Ifc_swept_area_solid;
	struct Ifc_swept_disk_solid;
	struct Ifc_swept_surface;
	struct Ifc_switching_device_type;
	struct Ifc_symbol_style;
	struct Ifc_system;
	struct Ifc_system_furniture_element_type;
	struct Ifc_t_shape_profile_def;
	struct Ifc_table;
	struct Ifc_table_row;
	struct Ifc_tank_type;
	struct Ifc_task;
	struct Ifc_telecom_address;
	struct Ifc_tendon;
	struct Ifc_tendon_anchor;
	struct Ifc_terminator_symbol;
	struct Ifc_text_literal;
	struct Ifc_text_literal_with_extent;
	struct Ifc_text_style;
	struct Ifc_text_style_font_model;
	struct Ifc_text_style_for_defined_font;
	struct Ifc_text_style_text_model;
	struct Ifc_text_style_with_box_characteristics;
	struct Ifc_texture_coordinate;
	struct Ifc_texture_coordinate_generator;
	struct Ifc_texture_map;
	struct Ifc_texture_vertex;
	struct Ifc_thermal_material_properties;
	struct Ifc_time_series;
	struct Ifc_time_series_reference_relationship;
	struct Ifc_time_series_schedule;
	struct Ifc_time_series_value;
	struct Ifc_topological_representation_item;
	struct Ifc_topology_representation;
	struct Ifc_transformer_type;
	struct Ifc_transport_element;
	struct Ifc_transport_element_type;
	struct Ifc_trapezium_profile_def;
	struct Ifc_trimmed_curve;
	struct Ifc_tube_bundle_type;
	struct Ifc_two_direction_repeat_factor;
	struct Ifc_type_object;
	struct Ifc_type_product;
	struct Ifc_u_shape_profile_def;
	struct Ifc_unit_assignment;
	struct Ifc_unitary_equipment_type;
	struct Ifc_valve_type;
	struct Ifc_vector;
	struct Ifc_vertex;
	struct Ifc_vertex_based_texture_map;
	struct Ifc_vertex_loop;
	struct Ifc_vertex_point;
	struct Ifc_vibration_isolator_type;
	struct Ifc_virtual_element;
	struct Ifc_virtual_grid_intersection;
	struct Ifc_wall;
	struct Ifc_wall_standard_case;
	struct Ifc_wall_type;
	struct Ifc_waste_terminal_type;
	struct Ifc_water_properties;
	struct Ifc_window;
	struct Ifc_window_lining_properties;
	struct Ifc_window_panel_properties;
	struct Ifc_window_style;
	struct Ifc_work_control;
	struct Ifc_work_plan;
	struct Ifc_work_schedule;
	struct Ifc_z_shape_profile_def;
	struct Ifc_zone;

	// Select types (46)
	struct Ifc_actor_select {virtual ~Ifc_actor_select() {} };
	struct Ifc_applied_value_select {virtual ~Ifc_applied_value_select() {} };
	struct Ifc_axis_2_placement {virtual ~Ifc_axis_2_placement() {} };
	struct Ifc_boolean_operand {virtual ~Ifc_boolean_operand() {} };
	struct Ifc_character_style_select {virtual ~Ifc_character_style_select() {} };
	struct Ifc_classification_notation_select {virtual ~Ifc_classification_notation_select() {} };
	struct Ifc_colour {virtual ~Ifc_colour() {} };
	struct Ifc_colour_or_factor {virtual ~Ifc_colour_or_factor() {} };
	struct Ifc_condition_criterion_select {virtual ~Ifc_condition_criterion_select() {} };
	struct Ifc_csg_select {virtual ~Ifc_csg_select() {} };
	struct Ifc_curve_font_or_scaled_curve_font_select {virtual ~Ifc_curve_font_or_scaled_curve_font_select() {} };
	struct Ifc_curve_or_edge_curve {virtual ~Ifc_curve_or_edge_curve() {} };
	struct Ifc_curve_style_font_select {virtual ~Ifc_curve_style_font_select() {} };
	struct Ifc_date_time_select {virtual ~Ifc_date_time_select() {} };
	struct Ifc_defined_symbol_select {virtual ~Ifc_defined_symbol_select() {} };
	struct Ifc_derived_measure_value {virtual ~Ifc_derived_measure_value() {} };
	struct Ifc_document_select {virtual ~Ifc_document_select() {} };
	struct Ifc_draughting_callout_element {virtual ~Ifc_draughting_callout_element() {} };
	struct Ifc_fill_area_style_tile_shape_select {virtual ~Ifc_fill_area_style_tile_shape_select() {} };
	struct Ifc_fill_style_select {virtual ~Ifc_fill_style_select() {} };
	struct Ifc_geometric_set_select {virtual ~Ifc_geometric_set_select() {} };
	struct Ifc_hatch_line_distance_select {virtual ~Ifc_hatch_line_distance_select() {} };
	struct Ifc_layered_item {virtual ~Ifc_layered_item() {} };
	struct Ifc_library_select {virtual ~Ifc_library_select() {} };
	struct Ifc_light_distribution_data_source_select {virtual ~Ifc_light_distribution_data_source_select() {} };
	struct Ifc_material_select {virtual ~Ifc_material_select() {} };
	struct Ifc_measure_value {virtual ~Ifc_measure_value() {} };
	struct Ifc_metric_value_select {virtual ~Ifc_metric_value_select() {} };
	struct Ifc_object_reference_select {virtual ~Ifc_object_reference_select() {} };
	struct Ifc_orientation_select {virtual ~Ifc_orientation_select() {} };
	struct Ifc_point_or_vertex_point {virtual ~Ifc_point_or_vertex_point() {} };
	struct Ifc_presentation_style_select {virtual ~Ifc_presentation_style_select() {} };
	struct Ifc_shell {virtual ~Ifc_shell() {} };
	struct Ifc_simple_value {virtual ~Ifc_simple_value() {} };
	struct Ifc_size_select {virtual ~Ifc_size_select() {} };
	struct Ifc_specular_highlight_select {virtual ~Ifc_specular_highlight_select() {} };
	struct Ifc_structural_activity_assignment_select {virtual ~Ifc_structural_activity_assignment_select() {} };
	struct Ifc_surface_or_face_surface {virtual ~Ifc_surface_or_face_surface() {} };
	struct Ifc_surface_style_element_select {virtual ~Ifc_surface_style_element_select() {} };
	struct Ifc_symbol_style_select {virtual ~Ifc_symbol_style_select() {} };
	struct Ifc_text_font_select {virtual ~Ifc_text_font_select() {} };
	struct Ifc_text_style_select {virtual ~Ifc_text_style_select() {} };
	struct Ifc_trimming_select {virtual ~Ifc_trimming_select() {} };
	struct Ifc_unit {virtual ~Ifc_unit() {} };
	struct Ifc_value {virtual ~Ifc_value() {} };
	struct Ifc_vector_or_direction {virtual ~Ifc_vector_or_direction() {} };

	// Entities (653)
	struct Ifc_actor_role : Ifc {
		Ifc_role_enum role;
		Ifc_label user_defined_role;
		Ifc_text description;

		Ifc_actor_role() {
			entity = "Ifc_actor_role";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_actor_role &o) {
			return os << "Ifc_actor_role(" << o.role << ", " << o.user_defined_role << ", " << o.description << ")";
		}
	};

	struct Ifc_address : Ifc {
		Ifc_address_type_enum purpose;
		Ifc_text description;
		Ifc_label user_defined_purpose;

		virtual ~Ifc_address() {}
	};

	struct Ifc_application : Ifc {
		Ifc_organization *application_developer;
		Ifc_label version;
		Ifc_label application_full_name;
		Ifc_identifier application_identifier;

		Ifc_application() {
			entity = "Ifc_application";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_application &o) {
			return os << "Ifc_application(" << o.application_developer << ", " << o.version << ", " << o.application_full_name << ", " << o.application_identifier << ")";
		}
	};

	struct Ifc_applied_value : Ifc {
		Ifc_label name;
		Ifc_text description;
		Ifc_applied_value_select *applied_value;
		Ifc_measure_with_unit *unit_basis;
		Ifc_date_time_select *applicable_date;
		Ifc_date_time_select *fixed_until_date;

		virtual ~Ifc_applied_value() {}
	};

	struct Ifc_applied_value_relationship : Ifc {
		Ifc_applied_value *component_of_total;
		std::vector<Ifc_applied_value *> components;
		Ifc_arithmetic_operator_enum arithmetic_operator;
		Ifc_label name;
		Ifc_text description;

		Ifc_applied_value_relationship() {
			entity = "Ifc_applied_value_relationship";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_applied_value_relationship &o) {
			return os << "Ifc_applied_value_relationship(" << o.component_of_total << ", " << "vector(" << o.components.size() << ")" << ", " << o.arithmetic_operator << ", " << o.name << ", " << o.description << ")";
		}
	};

	struct Ifc_approval : Ifc {
		Ifc_text description;
		Ifc_date_time_select *approval_date_time;
		Ifc_label approval_status;
		Ifc_label approval_level;
		Ifc_text approval_qualifier;
		Ifc_label name;
		Ifc_identifier identifier;

		Ifc_approval() {
			entity = "Ifc_approval";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_approval &o) {
			return os << "Ifc_approval(" << o.description << ", " << o.approval_date_time << ", " << o.approval_status << ", " << o.approval_level << ", " << o.approval_qualifier << ", " << o.name << ", " << o.identifier << ")";
		}
	};

	struct Ifc_approval_actor_relationship : Ifc {
		Ifc_actor_select *actor;
		Ifc_approval *approval;
		Ifc_actor_role *role;

		Ifc_approval_actor_relationship() {
			entity = "Ifc_approval_actor_relationship";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_approval_actor_relationship &o) {
			return os << "Ifc_approval_actor_relationship(" << o.actor << ", " << o.approval << ", " << o.role << ")";
		}
	};

	struct Ifc_approval_property_relationship : Ifc {
		std::vector<Ifc_property *> approved_properties;
		Ifc_approval *approval;

		Ifc_approval_property_relationship() {
			entity = "Ifc_approval_property_relationship";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_approval_property_relationship &o) {
			return os << "Ifc_approval_property_relationship(" << "vector(" << o.approved_properties.size() << ")" << ", " << o.approval << ")";
		}
	};

	struct Ifc_approval_relationship : Ifc {
		Ifc_approval *related_approval;
		Ifc_approval *relating_approval;
		Ifc_text description;
		Ifc_label name;

		Ifc_approval_relationship() {
			entity = "Ifc_approval_relationship";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_approval_relationship &o) {
			return os << "Ifc_approval_relationship(" << o.related_approval << ", " << o.relating_approval << ", " << o.description << ", " << o.name << ")";
		}
	};

	struct Ifc_boundary_condition : Ifc {
		Ifc_label name;

		virtual ~Ifc_boundary_condition() {}
	};

	struct Ifc_boundary_edge_condition : Ifc_boundary_condition {
		Ifc_modulus_of_linear_subgrade_reaction_measure linear_stiffness_by_length_x;
		Ifc_modulus_of_linear_subgrade_reaction_measure linear_stiffness_by_length_y;
		Ifc_modulus_of_linear_subgrade_reaction_measure linear_stiffness_by_length_z;
		Ifc_modulus_of_rotational_subgrade_reaction_measure rotational_stiffness_by_length_x;
		Ifc_modulus_of_rotational_subgrade_reaction_measure rotational_stiffness_by_length_y;
		Ifc_modulus_of_rotational_subgrade_reaction_measure rotational_stiffness_by_length_z;

		Ifc_boundary_edge_condition() {
			entity = "Ifc_boundary_edge_condition";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_boundary_edge_condition &o) {
			return os << "Ifc_boundary_edge_condition(" << o.name << ", " << o.linear_stiffness_by_length_x << ", " << o.linear_stiffness_by_length_y << ", " << o.linear_stiffness_by_length_z << ", " << o.rotational_stiffness_by_length_x << ", " << o.rotational_stiffness_by_length_y << ", " << o.rotational_stiffness_by_length_z << ")";
		}
	};

	struct Ifc_boundary_face_condition : Ifc_boundary_condition {
		Ifc_modulus_of_subgrade_reaction_measure linear_stiffness_by_area_x;
		Ifc_modulus_of_subgrade_reaction_measure linear_stiffness_by_area_y;
		Ifc_modulus_of_subgrade_reaction_measure linear_stiffness_by_area_z;

		Ifc_boundary_face_condition() {
			entity = "Ifc_boundary_face_condition";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_boundary_face_condition &o) {
			return os << "Ifc_boundary_face_condition(" << o.name << ", " << o.linear_stiffness_by_area_x << ", " << o.linear_stiffness_by_area_y << ", " << o.linear_stiffness_by_area_z << ")";
		}
	};

	struct Ifc_boundary_node_condition : Ifc_boundary_condition {
		Ifc_linear_stiffness_measure linear_stiffness_x;
		Ifc_linear_stiffness_measure linear_stiffness_y;
		Ifc_linear_stiffness_measure linear_stiffness_z;
		Ifc_rotational_stiffness_measure rotational_stiffness_x;
		Ifc_rotational_stiffness_measure rotational_stiffness_y;
		Ifc_rotational_stiffness_measure rotational_stiffness_z;

		Ifc_boundary_node_condition() {
			entity = "Ifc_boundary_node_condition";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_boundary_node_condition &o) {
			return os << "Ifc_boundary_node_condition(" << o.name << ", " << o.linear_stiffness_x << ", " << o.linear_stiffness_y << ", " << o.linear_stiffness_z << ", " << o.rotational_stiffness_x << ", " << o.rotational_stiffness_y << ", " << o.rotational_stiffness_z << ")";
		}
	};

	struct Ifc_boundary_node_condition_warping : Ifc_boundary_node_condition {
		Ifc_warping_moment_measure warping_stiffness;

		Ifc_boundary_node_condition_warping() {
			entity = "Ifc_boundary_node_condition_warping";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_boundary_node_condition_warping &o) {
			return os << "Ifc_boundary_node_condition_warping(" << o.name << ", " << o.linear_stiffness_x << ", " << o.linear_stiffness_y << ", " << o.linear_stiffness_z << ", " << o.rotational_stiffness_x << ", " << o.rotational_stiffness_y << ", " << o.rotational_stiffness_z << ", " << o.warping_stiffness << ")";
		}
	};

	struct Ifc_calendar_date : Ifc {
		Ifc_day_in_month_number day_component;
		Ifc_month_in_year_number month_component;
		Ifc_year_number year_component;

		Ifc_calendar_date() {
			entity = "Ifc_calendar_date";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_calendar_date &o) {
			return os << "Ifc_calendar_date(" << o.day_component << ", " << o.month_component << ", " << o.year_component << ")";
		}
	};

	struct Ifc_classification : Ifc {
		Ifc_label source;
		Ifc_label edition;
		Ifc_calendar_date *edition_date;
		Ifc_label name;

		Ifc_classification() {
			entity = "Ifc_classification";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_classification &o) {
			return os << "Ifc_classification(" << o.source << ", " << o.edition << ", " << o.edition_date << ", " << o.name << ")";
		}
	};

	struct Ifc_classification_item : Ifc {
		Ifc_classification_notation_facet *notation;
		Ifc_classification *item_of;
		Ifc_label title;

		Ifc_classification_item() {
			entity = "Ifc_classification_item";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_classification_item &o) {
			return os << "Ifc_classification_item(" << o.notation << ", " << o.item_of << ", " << o.title << ")";
		}
	};

	struct Ifc_classification_item_relationship : Ifc {
		Ifc_classification_item *relating_item;
		std::vector<Ifc_classification_item *> related_items;

		Ifc_classification_item_relationship() {
			entity = "Ifc_classification_item_relationship";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_classification_item_relationship &o) {
			return os << "Ifc_classification_item_relationship(" << o.relating_item << ", " << "vector(" << o.related_items.size() << ")" << ")";
		}
	};

	struct Ifc_classification_notation : Ifc {
		std::vector<Ifc_classification_notation_facet *> notation_facets;

		Ifc_classification_notation() {
			entity = "Ifc_classification_notation";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_classification_notation &o) {
			return os << "Ifc_classification_notation(" << "vector(" << o.notation_facets.size() << ")" << ")";
		}
	};

	struct Ifc_classification_notation_facet : Ifc {
		Ifc_label notation_value;

		Ifc_classification_notation_facet() {
			entity = "Ifc_classification_notation_facet";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_classification_notation_facet &o) {
			return os << "Ifc_classification_notation_facet(" << o.notation_value << ")";
		}
	};

	struct Ifc_colour_specification : Ifc {
		Ifc_label name;

		virtual ~Ifc_colour_specification() {}
	};

	struct Ifc_connection_geometry : Ifc {
		virtual ~Ifc_connection_geometry() {}
	};

	struct Ifc_connection_point_geometry : Ifc_connection_geometry {
		Ifc_point_or_vertex_point *point_on_relating_element;
		Ifc_point_or_vertex_point *point_on_related_element;

		Ifc_connection_point_geometry() {
			entity = "Ifc_connection_point_geometry";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_connection_point_geometry &o) {
			return os << "Ifc_connection_point_geometry(" << o.point_on_relating_element << ", " << o.point_on_related_element << ")";
		}
	};

	struct Ifc_connection_port_geometry : Ifc_connection_geometry {
		Ifc_axis_2_placement *location_at_relating_element;
		Ifc_axis_2_placement *location_at_related_element;
		Ifc_profile_def *profile_of_port;

		Ifc_connection_port_geometry() {
			entity = "Ifc_connection_port_geometry";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_connection_port_geometry &o) {
			return os << "Ifc_connection_port_geometry(" << o.location_at_relating_element << ", " << o.location_at_related_element << ", " << o.profile_of_port << ")";
		}
	};

	struct Ifc_connection_surface_geometry : Ifc_connection_geometry {
		Ifc_surface_or_face_surface *surface_on_relating_element;
		Ifc_surface_or_face_surface *surface_on_related_element;

		Ifc_connection_surface_geometry() {
			entity = "Ifc_connection_surface_geometry";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_connection_surface_geometry &o) {
			return os << "Ifc_connection_surface_geometry(" << o.surface_on_relating_element << ", " << o.surface_on_related_element << ")";
		}
	};

	struct Ifc_constraint : Ifc {
		Ifc_label name;
		Ifc_text description;
		Ifc_constraint_enum constraint_grade;
		Ifc_label constraint_source;
		Ifc_actor_select *creating_actor;
		Ifc_date_time_select *creation_time;
		Ifc_label user_defined_grade;

		virtual ~Ifc_constraint() {}
	};

	struct Ifc_constraint_aggregation_relationship : Ifc {
		Ifc_label name;
		Ifc_text description;
		Ifc_constraint *relating_constraint;
		std::vector<Ifc_constraint *> related_constraints;
		Ifc_logical_operator_enum logical_aggregator;

		Ifc_constraint_aggregation_relationship() {
			entity = "Ifc_constraint_aggregation_relationship";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_constraint_aggregation_relationship &o) {
			return os << "Ifc_constraint_aggregation_relationship(" << o.name << ", " << o.description << ", " << o.relating_constraint << ", " << "vector(" << o.related_constraints.size() << ")" << ", " << o.logical_aggregator << ")";
		}
	};

	struct Ifc_constraint_classification_relationship : Ifc {
		Ifc_constraint *classified_constraint;
		std::vector<Ifc_classification_notation_select *> related_classifications;

		Ifc_constraint_classification_relationship() {
			entity = "Ifc_constraint_classification_relationship";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_constraint_classification_relationship &o) {
			return os << "Ifc_constraint_classification_relationship(" << o.classified_constraint << ", " << "vector(" << o.related_classifications.size() << ")" << ")";
		}
	};

	struct Ifc_constraint_relationship : Ifc {
		Ifc_label name;
		Ifc_text description;
		Ifc_constraint *relating_constraint;
		std::vector<Ifc_constraint *> related_constraints;

		Ifc_constraint_relationship() {
			entity = "Ifc_constraint_relationship";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_constraint_relationship &o) {
			return os << "Ifc_constraint_relationship(" << o.name << ", " << o.description << ", " << o.relating_constraint << ", " << "vector(" << o.related_constraints.size() << ")" << ")";
		}
	};

	struct Ifc_coordinated_universal_time_offset : Ifc {
		Ifc_hour_in_day hour_offset;
		Ifc_minute_in_hour minute_offset;
		Ifc_ahead_or_behind sense;

		Ifc_coordinated_universal_time_offset() {
			entity = "Ifc_coordinated_universal_time_offset";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_coordinated_universal_time_offset &o) {
			return os << "Ifc_coordinated_universal_time_offset(" << o.hour_offset << ", " << o.minute_offset << ", " << o.sense << ")";
		}
	};

	struct Ifc_cost_value : Ifc_applied_value {
		Ifc_label cost_type;
		Ifc_text condition;

		Ifc_cost_value() {
			entity = "Ifc_cost_value";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_cost_value &o) {
			return os << "Ifc_cost_value(" << o.name << ", " << o.description << ", " << o.applied_value << ", " << o.unit_basis << ", " << o.applicable_date << ", " << o.fixed_until_date << ", " << o.cost_type << ", " << o.condition << ")";
		}
	};

	struct Ifc_currency_relationship : Ifc {
		Ifc_monetary_unit *relating_monetary_unit;
		Ifc_monetary_unit *related_monetary_unit;
		Ifc_positive_ratio_measure exchange_rate;
		Ifc_date_and_time *rate_date_time;
		Ifc_library_information *rate_source;

		Ifc_currency_relationship() {
			entity = "Ifc_currency_relationship";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_currency_relationship &o) {
			return os << "Ifc_currency_relationship(" << o.relating_monetary_unit << ", " << o.related_monetary_unit << ", " << o.exchange_rate << ", " << o.rate_date_time << ", " << o.rate_source << ")";
		}
	};

	struct Ifc_curve_style_font : Ifc {
		Ifc_label name;
		std::vector<Ifc_curve_style_font_pattern *> pattern_list;

		Ifc_curve_style_font() {
			entity = "Ifc_curve_style_font";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_curve_style_font &o) {
			return os << "Ifc_curve_style_font(" << o.name << ", " << "vector(" << o.pattern_list.size() << ")" << ")";
		}
	};

	struct Ifc_curve_style_font_and_scaling : Ifc {
		Ifc_label name;
		Ifc_curve_style_font_select *curve_font;
		Ifc_positive_ratio_measure curve_font_scaling;

		Ifc_curve_style_font_and_scaling() {
			entity = "Ifc_curve_style_font_and_scaling";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_curve_style_font_and_scaling &o) {
			return os << "Ifc_curve_style_font_and_scaling(" << o.name << ", " << o.curve_font << ", " << o.curve_font_scaling << ")";
		}
	};

	struct Ifc_curve_style_font_pattern : Ifc {
		Ifc_length_measure visible_segment_length;
		Ifc_positive_length_measure invisible_segment_length;

		Ifc_curve_style_font_pattern() {
			entity = "Ifc_curve_style_font_pattern";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_curve_style_font_pattern &o) {
			return os << "Ifc_curve_style_font_pattern(" << o.visible_segment_length << ", " << o.invisible_segment_length << ")";
		}
	};

	struct Ifc_date_and_time : Ifc {
		Ifc_calendar_date *date_component;
		Ifc_local_time *time_component;

		Ifc_date_and_time() {
			entity = "Ifc_date_and_time";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_date_and_time &o) {
			return os << "Ifc_date_and_time(" << o.date_component << ", " << o.time_component << ")";
		}
	};

	struct Ifc_derived_unit : Ifc {
		std::vector<Ifc_derived_unit_element *> elements;
		Ifc_derived_unit_enum unit_type;
		Ifc_label user_defined_type;

		Ifc_derived_unit() {
			entity = "Ifc_derived_unit";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_derived_unit &o) {
			return os << "Ifc_derived_unit(" << "vector(" << o.elements.size() << ")" << ", " << o.unit_type << ", " << o.user_defined_type << ")";
		}
	};

	struct Ifc_derived_unit_element : Ifc {
		Ifc_named_unit *unit;
		int exponent;

		Ifc_derived_unit_element() {
			entity = "Ifc_derived_unit_element";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_derived_unit_element &o) {
			return os << "Ifc_derived_unit_element(" << o.unit << ", " << o.exponent << ")";
		}
	};

	struct Ifc_dimensional_exponents : Ifc {
		int length_exponent;
		int mass_exponent;
		int time_exponent;
		int electric_current_exponent;
		int thermodynamic_temperature_exponent;
		int amount_of_substance_exponent;
		int luminous_intensity_exponent;

		Ifc_dimensional_exponents() {
			entity = "Ifc_dimensional_exponents";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_dimensional_exponents &o) {
			return os << "Ifc_dimensional_exponents(" << o.length_exponent << ", " << o.mass_exponent << ", " << o.time_exponent << ", " << o.electric_current_exponent << ", " << o.thermodynamic_temperature_exponent << ", " << o.amount_of_substance_exponent << ", " << o.luminous_intensity_exponent << ")";
		}
	};

	struct Ifc_document_electronic_format : Ifc {
		Ifc_label file_extension;
		Ifc_label mime_content_type;
		Ifc_label mime_subtype;

		Ifc_document_electronic_format() {
			entity = "Ifc_document_electronic_format";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_document_electronic_format &o) {
			return os << "Ifc_document_electronic_format(" << o.file_extension << ", " << o.mime_content_type << ", " << o.mime_subtype << ")";
		}
	};

	struct Ifc_document_information : Ifc {
		Ifc_identifier document_id;
		Ifc_label name;
		Ifc_text description;
		std::vector<Ifc_document_reference *> document_references;
		Ifc_text purpose;
		Ifc_text intended_use;
		Ifc_text scope;
		Ifc_label revision;
		Ifc_actor_select *document_owner;
		std::vector<Ifc_actor_select *> editors;
		Ifc_date_and_time *creation_time;
		Ifc_date_and_time *last_revision_time;
		Ifc_document_electronic_format *electronic_format;
		Ifc_calendar_date *valid_from;
		Ifc_calendar_date *valid_until;
		Ifc_document_confidentiality_enum confidentiality;
		Ifc_document_status_enum status;

		Ifc_document_information() {
			entity = "Ifc_document_information";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_document_information &o) {
			return os << "Ifc_document_information(" << o.document_id << ", " << o.name << ", " << o.description << ", " << "vector(" << o.document_references.size() << ")" << ", " << o.purpose << ", " << o.intended_use << ", " << o.scope << ", " << o.revision << ", " << o.document_owner << ", " << "vector(" << o.editors.size() << ")" << ", " << o.creation_time << ", " << o.last_revision_time << ", " << o.electronic_format << ", " << o.valid_from << ", " << o.valid_until << ", " << o.confidentiality << ", " << o.status << ")";
		}
	};

	struct Ifc_document_information_relationship : Ifc {
		Ifc_document_information *relating_document;
		std::vector<Ifc_document_information *> related_documents;
		Ifc_label relationship_type;

		Ifc_document_information_relationship() {
			entity = "Ifc_document_information_relationship";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_document_information_relationship &o) {
			return os << "Ifc_document_information_relationship(" << o.relating_document << ", " << "vector(" << o.related_documents.size() << ")" << ", " << o.relationship_type << ")";
		}
	};

	struct Ifc_draughting_callout_relationship : Ifc {
		Ifc_label name;
		Ifc_text description;
		Ifc_draughting_callout *relating_draughting_callout;
		Ifc_draughting_callout *related_draughting_callout;

		Ifc_draughting_callout_relationship() {
			entity = "Ifc_draughting_callout_relationship";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_draughting_callout_relationship &o) {
			return os << "Ifc_draughting_callout_relationship(" << o.name << ", " << o.description << ", " << o.relating_draughting_callout << ", " << o.related_draughting_callout << ")";
		}
	};

	struct Ifc_environmental_impact_value : Ifc_applied_value {
		Ifc_label impact_type;
		Ifc_environmental_impact_category_enum category;
		Ifc_label user_defined_category;

		Ifc_environmental_impact_value() {
			entity = "Ifc_environmental_impact_value";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_environmental_impact_value &o) {
			return os << "Ifc_environmental_impact_value(" << o.name << ", " << o.description << ", " << o.applied_value << ", " << o.unit_basis << ", " << o.applicable_date << ", " << o.fixed_until_date << ", " << o.impact_type << ", " << o.category << ", " << o.user_defined_category << ")";
		}
	};

	struct Ifc_external_reference : Ifc {
		Ifc_label location;
		Ifc_identifier item_reference;
		Ifc_label name;

		virtual ~Ifc_external_reference() {}
	};

	struct Ifc_externally_defined_hatch_style : Ifc_external_reference {
		Ifc_externally_defined_hatch_style() {
			entity = "Ifc_externally_defined_hatch_style";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_externally_defined_hatch_style &o) {
			return os << "Ifc_externally_defined_hatch_style(" << o.location << ", " << o.item_reference << ", " << o.name << ")";
		}
	};

	struct Ifc_externally_defined_surface_style : Ifc_external_reference {
		Ifc_externally_defined_surface_style() {
			entity = "Ifc_externally_defined_surface_style";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_externally_defined_surface_style &o) {
			return os << "Ifc_externally_defined_surface_style(" << o.location << ", " << o.item_reference << ", " << o.name << ")";
		}
	};

	struct Ifc_externally_defined_symbol : Ifc_external_reference {
		Ifc_externally_defined_symbol() {
			entity = "Ifc_externally_defined_symbol";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_externally_defined_symbol &o) {
			return os << "Ifc_externally_defined_symbol(" << o.location << ", " << o.item_reference << ", " << o.name << ")";
		}
	};

	struct Ifc_externally_defined_text_font : Ifc_external_reference {
		Ifc_externally_defined_text_font() {
			entity = "Ifc_externally_defined_text_font";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_externally_defined_text_font &o) {
			return os << "Ifc_externally_defined_text_font(" << o.location << ", " << o.item_reference << ", " << o.name << ")";
		}
	};

	struct Ifc_grid_axis : Ifc {
		Ifc_label axis_tag;
		Ifc_curve *axis_curve;
		Ifc_boolean same_sense;

		Ifc_grid_axis() {
			entity = "Ifc_grid_axis";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_grid_axis &o) {
			return os << "Ifc_grid_axis(" << o.axis_tag << ", " << o.axis_curve << ", " << o.same_sense << ")";
		}
	};

	struct Ifc_irregular_time_series_value : Ifc {
		Ifc_date_time_select *time_stamp;
		std::vector<Ifc_value *> list_values;

		Ifc_irregular_time_series_value() {
			entity = "Ifc_irregular_time_series_value";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_irregular_time_series_value &o) {
			return os << "Ifc_irregular_time_series_value(" << o.time_stamp << ", " << "vector(" << o.list_values.size() << ")" << ")";
		}
	};

	struct Ifc_library_information : Ifc {
		Ifc_label name;
		Ifc_label version;
		Ifc_organization *publisher;
		Ifc_calendar_date *version_date;
		std::vector<Ifc_library_reference *> library_reference;

		Ifc_library_information() {
			entity = "Ifc_library_information";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_library_information &o) {
			return os << "Ifc_library_information(" << o.name << ", " << o.version << ", " << o.publisher << ", " << o.version_date << ", " << "vector(" << o.library_reference.size() << ")" << ")";
		}
	};

	struct Ifc_library_reference : Ifc_external_reference {
		Ifc_library_reference() {
			entity = "Ifc_library_reference";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_library_reference &o) {
			return os << "Ifc_library_reference(" << o.location << ", " << o.item_reference << ", " << o.name << ")";
		}
	};

	struct Ifc_light_distribution_data : Ifc {
		Ifc_plane_angle_measure main_plane_angle;
		std::vector<Ifc_plane_angle_measure> secondary_plane_angle;
		std::vector<Ifc_luminous_intensity_distribution_measure> luminous_intensity;

		Ifc_light_distribution_data() {
			entity = "Ifc_light_distribution_data";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_light_distribution_data &o) {
			return os << "Ifc_light_distribution_data(" << o.main_plane_angle << ", " << "vector(" << o.secondary_plane_angle.size() << ")" << ", " << "vector(" << o.luminous_intensity.size() << ")" << ")";
		}
	};

	struct Ifc_light_intensity_distribution : Ifc {
		Ifc_light_distribution_curve_enum light_distribution_curve;
		std::vector<Ifc_light_distribution_data *> distribution_data;

		Ifc_light_intensity_distribution() {
			entity = "Ifc_light_intensity_distribution";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_light_intensity_distribution &o) {
			return os << "Ifc_light_intensity_distribution(" << o.light_distribution_curve << ", " << "vector(" << o.distribution_data.size() << ")" << ")";
		}
	};

	struct Ifc_local_time : Ifc {
		Ifc_hour_in_day hour_component;
		Ifc_minute_in_hour minute_component;
		Ifc_second_in_minute second_component;
		Ifc_coordinated_universal_time_offset *zone;
		Ifc_daylight_saving_hour daylight_saving_offset;

		Ifc_local_time() {
			entity = "Ifc_local_time";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_local_time &o) {
			return os << "Ifc_local_time(" << o.hour_component << ", " << o.minute_component << ", " << o.second_component << ", " << o.zone << ", " << o.daylight_saving_offset << ")";
		}
	};

	struct Ifc_material : Ifc {
		Ifc_label name;

		Ifc_material() {
			entity = "Ifc_material";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_material &o) {
			return os << "Ifc_material(" << o.name << ")";
		}
	};

	struct Ifc_material_classification_relationship : Ifc {
		std::vector<Ifc_classification_notation_select *> material_classifications;
		Ifc_material *classified_material;

		Ifc_material_classification_relationship() {
			entity = "Ifc_material_classification_relationship";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_material_classification_relationship &o) {
			return os << "Ifc_material_classification_relationship(" << "vector(" << o.material_classifications.size() << ")" << ", " << o.classified_material << ")";
		}
	};

	struct Ifc_material_layer : Ifc {
		Ifc_material *material;
		Ifc_positive_length_measure layer_thickness;
		Ifc_logical is_ventilated;

		Ifc_material_layer() {
			entity = "Ifc_material_layer";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_material_layer &o) {
			return os << "Ifc_material_layer(" << o.material << ", " << o.layer_thickness << ", " << o.is_ventilated << ")";
		}
	};

	struct Ifc_material_layer_set : Ifc {
		std::vector<Ifc_material_layer *> material_layers;
		Ifc_label layer_set_name;

		Ifc_material_layer_set() {
			entity = "Ifc_material_layer_set";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_material_layer_set &o) {
			return os << "Ifc_material_layer_set(" << "vector(" << o.material_layers.size() << ")" << ", " << o.layer_set_name << ")";
		}
	};

	struct Ifc_material_layer_set_usage : Ifc {
		Ifc_material_layer_set *for_layer_set;
		Ifc_layer_set_direction_enum layer_set_direction;
		Ifc_direction_sense_enum direction_sense;
		Ifc_length_measure offset_from_reference_line;

		Ifc_material_layer_set_usage() {
			entity = "Ifc_material_layer_set_usage";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_material_layer_set_usage &o) {
			return os << "Ifc_material_layer_set_usage(" << o.for_layer_set << ", " << o.layer_set_direction << ", " << o.direction_sense << ", " << o.offset_from_reference_line << ")";
		}
	};

	struct Ifc_material_list : Ifc {
		std::vector<Ifc_material *> materials;

		Ifc_material_list() {
			entity = "Ifc_material_list";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_material_list &o) {
			return os << "Ifc_material_list(" << "vector(" << o.materials.size() << ")" << ")";
		}
	};

	struct Ifc_material_properties : Ifc {
		Ifc_material *material;

		virtual ~Ifc_material_properties() {}
	};

	struct Ifc_measure_with_unit : Ifc {
		Ifc_value *value_component;
		Ifc_unit *unit_component;

		Ifc_measure_with_unit() {
			entity = "Ifc_measure_with_unit";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_measure_with_unit &o) {
			return os << "Ifc_measure_with_unit(" << o.value_component << ", " << o.unit_component << ")";
		}
	};

	struct Ifc_mechanical_material_properties : Ifc_material_properties {
		Ifc_dynamic_viscosity_measure dynamic_viscosity;
		Ifc_modulus_of_elasticity_measure young_modulus;
		Ifc_modulus_of_elasticity_measure shear_modulus;
		Ifc_positive_ratio_measure poisson_ratio;
		Ifc_thermal_expansion_coefficient_measure thermal_expansion_coefficient;

		Ifc_mechanical_material_properties() {
			entity = "Ifc_mechanical_material_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_mechanical_material_properties &o) {
			return os << "Ifc_mechanical_material_properties(" << o.material << ", " << o.dynamic_viscosity << ", " << o.young_modulus << ", " << o.shear_modulus << ", " << o.poisson_ratio << ", " << o.thermal_expansion_coefficient << ")";
		}
	};

	struct Ifc_mechanical_steel_material_properties : Ifc_mechanical_material_properties {
		Ifc_pressure_measure yield_stress;
		Ifc_pressure_measure ultimate_stress;
		Ifc_positive_ratio_measure ultimate_strain;
		Ifc_modulus_of_elasticity_measure hardening_module;
		Ifc_pressure_measure proportional_stress;
		Ifc_positive_ratio_measure plastic_strain;
		std::vector<Ifc_relaxation *> relaxations;

		Ifc_mechanical_steel_material_properties() {
			entity = "Ifc_mechanical_steel_material_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_mechanical_steel_material_properties &o) {
			return os << "Ifc_mechanical_steel_material_properties(" << o.material << ", " << o.dynamic_viscosity << ", " << o.young_modulus << ", " << o.shear_modulus << ", " << o.poisson_ratio << ", " << o.thermal_expansion_coefficient << ", " << o.yield_stress << ", " << o.ultimate_stress << ", " << o.ultimate_strain << ", " << o.hardening_module << ", " << o.proportional_stress << ", " << o.plastic_strain << ", " << "vector(" << o.relaxations.size() << ")" << ")";
		}
	};

	struct Ifc_metric : Ifc_constraint {
		Ifc_benchmark_enum benchmark;
		Ifc_label value_source;
		Ifc_metric_value_select *data_value;

		Ifc_metric() {
			entity = "Ifc_metric";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_metric &o) {
			return os << "Ifc_metric(" << o.name << ", " << o.description << ", " << o.constraint_grade << ", " << o.constraint_source << ", " << o.creating_actor << ", " << o.creation_time << ", " << o.user_defined_grade << ", " << o.benchmark << ", " << o.value_source << ", " << o.data_value << ")";
		}
	};

	struct Ifc_monetary_unit : Ifc {
		Ifc_currency_enum currency;

		Ifc_monetary_unit() {
			entity = "Ifc_monetary_unit";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_monetary_unit &o) {
			return os << "Ifc_monetary_unit(" << o.currency << ")";
		}
	};

	struct Ifc_named_unit : Ifc {
		Ifc_dimensional_exponents *dimensions;
		Ifc_unit_enum unit_type;

		virtual ~Ifc_named_unit() {}
	};

	struct Ifc_object_placement : Ifc {
		virtual ~Ifc_object_placement() {}
	};

	struct Ifc_objective : Ifc_constraint {
		Ifc_metric *benchmark_values;
		Ifc_metric *result_values;
		Ifc_objective_enum objective_qualifier;
		Ifc_label user_defined_qualifier;

		Ifc_objective() {
			entity = "Ifc_objective";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_objective &o) {
			return os << "Ifc_objective(" << o.name << ", " << o.description << ", " << o.constraint_grade << ", " << o.constraint_source << ", " << o.creating_actor << ", " << o.creation_time << ", " << o.user_defined_grade << ", " << o.benchmark_values << ", " << o.result_values << ", " << o.objective_qualifier << ", " << o.user_defined_qualifier << ")";
		}
	};

	struct Ifc_optical_material_properties : Ifc_material_properties {
		Ifc_positive_ratio_measure visible_transmittance;
		Ifc_positive_ratio_measure solar_transmittance;
		Ifc_positive_ratio_measure thermal_ir_transmittance;
		Ifc_positive_ratio_measure thermal_ir_emissivity_back;
		Ifc_positive_ratio_measure thermal_ir_emissivity_front;
		Ifc_positive_ratio_measure visible_reflectance_back;
		Ifc_positive_ratio_measure visible_reflectance_front;
		Ifc_positive_ratio_measure solar_reflectance_front;
		Ifc_positive_ratio_measure solar_reflectance_back;

		Ifc_optical_material_properties() {
			entity = "Ifc_optical_material_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_optical_material_properties &o) {
			return os << "Ifc_optical_material_properties(" << o.material << ", " << o.visible_transmittance << ", " << o.solar_transmittance << ", " << o.thermal_ir_transmittance << ", " << o.thermal_ir_emissivity_back << ", " << o.thermal_ir_emissivity_front << ", " << o.visible_reflectance_back << ", " << o.visible_reflectance_front << ", " << o.solar_reflectance_front << ", " << o.solar_reflectance_back << ")";
		}
	};

	struct Ifc_organization : Ifc {
		Ifc_identifier _id;
		Ifc_label name;
		Ifc_text description;
		std::vector<Ifc_actor_role *> roles;
		std::vector<Ifc_address *> addresses;

		Ifc_organization() {
			entity = "Ifc_organization";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_organization &o) {
			return os << "Ifc_organization(" << o._id << ", " << o.name << ", " << o.description << ", " << "vector(" << o.roles.size() << ")" << ", " << "vector(" << o.addresses.size() << ")" << ")";
		}
	};

	struct Ifc_organization_relationship : Ifc {
		Ifc_label name;
		Ifc_text description;
		Ifc_organization *relating_organization;
		std::vector<Ifc_organization *> related_organizations;

		Ifc_organization_relationship() {
			entity = "Ifc_organization_relationship";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_organization_relationship &o) {
			return os << "Ifc_organization_relationship(" << o.name << ", " << o.description << ", " << o.relating_organization << ", " << "vector(" << o.related_organizations.size() << ")" << ")";
		}
	};

	struct Ifc_owner_history : Ifc {
		Ifc_person_and_organization *owning_user;
		Ifc_application *owning_application;
		Ifc_state_enum state;
		Ifc_change_action_enum change_action;
		Ifc_time_stamp last_modified_date;
		Ifc_person_and_organization *last_modifying_user;
		Ifc_application *last_modifying_application;
		Ifc_time_stamp creation_date;

		Ifc_owner_history() {
			entity = "Ifc_owner_history";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_owner_history &o) {
			return os << "Ifc_owner_history(" << o.owning_user << ", " << o.owning_application << ", " << o.state << ", " << o.change_action << ", " << o.last_modified_date << ", " << o.last_modifying_user << ", " << o.last_modifying_application << ", " << o.creation_date << ")";
		}
	};

	struct Ifc_person : Ifc {
		Ifc_identifier _id;
		Ifc_label family_name;
		Ifc_label given_name;
		std::vector<Ifc_label> middle_names;
		std::vector<Ifc_label> prefix_titles;
		std::vector<Ifc_label> suffix_titles;
		std::vector<Ifc_actor_role *> roles;
		std::vector<Ifc_address *> addresses;

		Ifc_person() {
			entity = "Ifc_person";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_person &o) {
			return os << "Ifc_person(" << o._id << ", " << o.family_name << ", " << o.given_name << ", " << "vector(" << o.middle_names.size() << ")" << ", " << "vector(" << o.prefix_titles.size() << ")" << ", " << "vector(" << o.suffix_titles.size() << ")" << ", " << "vector(" << o.roles.size() << ")" << ", " << "vector(" << o.addresses.size() << ")" << ")";
		}
	};

	struct Ifc_person_and_organization : Ifc {
		Ifc_person *the_person;
		Ifc_organization *the_organization;
		std::vector<Ifc_actor_role *> roles;

		Ifc_person_and_organization() {
			entity = "Ifc_person_and_organization";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_person_and_organization &o) {
			return os << "Ifc_person_and_organization(" << o.the_person << ", " << o.the_organization << ", " << "vector(" << o.roles.size() << ")" << ")";
		}
	};

	struct Ifc_physical_quantity : Ifc {
		Ifc_label name;
		Ifc_text description;

		virtual ~Ifc_physical_quantity() {}
	};

	struct Ifc_physical_simple_quantity : Ifc_physical_quantity {
		Ifc_named_unit *unit;

		virtual ~Ifc_physical_simple_quantity() {}
	};

	struct Ifc_postal_address : Ifc_address {
		Ifc_label internal_location;
		std::vector<Ifc_label> address_lines;
		Ifc_label postal_box;
		Ifc_label town;
		Ifc_label region;
		Ifc_label postal_code;
		Ifc_label country;

		Ifc_postal_address() {
			entity = "Ifc_postal_address";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_postal_address &o) {
			return os << "Ifc_postal_address(" << o.purpose << ", " << o.description << ", " << o.user_defined_purpose << ", " << o.internal_location << ", " << "vector(" << o.address_lines.size() << ")" << ", " << o.postal_box << ", " << o.town << ", " << o.region << ", " << o.postal_code << ", " << o.country << ")";
		}
	};

	struct Ifc_pre_defined_item : Ifc {
		Ifc_label name;

		virtual ~Ifc_pre_defined_item() {}
	};

	struct Ifc_pre_defined_symbol : Ifc_pre_defined_item {
		virtual ~Ifc_pre_defined_symbol() {}
	};

	struct Ifc_pre_defined_terminator_symbol : Ifc_pre_defined_symbol {
		Ifc_pre_defined_terminator_symbol() {
			entity = "Ifc_pre_defined_terminator_symbol";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_pre_defined_terminator_symbol &o) {
			return os << "Ifc_pre_defined_terminator_symbol(" << o.name << ")";
		}
	};

	struct Ifc_pre_defined_text_font : Ifc_pre_defined_item {
		virtual ~Ifc_pre_defined_text_font() {}
	};

	struct Ifc_presentation_layer_assignment : Ifc {
		Ifc_label name;
		Ifc_text description;
		std::vector<Ifc_layered_item *> assigned_items;
		Ifc_identifier identifier;

		Ifc_presentation_layer_assignment() {
			entity = "Ifc_presentation_layer_assignment";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_presentation_layer_assignment &o) {
			return os << "Ifc_presentation_layer_assignment(" << o.name << ", " << o.description << ", " << "vector(" << o.assigned_items.size() << ")" << ", " << o.identifier << ")";
		}
	};

	struct Ifc_presentation_layer_with_style : Ifc_presentation_layer_assignment {
		int layer_on;
		int layer_frozen;
		int layer_blocked;
		std::vector<Ifc_presentation_style_select *> layer_styles;

		Ifc_presentation_layer_with_style() {
			entity = "Ifc_presentation_layer_with_style";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_presentation_layer_with_style &o) {
			return os << "Ifc_presentation_layer_with_style(" << o.name << ", " << o.description << ", " << "vector(" << o.assigned_items.size() << ")" << ", " << o.identifier << ", " << o.layer_on << ", " << o.layer_frozen << ", " << o.layer_blocked << ", " << "vector(" << o.layer_styles.size() << ")" << ")";
		}
	};

	struct Ifc_presentation_style : Ifc {
		Ifc_label name;

		virtual ~Ifc_presentation_style() {}
	};

	struct Ifc_presentation_style_assignment : Ifc {
		std::vector<Ifc_presentation_style_select *> styles;

		Ifc_presentation_style_assignment() {
			entity = "Ifc_presentation_style_assignment";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_presentation_style_assignment &o) {
			return os << "Ifc_presentation_style_assignment(" << "vector(" << o.styles.size() << ")" << ")";
		}
	};

	struct Ifc_product_representation : Ifc {
		Ifc_label name;
		Ifc_text description;
		std::vector<Ifc_representation *> representations;

		Ifc_product_representation() {
			entity = "Ifc_product_representation";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_product_representation &o) {
			return os << "Ifc_product_representation(" << o.name << ", " << o.description << ", " << "vector(" << o.representations.size() << ")" << ")";
		}
	};

	struct Ifc_products_of_combustion_properties : Ifc_material_properties {
		Ifc_specific_heat_capacity_measure specific_heat_capacity;
		Ifc_positive_ratio_measure n_2_0_content;
		Ifc_positive_ratio_measure c_o_content;
		Ifc_positive_ratio_measure c_o_2_content;

		Ifc_products_of_combustion_properties() {
			entity = "Ifc_products_of_combustion_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_products_of_combustion_properties &o) {
			return os << "Ifc_products_of_combustion_properties(" << o.material << ", " << o.specific_heat_capacity << ", " << o.n_2_0_content << ", " << o.c_o_content << ", " << o.c_o_2_content << ")";
		}
	};

	struct Ifc_profile_def : Ifc {
		Ifc_profile_type_enum profile_type;
		Ifc_label profile_name;

		virtual ~Ifc_profile_def() {}
	};

	struct Ifc_profile_properties : Ifc {
		Ifc_label profile_name;
		Ifc_profile_def *profile_definition;

		virtual ~Ifc_profile_properties() {}
	};

	struct Ifc_property : Ifc {
		Ifc_identifier name;
		Ifc_text description;

		virtual ~Ifc_property() {}
	};

	struct Ifc_property_constraint_relationship : Ifc {
		Ifc_constraint *relating_constraint;
		std::vector<Ifc_property *> related_properties;
		Ifc_label name;
		Ifc_text description;

		Ifc_property_constraint_relationship() {
			entity = "Ifc_property_constraint_relationship";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_property_constraint_relationship &o) {
			return os << "Ifc_property_constraint_relationship(" << o.relating_constraint << ", " << "vector(" << o.related_properties.size() << ")" << ", " << o.name << ", " << o.description << ")";
		}
	};

	struct Ifc_property_dependency_relationship : Ifc {
		Ifc_property *depending_property;
		Ifc_property *dependant_property;
		Ifc_label name;
		Ifc_text description;
		Ifc_text expression;

		Ifc_property_dependency_relationship() {
			entity = "Ifc_property_dependency_relationship";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_property_dependency_relationship &o) {
			return os << "Ifc_property_dependency_relationship(" << o.depending_property << ", " << o.dependant_property << ", " << o.name << ", " << o.description << ", " << o.expression << ")";
		}
	};

	struct Ifc_property_enumeration : Ifc {
		Ifc_label name;
		std::vector<Ifc_value *> enumeration_values;
		Ifc_unit *unit;

		Ifc_property_enumeration() {
			entity = "Ifc_property_enumeration";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_property_enumeration &o) {
			return os << "Ifc_property_enumeration(" << o.name << ", " << "vector(" << o.enumeration_values.size() << ")" << ", " << o.unit << ")";
		}
	};

	struct Ifc_quantity_area : Ifc_physical_simple_quantity {
		Ifc_area_measure area_value;

		Ifc_quantity_area() {
			entity = "Ifc_quantity_area";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_quantity_area &o) {
			return os << "Ifc_quantity_area(" << o.name << ", " << o.description << ", " << o.unit << ", " << o.area_value << ")";
		}
	};

	struct Ifc_quantity_count : Ifc_physical_simple_quantity {
		Ifc_count_measure count_value;

		Ifc_quantity_count() {
			entity = "Ifc_quantity_count";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_quantity_count &o) {
			return os << "Ifc_quantity_count(" << o.name << ", " << o.description << ", " << o.unit << ", " << o.count_value << ")";
		}
	};

	struct Ifc_quantity_length : Ifc_physical_simple_quantity {
		Ifc_length_measure length_value;

		Ifc_quantity_length() {
			entity = "Ifc_quantity_length";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_quantity_length &o) {
			return os << "Ifc_quantity_length(" << o.name << ", " << o.description << ", " << o.unit << ", " << o.length_value << ")";
		}
	};

	struct Ifc_quantity_time : Ifc_physical_simple_quantity {
		Ifc_time_measure time_value;

		Ifc_quantity_time() {
			entity = "Ifc_quantity_time";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_quantity_time &o) {
			return os << "Ifc_quantity_time(" << o.name << ", " << o.description << ", " << o.unit << ", " << o.time_value << ")";
		}
	};

	struct Ifc_quantity_volume : Ifc_physical_simple_quantity {
		Ifc_volume_measure volume_value;

		Ifc_quantity_volume() {
			entity = "Ifc_quantity_volume";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_quantity_volume &o) {
			return os << "Ifc_quantity_volume(" << o.name << ", " << o.description << ", " << o.unit << ", " << o.volume_value << ")";
		}
	};

	struct Ifc_quantity_weight : Ifc_physical_simple_quantity {
		Ifc_mass_measure weight_value;

		Ifc_quantity_weight() {
			entity = "Ifc_quantity_weight";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_quantity_weight &o) {
			return os << "Ifc_quantity_weight(" << o.name << ", " << o.description << ", " << o.unit << ", " << o.weight_value << ")";
		}
	};

	struct Ifc_references_value_document : Ifc {
		Ifc_document_select *referenced_document;
		std::vector<Ifc_applied_value *> referencing_values;
		Ifc_label name;
		Ifc_text description;

		Ifc_references_value_document() {
			entity = "Ifc_references_value_document";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_references_value_document &o) {
			return os << "Ifc_references_value_document(" << o.referenced_document << ", " << "vector(" << o.referencing_values.size() << ")" << ", " << o.name << ", " << o.description << ")";
		}
	};

	struct Ifc_reinforcement_bar_properties : Ifc {
		Ifc_area_measure total_cross_section_area;
		Ifc_label steel_grade;
		Ifc_reinforcing_bar_surface_enum bar_surface;
		Ifc_length_measure effective_depth;
		Ifc_positive_length_measure nominal_bar_diameter;
		Ifc_count_measure bar_count;

		Ifc_reinforcement_bar_properties() {
			entity = "Ifc_reinforcement_bar_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_reinforcement_bar_properties &o) {
			return os << "Ifc_reinforcement_bar_properties(" << o.total_cross_section_area << ", " << o.steel_grade << ", " << o.bar_surface << ", " << o.effective_depth << ", " << o.nominal_bar_diameter << ", " << o.bar_count << ")";
		}
	};

	struct Ifc_relaxation : Ifc {
		Ifc_normalised_ratio_measure relaxation_value;
		Ifc_normalised_ratio_measure initial_stress;

		Ifc_relaxation() {
			entity = "Ifc_relaxation";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_relaxation &o) {
			return os << "Ifc_relaxation(" << o.relaxation_value << ", " << o.initial_stress << ")";
		}
	};

	struct Ifc_representation : Ifc {
		Ifc_representation_context *context_of_items;
		Ifc_label representation_identifier;
		Ifc_label representation_type;
		std::vector<Ifc_representation_item *> items;

		Ifc_representation() {
			entity = "Ifc_representation";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_representation &o) {
			return os << "Ifc_representation(" << o.context_of_items << ", " << o.representation_identifier << ", " << o.representation_type << ", " << "vector(" << o.items.size() << ")" << ")";
		}
	};

	struct Ifc_representation_context : Ifc {
		Ifc_label context_identifier;
		Ifc_label context_type;

		Ifc_representation_context() {
			entity = "Ifc_representation_context";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_representation_context &o) {
			return os << "Ifc_representation_context(" << o.context_identifier << ", " << o.context_type << ")";
		}
	};

	struct Ifc_representation_item : Ifc {
		virtual ~Ifc_representation_item() {}
	};

	struct Ifc_representation_map : Ifc {
		Ifc_axis_2_placement *mapping_origin;
		Ifc_representation *mapped_representation;

		Ifc_representation_map() {
			entity = "Ifc_representation_map";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_representation_map &o) {
			return os << "Ifc_representation_map(" << o.mapping_origin << ", " << o.mapped_representation << ")";
		}
	};

	struct Ifc_rib_plate_profile_properties : Ifc_profile_properties {
		Ifc_positive_length_measure thickness;
		Ifc_positive_length_measure rib_height;
		Ifc_positive_length_measure rib_width;
		Ifc_positive_length_measure rib_spacing;
		Ifc_rib_plate_direction_enum direction;

		Ifc_rib_plate_profile_properties() {
			entity = "Ifc_rib_plate_profile_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rib_plate_profile_properties &o) {
			return os << "Ifc_rib_plate_profile_properties(" << o.profile_name << ", " << o.profile_definition << ", " << o.thickness << ", " << o.rib_height << ", " << o.rib_width << ", " << o.rib_spacing << ", " << o.direction << ")";
		}
	};

	struct Ifc_root : Ifc {
		Ifc_globally_unique_id global_id;
		Ifc_owner_history *owner_history;
		Ifc_label name;
		Ifc_text description;

		virtual ~Ifc_root() {}
	};

	struct Ifc_s_i_unit : Ifc_named_unit {
		Ifc_s_i_prefix prefix;
		Ifc_s_i_unit_name name;

		Ifc_s_i_unit() {
			entity = "Ifc_s_i_unit";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_s_i_unit &o) {
			return os << "Ifc_s_i_unit(" << o.dimensions << ", " << o.unit_type << ", " << o.prefix << ", " << o.name << ")";
		}
	};

	struct Ifc_section_properties : Ifc {
		Ifc_section_type_enum section_type;
		Ifc_profile_def *start_profile;
		Ifc_profile_def *end_profile;

		Ifc_section_properties() {
			entity = "Ifc_section_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_section_properties &o) {
			return os << "Ifc_section_properties(" << o.section_type << ", " << o.start_profile << ", " << o.end_profile << ")";
		}
	};

	struct Ifc_section_reinforcement_properties : Ifc {
		Ifc_length_measure longitudinal_start_position;
		Ifc_length_measure longitudinal_end_position;
		Ifc_length_measure transverse_position;
		Ifc_reinforcing_bar_role_enum reinforcement_role;
		Ifc_section_properties *section_definition;
		std::vector<Ifc_reinforcement_bar_properties *> cross_section_reinforcement_definitions;

		Ifc_section_reinforcement_properties() {
			entity = "Ifc_section_reinforcement_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_section_reinforcement_properties &o) {
			return os << "Ifc_section_reinforcement_properties(" << o.longitudinal_start_position << ", " << o.longitudinal_end_position << ", " << o.transverse_position << ", " << o.reinforcement_role << ", " << o.section_definition << ", " << "vector(" << o.cross_section_reinforcement_definitions.size() << ")" << ")";
		}
	};

	struct Ifc_shape_aspect : Ifc {
		std::vector<Ifc_shape_model *> shape_representations;
		Ifc_label name;
		Ifc_text description;
		int product_definitional;
		Ifc_product_definition_shape *part_of_product_definition_shape;

		Ifc_shape_aspect() {
			entity = "Ifc_shape_aspect";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_shape_aspect &o) {
			return os << "Ifc_shape_aspect(" << "vector(" << o.shape_representations.size() << ")" << ", " << o.name << ", " << o.description << ", " << o.product_definitional << ", " << o.part_of_product_definition_shape << ")";
		}
	};

	struct Ifc_shape_model : Ifc_representation {
		virtual ~Ifc_shape_model() {}
	};

	struct Ifc_shape_representation : Ifc_shape_model {
		Ifc_shape_representation() {
			entity = "Ifc_shape_representation";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_shape_representation &o) {
			return os << "Ifc_shape_representation(" << o.context_of_items << ", " << o.representation_identifier << ", " << o.representation_type << ", " << "vector(" << o.items.size() << ")" << ")";
		}
	};

	struct Ifc_simple_property : Ifc_property {
		virtual ~Ifc_simple_property() {}
	};

	struct Ifc_structural_connection_condition : Ifc {
		Ifc_label name;

		virtual ~Ifc_structural_connection_condition() {}
	};

	struct Ifc_structural_load : Ifc {
		Ifc_label name;

		virtual ~Ifc_structural_load() {}
	};

	struct Ifc_structural_load_static : Ifc_structural_load {
		virtual ~Ifc_structural_load_static() {}
	};

	struct Ifc_structural_load_temperature : Ifc_structural_load_static {
		Ifc_thermodynamic_temperature_measure delta_t___constant;
		Ifc_thermodynamic_temperature_measure delta_t___y;
		Ifc_thermodynamic_temperature_measure delta_t___z;

		Ifc_structural_load_temperature() {
			entity = "Ifc_structural_load_temperature";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_load_temperature &o) {
			return os << "Ifc_structural_load_temperature(" << o.name << ", " << o.delta_t___constant << ", " << o.delta_t___y << ", " << o.delta_t___z << ")";
		}
	};

	struct Ifc_style_model : Ifc_representation {
		virtual ~Ifc_style_model() {}
	};

	struct Ifc_styled_item : Ifc_representation_item {
		Ifc_representation_item *item;
		std::vector<Ifc_presentation_style_assignment *> styles;
		Ifc_label name;

		Ifc_styled_item() {
			entity = "Ifc_styled_item";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_styled_item &o) {
			return os << "Ifc_styled_item(" << o.item << ", " << "vector(" << o.styles.size() << ")" << ", " << o.name << ")";
		}
	};

	struct Ifc_styled_representation : Ifc_style_model {
		Ifc_styled_representation() {
			entity = "Ifc_styled_representation";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_styled_representation &o) {
			return os << "Ifc_styled_representation(" << o.context_of_items << ", " << o.representation_identifier << ", " << o.representation_type << ", " << "vector(" << o.items.size() << ")" << ")";
		}
	};

	struct Ifc_surface_style : Ifc_presentation_style {
		Ifc_surface_side side;
		std::vector<Ifc_surface_style_element_select *> styles;

		Ifc_surface_style() {
			entity = "Ifc_surface_style";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_style &o) {
			return os << "Ifc_surface_style(" << o.name << ", " << o.side << ", " << "vector(" << o.styles.size() << ")" << ")";
		}
	};

	struct Ifc_surface_style_lighting : Ifc {
		Ifc_colour_rgb *diffuse_transmission_colour;
		Ifc_colour_rgb *diffuse_reflection_colour;
		Ifc_colour_rgb *transmission_colour;
		Ifc_colour_rgb *reflectance_colour;

		Ifc_surface_style_lighting() {
			entity = "Ifc_surface_style_lighting";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_style_lighting &o) {
			return os << "Ifc_surface_style_lighting(" << o.diffuse_transmission_colour << ", " << o.diffuse_reflection_colour << ", " << o.transmission_colour << ", " << o.reflectance_colour << ")";
		}
	};

	struct Ifc_surface_style_refraction : Ifc {
		Ifc_real refraction_index;
		Ifc_real dispersion_factor;

		Ifc_surface_style_refraction() {
			entity = "Ifc_surface_style_refraction";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_style_refraction &o) {
			return os << "Ifc_surface_style_refraction(" << o.refraction_index << ", " << o.dispersion_factor << ")";
		}
	};

	struct Ifc_surface_style_shading : Ifc {
		Ifc_colour_rgb *surface_colour;

		Ifc_surface_style_shading() {
			entity = "Ifc_surface_style_shading";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_style_shading &o) {
			return os << "Ifc_surface_style_shading(" << o.surface_colour << ")";
		}
	};

	struct Ifc_surface_style_with_textures : Ifc {
		std::vector<Ifc_surface_texture *> textures;

		Ifc_surface_style_with_textures() {
			entity = "Ifc_surface_style_with_textures";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_style_with_textures &o) {
			return os << "Ifc_surface_style_with_textures(" << "vector(" << o.textures.size() << ")" << ")";
		}
	};

	struct Ifc_surface_texture : Ifc {
		bool repeat_s;
		bool repeat_t;
		Ifc_surface_texture_enum texture_type;
		Ifc_cartesian_transformation_operator_2_d *texture_transform;

		virtual ~Ifc_surface_texture() {}
	};

	struct Ifc_symbol_style : Ifc_presentation_style {
		Ifc_symbol_style_select *style_of_symbol;

		Ifc_symbol_style() {
			entity = "Ifc_symbol_style";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_symbol_style &o) {
			return os << "Ifc_symbol_style(" << o.name << ", " << o.style_of_symbol << ")";
		}
	};

	struct Ifc_table : Ifc {
		std::string name;
		std::vector<Ifc_table_row *> rows;

		Ifc_table() {
			entity = "Ifc_table";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_table &o) {
			return os << "Ifc_table(" << o.name << ", " << "vector(" << o.rows.size() << ")" << ")";
		}
	};

	struct Ifc_table_row : Ifc {
		std::vector<Ifc_value *> row_cells;
		bool is_heading;

		Ifc_table_row() {
			entity = "Ifc_table_row";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_table_row &o) {
			return os << "Ifc_table_row(" << "vector(" << o.row_cells.size() << ")" << ", " << o.is_heading << ")";
		}
	};

	struct Ifc_telecom_address : Ifc_address {
		std::vector<Ifc_label> telephone_numbers;
		std::vector<Ifc_label> facsimile_numbers;
		Ifc_label pager_number;
		std::vector<Ifc_label> electronic_mail_addresses;
		Ifc_label w_w_w_home_page_u_r_l;

		Ifc_telecom_address() {
			entity = "Ifc_telecom_address";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_telecom_address &o) {
			return os << "Ifc_telecom_address(" << o.purpose << ", " << o.description << ", " << o.user_defined_purpose << ", " << "vector(" << o.telephone_numbers.size() << ")" << ", " << "vector(" << o.facsimile_numbers.size() << ")" << ", " << o.pager_number << ", " << "vector(" << o.electronic_mail_addresses.size() << ")" << ", " << o.w_w_w_home_page_u_r_l << ")";
		}
	};

	struct Ifc_text_style : Ifc_presentation_style {
		Ifc_character_style_select *text_character_appearance;
		Ifc_text_style_select *text_style;
		Ifc_text_font_select *text_font_style;

		Ifc_text_style() {
			entity = "Ifc_text_style";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_text_style &o) {
			return os << "Ifc_text_style(" << o.name << ", " << o.text_character_appearance << ", " << o.text_style << ", " << o.text_font_style << ")";
		}
	};

	struct Ifc_text_style_font_model : Ifc_pre_defined_text_font {
		std::vector<Ifc_text_font_name> font_family;
		Ifc_font_style font_style;
		Ifc_font_variant font_variant;
		Ifc_font_weight font_weight;
		Ifc_size_select *font_size;

		Ifc_text_style_font_model() {
			entity = "Ifc_text_style_font_model";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_text_style_font_model &o) {
			return os << "Ifc_text_style_font_model(" << o.name << ", " << "vector(" << o.font_family.size() << ")" << ", " << o.font_style << ", " << o.font_variant << ", " << o.font_weight << ", " << o.font_size << ")";
		}
	};

	struct Ifc_text_style_for_defined_font : Ifc {
		Ifc_colour *colour;
		Ifc_colour *background_colour;

		Ifc_text_style_for_defined_font() {
			entity = "Ifc_text_style_for_defined_font";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_text_style_for_defined_font &o) {
			return os << "Ifc_text_style_for_defined_font(" << o.colour << ", " << o.background_colour << ")";
		}
	};

	struct Ifc_text_style_text_model : Ifc {
		Ifc_size_select *text_indent;
		Ifc_text_alignment text_align;
		Ifc_text_decoration text_decoration;
		Ifc_size_select *letter_spacing;
		Ifc_size_select *word_spacing;
		Ifc_text_transformation text_transform;
		Ifc_size_select *line_height;

		Ifc_text_style_text_model() {
			entity = "Ifc_text_style_text_model";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_text_style_text_model &o) {
			return os << "Ifc_text_style_text_model(" << o.text_indent << ", " << o.text_align << ", " << o.text_decoration << ", " << o.letter_spacing << ", " << o.word_spacing << ", " << o.text_transform << ", " << o.line_height << ")";
		}
	};

	struct Ifc_text_style_with_box_characteristics : Ifc {
		Ifc_positive_length_measure box_height;
		Ifc_positive_length_measure box_width;
		Ifc_plane_angle_measure box_slant_angle;
		Ifc_plane_angle_measure box_rotate_angle;
		Ifc_size_select *character_spacing;

		Ifc_text_style_with_box_characteristics() {
			entity = "Ifc_text_style_with_box_characteristics";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_text_style_with_box_characteristics &o) {
			return os << "Ifc_text_style_with_box_characteristics(" << o.box_height << ", " << o.box_width << ", " << o.box_slant_angle << ", " << o.box_rotate_angle << ", " << o.character_spacing << ")";
		}
	};

	struct Ifc_texture_coordinate : Ifc {
		virtual ~Ifc_texture_coordinate() {}
	};

	struct Ifc_texture_coordinate_generator : Ifc_texture_coordinate {
		Ifc_label mode;
		std::vector<Ifc_simple_value *> parameter;

		Ifc_texture_coordinate_generator() {
			entity = "Ifc_texture_coordinate_generator";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_texture_coordinate_generator &o) {
			return os << "Ifc_texture_coordinate_generator(" << o.mode << ", " << "vector(" << o.parameter.size() << ")" << ")";
		}
	};

	struct Ifc_texture_map : Ifc_texture_coordinate {
		std::vector<Ifc_vertex_based_texture_map *> texture_maps;

		Ifc_texture_map() {
			entity = "Ifc_texture_map";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_texture_map &o) {
			return os << "Ifc_texture_map(" << "vector(" << o.texture_maps.size() << ")" << ")";
		}
	};

	struct Ifc_texture_vertex : Ifc {
		std::vector<Ifc_parameter_value> coordinates;

		Ifc_texture_vertex() {
			entity = "Ifc_texture_vertex";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_texture_vertex &o) {
			return os << "Ifc_texture_vertex(" << "vector(" << o.coordinates.size() << ")" << ")";
		}
	};

	struct Ifc_thermal_material_properties : Ifc_material_properties {
		Ifc_specific_heat_capacity_measure specific_heat_capacity;
		Ifc_thermodynamic_temperature_measure boiling_point;
		Ifc_thermodynamic_temperature_measure freezing_point;
		Ifc_thermal_conductivity_measure thermal_conductivity;

		Ifc_thermal_material_properties() {
			entity = "Ifc_thermal_material_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_thermal_material_properties &o) {
			return os << "Ifc_thermal_material_properties(" << o.material << ", " << o.specific_heat_capacity << ", " << o.boiling_point << ", " << o.freezing_point << ", " << o.thermal_conductivity << ")";
		}
	};

	struct Ifc_time_series : Ifc {
		Ifc_label name;
		Ifc_text description;
		Ifc_date_time_select *start_time;
		Ifc_date_time_select *end_time;
		Ifc_time_series_data_type_enum time_series_data_type;
		Ifc_data_origin_enum data_origin;
		Ifc_label user_defined_data_origin;
		Ifc_unit *unit;

		virtual ~Ifc_time_series() {}
	};

	struct Ifc_time_series_reference_relationship : Ifc {
		Ifc_time_series *referenced_time_series;
		std::vector<Ifc_document_select *> time_series_references;

		Ifc_time_series_reference_relationship() {
			entity = "Ifc_time_series_reference_relationship";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_time_series_reference_relationship &o) {
			return os << "Ifc_time_series_reference_relationship(" << o.referenced_time_series << ", " << "vector(" << o.time_series_references.size() << ")" << ")";
		}
	};

	struct Ifc_time_series_value : Ifc {
		std::vector<Ifc_value *> list_values;

		Ifc_time_series_value() {
			entity = "Ifc_time_series_value";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_time_series_value &o) {
			return os << "Ifc_time_series_value(" << "vector(" << o.list_values.size() << ")" << ")";
		}
	};

	struct Ifc_topological_representation_item : Ifc_representation_item {
		virtual ~Ifc_topological_representation_item() {}
	};

	struct Ifc_topology_representation : Ifc_shape_model {
		Ifc_topology_representation() {
			entity = "Ifc_topology_representation";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_topology_representation &o) {
			return os << "Ifc_topology_representation(" << o.context_of_items << ", " << o.representation_identifier << ", " << o.representation_type << ", " << "vector(" << o.items.size() << ")" << ")";
		}
	};

	struct Ifc_unit_assignment : Ifc {
		std::vector<Ifc_unit *> units;

		Ifc_unit_assignment() {
			entity = "Ifc_unit_assignment";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_unit_assignment &o) {
			return os << "Ifc_unit_assignment(" << "vector(" << o.units.size() << ")" << ")";
		}
	};

	struct Ifc_vertex : Ifc_topological_representation_item {
		Ifc_vertex() {
			entity = "Ifc_vertex";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_vertex &o) {
			return os << "Ifc_vertex(" << ")";
		}
	};

	struct Ifc_vertex_based_texture_map : Ifc {
		std::vector<Ifc_texture_vertex *> texture_vertices;
		std::vector<Ifc_cartesian_point *> texture_points;

		Ifc_vertex_based_texture_map() {
			entity = "Ifc_vertex_based_texture_map";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_vertex_based_texture_map &o) {
			return os << "Ifc_vertex_based_texture_map(" << "vector(" << o.texture_vertices.size() << ")" << ", " << "vector(" << o.texture_points.size() << ")" << ")";
		}
	};

	struct Ifc_vertex_point : Ifc_vertex {
		Ifc_point *vertex_geometry;

		Ifc_vertex_point() {
			entity = "Ifc_vertex_point";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_vertex_point &o) {
			return os << "Ifc_vertex_point(" << o.vertex_geometry << ")";
		}
	};

	struct Ifc_virtual_grid_intersection : Ifc {
		std::vector<Ifc_grid_axis *> intersecting_axes;
		std::vector<Ifc_length_measure> offset_distances;

		Ifc_virtual_grid_intersection() {
			entity = "Ifc_virtual_grid_intersection";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_virtual_grid_intersection &o) {
			return os << "Ifc_virtual_grid_intersection(" << "vector(" << o.intersecting_axes.size() << ")" << ", " << "vector(" << o.offset_distances.size() << ")" << ")";
		}
	};

	struct Ifc_water_properties : Ifc_material_properties {
		bool is_potable;
		Ifc_ion_concentration_measure hardness;
		Ifc_ion_concentration_measure alkalinity_concentration;
		Ifc_ion_concentration_measure acidity_concentration;
		Ifc_normalised_ratio_measure impurities_content;
		Ifc_p_h_measure p_h_level;
		Ifc_normalised_ratio_measure dissolved_solids_content;

		Ifc_water_properties() {
			entity = "Ifc_water_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_water_properties &o) {
			return os << "Ifc_water_properties(" << o.material << ", " << o.is_potable << ", " << o.hardness << ", " << o.alkalinity_concentration << ", " << o.acidity_concentration << ", " << o.impurities_content << ", " << o.p_h_level << ", " << o.dissolved_solids_content << ")";
		}
	};

	struct Ifc_annotation_occurrence : Ifc_styled_item {
		virtual ~Ifc_annotation_occurrence() {}
	};

	struct Ifc_annotation_surface_occurrence : Ifc_annotation_occurrence {
		Ifc_annotation_surface_occurrence() {
			entity = "Ifc_annotation_surface_occurrence";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_annotation_surface_occurrence &o) {
			return os << "Ifc_annotation_surface_occurrence(" << o.item << ", " << "vector(" << o.styles.size() << ")" << ", " << o.name << ")";
		}
	};

	struct Ifc_annotation_symbol_occurrence : Ifc_annotation_occurrence {
		Ifc_annotation_symbol_occurrence() {
			entity = "Ifc_annotation_symbol_occurrence";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_annotation_symbol_occurrence &o) {
			return os << "Ifc_annotation_symbol_occurrence(" << o.item << ", " << "vector(" << o.styles.size() << ")" << ", " << o.name << ")";
		}
	};

	struct Ifc_annotation_text_occurrence : Ifc_annotation_occurrence {
		Ifc_annotation_text_occurrence() {
			entity = "Ifc_annotation_text_occurrence";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_annotation_text_occurrence &o) {
			return os << "Ifc_annotation_text_occurrence(" << o.item << ", " << "vector(" << o.styles.size() << ")" << ", " << o.name << ")";
		}
	};

	struct Ifc_arbitrary_closed_profile_def : Ifc_profile_def {
		Ifc_curve *outer_curve;

		Ifc_arbitrary_closed_profile_def() {
			entity = "Ifc_arbitrary_closed_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_arbitrary_closed_profile_def &o) {
			return os << "Ifc_arbitrary_closed_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.outer_curve << ")";
		}
	};

	struct Ifc_arbitrary_open_profile_def : Ifc_profile_def {
		Ifc_bounded_curve *curve;

		Ifc_arbitrary_open_profile_def() {
			entity = "Ifc_arbitrary_open_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_arbitrary_open_profile_def &o) {
			return os << "Ifc_arbitrary_open_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.curve << ")";
		}
	};

	struct Ifc_arbitrary_profile_def_with_voids : Ifc_arbitrary_closed_profile_def {
		std::vector<Ifc_curve *> inner_curves;

		Ifc_arbitrary_profile_def_with_voids() {
			entity = "Ifc_arbitrary_profile_def_with_voids";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_arbitrary_profile_def_with_voids &o) {
			return os << "Ifc_arbitrary_profile_def_with_voids(" << o.profile_type << ", " << o.profile_name << ", " << o.outer_curve << ", " << "vector(" << o.inner_curves.size() << ")" << ")";
		}
	};

	struct Ifc_blob_texture : Ifc_surface_texture {
		Ifc_identifier raster_format;
		bool raster_code;

		Ifc_blob_texture() {
			entity = "Ifc_blob_texture";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_blob_texture &o) {
			return os << "Ifc_blob_texture(" << o.repeat_s << ", " << o.repeat_t << ", " << o.texture_type << ", " << o.texture_transform << ", " << o.raster_format << ", " << o.raster_code << ")";
		}
	};

	struct Ifc_center_line_profile_def : Ifc_arbitrary_open_profile_def {
		Ifc_positive_length_measure thickness;

		Ifc_center_line_profile_def() {
			entity = "Ifc_center_line_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_center_line_profile_def &o) {
			return os << "Ifc_center_line_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.curve << ", " << o.thickness << ")";
		}
	};

	struct Ifc_classification_reference : Ifc_external_reference {
		Ifc_classification *referenced_source;

		Ifc_classification_reference() {
			entity = "Ifc_classification_reference";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_classification_reference &o) {
			return os << "Ifc_classification_reference(" << o.location << ", " << o.item_reference << ", " << o.name << ", " << o.referenced_source << ")";
		}
	};

	struct Ifc_colour_rgb : Ifc_colour_specification {
		Ifc_normalised_ratio_measure red;
		Ifc_normalised_ratio_measure green;
		Ifc_normalised_ratio_measure blue;

		Ifc_colour_rgb() {
			entity = "Ifc_colour_rgb";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_colour_rgb &o) {
			return os << "Ifc_colour_rgb(" << o.name << ", " << o.red << ", " << o.green << ", " << o.blue << ")";
		}
	};

	struct Ifc_complex_property : Ifc_property {
		Ifc_identifier usage_name;
		std::vector<Ifc_property *> has_properties;

		Ifc_complex_property() {
			entity = "Ifc_complex_property";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_complex_property &o) {
			return os << "Ifc_complex_property(" << o.name << ", " << o.description << ", " << o.usage_name << ", " << "vector(" << o.has_properties.size() << ")" << ")";
		}
	};

	struct Ifc_composite_profile_def : Ifc_profile_def {
		std::vector<Ifc_profile_def *> profiles;
		Ifc_label label;

		Ifc_composite_profile_def() {
			entity = "Ifc_composite_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_composite_profile_def &o) {
			return os << "Ifc_composite_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << "vector(" << o.profiles.size() << ")" << ", " << o.label << ")";
		}
	};

	struct Ifc_connected_face_set : Ifc_topological_representation_item {
		std::vector<Ifc_face *> cfs_faces;

		Ifc_connected_face_set() {
			entity = "Ifc_connected_face_set";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_connected_face_set &o) {
			return os << "Ifc_connected_face_set(" << "vector(" << o.cfs_faces.size() << ")" << ")";
		}
	};

	struct Ifc_connection_curve_geometry : Ifc_connection_geometry {
		Ifc_curve_or_edge_curve *curve_on_relating_element;
		Ifc_curve_or_edge_curve *curve_on_related_element;

		Ifc_connection_curve_geometry() {
			entity = "Ifc_connection_curve_geometry";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_connection_curve_geometry &o) {
			return os << "Ifc_connection_curve_geometry(" << o.curve_on_relating_element << ", " << o.curve_on_related_element << ")";
		}
	};

	struct Ifc_connection_point_eccentricity : Ifc_connection_point_geometry {
		Ifc_length_measure eccentricity_in_x;
		Ifc_length_measure eccentricity_in_y;
		Ifc_length_measure eccentricity_in_z;

		Ifc_connection_point_eccentricity() {
			entity = "Ifc_connection_point_eccentricity";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_connection_point_eccentricity &o) {
			return os << "Ifc_connection_point_eccentricity(" << o.point_on_relating_element << ", " << o.point_on_related_element << ", " << o.eccentricity_in_x << ", " << o.eccentricity_in_y << ", " << o.eccentricity_in_z << ")";
		}
	};

	struct Ifc_context_dependent_unit : Ifc_named_unit {
		Ifc_label name;

		Ifc_context_dependent_unit() {
			entity = "Ifc_context_dependent_unit";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_context_dependent_unit &o) {
			return os << "Ifc_context_dependent_unit(" << o.dimensions << ", " << o.unit_type << ", " << o.name << ")";
		}
	};

	struct Ifc_conversion_based_unit : Ifc_named_unit {
		Ifc_label name;
		Ifc_measure_with_unit *conversion_factor;

		Ifc_conversion_based_unit() {
			entity = "Ifc_conversion_based_unit";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_conversion_based_unit &o) {
			return os << "Ifc_conversion_based_unit(" << o.dimensions << ", " << o.unit_type << ", " << o.name << ", " << o.conversion_factor << ")";
		}
	};

	struct Ifc_curve_style : Ifc_presentation_style {
		Ifc_curve_font_or_scaled_curve_font_select *curve_font;
		Ifc_size_select *curve_width;
		Ifc_colour *curve_colour;

		Ifc_curve_style() {
			entity = "Ifc_curve_style";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_curve_style &o) {
			return os << "Ifc_curve_style(" << o.name << ", " << o.curve_font << ", " << o.curve_width << ", " << o.curve_colour << ")";
		}
	};

	struct Ifc_derived_profile_def : Ifc_profile_def {
		Ifc_profile_def *parent_profile;
		Ifc_cartesian_transformation_operator_2_d *_operator;
		Ifc_label label;

		Ifc_derived_profile_def() {
			entity = "Ifc_derived_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_derived_profile_def &o) {
			return os << "Ifc_derived_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.parent_profile << ", " << o._operator << ", " << o.label << ")";
		}
	};

	struct Ifc_dimension_callout_relationship : Ifc_draughting_callout_relationship {
		Ifc_dimension_callout_relationship() {
			entity = "Ifc_dimension_callout_relationship";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_dimension_callout_relationship &o) {
			return os << "Ifc_dimension_callout_relationship(" << o.name << ", " << o.description << ", " << o.relating_draughting_callout << ", " << o.related_draughting_callout << ")";
		}
	};

	struct Ifc_dimension_pair : Ifc_draughting_callout_relationship {
		Ifc_dimension_pair() {
			entity = "Ifc_dimension_pair";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_dimension_pair &o) {
			return os << "Ifc_dimension_pair(" << o.name << ", " << o.description << ", " << o.relating_draughting_callout << ", " << o.related_draughting_callout << ")";
		}
	};

	struct Ifc_document_reference : Ifc_external_reference {
		Ifc_document_reference() {
			entity = "Ifc_document_reference";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_document_reference &o) {
			return os << "Ifc_document_reference(" << o.location << ", " << o.item_reference << ", " << o.name << ")";
		}
	};

	struct Ifc_draughting_pre_defined_text_font : Ifc_pre_defined_text_font {
		Ifc_draughting_pre_defined_text_font() {
			entity = "Ifc_draughting_pre_defined_text_font";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_draughting_pre_defined_text_font &o) {
			return os << "Ifc_draughting_pre_defined_text_font(" << o.name << ")";
		}
	};

	struct Ifc_edge : Ifc_topological_representation_item {
		Ifc_vertex *edge_start;
		Ifc_vertex *edge_end;

		Ifc_edge() {
			entity = "Ifc_edge";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_edge &o) {
			return os << "Ifc_edge(" << o.edge_start << ", " << o.edge_end << ")";
		}
	};

	struct Ifc_edge_curve : Ifc_edge {
		Ifc_curve *edge_geometry;
		bool same_sense;

		Ifc_edge_curve() {
			entity = "Ifc_edge_curve";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_edge_curve &o) {
			return os << "Ifc_edge_curve(" << o.edge_start << ", " << o.edge_end << ", " << o.edge_geometry << ", " << o.same_sense << ")";
		}
	};

	struct Ifc_extended_material_properties : Ifc_material_properties {
		std::vector<Ifc_property *> extended_properties;
		Ifc_text description;
		Ifc_label name;

		Ifc_extended_material_properties() {
			entity = "Ifc_extended_material_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_extended_material_properties &o) {
			return os << "Ifc_extended_material_properties(" << o.material << ", " << "vector(" << o.extended_properties.size() << ")" << ", " << o.description << ", " << o.name << ")";
		}
	};

	struct Ifc_face : Ifc_topological_representation_item {
		std::vector<Ifc_face_bound *> bounds;

		Ifc_face() {
			entity = "Ifc_face";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_face &o) {
			return os << "Ifc_face(" << "vector(" << o.bounds.size() << ")" << ")";
		}
	};

	struct Ifc_face_bound : Ifc_topological_representation_item {
		Ifc_loop *bound;
		bool orientation;

		Ifc_face_bound() {
			entity = "Ifc_face_bound";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_face_bound &o) {
			return os << "Ifc_face_bound(" << o.bound << ", " << o.orientation << ")";
		}
	};

	struct Ifc_face_outer_bound : Ifc_face_bound {
		Ifc_face_outer_bound() {
			entity = "Ifc_face_outer_bound";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_face_outer_bound &o) {
			return os << "Ifc_face_outer_bound(" << o.bound << ", " << o.orientation << ")";
		}
	};

	struct Ifc_face_surface : Ifc_face {
		Ifc_surface *face_surface;
		bool same_sense;

		Ifc_face_surface() {
			entity = "Ifc_face_surface";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_face_surface &o) {
			return os << "Ifc_face_surface(" << "vector(" << o.bounds.size() << ")" << ", " << o.face_surface << ", " << o.same_sense << ")";
		}
	};

	struct Ifc_failure_connection_condition : Ifc_structural_connection_condition {
		Ifc_force_measure tension_failure_x;
		Ifc_force_measure tension_failure_y;
		Ifc_force_measure tension_failure_z;
		Ifc_force_measure compression_failure_x;
		Ifc_force_measure compression_failure_y;
		Ifc_force_measure compression_failure_z;

		Ifc_failure_connection_condition() {
			entity = "Ifc_failure_connection_condition";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_failure_connection_condition &o) {
			return os << "Ifc_failure_connection_condition(" << o.name << ", " << o.tension_failure_x << ", " << o.tension_failure_y << ", " << o.tension_failure_z << ", " << o.compression_failure_x << ", " << o.compression_failure_y << ", " << o.compression_failure_z << ")";
		}
	};

	struct Ifc_fill_area_style : Ifc_presentation_style {
		std::vector<Ifc_fill_style_select *> fill_styles;

		Ifc_fill_area_style() {
			entity = "Ifc_fill_area_style";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_fill_area_style &o) {
			return os << "Ifc_fill_area_style(" << o.name << ", " << "vector(" << o.fill_styles.size() << ")" << ")";
		}
	};

	struct Ifc_fuel_properties : Ifc_material_properties {
		Ifc_thermodynamic_temperature_measure combustion_temperature;
		Ifc_positive_ratio_measure carbon_content;
		Ifc_heating_value_measure lower_heating_value;
		Ifc_heating_value_measure higher_heating_value;

		Ifc_fuel_properties() {
			entity = "Ifc_fuel_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_fuel_properties &o) {
			return os << "Ifc_fuel_properties(" << o.material << ", " << o.combustion_temperature << ", " << o.carbon_content << ", " << o.lower_heating_value << ", " << o.higher_heating_value << ")";
		}
	};

	struct Ifc_general_material_properties : Ifc_material_properties {
		Ifc_molecular_weight_measure molecular_weight;
		Ifc_normalised_ratio_measure porosity;
		Ifc_mass_density_measure mass_density;

		Ifc_general_material_properties() {
			entity = "Ifc_general_material_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_general_material_properties &o) {
			return os << "Ifc_general_material_properties(" << o.material << ", " << o.molecular_weight << ", " << o.porosity << ", " << o.mass_density << ")";
		}
	};

	struct Ifc_general_profile_properties : Ifc_profile_properties {
		Ifc_mass_per_length_measure physical_weight;
		Ifc_positive_length_measure perimeter;
		Ifc_positive_length_measure minimum_plate_thickness;
		Ifc_positive_length_measure maximum_plate_thickness;
		Ifc_area_measure cross_section_area;

		Ifc_general_profile_properties() {
			entity = "Ifc_general_profile_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_general_profile_properties &o) {
			return os << "Ifc_general_profile_properties(" << o.profile_name << ", " << o.profile_definition << ", " << o.physical_weight << ", " << o.perimeter << ", " << o.minimum_plate_thickness << ", " << o.maximum_plate_thickness << ", " << o.cross_section_area << ")";
		}
	};

	struct Ifc_geometric_representation_context : Ifc_representation_context {
		Ifc_dimension_count coordinate_space_dimension;
		double precision;
		Ifc_axis_2_placement *world_coordinate_system;
		Ifc_direction *true_north;

		Ifc_geometric_representation_context() {
			entity = "Ifc_geometric_representation_context";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_geometric_representation_context &o) {
			return os << "Ifc_geometric_representation_context(" << o.context_identifier << ", " << o.context_type << ", " << o.coordinate_space_dimension << ", " << o.precision << ", " << o.world_coordinate_system << ", " << o.true_north << ")";
		}
	};

	struct Ifc_geometric_representation_item : Ifc_representation_item {
		virtual ~Ifc_geometric_representation_item() {}
	};

	struct Ifc_geometric_representation_sub_context : Ifc_geometric_representation_context {
		Ifc_geometric_representation_context *parent_context;
		Ifc_positive_ratio_measure target_scale;
		Ifc_geometric_projection_enum target_view;
		Ifc_label user_defined_target_view;

		Ifc_geometric_representation_sub_context() {
			entity = "Ifc_geometric_representation_sub_context";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_geometric_representation_sub_context &o) {
			return os << "Ifc_geometric_representation_sub_context(" << o.context_identifier << ", " << o.context_type << ", " << o.coordinate_space_dimension << ", " << o.precision << ", " << o.world_coordinate_system << ", " << o.true_north << ", " << o.parent_context << ", " << o.target_scale << ", " << o.target_view << ", " << o.user_defined_target_view << ")";
		}
	};

	struct Ifc_geometric_set : Ifc_geometric_representation_item {
		std::vector<Ifc_geometric_set_select *> elements;

		Ifc_geometric_set() {
			entity = "Ifc_geometric_set";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_geometric_set &o) {
			return os << "Ifc_geometric_set(" << "vector(" << o.elements.size() << ")" << ")";
		}
	};

	struct Ifc_grid_placement : Ifc_object_placement {
		Ifc_virtual_grid_intersection *placement_location;
		Ifc_virtual_grid_intersection *placement_ref_direction;

		Ifc_grid_placement() {
			entity = "Ifc_grid_placement";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_grid_placement &o) {
			return os << "Ifc_grid_placement(" << o.placement_location << ", " << o.placement_ref_direction << ")";
		}
	};

	struct Ifc_half_space_solid : Ifc_geometric_representation_item {
		Ifc_surface *base_surface;
		bool agreement_flag;

		Ifc_half_space_solid() {
			entity = "Ifc_half_space_solid";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_half_space_solid &o) {
			return os << "Ifc_half_space_solid(" << o.base_surface << ", " << o.agreement_flag << ")";
		}
	};

	struct Ifc_hygroscopic_material_properties : Ifc_material_properties {
		Ifc_positive_ratio_measure upper_vapor_resistance_factor;
		Ifc_positive_ratio_measure lower_vapor_resistance_factor;
		Ifc_isothermal_moisture_capacity_measure isothermal_moisture_capacity;
		Ifc_vapor_permeability_measure vapor_permeability;
		Ifc_moisture_diffusivity_measure moisture_diffusivity;

		Ifc_hygroscopic_material_properties() {
			entity = "Ifc_hygroscopic_material_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_hygroscopic_material_properties &o) {
			return os << "Ifc_hygroscopic_material_properties(" << o.material << ", " << o.upper_vapor_resistance_factor << ", " << o.lower_vapor_resistance_factor << ", " << o.isothermal_moisture_capacity << ", " << o.vapor_permeability << ", " << o.moisture_diffusivity << ")";
		}
	};

	struct Ifc_image_texture : Ifc_surface_texture {
		Ifc_identifier url_reference;

		Ifc_image_texture() {
			entity = "Ifc_image_texture";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_image_texture &o) {
			return os << "Ifc_image_texture(" << o.repeat_s << ", " << o.repeat_t << ", " << o.texture_type << ", " << o.texture_transform << ", " << o.url_reference << ")";
		}
	};

	struct Ifc_irregular_time_series : Ifc_time_series {
		std::vector<Ifc_irregular_time_series_value *> values;

		Ifc_irregular_time_series() {
			entity = "Ifc_irregular_time_series";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_irregular_time_series &o) {
			return os << "Ifc_irregular_time_series(" << o.name << ", " << o.description << ", " << o.start_time << ", " << o.end_time << ", " << o.time_series_data_type << ", " << o.data_origin << ", " << o.user_defined_data_origin << ", " << o.unit << ", " << "vector(" << o.values.size() << ")" << ")";
		}
	};

	struct Ifc_light_source : Ifc_geometric_representation_item {
		Ifc_label name;
		Ifc_colour_rgb *light_colour;
		Ifc_normalised_ratio_measure ambient_intensity;
		Ifc_normalised_ratio_measure intensity;

		virtual ~Ifc_light_source() {}
	};

	struct Ifc_light_source_ambient : Ifc_light_source {
		Ifc_light_source_ambient() {
			entity = "Ifc_light_source_ambient";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_light_source_ambient &o) {
			return os << "Ifc_light_source_ambient(" << o.name << ", " << o.light_colour << ", " << o.ambient_intensity << ", " << o.intensity << ")";
		}
	};

	struct Ifc_light_source_directional : Ifc_light_source {
		Ifc_direction *orientation;

		Ifc_light_source_directional() {
			entity = "Ifc_light_source_directional";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_light_source_directional &o) {
			return os << "Ifc_light_source_directional(" << o.name << ", " << o.light_colour << ", " << o.ambient_intensity << ", " << o.intensity << ", " << o.orientation << ")";
		}
	};

	struct Ifc_light_source_goniometric : Ifc_light_source {
		Ifc_axis_2_placement_3_d *position;
		Ifc_colour_rgb *colour_appearance;
		Ifc_thermodynamic_temperature_measure colour_temperature;
		Ifc_luminous_flux_measure luminous_flux;
		Ifc_light_emission_source_enum light_emission_source;
		Ifc_light_distribution_data_source_select *light_distribution_data_source;

		Ifc_light_source_goniometric() {
			entity = "Ifc_light_source_goniometric";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_light_source_goniometric &o) {
			return os << "Ifc_light_source_goniometric(" << o.name << ", " << o.light_colour << ", " << o.ambient_intensity << ", " << o.intensity << ", " << o.position << ", " << o.colour_appearance << ", " << o.colour_temperature << ", " << o.luminous_flux << ", " << o.light_emission_source << ", " << o.light_distribution_data_source << ")";
		}
	};

	struct Ifc_light_source_positional : Ifc_light_source {
		Ifc_cartesian_point *position;
		Ifc_positive_length_measure radius;
		Ifc_real constant_attenuation;
		Ifc_real distance_attenuation;
		Ifc_real quadric_attenuation;

		Ifc_light_source_positional() {
			entity = "Ifc_light_source_positional";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_light_source_positional &o) {
			return os << "Ifc_light_source_positional(" << o.name << ", " << o.light_colour << ", " << o.ambient_intensity << ", " << o.intensity << ", " << o.position << ", " << o.radius << ", " << o.constant_attenuation << ", " << o.distance_attenuation << ", " << o.quadric_attenuation << ")";
		}
	};

	struct Ifc_light_source_spot : Ifc_light_source_positional {
		Ifc_direction *orientation;
		Ifc_real concentration_exponent;
		Ifc_positive_plane_angle_measure spread_angle;
		Ifc_positive_plane_angle_measure beam_width_angle;

		Ifc_light_source_spot() {
			entity = "Ifc_light_source_spot";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_light_source_spot &o) {
			return os << "Ifc_light_source_spot(" << o.name << ", " << o.light_colour << ", " << o.ambient_intensity << ", " << o.intensity << ", " << o.position << ", " << o.radius << ", " << o.constant_attenuation << ", " << o.distance_attenuation << ", " << o.quadric_attenuation << ", " << o.orientation << ", " << o.concentration_exponent << ", " << o.spread_angle << ", " << o.beam_width_angle << ")";
		}
	};

	struct Ifc_local_placement : Ifc_object_placement {
		Ifc_object_placement *placement_rel_to;
		Ifc_axis_2_placement *relative_placement;

		Ifc_local_placement() {
			entity = "Ifc_local_placement";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_local_placement &o) {
			return os << "Ifc_local_placement(" << o.placement_rel_to << ", " << o.relative_placement << ")";
		}
	};

	struct Ifc_loop : Ifc_topological_representation_item {
		Ifc_loop() {
			entity = "Ifc_loop";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_loop &o) {
			return os << "Ifc_loop(" << ")";
		}
	};

	struct Ifc_mapped_item : Ifc_representation_item {
		Ifc_representation_map *mapping_source;
		Ifc_cartesian_transformation_operator *mapping_target;

		Ifc_mapped_item() {
			entity = "Ifc_mapped_item";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_mapped_item &o) {
			return os << "Ifc_mapped_item(" << o.mapping_source << ", " << o.mapping_target << ")";
		}
	};

	struct Ifc_material_definition_representation : Ifc_product_representation {
		Ifc_material *represented_material;

		Ifc_material_definition_representation() {
			entity = "Ifc_material_definition_representation";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_material_definition_representation &o) {
			return os << "Ifc_material_definition_representation(" << o.name << ", " << o.description << ", " << "vector(" << o.representations.size() << ")" << ", " << o.represented_material << ")";
		}
	};

	struct Ifc_mechanical_concrete_material_properties : Ifc_mechanical_material_properties {
		Ifc_pressure_measure compressive_strength;
		Ifc_positive_length_measure max_aggregate_size;
		Ifc_text admixtures_description;
		Ifc_text workability;
		Ifc_normalised_ratio_measure protective_pore_ratio;
		Ifc_text water_impermeability;

		Ifc_mechanical_concrete_material_properties() {
			entity = "Ifc_mechanical_concrete_material_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_mechanical_concrete_material_properties &o) {
			return os << "Ifc_mechanical_concrete_material_properties(" << o.material << ", " << o.dynamic_viscosity << ", " << o.young_modulus << ", " << o.shear_modulus << ", " << o.poisson_ratio << ", " << o.thermal_expansion_coefficient << ", " << o.compressive_strength << ", " << o.max_aggregate_size << ", " << o.admixtures_description << ", " << o.workability << ", " << o.protective_pore_ratio << ", " << o.water_impermeability << ")";
		}
	};

	struct Ifc_object_definition : Ifc_root {
		virtual ~Ifc_object_definition() {}
	};

	struct Ifc_one_direction_repeat_factor : Ifc_geometric_representation_item {
		Ifc_vector *repeat_factor;

		Ifc_one_direction_repeat_factor() {
			entity = "Ifc_one_direction_repeat_factor";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_one_direction_repeat_factor &o) {
			return os << "Ifc_one_direction_repeat_factor(" << o.repeat_factor << ")";
		}
	};

	struct Ifc_open_shell : Ifc_connected_face_set {
		Ifc_open_shell() {
			entity = "Ifc_open_shell";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_open_shell &o) {
			return os << "Ifc_open_shell(" << "vector(" << o.cfs_faces.size() << ")" << ")";
		}
	};

	struct Ifc_oriented_edge : Ifc_edge {
		Ifc_edge *edge_element;
		bool orientation;

		Ifc_oriented_edge() {
			entity = "Ifc_oriented_edge";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_oriented_edge &o) {
			return os << "Ifc_oriented_edge(" << o.edge_start << ", " << o.edge_end << ", " << o.edge_element << ", " << o.orientation << ")";
		}
	};

	struct Ifc_parameterized_profile_def : Ifc_profile_def {
		Ifc_axis_2_placement_2_d *position;

		virtual ~Ifc_parameterized_profile_def() {}
	};

	struct Ifc_path : Ifc_topological_representation_item {
		std::vector<Ifc_oriented_edge *> edge_list;

		Ifc_path() {
			entity = "Ifc_path";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_path &o) {
			return os << "Ifc_path(" << "vector(" << o.edge_list.size() << ")" << ")";
		}
	};

	struct Ifc_physical_complex_quantity : Ifc_physical_quantity {
		std::vector<Ifc_physical_quantity *> has_quantities;
		Ifc_label discrimination;
		Ifc_label quality;
		Ifc_label usage;

		Ifc_physical_complex_quantity() {
			entity = "Ifc_physical_complex_quantity";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_physical_complex_quantity &o) {
			return os << "Ifc_physical_complex_quantity(" << o.name << ", " << o.description << ", " << "vector(" << o.has_quantities.size() << ")" << ", " << o.discrimination << ", " << o.quality << ", " << o.usage << ")";
		}
	};

	struct Ifc_pixel_texture : Ifc_surface_texture {
		Ifc_integer width;
		Ifc_integer height;
		Ifc_integer colour_components;
		std::vector<std::uint32_t> pixel;

		Ifc_pixel_texture() {
			entity = "Ifc_pixel_texture";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_pixel_texture &o) {
			return os << "Ifc_pixel_texture(" << o.repeat_s << ", " << o.repeat_t << ", " << o.texture_type << ", " << o.texture_transform << ", " << o.width << ", " << o.height << ", " << o.colour_components << ", " << "vector(" << o.pixel.size() << ")" << ")";
		}
	};

	struct Ifc_placement : Ifc_geometric_representation_item {
		Ifc_cartesian_point *location;

		virtual ~Ifc_placement() {}
	};

	struct Ifc_planar_extent : Ifc_geometric_representation_item {
		Ifc_length_measure size_in_x;
		Ifc_length_measure size_in_y;

		Ifc_planar_extent() {
			entity = "Ifc_planar_extent";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_planar_extent &o) {
			return os << "Ifc_planar_extent(" << o.size_in_x << ", " << o.size_in_y << ")";
		}
	};

	struct Ifc_point : Ifc_geometric_representation_item {
		virtual ~Ifc_point() {}
	};

	struct Ifc_point_on_curve : Ifc_point {
		Ifc_curve *basis_curve;
		Ifc_parameter_value point_parameter;

		Ifc_point_on_curve() {
			entity = "Ifc_point_on_curve";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_point_on_curve &o) {
			return os << "Ifc_point_on_curve(" << o.basis_curve << ", " << o.point_parameter << ")";
		}
	};

	struct Ifc_point_on_surface : Ifc_point {
		Ifc_surface *basis_surface;
		Ifc_parameter_value point_parameter_u;
		Ifc_parameter_value point_parameter_v;

		Ifc_point_on_surface() {
			entity = "Ifc_point_on_surface";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_point_on_surface &o) {
			return os << "Ifc_point_on_surface(" << o.basis_surface << ", " << o.point_parameter_u << ", " << o.point_parameter_v << ")";
		}
	};

	struct Ifc_poly_loop : Ifc_loop {
		std::vector<Ifc_cartesian_point *> polygon;

		Ifc_poly_loop() {
			entity = "Ifc_poly_loop";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_poly_loop &o) {
			return os << "Ifc_poly_loop(" << "vector(" << o.polygon.size() << ")" << ")";
		}
	};

	struct Ifc_polygonal_bounded_half_space : Ifc_half_space_solid {
		Ifc_axis_2_placement_3_d *position;
		Ifc_bounded_curve *polygonal_boundary;

		Ifc_polygonal_bounded_half_space() {
			entity = "Ifc_polygonal_bounded_half_space";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_polygonal_bounded_half_space &o) {
			return os << "Ifc_polygonal_bounded_half_space(" << o.base_surface << ", " << o.agreement_flag << ", " << o.position << ", " << o.polygonal_boundary << ")";
		}
	};

	struct Ifc_pre_defined_colour : Ifc_pre_defined_item {
		virtual ~Ifc_pre_defined_colour() {}
	};

	struct Ifc_pre_defined_curve_font : Ifc_pre_defined_item {
		virtual ~Ifc_pre_defined_curve_font() {}
	};

	struct Ifc_pre_defined_dimension_symbol : Ifc_pre_defined_symbol {
		Ifc_pre_defined_dimension_symbol() {
			entity = "Ifc_pre_defined_dimension_symbol";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_pre_defined_dimension_symbol &o) {
			return os << "Ifc_pre_defined_dimension_symbol(" << o.name << ")";
		}
	};

	struct Ifc_pre_defined_point_marker_symbol : Ifc_pre_defined_symbol {
		Ifc_pre_defined_point_marker_symbol() {
			entity = "Ifc_pre_defined_point_marker_symbol";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_pre_defined_point_marker_symbol &o) {
			return os << "Ifc_pre_defined_point_marker_symbol(" << o.name << ")";
		}
	};

	struct Ifc_product_definition_shape : Ifc_product_representation {
		Ifc_product_definition_shape() {
			entity = "Ifc_product_definition_shape";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_product_definition_shape &o) {
			return os << "Ifc_product_definition_shape(" << o.name << ", " << o.description << ", " << "vector(" << o.representations.size() << ")" << ")";
		}
	};

	struct Ifc_property_bounded_value : Ifc_simple_property {
		Ifc_value *upper_bound_value;
		Ifc_value *lower_bound_value;
		Ifc_unit *unit;

		Ifc_property_bounded_value() {
			entity = "Ifc_property_bounded_value";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_property_bounded_value &o) {
			return os << "Ifc_property_bounded_value(" << o.name << ", " << o.description << ", " << o.upper_bound_value << ", " << o.lower_bound_value << ", " << o.unit << ")";
		}
	};

	struct Ifc_property_definition : Ifc_root {
		virtual ~Ifc_property_definition() {}
	};

	struct Ifc_property_enumerated_value : Ifc_simple_property {
		std::vector<Ifc_value *> enumeration_values;
		Ifc_property_enumeration *enumeration_reference;

		Ifc_property_enumerated_value() {
			entity = "Ifc_property_enumerated_value";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_property_enumerated_value &o) {
			return os << "Ifc_property_enumerated_value(" << o.name << ", " << o.description << ", " << "vector(" << o.enumeration_values.size() << ")" << ", " << o.enumeration_reference << ")";
		}
	};

	struct Ifc_property_list_value : Ifc_simple_property {
		std::vector<Ifc_value *> list_values;
		Ifc_unit *unit;

		Ifc_property_list_value() {
			entity = "Ifc_property_list_value";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_property_list_value &o) {
			return os << "Ifc_property_list_value(" << o.name << ", " << o.description << ", " << "vector(" << o.list_values.size() << ")" << ", " << o.unit << ")";
		}
	};

	struct Ifc_property_reference_value : Ifc_simple_property {
		Ifc_label usage_name;
		Ifc_object_reference_select *property_reference;

		Ifc_property_reference_value() {
			entity = "Ifc_property_reference_value";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_property_reference_value &o) {
			return os << "Ifc_property_reference_value(" << o.name << ", " << o.description << ", " << o.usage_name << ", " << o.property_reference << ")";
		}
	};

	struct Ifc_property_set_definition : Ifc_property_definition {
		virtual ~Ifc_property_set_definition() {}
	};

	struct Ifc_property_single_value : Ifc_simple_property {
		Ifc_value *nominal_value;
		Ifc_unit *unit;

		Ifc_property_single_value() {
			entity = "Ifc_property_single_value";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_property_single_value &o) {
			return os << "Ifc_property_single_value(" << o.name << ", " << o.description << ", " << o.nominal_value << ", " << o.unit << ")";
		}
	};

	struct Ifc_property_table_value : Ifc_simple_property {
		std::vector<Ifc_value *> defining_values;
		std::vector<Ifc_value *> defined_values;
		Ifc_text expression;
		Ifc_unit *defining_unit;
		Ifc_unit *defined_unit;

		Ifc_property_table_value() {
			entity = "Ifc_property_table_value";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_property_table_value &o) {
			return os << "Ifc_property_table_value(" << o.name << ", " << o.description << ", " << "vector(" << o.defining_values.size() << ")" << ", " << "vector(" << o.defined_values.size() << ")" << ", " << o.expression << ", " << o.defining_unit << ", " << o.defined_unit << ")";
		}
	};

	struct Ifc_rectangle_profile_def : Ifc_parameterized_profile_def {
		Ifc_positive_length_measure x_dim;
		Ifc_positive_length_measure y_dim;

		Ifc_rectangle_profile_def() {
			entity = "Ifc_rectangle_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rectangle_profile_def &o) {
			return os << "Ifc_rectangle_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.x_dim << ", " << o.y_dim << ")";
		}
	};

	struct Ifc_regular_time_series : Ifc_time_series {
		Ifc_time_measure time_step;
		std::vector<Ifc_time_series_value *> values;

		Ifc_regular_time_series() {
			entity = "Ifc_regular_time_series";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_regular_time_series &o) {
			return os << "Ifc_regular_time_series(" << o.name << ", " << o.description << ", " << o.start_time << ", " << o.end_time << ", " << o.time_series_data_type << ", " << o.data_origin << ", " << o.user_defined_data_origin << ", " << o.unit << ", " << o.time_step << ", " << "vector(" << o.values.size() << ")" << ")";
		}
	};

	struct Ifc_reinforcement_definition_properties : Ifc_property_set_definition {
		Ifc_label definition_type;
		std::vector<Ifc_section_reinforcement_properties *> reinforcement_section_definitions;

		Ifc_reinforcement_definition_properties() {
			entity = "Ifc_reinforcement_definition_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_reinforcement_definition_properties &o) {
			return os << "Ifc_reinforcement_definition_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.definition_type << ", " << "vector(" << o.reinforcement_section_definitions.size() << ")" << ")";
		}
	};

	struct Ifc_relationship : Ifc_root {
		virtual ~Ifc_relationship() {}
	};

	struct Ifc_rounded_rectangle_profile_def : Ifc_rectangle_profile_def {
		Ifc_positive_length_measure rounding_radius;

		Ifc_rounded_rectangle_profile_def() {
			entity = "Ifc_rounded_rectangle_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rounded_rectangle_profile_def &o) {
			return os << "Ifc_rounded_rectangle_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.x_dim << ", " << o.y_dim << ", " << o.rounding_radius << ")";
		}
	};

	struct Ifc_sectioned_spine : Ifc_geometric_representation_item {
		Ifc_composite_curve *spine_curve;
		std::vector<Ifc_profile_def *> cross_sections;
		std::vector<Ifc_axis_2_placement_3_d *> cross_section_positions;

		Ifc_sectioned_spine() {
			entity = "Ifc_sectioned_spine";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_sectioned_spine &o) {
			return os << "Ifc_sectioned_spine(" << o.spine_curve << ", " << "vector(" << o.cross_sections.size() << ")" << ", " << "vector(" << o.cross_section_positions.size() << ")" << ")";
		}
	};

	struct Ifc_service_life_factor : Ifc_property_set_definition {
		Ifc_service_life_factor_type_enum predefined_type;
		Ifc_measure_value *upper_value;
		Ifc_measure_value *most_used_value;
		Ifc_measure_value *lower_value;

		Ifc_service_life_factor() {
			entity = "Ifc_service_life_factor";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_service_life_factor &o) {
			return os << "Ifc_service_life_factor(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.predefined_type << ", " << o.upper_value << ", " << o.most_used_value << ", " << o.lower_value << ")";
		}
	};

	struct Ifc_shell_based_surface_model : Ifc_geometric_representation_item {
		std::vector<Ifc_shell *> sbsm_boundary;

		Ifc_shell_based_surface_model() {
			entity = "Ifc_shell_based_surface_model";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_shell_based_surface_model &o) {
			return os << "Ifc_shell_based_surface_model(" << "vector(" << o.sbsm_boundary.size() << ")" << ")";
		}
	};

	struct Ifc_slippage_connection_condition : Ifc_structural_connection_condition {
		Ifc_length_measure slippage_x;
		Ifc_length_measure slippage_y;
		Ifc_length_measure slippage_z;

		Ifc_slippage_connection_condition() {
			entity = "Ifc_slippage_connection_condition";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_slippage_connection_condition &o) {
			return os << "Ifc_slippage_connection_condition(" << o.name << ", " << o.slippage_x << ", " << o.slippage_y << ", " << o.slippage_z << ")";
		}
	};

	struct Ifc_solid_model : Ifc_geometric_representation_item {
		virtual ~Ifc_solid_model() {}
	};

	struct Ifc_sound_properties : Ifc_property_set_definition {
		Ifc_boolean is_attenuating;
		Ifc_sound_scale_enum sound_scale;
		std::vector<Ifc_sound_value *> sound_values;

		Ifc_sound_properties() {
			entity = "Ifc_sound_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_sound_properties &o) {
			return os << "Ifc_sound_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.is_attenuating << ", " << o.sound_scale << ", " << "vector(" << o.sound_values.size() << ")" << ")";
		}
	};

	struct Ifc_sound_value : Ifc_property_set_definition {
		Ifc_time_series *sound_level_time_series;
		Ifc_frequency_measure frequency;
		Ifc_derived_measure_value *sound_level_single_value;

		Ifc_sound_value() {
			entity = "Ifc_sound_value";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_sound_value &o) {
			return os << "Ifc_sound_value(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.sound_level_time_series << ", " << o.frequency << ", " << o.sound_level_single_value << ")";
		}
	};

	struct Ifc_space_thermal_load_properties : Ifc_property_set_definition {
		Ifc_positive_ratio_measure applicable_value_ratio;
		Ifc_thermal_load_source_enum thermal_load_source;
		Ifc_property_source_enum property_source;
		Ifc_text source_description;
		Ifc_power_measure maximum_value;
		Ifc_power_measure minimum_value;
		Ifc_time_series *thermal_load_time_series_values;
		Ifc_label user_defined_thermal_load_source;
		Ifc_label user_defined_property_source;
		Ifc_thermal_load_type_enum thermal_load_type;

		Ifc_space_thermal_load_properties() {
			entity = "Ifc_space_thermal_load_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_space_thermal_load_properties &o) {
			return os << "Ifc_space_thermal_load_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_value_ratio << ", " << o.thermal_load_source << ", " << o.property_source << ", " << o.source_description << ", " << o.maximum_value << ", " << o.minimum_value << ", " << o.thermal_load_time_series_values << ", " << o.user_defined_thermal_load_source << ", " << o.user_defined_property_source << ", " << o.thermal_load_type << ")";
		}
	};

	struct Ifc_structural_load_linear_force : Ifc_structural_load_static {
		Ifc_linear_force_measure linear_force_x;
		Ifc_linear_force_measure linear_force_y;
		Ifc_linear_force_measure linear_force_z;
		Ifc_linear_moment_measure linear_moment_x;
		Ifc_linear_moment_measure linear_moment_y;
		Ifc_linear_moment_measure linear_moment_z;

		Ifc_structural_load_linear_force() {
			entity = "Ifc_structural_load_linear_force";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_load_linear_force &o) {
			return os << "Ifc_structural_load_linear_force(" << o.name << ", " << o.linear_force_x << ", " << o.linear_force_y << ", " << o.linear_force_z << ", " << o.linear_moment_x << ", " << o.linear_moment_y << ", " << o.linear_moment_z << ")";
		}
	};

	struct Ifc_structural_load_planar_force : Ifc_structural_load_static {
		Ifc_planar_force_measure planar_force_x;
		Ifc_planar_force_measure planar_force_y;
		Ifc_planar_force_measure planar_force_z;

		Ifc_structural_load_planar_force() {
			entity = "Ifc_structural_load_planar_force";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_load_planar_force &o) {
			return os << "Ifc_structural_load_planar_force(" << o.name << ", " << o.planar_force_x << ", " << o.planar_force_y << ", " << o.planar_force_z << ")";
		}
	};

	struct Ifc_structural_load_single_displacement : Ifc_structural_load_static {
		Ifc_length_measure displacement_x;
		Ifc_length_measure displacement_y;
		Ifc_length_measure displacement_z;
		Ifc_plane_angle_measure rotational_displacement_r_x;
		Ifc_plane_angle_measure rotational_displacement_r_y;
		Ifc_plane_angle_measure rotational_displacement_r_z;

		Ifc_structural_load_single_displacement() {
			entity = "Ifc_structural_load_single_displacement";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_load_single_displacement &o) {
			return os << "Ifc_structural_load_single_displacement(" << o.name << ", " << o.displacement_x << ", " << o.displacement_y << ", " << o.displacement_z << ", " << o.rotational_displacement_r_x << ", " << o.rotational_displacement_r_y << ", " << o.rotational_displacement_r_z << ")";
		}
	};

	struct Ifc_structural_load_single_displacement_distortion : Ifc_structural_load_single_displacement {
		Ifc_curvature_measure distortion;

		Ifc_structural_load_single_displacement_distortion() {
			entity = "Ifc_structural_load_single_displacement_distortion";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_load_single_displacement_distortion &o) {
			return os << "Ifc_structural_load_single_displacement_distortion(" << o.name << ", " << o.displacement_x << ", " << o.displacement_y << ", " << o.displacement_z << ", " << o.rotational_displacement_r_x << ", " << o.rotational_displacement_r_y << ", " << o.rotational_displacement_r_z << ", " << o.distortion << ")";
		}
	};

	struct Ifc_structural_load_single_force : Ifc_structural_load_static {
		Ifc_force_measure force_x;
		Ifc_force_measure force_y;
		Ifc_force_measure force_z;
		Ifc_torque_measure moment_x;
		Ifc_torque_measure moment_y;
		Ifc_torque_measure moment_z;

		Ifc_structural_load_single_force() {
			entity = "Ifc_structural_load_single_force";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_load_single_force &o) {
			return os << "Ifc_structural_load_single_force(" << o.name << ", " << o.force_x << ", " << o.force_y << ", " << o.force_z << ", " << o.moment_x << ", " << o.moment_y << ", " << o.moment_z << ")";
		}
	};

	struct Ifc_structural_load_single_force_warping : Ifc_structural_load_single_force {
		Ifc_warping_moment_measure warping_moment;

		Ifc_structural_load_single_force_warping() {
			entity = "Ifc_structural_load_single_force_warping";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_load_single_force_warping &o) {
			return os << "Ifc_structural_load_single_force_warping(" << o.name << ", " << o.force_x << ", " << o.force_y << ", " << o.force_z << ", " << o.moment_x << ", " << o.moment_y << ", " << o.moment_z << ", " << o.warping_moment << ")";
		}
	};

	struct Ifc_structural_profile_properties : Ifc_general_profile_properties {
		Ifc_moment_of_inertia_measure torsional_constant_x;
		Ifc_moment_of_inertia_measure moment_of_inertia_y_z;
		Ifc_moment_of_inertia_measure moment_of_inertia_y;
		Ifc_moment_of_inertia_measure moment_of_inertia_z;
		Ifc_warping_constant_measure warping_constant;
		Ifc_length_measure shear_centre_z;
		Ifc_length_measure shear_centre_y;
		Ifc_area_measure shear_deformation_area_z;
		Ifc_area_measure shear_deformation_area_y;
		Ifc_section_modulus_measure maximum_section_modulus_y;
		Ifc_section_modulus_measure minimum_section_modulus_y;
		Ifc_section_modulus_measure maximum_section_modulus_z;
		Ifc_section_modulus_measure minimum_section_modulus_z;
		Ifc_section_modulus_measure torsional_section_modulus;
		Ifc_length_measure centre_of_gravity_in_x;
		Ifc_length_measure centre_of_gravity_in_y;

		Ifc_structural_profile_properties() {
			entity = "Ifc_structural_profile_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_profile_properties &o) {
			return os << "Ifc_structural_profile_properties(" << o.profile_name << ", " << o.profile_definition << ", " << o.physical_weight << ", " << o.perimeter << ", " << o.minimum_plate_thickness << ", " << o.maximum_plate_thickness << ", " << o.cross_section_area << ", " << o.torsional_constant_x << ", " << o.moment_of_inertia_y_z << ", " << o.moment_of_inertia_y << ", " << o.moment_of_inertia_z << ", " << o.warping_constant << ", " << o.shear_centre_z << ", " << o.shear_centre_y << ", " << o.shear_deformation_area_z << ", " << o.shear_deformation_area_y << ", " << o.maximum_section_modulus_y << ", " << o.minimum_section_modulus_y << ", " << o.maximum_section_modulus_z << ", " << o.minimum_section_modulus_z << ", " << o.torsional_section_modulus << ", " << o.centre_of_gravity_in_x << ", " << o.centre_of_gravity_in_y << ")";
		}
	};

	struct Ifc_structural_steel_profile_properties : Ifc_structural_profile_properties {
		Ifc_area_measure shear_area_z;
		Ifc_area_measure shear_area_y;
		Ifc_positive_ratio_measure plastic_shape_factor_y;
		Ifc_positive_ratio_measure plastic_shape_factor_z;

		Ifc_structural_steel_profile_properties() {
			entity = "Ifc_structural_steel_profile_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_steel_profile_properties &o) {
			return os << "Ifc_structural_steel_profile_properties(" << o.profile_name << ", " << o.profile_definition << ", " << o.physical_weight << ", " << o.perimeter << ", " << o.minimum_plate_thickness << ", " << o.maximum_plate_thickness << ", " << o.cross_section_area << ", " << o.torsional_constant_x << ", " << o.moment_of_inertia_y_z << ", " << o.moment_of_inertia_y << ", " << o.moment_of_inertia_z << ", " << o.warping_constant << ", " << o.shear_centre_z << ", " << o.shear_centre_y << ", " << o.shear_deformation_area_z << ", " << o.shear_deformation_area_y << ", " << o.maximum_section_modulus_y << ", " << o.minimum_section_modulus_y << ", " << o.maximum_section_modulus_z << ", " << o.minimum_section_modulus_z << ", " << o.torsional_section_modulus << ", " << o.centre_of_gravity_in_x << ", " << o.centre_of_gravity_in_y << ", " << o.shear_area_z << ", " << o.shear_area_y << ", " << o.plastic_shape_factor_y << ", " << o.plastic_shape_factor_z << ")";
		}
	};

	struct Ifc_subedge : Ifc_edge {
		Ifc_edge *parent_edge;

		Ifc_subedge() {
			entity = "Ifc_subedge";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_subedge &o) {
			return os << "Ifc_subedge(" << o.edge_start << ", " << o.edge_end << ", " << o.parent_edge << ")";
		}
	};

	struct Ifc_surface : Ifc_geometric_representation_item {
		virtual ~Ifc_surface() {}
	};

	struct Ifc_surface_style_rendering : Ifc_surface_style_shading {
		Ifc_normalised_ratio_measure transparency;
		Ifc_colour_or_factor *diffuse_colour;
		Ifc_colour_or_factor *transmission_colour;
		Ifc_colour_or_factor *diffuse_transmission_colour;
		Ifc_colour_or_factor *reflection_colour;
		Ifc_colour_or_factor *specular_colour;
		Ifc_specular_highlight_select *specular_highlight;
		Ifc_reflectance_method_enum reflectance_method;

		Ifc_surface_style_rendering() {
			entity = "Ifc_surface_style_rendering";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_style_rendering &o) {
			return os << "Ifc_surface_style_rendering(" << o.surface_colour << ", " << o.transparency << ", " << o.diffuse_colour << ", " << o.transmission_colour << ", " << o.diffuse_transmission_colour << ", " << o.reflection_colour << ", " << o.specular_colour << ", " << o.specular_highlight << ", " << o.reflectance_method << ")";
		}
	};

	struct Ifc_swept_area_solid : Ifc_solid_model {
		Ifc_profile_def *swept_area;
		Ifc_axis_2_placement_3_d *position;

		virtual ~Ifc_swept_area_solid() {}
	};

	struct Ifc_swept_disk_solid : Ifc_solid_model {
		Ifc_curve *directrix;
		Ifc_positive_length_measure radius;
		Ifc_positive_length_measure inner_radius;
		Ifc_parameter_value start_param;
		Ifc_parameter_value end_param;

		Ifc_swept_disk_solid() {
			entity = "Ifc_swept_disk_solid";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_swept_disk_solid &o) {
			return os << "Ifc_swept_disk_solid(" << o.directrix << ", " << o.radius << ", " << o.inner_radius << ", " << o.start_param << ", " << o.end_param << ")";
		}
	};

	struct Ifc_swept_surface : Ifc_surface {
		Ifc_profile_def *swept_curve;
		Ifc_axis_2_placement_3_d *position;

		virtual ~Ifc_swept_surface() {}
	};

	struct Ifc_t_shape_profile_def : Ifc_parameterized_profile_def {
		Ifc_positive_length_measure depth;
		Ifc_positive_length_measure flange_width;
		Ifc_positive_length_measure web_thickness;
		Ifc_positive_length_measure flange_thickness;
		Ifc_positive_length_measure fillet_radius;
		Ifc_positive_length_measure flange_edge_radius;
		Ifc_positive_length_measure web_edge_radius;
		Ifc_plane_angle_measure web_slope;
		Ifc_plane_angle_measure flange_slope;
		Ifc_positive_length_measure centre_of_gravity_in_y;

		Ifc_t_shape_profile_def() {
			entity = "Ifc_t_shape_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_t_shape_profile_def &o) {
			return os << "Ifc_t_shape_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.depth << ", " << o.flange_width << ", " << o.web_thickness << ", " << o.flange_thickness << ", " << o.fillet_radius << ", " << o.flange_edge_radius << ", " << o.web_edge_radius << ", " << o.web_slope << ", " << o.flange_slope << ", " << o.centre_of_gravity_in_y << ")";
		}
	};

	struct Ifc_terminator_symbol : Ifc_annotation_symbol_occurrence {
		Ifc_annotation_curve_occurrence *annotated_curve;

		Ifc_terminator_symbol() {
			entity = "Ifc_terminator_symbol";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_terminator_symbol &o) {
			return os << "Ifc_terminator_symbol(" << o.item << ", " << "vector(" << o.styles.size() << ")" << ", " << o.name << ", " << o.annotated_curve << ")";
		}
	};

	struct Ifc_text_literal : Ifc_geometric_representation_item {
		Ifc_presentable_text literal;
		Ifc_axis_2_placement *placement;
		Ifc_text_path path;

		Ifc_text_literal() {
			entity = "Ifc_text_literal";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_text_literal &o) {
			return os << "Ifc_text_literal(" << o.literal << ", " << o.placement << ", " << o.path << ")";
		}
	};

	struct Ifc_text_literal_with_extent : Ifc_text_literal {
		Ifc_planar_extent *extent;
		Ifc_box_alignment box_alignment;

		Ifc_text_literal_with_extent() {
			entity = "Ifc_text_literal_with_extent";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_text_literal_with_extent &o) {
			return os << "Ifc_text_literal_with_extent(" << o.literal << ", " << o.placement << ", " << o.path << ", " << o.extent << ", " << o.box_alignment << ")";
		}
	};

	struct Ifc_trapezium_profile_def : Ifc_parameterized_profile_def {
		Ifc_positive_length_measure bottom_x_dim;
		Ifc_positive_length_measure top_x_dim;
		Ifc_positive_length_measure y_dim;
		Ifc_length_measure top_x_offset;

		Ifc_trapezium_profile_def() {
			entity = "Ifc_trapezium_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_trapezium_profile_def &o) {
			return os << "Ifc_trapezium_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.bottom_x_dim << ", " << o.top_x_dim << ", " << o.y_dim << ", " << o.top_x_offset << ")";
		}
	};

	struct Ifc_two_direction_repeat_factor : Ifc_one_direction_repeat_factor {
		Ifc_vector *second_repeat_factor;

		Ifc_two_direction_repeat_factor() {
			entity = "Ifc_two_direction_repeat_factor";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_two_direction_repeat_factor &o) {
			return os << "Ifc_two_direction_repeat_factor(" << o.repeat_factor << ", " << o.second_repeat_factor << ")";
		}
	};

	struct Ifc_type_object : Ifc_object_definition {
		Ifc_label applicable_occurrence;
		std::vector<Ifc_property_set_definition *> has_property_sets;

		Ifc_type_object() {
			entity = "Ifc_type_object";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_type_object &o) {
			return os << "Ifc_type_object(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ")";
		}
	};

	struct Ifc_type_product : Ifc_type_object {
		std::vector<Ifc_representation_map *> representation_maps;
		Ifc_label tag;

		Ifc_type_product() {
			entity = "Ifc_type_product";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_type_product &o) {
			return os << "Ifc_type_product(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ")";
		}
	};

	struct Ifc_u_shape_profile_def : Ifc_parameterized_profile_def {
		Ifc_positive_length_measure depth;
		Ifc_positive_length_measure flange_width;
		Ifc_positive_length_measure web_thickness;
		Ifc_positive_length_measure flange_thickness;
		Ifc_positive_length_measure fillet_radius;
		Ifc_positive_length_measure edge_radius;
		Ifc_plane_angle_measure flange_slope;
		Ifc_positive_length_measure centre_of_gravity_in_x;

		Ifc_u_shape_profile_def() {
			entity = "Ifc_u_shape_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_u_shape_profile_def &o) {
			return os << "Ifc_u_shape_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.depth << ", " << o.flange_width << ", " << o.web_thickness << ", " << o.flange_thickness << ", " << o.fillet_radius << ", " << o.edge_radius << ", " << o.flange_slope << ", " << o.centre_of_gravity_in_x << ")";
		}
	};

	struct Ifc_vector : Ifc_geometric_representation_item {
		Ifc_direction *orientation;
		Ifc_length_measure magnitude;

		Ifc_vector() {
			entity = "Ifc_vector";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_vector &o) {
			return os << "Ifc_vector(" << o.orientation << ", " << o.magnitude << ")";
		}
	};

	struct Ifc_vertex_loop : Ifc_loop {
		Ifc_vertex *loop_vertex;

		Ifc_vertex_loop() {
			entity = "Ifc_vertex_loop";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_vertex_loop &o) {
			return os << "Ifc_vertex_loop(" << o.loop_vertex << ")";
		}
	};

	struct Ifc_window_lining_properties : Ifc_property_set_definition {
		Ifc_positive_length_measure lining_depth;
		Ifc_positive_length_measure lining_thickness;
		Ifc_positive_length_measure transom_thickness;
		Ifc_positive_length_measure mullion_thickness;
		Ifc_normalised_ratio_measure first_transom_offset;
		Ifc_normalised_ratio_measure second_transom_offset;
		Ifc_normalised_ratio_measure first_mullion_offset;
		Ifc_normalised_ratio_measure second_mullion_offset;
		Ifc_shape_aspect *shape_aspect_style;

		Ifc_window_lining_properties() {
			entity = "Ifc_window_lining_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_window_lining_properties &o) {
			return os << "Ifc_window_lining_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.lining_depth << ", " << o.lining_thickness << ", " << o.transom_thickness << ", " << o.mullion_thickness << ", " << o.first_transom_offset << ", " << o.second_transom_offset << ", " << o.first_mullion_offset << ", " << o.second_mullion_offset << ", " << o.shape_aspect_style << ")";
		}
	};

	struct Ifc_window_panel_properties : Ifc_property_set_definition {
		Ifc_window_panel_operation_enum operation_type;
		Ifc_window_panel_position_enum panel_position;
		Ifc_positive_length_measure frame_depth;
		Ifc_positive_length_measure frame_thickness;
		Ifc_shape_aspect *shape_aspect_style;

		Ifc_window_panel_properties() {
			entity = "Ifc_window_panel_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_window_panel_properties &o) {
			return os << "Ifc_window_panel_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.operation_type << ", " << o.panel_position << ", " << o.frame_depth << ", " << o.frame_thickness << ", " << o.shape_aspect_style << ")";
		}
	};

	struct Ifc_window_style : Ifc_type_product {
		Ifc_window_style_construction_enum construction_type;
		Ifc_window_style_operation_enum operation_type;
		bool parameter_takes_precedence;
		bool sizeable;

		Ifc_window_style() {
			entity = "Ifc_window_style";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_window_style &o) {
			return os << "Ifc_window_style(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.construction_type << ", " << o.operation_type << ", " << o.parameter_takes_precedence << ", " << o.sizeable << ")";
		}
	};

	struct Ifc_z_shape_profile_def : Ifc_parameterized_profile_def {
		Ifc_positive_length_measure depth;
		Ifc_positive_length_measure flange_width;
		Ifc_positive_length_measure web_thickness;
		Ifc_positive_length_measure flange_thickness;
		Ifc_positive_length_measure fillet_radius;
		Ifc_positive_length_measure edge_radius;

		Ifc_z_shape_profile_def() {
			entity = "Ifc_z_shape_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_z_shape_profile_def &o) {
			return os << "Ifc_z_shape_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.depth << ", " << o.flange_width << ", " << o.web_thickness << ", " << o.flange_thickness << ", " << o.fillet_radius << ", " << o.edge_radius << ")";
		}
	};

	struct Ifc_annotation_curve_occurrence : Ifc_annotation_occurrence {
		Ifc_annotation_curve_occurrence() {
			entity = "Ifc_annotation_curve_occurrence";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_annotation_curve_occurrence &o) {
			return os << "Ifc_annotation_curve_occurrence(" << o.item << ", " << "vector(" << o.styles.size() << ")" << ", " << o.name << ")";
		}
	};

	struct Ifc_annotation_fill_area : Ifc_geometric_representation_item {
		Ifc_curve *outer_boundary;
		std::vector<Ifc_curve *> inner_boundaries;

		Ifc_annotation_fill_area() {
			entity = "Ifc_annotation_fill_area";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_annotation_fill_area &o) {
			return os << "Ifc_annotation_fill_area(" << o.outer_boundary << ", " << "vector(" << o.inner_boundaries.size() << ")" << ")";
		}
	};

	struct Ifc_annotation_fill_area_occurrence : Ifc_annotation_occurrence {
		Ifc_point *fill_style_target;
		Ifc_global_or_local_enum global_or_local;

		Ifc_annotation_fill_area_occurrence() {
			entity = "Ifc_annotation_fill_area_occurrence";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_annotation_fill_area_occurrence &o) {
			return os << "Ifc_annotation_fill_area_occurrence(" << o.item << ", " << "vector(" << o.styles.size() << ")" << ", " << o.name << ", " << o.fill_style_target << ", " << o.global_or_local << ")";
		}
	};

	struct Ifc_annotation_surface : Ifc_geometric_representation_item {
		Ifc_geometric_representation_item *item;
		Ifc_texture_coordinate *texture_coordinates;

		Ifc_annotation_surface() {
			entity = "Ifc_annotation_surface";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_annotation_surface &o) {
			return os << "Ifc_annotation_surface(" << o.item << ", " << o.texture_coordinates << ")";
		}
	};

	struct Ifc_axis_1_placement : Ifc_placement {
		Ifc_direction *axis;

		Ifc_axis_1_placement() {
			entity = "Ifc_axis_1_placement";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_axis_1_placement &o) {
			return os << "Ifc_axis_1_placement(" << o.location << ", " << o.axis << ")";
		}
	};

	struct Ifc_axis_2_placement_2_d : Ifc_placement {
		Ifc_direction *ref_direction;

		Ifc_axis_2_placement_2_d() {
			entity = "Ifc_axis_2_placement_2_d";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_axis_2_placement_2_d &o) {
			return os << "Ifc_axis_2_placement_2_d(" << o.location << ", " << o.ref_direction << ")";
		}
	};

	struct Ifc_axis_2_placement_3_d : Ifc_placement {
		Ifc_direction *axis;
		Ifc_direction *ref_direction;

		Ifc_axis_2_placement_3_d() {
			entity = "Ifc_axis_2_placement_3_d";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_axis_2_placement_3_d &o) {
			return os << "Ifc_axis_2_placement_3_d(" << o.location << ", " << o.axis << ", " << o.ref_direction << ")";
		}
	};

	struct Ifc_boolean_result : Ifc_geometric_representation_item {
		Ifc_boolean_operator _operator;
		Ifc_boolean_operand *first_operand;
		Ifc_boolean_operand *second_operand;

		Ifc_boolean_result() {
			entity = "Ifc_boolean_result";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_boolean_result &o) {
			return os << "Ifc_boolean_result(" << o._operator << ", " << o.first_operand << ", " << o.second_operand << ")";
		}
	};

	struct Ifc_bounded_surface : Ifc_surface {
		Ifc_bounded_surface() {
			entity = "Ifc_bounded_surface";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_bounded_surface &o) {
			return os << "Ifc_bounded_surface(" << ")";
		}
	};

	struct Ifc_bounding_box : Ifc_geometric_representation_item {
		Ifc_cartesian_point *corner;
		Ifc_positive_length_measure x_dim;
		Ifc_positive_length_measure y_dim;
		Ifc_positive_length_measure z_dim;

		Ifc_bounding_box() {
			entity = "Ifc_bounding_box";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_bounding_box &o) {
			return os << "Ifc_bounding_box(" << o.corner << ", " << o.x_dim << ", " << o.y_dim << ", " << o.z_dim << ")";
		}
	};

	struct Ifc_boxed_half_space : Ifc_half_space_solid {
		Ifc_bounding_box *enclosure;

		Ifc_boxed_half_space() {
			entity = "Ifc_boxed_half_space";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_boxed_half_space &o) {
			return os << "Ifc_boxed_half_space(" << o.base_surface << ", " << o.agreement_flag << ", " << o.enclosure << ")";
		}
	};

	struct Ifc_c_shape_profile_def : Ifc_parameterized_profile_def {
		Ifc_positive_length_measure depth;
		Ifc_positive_length_measure width;
		Ifc_positive_length_measure wall_thickness;
		Ifc_positive_length_measure girth;
		Ifc_positive_length_measure internal_fillet_radius;
		Ifc_positive_length_measure centre_of_gravity_in_x;

		Ifc_c_shape_profile_def() {
			entity = "Ifc_c_shape_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_c_shape_profile_def &o) {
			return os << "Ifc_c_shape_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.depth << ", " << o.width << ", " << o.wall_thickness << ", " << o.girth << ", " << o.internal_fillet_radius << ", " << o.centre_of_gravity_in_x << ")";
		}
	};

	struct Ifc_cartesian_point : Ifc_point {
		std::vector<Ifc_length_measure> coordinates;

		Ifc_cartesian_point() {
			entity = "Ifc_cartesian_point";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_cartesian_point &o) {
			return os << "Ifc_cartesian_point(" << "vector(" << o.coordinates.size() << ")" << ")";
		}
	};

	struct Ifc_cartesian_transformation_operator : Ifc_geometric_representation_item {
		Ifc_direction *axis_1;
		Ifc_direction *axis_2;
		Ifc_cartesian_point *local_origin;
		double scale;

		virtual ~Ifc_cartesian_transformation_operator() {}
	};

	struct Ifc_cartesian_transformation_operator_2_d : Ifc_cartesian_transformation_operator {
		Ifc_cartesian_transformation_operator_2_d() {
			entity = "Ifc_cartesian_transformation_operator_2_d";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_cartesian_transformation_operator_2_d &o) {
			return os << "Ifc_cartesian_transformation_operator_2_d(" << o.axis_1 << ", " << o.axis_2 << ", " << o.local_origin << ", " << o.scale << ")";
		}
	};

	struct Ifc_cartesian_transformation_operator_2_dnon_uniform : Ifc_cartesian_transformation_operator_2_d {
		double scale_2;

		Ifc_cartesian_transformation_operator_2_dnon_uniform() {
			entity = "Ifc_cartesian_transformation_operator_2_dnon_uniform";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_cartesian_transformation_operator_2_dnon_uniform &o) {
			return os << "Ifc_cartesian_transformation_operator_2_dnon_uniform(" << o.axis_1 << ", " << o.axis_2 << ", " << o.local_origin << ", " << o.scale << ", " << o.scale_2 << ")";
		}
	};

	struct Ifc_cartesian_transformation_operator_3_d : Ifc_cartesian_transformation_operator {
		Ifc_direction *axis_3;

		Ifc_cartesian_transformation_operator_3_d() {
			entity = "Ifc_cartesian_transformation_operator_3_d";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_cartesian_transformation_operator_3_d &o) {
			return os << "Ifc_cartesian_transformation_operator_3_d(" << o.axis_1 << ", " << o.axis_2 << ", " << o.local_origin << ", " << o.scale << ", " << o.axis_3 << ")";
		}
	};

	struct Ifc_cartesian_transformation_operator_3_dnon_uniform : Ifc_cartesian_transformation_operator_3_d {
		double scale_2;
		double scale_3;

		Ifc_cartesian_transformation_operator_3_dnon_uniform() {
			entity = "Ifc_cartesian_transformation_operator_3_dnon_uniform";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_cartesian_transformation_operator_3_dnon_uniform &o) {
			return os << "Ifc_cartesian_transformation_operator_3_dnon_uniform(" << o.axis_1 << ", " << o.axis_2 << ", " << o.local_origin << ", " << o.scale << ", " << o.axis_3 << ", " << o.scale_2 << ", " << o.scale_3 << ")";
		}
	};

	struct Ifc_circle_profile_def : Ifc_parameterized_profile_def {
		Ifc_positive_length_measure radius;

		Ifc_circle_profile_def() {
			entity = "Ifc_circle_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_circle_profile_def &o) {
			return os << "Ifc_circle_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.radius << ")";
		}
	};

	struct Ifc_closed_shell : Ifc_connected_face_set {
		Ifc_closed_shell() {
			entity = "Ifc_closed_shell";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_closed_shell &o) {
			return os << "Ifc_closed_shell(" << "vector(" << o.cfs_faces.size() << ")" << ")";
		}
	};

	struct Ifc_composite_curve_segment : Ifc_geometric_representation_item {
		Ifc_transition_code transition;
		bool same_sense;
		Ifc_curve *parent_curve;

		Ifc_composite_curve_segment() {
			entity = "Ifc_composite_curve_segment";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_composite_curve_segment &o) {
			return os << "Ifc_composite_curve_segment(" << o.transition << ", " << o.same_sense << ", " << o.parent_curve << ")";
		}
	};

	struct Ifc_crane_rail_a_shape_profile_def : Ifc_parameterized_profile_def {
		Ifc_positive_length_measure overall_height;
		Ifc_positive_length_measure base_width_2;
		Ifc_positive_length_measure radius;
		Ifc_positive_length_measure head_width;
		Ifc_positive_length_measure head_depth_2;
		Ifc_positive_length_measure head_depth_3;
		Ifc_positive_length_measure web_thickness;
		Ifc_positive_length_measure base_width_4;
		Ifc_positive_length_measure base_depth_1;
		Ifc_positive_length_measure base_depth_2;
		Ifc_positive_length_measure base_depth_3;
		Ifc_positive_length_measure centre_of_gravity_in_y;

		Ifc_crane_rail_a_shape_profile_def() {
			entity = "Ifc_crane_rail_a_shape_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_crane_rail_a_shape_profile_def &o) {
			return os << "Ifc_crane_rail_a_shape_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.overall_height << ", " << o.base_width_2 << ", " << o.radius << ", " << o.head_width << ", " << o.head_depth_2 << ", " << o.head_depth_3 << ", " << o.web_thickness << ", " << o.base_width_4 << ", " << o.base_depth_1 << ", " << o.base_depth_2 << ", " << o.base_depth_3 << ", " << o.centre_of_gravity_in_y << ")";
		}
	};

	struct Ifc_crane_rail_f_shape_profile_def : Ifc_parameterized_profile_def {
		Ifc_positive_length_measure overall_height;
		Ifc_positive_length_measure head_width;
		Ifc_positive_length_measure radius;
		Ifc_positive_length_measure head_depth_2;
		Ifc_positive_length_measure head_depth_3;
		Ifc_positive_length_measure web_thickness;
		Ifc_positive_length_measure base_depth_1;
		Ifc_positive_length_measure base_depth_2;
		Ifc_positive_length_measure centre_of_gravity_in_y;

		Ifc_crane_rail_f_shape_profile_def() {
			entity = "Ifc_crane_rail_f_shape_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_crane_rail_f_shape_profile_def &o) {
			return os << "Ifc_crane_rail_f_shape_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.overall_height << ", " << o.head_width << ", " << o.radius << ", " << o.head_depth_2 << ", " << o.head_depth_3 << ", " << o.web_thickness << ", " << o.base_depth_1 << ", " << o.base_depth_2 << ", " << o.centre_of_gravity_in_y << ")";
		}
	};

	struct Ifc_csg_primitive_3_d : Ifc_geometric_representation_item {
		Ifc_axis_2_placement_3_d *position;

		virtual ~Ifc_csg_primitive_3_d() {}
	};

	struct Ifc_csg_solid : Ifc_solid_model {
		Ifc_csg_select *tree_root_expression;

		Ifc_csg_solid() {
			entity = "Ifc_csg_solid";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_csg_solid &o) {
			return os << "Ifc_csg_solid(" << o.tree_root_expression << ")";
		}
	};

	struct Ifc_curve : Ifc_geometric_representation_item {
		virtual ~Ifc_curve() {}
	};

	struct Ifc_curve_bounded_plane : Ifc_bounded_surface {
		Ifc_plane *basis_surface;
		Ifc_curve *outer_boundary;
		std::vector<Ifc_curve *> inner_boundaries;

		Ifc_curve_bounded_plane() {
			entity = "Ifc_curve_bounded_plane";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_curve_bounded_plane &o) {
			return os << "Ifc_curve_bounded_plane(" << o.basis_surface << ", " << o.outer_boundary << ", " << "vector(" << o.inner_boundaries.size() << ")" << ")";
		}
	};

	struct Ifc_defined_symbol : Ifc_geometric_representation_item {
		Ifc_defined_symbol_select *definition;
		Ifc_cartesian_transformation_operator_2_d *target;

		Ifc_defined_symbol() {
			entity = "Ifc_defined_symbol";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_defined_symbol &o) {
			return os << "Ifc_defined_symbol(" << o.definition << ", " << o.target << ")";
		}
	};

	struct Ifc_dimension_curve : Ifc_annotation_curve_occurrence {
		Ifc_dimension_curve() {
			entity = "Ifc_dimension_curve";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_dimension_curve &o) {
			return os << "Ifc_dimension_curve(" << o.item << ", " << "vector(" << o.styles.size() << ")" << ", " << o.name << ")";
		}
	};

	struct Ifc_dimension_curve_terminator : Ifc_terminator_symbol {
		Ifc_dimension_extent_usage role;

		Ifc_dimension_curve_terminator() {
			entity = "Ifc_dimension_curve_terminator";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_dimension_curve_terminator &o) {
			return os << "Ifc_dimension_curve_terminator(" << o.item << ", " << "vector(" << o.styles.size() << ")" << ", " << o.name << ", " << o.annotated_curve << ", " << o.role << ")";
		}
	};

	struct Ifc_direction : Ifc_geometric_representation_item {
		std::vector<double> direction_ratios;

		Ifc_direction() {
			entity = "Ifc_direction";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_direction &o) {
			return os << "Ifc_direction(" << "vector(" << o.direction_ratios.size() << ")" << ")";
		}
	};

	struct Ifc_door_lining_properties : Ifc_property_set_definition {
		Ifc_positive_length_measure lining_depth;
		Ifc_positive_length_measure lining_thickness;
		Ifc_positive_length_measure threshold_depth;
		Ifc_positive_length_measure threshold_thickness;
		Ifc_positive_length_measure transom_thickness;
		Ifc_length_measure transom_offset;
		Ifc_length_measure lining_offset;
		Ifc_length_measure threshold_offset;
		Ifc_positive_length_measure casing_thickness;
		Ifc_positive_length_measure casing_depth;
		Ifc_shape_aspect *shape_aspect_style;

		Ifc_door_lining_properties() {
			entity = "Ifc_door_lining_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_door_lining_properties &o) {
			return os << "Ifc_door_lining_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.lining_depth << ", " << o.lining_thickness << ", " << o.threshold_depth << ", " << o.threshold_thickness << ", " << o.transom_thickness << ", " << o.transom_offset << ", " << o.lining_offset << ", " << o.threshold_offset << ", " << o.casing_thickness << ", " << o.casing_depth << ", " << o.shape_aspect_style << ")";
		}
	};

	struct Ifc_door_panel_properties : Ifc_property_set_definition {
		Ifc_positive_length_measure panel_depth;
		Ifc_door_panel_operation_enum panel_operation;
		Ifc_normalised_ratio_measure panel_width;
		Ifc_door_panel_position_enum panel_position;
		Ifc_shape_aspect *shape_aspect_style;

		Ifc_door_panel_properties() {
			entity = "Ifc_door_panel_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_door_panel_properties &o) {
			return os << "Ifc_door_panel_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.panel_depth << ", " << o.panel_operation << ", " << o.panel_width << ", " << o.panel_position << ", " << o.shape_aspect_style << ")";
		}
	};

	struct Ifc_door_style : Ifc_type_product {
		Ifc_door_style_operation_enum operation_type;
		Ifc_door_style_construction_enum construction_type;
		bool parameter_takes_precedence;
		bool sizeable;

		Ifc_door_style() {
			entity = "Ifc_door_style";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_door_style &o) {
			return os << "Ifc_door_style(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.operation_type << ", " << o.construction_type << ", " << o.parameter_takes_precedence << ", " << o.sizeable << ")";
		}
	};

	struct Ifc_draughting_callout : Ifc_geometric_representation_item {
		std::vector<Ifc_draughting_callout_element *> contents;

		Ifc_draughting_callout() {
			entity = "Ifc_draughting_callout";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_draughting_callout &o) {
			return os << "Ifc_draughting_callout(" << "vector(" << o.contents.size() << ")" << ")";
		}
	};

	struct Ifc_draughting_pre_defined_colour : Ifc_pre_defined_colour {
		Ifc_draughting_pre_defined_colour() {
			entity = "Ifc_draughting_pre_defined_colour";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_draughting_pre_defined_colour &o) {
			return os << "Ifc_draughting_pre_defined_colour(" << o.name << ")";
		}
	};

	struct Ifc_draughting_pre_defined_curve_font : Ifc_pre_defined_curve_font {
		Ifc_draughting_pre_defined_curve_font() {
			entity = "Ifc_draughting_pre_defined_curve_font";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_draughting_pre_defined_curve_font &o) {
			return os << "Ifc_draughting_pre_defined_curve_font(" << o.name << ")";
		}
	};

	struct Ifc_edge_loop : Ifc_loop {
		std::vector<Ifc_oriented_edge *> edge_list;

		Ifc_edge_loop() {
			entity = "Ifc_edge_loop";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_edge_loop &o) {
			return os << "Ifc_edge_loop(" << "vector(" << o.edge_list.size() << ")" << ")";
		}
	};

	struct Ifc_element_quantity : Ifc_property_set_definition {
		Ifc_label method_of_measurement;
		std::vector<Ifc_physical_quantity *> quantities;

		Ifc_element_quantity() {
			entity = "Ifc_element_quantity";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_element_quantity &o) {
			return os << "Ifc_element_quantity(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.method_of_measurement << ", " << "vector(" << o.quantities.size() << ")" << ")";
		}
	};

	struct Ifc_element_type : Ifc_type_product {
		Ifc_label element_type;

		virtual ~Ifc_element_type() {}
	};

	struct Ifc_elementary_surface : Ifc_surface {
		Ifc_axis_2_placement_3_d *position;

		virtual ~Ifc_elementary_surface() {}
	};

	struct Ifc_ellipse_profile_def : Ifc_parameterized_profile_def {
		Ifc_positive_length_measure semi_axis_1;
		Ifc_positive_length_measure semi_axis_2;

		Ifc_ellipse_profile_def() {
			entity = "Ifc_ellipse_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_ellipse_profile_def &o) {
			return os << "Ifc_ellipse_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.semi_axis_1 << ", " << o.semi_axis_2 << ")";
		}
	};

	struct Ifc_energy_properties : Ifc_property_set_definition {
		Ifc_energy_sequence_enum energy_sequence;
		Ifc_label user_defined_energy_sequence;

		Ifc_energy_properties() {
			entity = "Ifc_energy_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_energy_properties &o) {
			return os << "Ifc_energy_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.energy_sequence << ", " << o.user_defined_energy_sequence << ")";
		}
	};

	struct Ifc_extruded_area_solid : Ifc_swept_area_solid {
		Ifc_direction *extruded_direction;
		Ifc_positive_length_measure depth;

		Ifc_extruded_area_solid() {
			entity = "Ifc_extruded_area_solid";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_extruded_area_solid &o) {
			return os << "Ifc_extruded_area_solid(" << o.swept_area << ", " << o.position << ", " << o.extruded_direction << ", " << o.depth << ")";
		}
	};

	struct Ifc_face_based_surface_model : Ifc_geometric_representation_item {
		std::vector<Ifc_connected_face_set *> fbsm_faces;

		Ifc_face_based_surface_model() {
			entity = "Ifc_face_based_surface_model";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_face_based_surface_model &o) {
			return os << "Ifc_face_based_surface_model(" << "vector(" << o.fbsm_faces.size() << ")" << ")";
		}
	};

	struct Ifc_fill_area_style_hatching : Ifc_geometric_representation_item {
		Ifc_curve_style *hatch_line_appearance;
		Ifc_hatch_line_distance_select *start_of_next_hatch_line;
		Ifc_cartesian_point *point_of_reference_hatch_line;
		Ifc_cartesian_point *pattern_start;
		Ifc_plane_angle_measure hatch_line_angle;

		Ifc_fill_area_style_hatching() {
			entity = "Ifc_fill_area_style_hatching";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_fill_area_style_hatching &o) {
			return os << "Ifc_fill_area_style_hatching(" << o.hatch_line_appearance << ", " << o.start_of_next_hatch_line << ", " << o.point_of_reference_hatch_line << ", " << o.pattern_start << ", " << o.hatch_line_angle << ")";
		}
	};

	struct Ifc_fill_area_style_tile_symbol_with_style : Ifc_geometric_representation_item {
		Ifc_annotation_symbol_occurrence *symbol;

		Ifc_fill_area_style_tile_symbol_with_style() {
			entity = "Ifc_fill_area_style_tile_symbol_with_style";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_fill_area_style_tile_symbol_with_style &o) {
			return os << "Ifc_fill_area_style_tile_symbol_with_style(" << o.symbol << ")";
		}
	};

	struct Ifc_fill_area_style_tiles : Ifc_geometric_representation_item {
		Ifc_one_direction_repeat_factor *tiling_pattern;
		std::vector<Ifc_fill_area_style_tile_shape_select *> tiles;
		Ifc_positive_ratio_measure tiling_scale;

		Ifc_fill_area_style_tiles() {
			entity = "Ifc_fill_area_style_tiles";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_fill_area_style_tiles &o) {
			return os << "Ifc_fill_area_style_tiles(" << o.tiling_pattern << ", " << "vector(" << o.tiles.size() << ")" << ", " << o.tiling_scale << ")";
		}
	};

	struct Ifc_fluid_flow_properties : Ifc_property_set_definition {
		Ifc_property_source_enum property_source;
		Ifc_time_series *flow_condition_time_series;
		Ifc_time_series *velocity_time_series;
		Ifc_time_series *flowrate_time_series;
		Ifc_material *fluid;
		Ifc_time_series *pressure_time_series;
		Ifc_label user_defined_property_source;
		Ifc_thermodynamic_temperature_measure temperature_single_value;
		Ifc_thermodynamic_temperature_measure wet_bulb_temperature_single_value;
		Ifc_time_series *wet_bulb_temperature_time_series;
		Ifc_time_series *temperature_time_series;
		Ifc_derived_measure_value *flowrate_single_value;
		Ifc_positive_ratio_measure flow_condition_single_value;
		Ifc_linear_velocity_measure velocity_single_value;
		Ifc_pressure_measure pressure_single_value;

		Ifc_fluid_flow_properties() {
			entity = "Ifc_fluid_flow_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_fluid_flow_properties &o) {
			return os << "Ifc_fluid_flow_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.property_source << ", " << o.flow_condition_time_series << ", " << o.velocity_time_series << ", " << o.flowrate_time_series << ", " << o.fluid << ", " << o.pressure_time_series << ", " << o.user_defined_property_source << ", " << o.temperature_single_value << ", " << o.wet_bulb_temperature_single_value << ", " << o.wet_bulb_temperature_time_series << ", " << o.temperature_time_series << ", " << o.flowrate_single_value << ", " << o.flow_condition_single_value << ", " << o.velocity_single_value << ", " << o.pressure_single_value << ")";
		}
	};

	struct Ifc_furnishing_element_type : Ifc_element_type {
		Ifc_furnishing_element_type() {
			entity = "Ifc_furnishing_element_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_furnishing_element_type &o) {
			return os << "Ifc_furnishing_element_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ")";
		}
	};

	struct Ifc_furniture_type : Ifc_furnishing_element_type {
		Ifc_assembly_place_enum assembly_place;

		Ifc_furniture_type() {
			entity = "Ifc_furniture_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_furniture_type &o) {
			return os << "Ifc_furniture_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.assembly_place << ")";
		}
	};

	struct Ifc_geometric_curve_set : Ifc_geometric_set {
		Ifc_geometric_curve_set() {
			entity = "Ifc_geometric_curve_set";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_geometric_curve_set &o) {
			return os << "Ifc_geometric_curve_set(" << "vector(" << o.elements.size() << ")" << ")";
		}
	};

	struct Ifc_i_shape_profile_def : Ifc_parameterized_profile_def {
		Ifc_positive_length_measure overall_width;
		Ifc_positive_length_measure overall_depth;
		Ifc_positive_length_measure web_thickness;
		Ifc_positive_length_measure flange_thickness;
		Ifc_positive_length_measure fillet_radius;

		Ifc_i_shape_profile_def() {
			entity = "Ifc_i_shape_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_i_shape_profile_def &o) {
			return os << "Ifc_i_shape_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.overall_width << ", " << o.overall_depth << ", " << o.web_thickness << ", " << o.flange_thickness << ", " << o.fillet_radius << ")";
		}
	};

	struct Ifc_l_shape_profile_def : Ifc_parameterized_profile_def {
		Ifc_positive_length_measure depth;
		Ifc_positive_length_measure width;
		Ifc_positive_length_measure thickness;
		Ifc_positive_length_measure fillet_radius;
		Ifc_positive_length_measure edge_radius;
		Ifc_plane_angle_measure leg_slope;
		Ifc_positive_length_measure centre_of_gravity_in_x;
		Ifc_positive_length_measure centre_of_gravity_in_y;

		Ifc_l_shape_profile_def() {
			entity = "Ifc_l_shape_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_l_shape_profile_def &o) {
			return os << "Ifc_l_shape_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.depth << ", " << o.width << ", " << o.thickness << ", " << o.fillet_radius << ", " << o.edge_radius << ", " << o.leg_slope << ", " << o.centre_of_gravity_in_x << ", " << o.centre_of_gravity_in_y << ")";
		}
	};

	struct Ifc_line : Ifc_curve {
		Ifc_cartesian_point *pnt;
		Ifc_vector *dir;

		Ifc_line() {
			entity = "Ifc_line";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_line &o) {
			return os << "Ifc_line(" << o.pnt << ", " << o.dir << ")";
		}
	};

	struct Ifc_manifold_solid_brep : Ifc_solid_model {
		Ifc_closed_shell *outer;

		virtual ~Ifc_manifold_solid_brep() {}
	};

	struct Ifc_object : Ifc_object_definition {
		Ifc_label object_type;

		virtual ~Ifc_object() {}
	};

	struct Ifc_offset_curve_2_d : Ifc_curve {
		Ifc_curve *basis_curve;
		Ifc_length_measure distance;
		int self_intersect;

		Ifc_offset_curve_2_d() {
			entity = "Ifc_offset_curve_2_d";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_offset_curve_2_d &o) {
			return os << "Ifc_offset_curve_2_d(" << o.basis_curve << ", " << o.distance << ", " << o.self_intersect << ")";
		}
	};

	struct Ifc_offset_curve_3_d : Ifc_curve {
		Ifc_curve *basis_curve;
		Ifc_length_measure distance;
		int self_intersect;
		Ifc_direction *ref_direction;

		Ifc_offset_curve_3_d() {
			entity = "Ifc_offset_curve_3_d";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_offset_curve_3_d &o) {
			return os << "Ifc_offset_curve_3_d(" << o.basis_curve << ", " << o.distance << ", " << o.self_intersect << ", " << o.ref_direction << ")";
		}
	};

	struct Ifc_permeable_covering_properties : Ifc_property_set_definition {
		Ifc_permeable_covering_operation_enum operation_type;
		Ifc_window_panel_position_enum panel_position;
		Ifc_positive_length_measure frame_depth;
		Ifc_positive_length_measure frame_thickness;
		Ifc_shape_aspect *shape_aspect_style;

		Ifc_permeable_covering_properties() {
			entity = "Ifc_permeable_covering_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_permeable_covering_properties &o) {
			return os << "Ifc_permeable_covering_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.operation_type << ", " << o.panel_position << ", " << o.frame_depth << ", " << o.frame_thickness << ", " << o.shape_aspect_style << ")";
		}
	};

	struct Ifc_planar_box : Ifc_planar_extent {
		Ifc_axis_2_placement *placement;

		Ifc_planar_box() {
			entity = "Ifc_planar_box";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_planar_box &o) {
			return os << "Ifc_planar_box(" << o.size_in_x << ", " << o.size_in_y << ", " << o.placement << ")";
		}
	};

	struct Ifc_plane : Ifc_elementary_surface {
		Ifc_plane() {
			entity = "Ifc_plane";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_plane &o) {
			return os << "Ifc_plane(" << o.position << ")";
		}
	};

	struct Ifc_process : Ifc_object {
		virtual ~Ifc_process() {}
	};

	struct Ifc_product : Ifc_object {
		Ifc_object_placement *object_placement;
		Ifc_product_representation *representation;

		virtual ~Ifc_product() {}
	};

	struct Ifc_project : Ifc_object {
		Ifc_label long_name;
		Ifc_label phase;
		std::vector<Ifc_representation_context *> representation_contexts;
		Ifc_unit_assignment *units_in_context;

		Ifc_project() {
			entity = "Ifc_project";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_project &o) {
			return os << "Ifc_project(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.long_name << ", " << o.phase << ", " << "vector(" << o.representation_contexts.size() << ")" << ", " << o.units_in_context << ")";
		}
	};

	struct Ifc_projection_curve : Ifc_annotation_curve_occurrence {
		Ifc_projection_curve() {
			entity = "Ifc_projection_curve";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_projection_curve &o) {
			return os << "Ifc_projection_curve(" << o.item << ", " << "vector(" << o.styles.size() << ")" << ", " << o.name << ")";
		}
	};

	struct Ifc_property_set : Ifc_property_set_definition {
		std::vector<Ifc_property *> has_properties;

		Ifc_property_set() {
			entity = "Ifc_property_set";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_property_set &o) {
			return os << "Ifc_property_set(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.has_properties.size() << ")" << ")";
		}
	};

	struct Ifc_proxy : Ifc_product {
		Ifc_object_type_enum proxy_type;
		Ifc_label tag;

		Ifc_proxy() {
			entity = "Ifc_proxy";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_proxy &o) {
			return os << "Ifc_proxy(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.proxy_type << ", " << o.tag << ")";
		}
	};

	struct Ifc_rectangle_hollow_profile_def : Ifc_rectangle_profile_def {
		Ifc_positive_length_measure wall_thickness;
		Ifc_positive_length_measure inner_fillet_radius;
		Ifc_positive_length_measure outer_fillet_radius;

		Ifc_rectangle_hollow_profile_def() {
			entity = "Ifc_rectangle_hollow_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rectangle_hollow_profile_def &o) {
			return os << "Ifc_rectangle_hollow_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.x_dim << ", " << o.y_dim << ", " << o.wall_thickness << ", " << o.inner_fillet_radius << ", " << o.outer_fillet_radius << ")";
		}
	};

	struct Ifc_rectangular_pyramid : Ifc_csg_primitive_3_d {
		Ifc_positive_length_measure x_length;
		Ifc_positive_length_measure y_length;
		Ifc_positive_length_measure height;

		Ifc_rectangular_pyramid() {
			entity = "Ifc_rectangular_pyramid";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rectangular_pyramid &o) {
			return os << "Ifc_rectangular_pyramid(" << o.position << ", " << o.x_length << ", " << o.y_length << ", " << o.height << ")";
		}
	};

	struct Ifc_rectangular_trimmed_surface : Ifc_bounded_surface {
		Ifc_surface *basis_surface;
		Ifc_parameter_value u_1;
		Ifc_parameter_value v_1;
		Ifc_parameter_value u_2;
		Ifc_parameter_value v_2;
		bool usense;
		bool vsense;

		Ifc_rectangular_trimmed_surface() {
			entity = "Ifc_rectangular_trimmed_surface";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rectangular_trimmed_surface &o) {
			return os << "Ifc_rectangular_trimmed_surface(" << o.basis_surface << ", " << o.u_1 << ", " << o.v_1 << ", " << o.u_2 << ", " << o.v_2 << ", " << o.usense << ", " << o.vsense << ")";
		}
	};

	struct Ifc_rel_assigns : Ifc_relationship {
		std::vector<Ifc_object_definition *> related_objects;
		Ifc_object_type_enum related_objects_type;

		virtual ~Ifc_rel_assigns() {}
	};

	struct Ifc_rel_assigns_to_actor : Ifc_rel_assigns {
		Ifc_actor *relating_actor;
		Ifc_actor_role *acting_role;

		Ifc_rel_assigns_to_actor() {
			entity = "Ifc_rel_assigns_to_actor";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_assigns_to_actor &o) {
			return os << "Ifc_rel_assigns_to_actor(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.related_objects_type << ", " << o.relating_actor << ", " << o.acting_role << ")";
		}
	};

	struct Ifc_rel_assigns_to_control : Ifc_rel_assigns {
		Ifc_control *relating_control;

		Ifc_rel_assigns_to_control() {
			entity = "Ifc_rel_assigns_to_control";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_assigns_to_control &o) {
			return os << "Ifc_rel_assigns_to_control(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.related_objects_type << ", " << o.relating_control << ")";
		}
	};

	struct Ifc_rel_assigns_to_group : Ifc_rel_assigns {
		Ifc_group *relating_group;

		Ifc_rel_assigns_to_group() {
			entity = "Ifc_rel_assigns_to_group";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_assigns_to_group &o) {
			return os << "Ifc_rel_assigns_to_group(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.related_objects_type << ", " << o.relating_group << ")";
		}
	};

	struct Ifc_rel_assigns_to_process : Ifc_rel_assigns {
		Ifc_process *relating_process;
		Ifc_measure_with_unit *quantity_in_process;

		Ifc_rel_assigns_to_process() {
			entity = "Ifc_rel_assigns_to_process";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_assigns_to_process &o) {
			return os << "Ifc_rel_assigns_to_process(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.related_objects_type << ", " << o.relating_process << ", " << o.quantity_in_process << ")";
		}
	};

	struct Ifc_rel_assigns_to_product : Ifc_rel_assigns {
		Ifc_product *relating_product;

		Ifc_rel_assigns_to_product() {
			entity = "Ifc_rel_assigns_to_product";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_assigns_to_product &o) {
			return os << "Ifc_rel_assigns_to_product(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.related_objects_type << ", " << o.relating_product << ")";
		}
	};

	struct Ifc_rel_assigns_to_project_order : Ifc_rel_assigns_to_control {
		Ifc_rel_assigns_to_project_order() {
			entity = "Ifc_rel_assigns_to_project_order";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_assigns_to_project_order &o) {
			return os << "Ifc_rel_assigns_to_project_order(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.related_objects_type << ", " << o.relating_control << ")";
		}
	};

	struct Ifc_rel_assigns_to_resource : Ifc_rel_assigns {
		Ifc_resource *relating_resource;

		Ifc_rel_assigns_to_resource() {
			entity = "Ifc_rel_assigns_to_resource";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_assigns_to_resource &o) {
			return os << "Ifc_rel_assigns_to_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.related_objects_type << ", " << o.relating_resource << ")";
		}
	};

	struct Ifc_rel_associates : Ifc_relationship {
		std::vector<Ifc_root *> related_objects;

		Ifc_rel_associates() {
			entity = "Ifc_rel_associates";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_associates &o) {
			return os << "Ifc_rel_associates(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ")";
		}
	};

	struct Ifc_rel_associates_applied_value : Ifc_rel_associates {
		Ifc_applied_value *relating_applied_value;

		Ifc_rel_associates_applied_value() {
			entity = "Ifc_rel_associates_applied_value";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_associates_applied_value &o) {
			return os << "Ifc_rel_associates_applied_value(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.relating_applied_value << ")";
		}
	};

	struct Ifc_rel_associates_approval : Ifc_rel_associates {
		Ifc_approval *relating_approval;

		Ifc_rel_associates_approval() {
			entity = "Ifc_rel_associates_approval";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_associates_approval &o) {
			return os << "Ifc_rel_associates_approval(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.relating_approval << ")";
		}
	};

	struct Ifc_rel_associates_classification : Ifc_rel_associates {
		Ifc_classification_notation_select *relating_classification;

		Ifc_rel_associates_classification() {
			entity = "Ifc_rel_associates_classification";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_associates_classification &o) {
			return os << "Ifc_rel_associates_classification(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.relating_classification << ")";
		}
	};

	struct Ifc_rel_associates_constraint : Ifc_rel_associates {
		Ifc_label intent;
		Ifc_constraint *relating_constraint;

		Ifc_rel_associates_constraint() {
			entity = "Ifc_rel_associates_constraint";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_associates_constraint &o) {
			return os << "Ifc_rel_associates_constraint(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.intent << ", " << o.relating_constraint << ")";
		}
	};

	struct Ifc_rel_associates_document : Ifc_rel_associates {
		Ifc_document_select *relating_document;

		Ifc_rel_associates_document() {
			entity = "Ifc_rel_associates_document";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_associates_document &o) {
			return os << "Ifc_rel_associates_document(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.relating_document << ")";
		}
	};

	struct Ifc_rel_associates_library : Ifc_rel_associates {
		Ifc_library_select *relating_library;

		Ifc_rel_associates_library() {
			entity = "Ifc_rel_associates_library";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_associates_library &o) {
			return os << "Ifc_rel_associates_library(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.relating_library << ")";
		}
	};

	struct Ifc_rel_associates_material : Ifc_rel_associates {
		Ifc_material_select *relating_material;

		Ifc_rel_associates_material() {
			entity = "Ifc_rel_associates_material";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_associates_material &o) {
			return os << "Ifc_rel_associates_material(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.relating_material << ")";
		}
	};

	struct Ifc_rel_associates_profile_properties : Ifc_rel_associates {
		Ifc_profile_properties *relating_profile_properties;
		Ifc_shape_aspect *profile_section_location;
		Ifc_orientation_select *profile_orientation;

		Ifc_rel_associates_profile_properties() {
			entity = "Ifc_rel_associates_profile_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_associates_profile_properties &o) {
			return os << "Ifc_rel_associates_profile_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.relating_profile_properties << ", " << o.profile_section_location << ", " << o.profile_orientation << ")";
		}
	};

	struct Ifc_rel_connects : Ifc_relationship {
		virtual ~Ifc_rel_connects() {}
	};

	struct Ifc_rel_connects_elements : Ifc_rel_connects {
		Ifc_connection_geometry *connection_geometry;
		Ifc_element *relating_element;
		Ifc_element *related_element;

		Ifc_rel_connects_elements() {
			entity = "Ifc_rel_connects_elements";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_connects_elements &o) {
			return os << "Ifc_rel_connects_elements(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.connection_geometry << ", " << o.relating_element << ", " << o.related_element << ")";
		}
	};

	struct Ifc_rel_connects_path_elements : Ifc_rel_connects_elements {
		std::vector<int> relating_priorities;
		std::vector<int> related_priorities;
		Ifc_connection_type_enum related_connection_type;
		Ifc_connection_type_enum relating_connection_type;

		Ifc_rel_connects_path_elements() {
			entity = "Ifc_rel_connects_path_elements";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_connects_path_elements &o) {
			return os << "Ifc_rel_connects_path_elements(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.connection_geometry << ", " << o.relating_element << ", " << o.related_element << ", " << "vector(" << o.relating_priorities.size() << ")" << ", " << "vector(" << o.related_priorities.size() << ")" << ", " << o.related_connection_type << ", " << o.relating_connection_type << ")";
		}
	};

	struct Ifc_rel_connects_port_to_element : Ifc_rel_connects {
		Ifc_port *relating_port;
		Ifc_element *related_element;

		Ifc_rel_connects_port_to_element() {
			entity = "Ifc_rel_connects_port_to_element";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_connects_port_to_element &o) {
			return os << "Ifc_rel_connects_port_to_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_port << ", " << o.related_element << ")";
		}
	};

	struct Ifc_rel_connects_ports : Ifc_rel_connects {
		Ifc_port *relating_port;
		Ifc_port *related_port;
		Ifc_element *realizing_element;

		Ifc_rel_connects_ports() {
			entity = "Ifc_rel_connects_ports";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_connects_ports &o) {
			return os << "Ifc_rel_connects_ports(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_port << ", " << o.related_port << ", " << o.realizing_element << ")";
		}
	};

	struct Ifc_rel_connects_structural_activity : Ifc_rel_connects {
		Ifc_structural_activity_assignment_select *relating_element;
		Ifc_structural_activity *related_structural_activity;

		Ifc_rel_connects_structural_activity() {
			entity = "Ifc_rel_connects_structural_activity";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_connects_structural_activity &o) {
			return os << "Ifc_rel_connects_structural_activity(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_element << ", " << o.related_structural_activity << ")";
		}
	};

	struct Ifc_rel_connects_structural_element : Ifc_rel_connects {
		Ifc_element *relating_element;
		Ifc_structural_member *related_structural_member;

		Ifc_rel_connects_structural_element() {
			entity = "Ifc_rel_connects_structural_element";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_connects_structural_element &o) {
			return os << "Ifc_rel_connects_structural_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_element << ", " << o.related_structural_member << ")";
		}
	};

	struct Ifc_rel_connects_structural_member : Ifc_rel_connects {
		Ifc_structural_member *relating_structural_member;
		Ifc_structural_connection *related_structural_connection;
		Ifc_boundary_condition *applied_condition;
		Ifc_structural_connection_condition *additional_conditions;
		Ifc_length_measure supported_length;
		Ifc_axis_2_placement_3_d *condition_coordinate_system;

		Ifc_rel_connects_structural_member() {
			entity = "Ifc_rel_connects_structural_member";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_connects_structural_member &o) {
			return os << "Ifc_rel_connects_structural_member(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_structural_member << ", " << o.related_structural_connection << ", " << o.applied_condition << ", " << o.additional_conditions << ", " << o.supported_length << ", " << o.condition_coordinate_system << ")";
		}
	};

	struct Ifc_rel_connects_with_eccentricity : Ifc_rel_connects_structural_member {
		Ifc_connection_geometry *connection_constraint;

		Ifc_rel_connects_with_eccentricity() {
			entity = "Ifc_rel_connects_with_eccentricity";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_connects_with_eccentricity &o) {
			return os << "Ifc_rel_connects_with_eccentricity(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_structural_member << ", " << o.related_structural_connection << ", " << o.applied_condition << ", " << o.additional_conditions << ", " << o.supported_length << ", " << o.condition_coordinate_system << ", " << o.connection_constraint << ")";
		}
	};

	struct Ifc_rel_connects_with_realizing_elements : Ifc_rel_connects_elements {
		std::vector<Ifc_element *> realizing_elements;
		Ifc_label connection_type;

		Ifc_rel_connects_with_realizing_elements() {
			entity = "Ifc_rel_connects_with_realizing_elements";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_connects_with_realizing_elements &o) {
			return os << "Ifc_rel_connects_with_realizing_elements(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.connection_geometry << ", " << o.relating_element << ", " << o.related_element << ", " << "vector(" << o.realizing_elements.size() << ")" << ", " << o.connection_type << ")";
		}
	};

	struct Ifc_rel_contained_in_spatial_structure : Ifc_rel_connects {
		std::vector<Ifc_product *> related_elements;
		Ifc_spatial_structure_element *relating_structure;

		Ifc_rel_contained_in_spatial_structure() {
			entity = "Ifc_rel_contained_in_spatial_structure";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_contained_in_spatial_structure &o) {
			return os << "Ifc_rel_contained_in_spatial_structure(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_elements.size() << ")" << ", " << o.relating_structure << ")";
		}
	};

	struct Ifc_rel_covers_bldg_elements : Ifc_rel_connects {
		Ifc_element *relating_building_element;
		std::vector<Ifc_covering *> related_coverings;

		Ifc_rel_covers_bldg_elements() {
			entity = "Ifc_rel_covers_bldg_elements";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_covers_bldg_elements &o) {
			return os << "Ifc_rel_covers_bldg_elements(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_building_element << ", " << "vector(" << o.related_coverings.size() << ")" << ")";
		}
	};

	struct Ifc_rel_covers_spaces : Ifc_rel_connects {
		Ifc_space *related_space;
		std::vector<Ifc_covering *> related_coverings;

		Ifc_rel_covers_spaces() {
			entity = "Ifc_rel_covers_spaces";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_covers_spaces &o) {
			return os << "Ifc_rel_covers_spaces(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_space << ", " << "vector(" << o.related_coverings.size() << ")" << ")";
		}
	};

	struct Ifc_rel_decomposes : Ifc_relationship {
		Ifc_object_definition *relating_object;
		std::vector<Ifc_object_definition *> related_objects;

		virtual ~Ifc_rel_decomposes() {}
	};

	struct Ifc_rel_defines : Ifc_relationship {
		std::vector<Ifc_object *> related_objects;

		virtual ~Ifc_rel_defines() {}
	};

	struct Ifc_rel_defines_by_properties : Ifc_rel_defines {
		Ifc_property_set_definition *relating_property_definition;

		Ifc_rel_defines_by_properties() {
			entity = "Ifc_rel_defines_by_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_defines_by_properties &o) {
			return os << "Ifc_rel_defines_by_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.relating_property_definition << ")";
		}
	};

	struct Ifc_rel_defines_by_type : Ifc_rel_defines {
		Ifc_type_object *relating_type;

		Ifc_rel_defines_by_type() {
			entity = "Ifc_rel_defines_by_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_defines_by_type &o) {
			return os << "Ifc_rel_defines_by_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.relating_type << ")";
		}
	};

	struct Ifc_rel_fills_element : Ifc_rel_connects {
		Ifc_opening_element *relating_opening_element;
		Ifc_element *related_building_element;

		Ifc_rel_fills_element() {
			entity = "Ifc_rel_fills_element";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_fills_element &o) {
			return os << "Ifc_rel_fills_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_opening_element << ", " << o.related_building_element << ")";
		}
	};

	struct Ifc_rel_flow_control_elements : Ifc_rel_connects {
		std::vector<Ifc_distribution_control_element *> related_control_elements;
		Ifc_distribution_flow_element *relating_flow_element;

		Ifc_rel_flow_control_elements() {
			entity = "Ifc_rel_flow_control_elements";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_flow_control_elements &o) {
			return os << "Ifc_rel_flow_control_elements(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_control_elements.size() << ")" << ", " << o.relating_flow_element << ")";
		}
	};

	struct Ifc_rel_interaction_requirements : Ifc_rel_connects {
		Ifc_count_measure daily_interaction;
		Ifc_normalised_ratio_measure importance_rating;
		Ifc_spatial_structure_element *location_of_interaction;
		Ifc_space_program *related_space_program;
		Ifc_space_program *relating_space_program;

		Ifc_rel_interaction_requirements() {
			entity = "Ifc_rel_interaction_requirements";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_interaction_requirements &o) {
			return os << "Ifc_rel_interaction_requirements(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.daily_interaction << ", " << o.importance_rating << ", " << o.location_of_interaction << ", " << o.related_space_program << ", " << o.relating_space_program << ")";
		}
	};

	struct Ifc_rel_nests : Ifc_rel_decomposes {
		Ifc_rel_nests() {
			entity = "Ifc_rel_nests";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_nests &o) {
			return os << "Ifc_rel_nests(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_object << ", " << "vector(" << o.related_objects.size() << ")" << ")";
		}
	};

	struct Ifc_rel_occupies_spaces : Ifc_rel_assigns_to_actor {
		Ifc_rel_occupies_spaces() {
			entity = "Ifc_rel_occupies_spaces";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_occupies_spaces &o) {
			return os << "Ifc_rel_occupies_spaces(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.related_objects_type << ", " << o.relating_actor << ", " << o.acting_role << ")";
		}
	};

	struct Ifc_rel_overrides_properties : Ifc_rel_defines_by_properties {
		std::vector<Ifc_property *> overriding_properties;

		Ifc_rel_overrides_properties() {
			entity = "Ifc_rel_overrides_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_overrides_properties &o) {
			return os << "Ifc_rel_overrides_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.relating_property_definition << ", " << "vector(" << o.overriding_properties.size() << ")" << ")";
		}
	};

	struct Ifc_rel_projects_element : Ifc_rel_connects {
		Ifc_element *relating_element;
		Ifc_feature_element_addition *related_feature_element;

		Ifc_rel_projects_element() {
			entity = "Ifc_rel_projects_element";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_projects_element &o) {
			return os << "Ifc_rel_projects_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_element << ", " << o.related_feature_element << ")";
		}
	};

	struct Ifc_rel_referenced_in_spatial_structure : Ifc_rel_connects {
		std::vector<Ifc_product *> related_elements;
		Ifc_spatial_structure_element *relating_structure;

		Ifc_rel_referenced_in_spatial_structure() {
			entity = "Ifc_rel_referenced_in_spatial_structure";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_referenced_in_spatial_structure &o) {
			return os << "Ifc_rel_referenced_in_spatial_structure(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_elements.size() << ")" << ", " << o.relating_structure << ")";
		}
	};

	struct Ifc_rel_schedules_cost_items : Ifc_rel_assigns_to_control {
		Ifc_rel_schedules_cost_items() {
			entity = "Ifc_rel_schedules_cost_items";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_schedules_cost_items &o) {
			return os << "Ifc_rel_schedules_cost_items(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.related_objects_type << ", " << o.relating_control << ")";
		}
	};

	struct Ifc_rel_sequence : Ifc_rel_connects {
		Ifc_process *relating_process;
		Ifc_process *related_process;
		Ifc_time_measure time_lag;
		Ifc_sequence_enum sequence_type;

		Ifc_rel_sequence() {
			entity = "Ifc_rel_sequence";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_sequence &o) {
			return os << "Ifc_rel_sequence(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_process << ", " << o.related_process << ", " << o.time_lag << ", " << o.sequence_type << ")";
		}
	};

	struct Ifc_rel_services_buildings : Ifc_rel_connects {
		Ifc_system *relating_system;
		std::vector<Ifc_spatial_structure_element *> related_buildings;

		Ifc_rel_services_buildings() {
			entity = "Ifc_rel_services_buildings";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_services_buildings &o) {
			return os << "Ifc_rel_services_buildings(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_system << ", " << "vector(" << o.related_buildings.size() << ")" << ")";
		}
	};

	struct Ifc_rel_space_boundary : Ifc_rel_connects {
		Ifc_space *relating_space;
		Ifc_element *related_building_element;
		Ifc_connection_geometry *connection_geometry;
		Ifc_physical_or_virtual_enum physical_or_virtual_boundary;
		Ifc_internal_or_external_enum internal_or_external_boundary;

		Ifc_rel_space_boundary() {
			entity = "Ifc_rel_space_boundary";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_space_boundary &o) {
			return os << "Ifc_rel_space_boundary(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_space << ", " << o.related_building_element << ", " << o.connection_geometry << ", " << o.physical_or_virtual_boundary << ", " << o.internal_or_external_boundary << ")";
		}
	};

	struct Ifc_rel_voids_element : Ifc_rel_connects {
		Ifc_element *relating_building_element;
		Ifc_feature_element_subtraction *related_opening_element;

		Ifc_rel_voids_element() {
			entity = "Ifc_rel_voids_element";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_voids_element &o) {
			return os << "Ifc_rel_voids_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_building_element << ", " << o.related_opening_element << ")";
		}
	};

	struct Ifc_resource : Ifc_object {
		virtual ~Ifc_resource() {}
	};

	struct Ifc_revolved_area_solid : Ifc_swept_area_solid {
		Ifc_axis_1_placement *axis;
		Ifc_plane_angle_measure angle;

		Ifc_revolved_area_solid() {
			entity = "Ifc_revolved_area_solid";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_revolved_area_solid &o) {
			return os << "Ifc_revolved_area_solid(" << o.swept_area << ", " << o.position << ", " << o.axis << ", " << o.angle << ")";
		}
	};

	struct Ifc_right_circular_cone : Ifc_csg_primitive_3_d {
		Ifc_positive_length_measure height;
		Ifc_positive_length_measure bottom_radius;

		Ifc_right_circular_cone() {
			entity = "Ifc_right_circular_cone";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_right_circular_cone &o) {
			return os << "Ifc_right_circular_cone(" << o.position << ", " << o.height << ", " << o.bottom_radius << ")";
		}
	};

	struct Ifc_right_circular_cylinder : Ifc_csg_primitive_3_d {
		Ifc_positive_length_measure height;
		Ifc_positive_length_measure radius;

		Ifc_right_circular_cylinder() {
			entity = "Ifc_right_circular_cylinder";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_right_circular_cylinder &o) {
			return os << "Ifc_right_circular_cylinder(" << o.position << ", " << o.height << ", " << o.radius << ")";
		}
	};

	struct Ifc_spatial_structure_element : Ifc_product {
		Ifc_label long_name;
		Ifc_element_composition_enum composition_type;

		virtual ~Ifc_spatial_structure_element() {}
	};

	struct Ifc_spatial_structure_element_type : Ifc_element_type {
		virtual ~Ifc_spatial_structure_element_type() {}
	};

	struct Ifc_sphere : Ifc_csg_primitive_3_d {
		Ifc_positive_length_measure radius;

		Ifc_sphere() {
			entity = "Ifc_sphere";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_sphere &o) {
			return os << "Ifc_sphere(" << o.position << ", " << o.radius << ")";
		}
	};

	struct Ifc_structural_activity : Ifc_product {
		Ifc_structural_load *applied_load;
		Ifc_global_or_local_enum global_or_local;

		virtual ~Ifc_structural_activity() {}
	};

	struct Ifc_structural_item : Ifc_product {
		virtual ~Ifc_structural_item() {}
	};

	struct Ifc_structural_member : Ifc_structural_item {
		virtual ~Ifc_structural_member() {}
	};

	struct Ifc_structural_reaction : Ifc_structural_activity {
		virtual ~Ifc_structural_reaction() {}
	};

	struct Ifc_structural_surface_member : Ifc_structural_member {
		Ifc_structural_surface_type_enum predefined_type;
		Ifc_positive_length_measure thickness;

		Ifc_structural_surface_member() {
			entity = "Ifc_structural_surface_member";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_surface_member &o) {
			return os << "Ifc_structural_surface_member(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.predefined_type << ", " << o.thickness << ")";
		}
	};

	struct Ifc_structural_surface_member_varying : Ifc_structural_surface_member {
		std::vector<Ifc_positive_length_measure> subsequent_thickness;
		Ifc_shape_aspect *varying_thickness_location;

		Ifc_structural_surface_member_varying() {
			entity = "Ifc_structural_surface_member_varying";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_surface_member_varying &o) {
			return os << "Ifc_structural_surface_member_varying(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.predefined_type << ", " << o.thickness << ", " << "vector(" << o.subsequent_thickness.size() << ")" << ", " << o.varying_thickness_location << ")";
		}
	};

	struct Ifc_structured_dimension_callout : Ifc_draughting_callout {
		Ifc_structured_dimension_callout() {
			entity = "Ifc_structured_dimension_callout";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structured_dimension_callout &o) {
			return os << "Ifc_structured_dimension_callout(" << "vector(" << o.contents.size() << ")" << ")";
		}
	};

	struct Ifc_surface_curve_swept_area_solid : Ifc_swept_area_solid {
		Ifc_curve *directrix;
		Ifc_parameter_value start_param;
		Ifc_parameter_value end_param;
		Ifc_surface *reference_surface;

		Ifc_surface_curve_swept_area_solid() {
			entity = "Ifc_surface_curve_swept_area_solid";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_curve_swept_area_solid &o) {
			return os << "Ifc_surface_curve_swept_area_solid(" << o.swept_area << ", " << o.position << ", " << o.directrix << ", " << o.start_param << ", " << o.end_param << ", " << o.reference_surface << ")";
		}
	};

	struct Ifc_surface_of_linear_extrusion : Ifc_swept_surface {
		Ifc_direction *extruded_direction;
		Ifc_length_measure depth;

		Ifc_surface_of_linear_extrusion() {
			entity = "Ifc_surface_of_linear_extrusion";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_of_linear_extrusion &o) {
			return os << "Ifc_surface_of_linear_extrusion(" << o.swept_curve << ", " << o.position << ", " << o.extruded_direction << ", " << o.depth << ")";
		}
	};

	struct Ifc_surface_of_revolution : Ifc_swept_surface {
		Ifc_axis_1_placement *axis_position;

		Ifc_surface_of_revolution() {
			entity = "Ifc_surface_of_revolution";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_of_revolution &o) {
			return os << "Ifc_surface_of_revolution(" << o.swept_curve << ", " << o.position << ", " << o.axis_position << ")";
		}
	};

	struct Ifc_system_furniture_element_type : Ifc_furnishing_element_type {
		Ifc_system_furniture_element_type() {
			entity = "Ifc_system_furniture_element_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_system_furniture_element_type &o) {
			return os << "Ifc_system_furniture_element_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ")";
		}
	};

	struct Ifc_task : Ifc_process {
		Ifc_identifier task_id;
		Ifc_label status;
		Ifc_label work_method;
		bool is_milestone;
		int priority;

		Ifc_task() {
			entity = "Ifc_task";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_task &o) {
			return os << "Ifc_task(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.task_id << ", " << o.status << ", " << o.work_method << ", " << o.is_milestone << ", " << o.priority << ")";
		}
	};

	struct Ifc_transport_element_type : Ifc_element_type {
		Ifc_transport_element_type_enum predefined_type;

		Ifc_transport_element_type() {
			entity = "Ifc_transport_element_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_transport_element_type &o) {
			return os << "Ifc_transport_element_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_actor : Ifc_object {
		Ifc_actor_select *the_actor;

		Ifc_actor() {
			entity = "Ifc_actor";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_actor &o) {
			return os << "Ifc_actor(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.the_actor << ")";
		}
	};

	struct Ifc_annotation : Ifc_product {
		Ifc_annotation() {
			entity = "Ifc_annotation";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_annotation &o) {
			return os << "Ifc_annotation(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ")";
		}
	};

	struct Ifc_asymmetric_i_shape_profile_def : Ifc_i_shape_profile_def {
		Ifc_positive_length_measure top_flange_width;
		Ifc_positive_length_measure top_flange_thickness;
		Ifc_positive_length_measure top_flange_fillet_radius;
		Ifc_positive_length_measure centre_of_gravity_in_y;

		Ifc_asymmetric_i_shape_profile_def() {
			entity = "Ifc_asymmetric_i_shape_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_asymmetric_i_shape_profile_def &o) {
			return os << "Ifc_asymmetric_i_shape_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.overall_width << ", " << o.overall_depth << ", " << o.web_thickness << ", " << o.flange_thickness << ", " << o.fillet_radius << ", " << o.top_flange_width << ", " << o.top_flange_thickness << ", " << o.top_flange_fillet_radius << ", " << o.centre_of_gravity_in_y << ")";
		}
	};

	struct Ifc_block : Ifc_csg_primitive_3_d {
		Ifc_positive_length_measure x_length;
		Ifc_positive_length_measure y_length;
		Ifc_positive_length_measure z_length;

		Ifc_block() {
			entity = "Ifc_block";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_block &o) {
			return os << "Ifc_block(" << o.position << ", " << o.x_length << ", " << o.y_length << ", " << o.z_length << ")";
		}
	};

	struct Ifc_boolean_clipping_result : Ifc_boolean_result {
		Ifc_boolean_clipping_result() {
			entity = "Ifc_boolean_clipping_result";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_boolean_clipping_result &o) {
			return os << "Ifc_boolean_clipping_result(" << o._operator << ", " << o.first_operand << ", " << o.second_operand << ")";
		}
	};

	struct Ifc_bounded_curve : Ifc_curve {
		virtual ~Ifc_bounded_curve() {}
	};

	struct Ifc_building : Ifc_spatial_structure_element {
		Ifc_length_measure elevation_of_ref_height;
		Ifc_length_measure elevation_of_terrain;
		Ifc_postal_address *building_address;

		Ifc_building() {
			entity = "Ifc_building";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_building &o) {
			return os << "Ifc_building(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.long_name << ", " << o.composition_type << ", " << o.elevation_of_ref_height << ", " << o.elevation_of_terrain << ", " << o.building_address << ")";
		}
	};

	struct Ifc_building_element_type : Ifc_element_type {
		virtual ~Ifc_building_element_type() {}
	};

	struct Ifc_building_storey : Ifc_spatial_structure_element {
		Ifc_length_measure elevation;

		Ifc_building_storey() {
			entity = "Ifc_building_storey";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_building_storey &o) {
			return os << "Ifc_building_storey(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.long_name << ", " << o.composition_type << ", " << o.elevation << ")";
		}
	};

	struct Ifc_circle_hollow_profile_def : Ifc_circle_profile_def {
		Ifc_positive_length_measure wall_thickness;

		Ifc_circle_hollow_profile_def() {
			entity = "Ifc_circle_hollow_profile_def";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_circle_hollow_profile_def &o) {
			return os << "Ifc_circle_hollow_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.radius << ", " << o.wall_thickness << ")";
		}
	};

	struct Ifc_column_type : Ifc_building_element_type {
		Ifc_column_type_enum predefined_type;

		Ifc_column_type() {
			entity = "Ifc_column_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_column_type &o) {
			return os << "Ifc_column_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_composite_curve : Ifc_bounded_curve {
		std::vector<Ifc_composite_curve_segment *> segments;
		int self_intersect;

		Ifc_composite_curve() {
			entity = "Ifc_composite_curve";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_composite_curve &o) {
			return os << "Ifc_composite_curve(" << "vector(" << o.segments.size() << ")" << ", " << o.self_intersect << ")";
		}
	};

	struct Ifc_conic : Ifc_curve {
		Ifc_axis_2_placement *position;

		virtual ~Ifc_conic() {}
	};

	struct Ifc_construction_resource : Ifc_resource {
		Ifc_identifier resource_identifier;
		Ifc_label resource_group;
		Ifc_resource_consumption_enum resource_consumption;
		Ifc_measure_with_unit *base_quantity;

		virtual ~Ifc_construction_resource() {}
	};

	struct Ifc_control : Ifc_object {
		virtual ~Ifc_control() {}
	};

	struct Ifc_cost_item : Ifc_control {
		Ifc_cost_item() {
			entity = "Ifc_cost_item";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_cost_item &o) {
			return os << "Ifc_cost_item(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ")";
		}
	};

	struct Ifc_cost_schedule : Ifc_control {
		Ifc_actor_select *submitted_by;
		Ifc_actor_select *prepared_by;
		Ifc_date_time_select *submitted_on;
		Ifc_label status;
		std::vector<Ifc_actor_select *> target_users;
		Ifc_date_time_select *update_date;
		Ifc_identifier i_d;
		Ifc_cost_schedule_type_enum predefined_type;

		Ifc_cost_schedule() {
			entity = "Ifc_cost_schedule";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_cost_schedule &o) {
			return os << "Ifc_cost_schedule(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.submitted_by << ", " << o.prepared_by << ", " << o.submitted_on << ", " << o.status << ", " << "vector(" << o.target_users.size() << ")" << ", " << o.update_date << ", " << o.i_d << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_covering_type : Ifc_building_element_type {
		Ifc_covering_type_enum predefined_type;

		Ifc_covering_type() {
			entity = "Ifc_covering_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_covering_type &o) {
			return os << "Ifc_covering_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_crew_resource : Ifc_construction_resource {
		Ifc_crew_resource() {
			entity = "Ifc_crew_resource";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_crew_resource &o) {
			return os << "Ifc_crew_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.resource_identifier << ", " << o.resource_group << ", " << o.resource_consumption << ", " << o.base_quantity << ")";
		}
	};

	struct Ifc_curtain_wall_type : Ifc_building_element_type {
		Ifc_curtain_wall_type_enum predefined_type;

		Ifc_curtain_wall_type() {
			entity = "Ifc_curtain_wall_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_curtain_wall_type &o) {
			return os << "Ifc_curtain_wall_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_dimension_curve_directed_callout : Ifc_draughting_callout {
		Ifc_dimension_curve_directed_callout() {
			entity = "Ifc_dimension_curve_directed_callout";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_dimension_curve_directed_callout &o) {
			return os << "Ifc_dimension_curve_directed_callout(" << "vector(" << o.contents.size() << ")" << ")";
		}
	};

	struct Ifc_distribution_element_type : Ifc_element_type {
		Ifc_distribution_element_type() {
			entity = "Ifc_distribution_element_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_distribution_element_type &o) {
			return os << "Ifc_distribution_element_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ")";
		}
	};

	struct Ifc_distribution_flow_element_type : Ifc_distribution_element_type {
		virtual ~Ifc_distribution_flow_element_type() {}
	};

	struct Ifc_electrical_base_properties : Ifc_energy_properties {
		Ifc_electric_current_enum electric_current_type;
		Ifc_electric_voltage_measure input_voltage;
		Ifc_frequency_measure input_frequency;
		Ifc_electric_current_measure full_load_current;
		Ifc_electric_current_measure minimum_circuit_current;
		Ifc_power_measure maximum_power_input;
		Ifc_power_measure rated_power_input;
		int input_phase;

		Ifc_electrical_base_properties() {
			entity = "Ifc_electrical_base_properties";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_electrical_base_properties &o) {
			return os << "Ifc_electrical_base_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.energy_sequence << ", " << o.user_defined_energy_sequence << ", " << o.electric_current_type << ", " << o.input_voltage << ", " << o.input_frequency << ", " << o.full_load_current << ", " << o.minimum_circuit_current << ", " << o.maximum_power_input << ", " << o.rated_power_input << ", " << o.input_phase << ")";
		}
	};

	struct Ifc_element : Ifc_product {
		Ifc_identifier tag;

		virtual ~Ifc_element() {}
	};

	struct Ifc_element_assembly : Ifc_element {
		Ifc_assembly_place_enum assembly_place;
		Ifc_element_assembly_type_enum predefined_type;

		Ifc_element_assembly() {
			entity = "Ifc_element_assembly";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_element_assembly &o) {
			return os << "Ifc_element_assembly(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.assembly_place << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_element_component : Ifc_element {
		virtual ~Ifc_element_component() {}
	};

	struct Ifc_element_component_type : Ifc_element_type {
		virtual ~Ifc_element_component_type() {}
	};

	struct Ifc_ellipse : Ifc_conic {
		Ifc_positive_length_measure semi_axis_1;
		Ifc_positive_length_measure semi_axis_2;

		Ifc_ellipse() {
			entity = "Ifc_ellipse";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_ellipse &o) {
			return os << "Ifc_ellipse(" << o.position << ", " << o.semi_axis_1 << ", " << o.semi_axis_2 << ")";
		}
	};

	struct Ifc_energy_conversion_device_type : Ifc_distribution_flow_element_type {
		virtual ~Ifc_energy_conversion_device_type() {}
	};

	struct Ifc_equipment_element : Ifc_element {
		Ifc_equipment_element() {
			entity = "Ifc_equipment_element";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_equipment_element &o) {
			return os << "Ifc_equipment_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_equipment_standard : Ifc_control {
		Ifc_equipment_standard() {
			entity = "Ifc_equipment_standard";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_equipment_standard &o) {
			return os << "Ifc_equipment_standard(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ")";
		}
	};

	struct Ifc_evaporative_cooler_type : Ifc_energy_conversion_device_type {
		Ifc_evaporative_cooler_type_enum predefined_type;

		Ifc_evaporative_cooler_type() {
			entity = "Ifc_evaporative_cooler_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_evaporative_cooler_type &o) {
			return os << "Ifc_evaporative_cooler_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_evaporator_type : Ifc_energy_conversion_device_type {
		Ifc_evaporator_type_enum predefined_type;

		Ifc_evaporator_type() {
			entity = "Ifc_evaporator_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_evaporator_type &o) {
			return os << "Ifc_evaporator_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_faceted_brep : Ifc_manifold_solid_brep {
		Ifc_faceted_brep() {
			entity = "Ifc_faceted_brep";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_faceted_brep &o) {
			return os << "Ifc_faceted_brep(" << o.outer << ")";
		}
	};

	struct Ifc_faceted_brep_with_voids : Ifc_manifold_solid_brep {
		std::vector<Ifc_closed_shell *> voids;

		Ifc_faceted_brep_with_voids() {
			entity = "Ifc_faceted_brep_with_voids";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_faceted_brep_with_voids &o) {
			return os << "Ifc_faceted_brep_with_voids(" << o.outer << ", " << "vector(" << o.voids.size() << ")" << ")";
		}
	};

	struct Ifc_fastener : Ifc_element_component {
		Ifc_fastener() {
			entity = "Ifc_fastener";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_fastener &o) {
			return os << "Ifc_fastener(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_fastener_type : Ifc_element_component_type {
		Ifc_fastener_type() {
			entity = "Ifc_fastener_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_fastener_type &o) {
			return os << "Ifc_fastener_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ")";
		}
	};

	struct Ifc_feature_element : Ifc_element {
		virtual ~Ifc_feature_element() {}
	};

	struct Ifc_feature_element_addition : Ifc_feature_element {
		virtual ~Ifc_feature_element_addition() {}
	};

	struct Ifc_feature_element_subtraction : Ifc_feature_element {
		virtual ~Ifc_feature_element_subtraction() {}
	};

	struct Ifc_flow_controller_type : Ifc_distribution_flow_element_type {
		virtual ~Ifc_flow_controller_type() {}
	};

	struct Ifc_flow_fitting_type : Ifc_distribution_flow_element_type {
		virtual ~Ifc_flow_fitting_type() {}
	};

	struct Ifc_flow_meter_type : Ifc_flow_controller_type {
		Ifc_flow_meter_type_enum predefined_type;

		Ifc_flow_meter_type() {
			entity = "Ifc_flow_meter_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_meter_type &o) {
			return os << "Ifc_flow_meter_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_flow_moving_device_type : Ifc_distribution_flow_element_type {
		virtual ~Ifc_flow_moving_device_type() {}
	};

	struct Ifc_flow_segment_type : Ifc_distribution_flow_element_type {
		virtual ~Ifc_flow_segment_type() {}
	};

	struct Ifc_flow_storage_device_type : Ifc_distribution_flow_element_type {
		virtual ~Ifc_flow_storage_device_type() {}
	};

	struct Ifc_flow_terminal_type : Ifc_distribution_flow_element_type {
		virtual ~Ifc_flow_terminal_type() {}
	};

	struct Ifc_flow_treatment_device_type : Ifc_distribution_flow_element_type {
		virtual ~Ifc_flow_treatment_device_type() {}
	};

	struct Ifc_furnishing_element : Ifc_element {
		Ifc_furnishing_element() {
			entity = "Ifc_furnishing_element";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_furnishing_element &o) {
			return os << "Ifc_furnishing_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_furniture_standard : Ifc_control {
		Ifc_furniture_standard() {
			entity = "Ifc_furniture_standard";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_furniture_standard &o) {
			return os << "Ifc_furniture_standard(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ")";
		}
	};

	struct Ifc_gas_terminal_type : Ifc_flow_terminal_type {
		Ifc_gas_terminal_type_enum predefined_type;

		Ifc_gas_terminal_type() {
			entity = "Ifc_gas_terminal_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_gas_terminal_type &o) {
			return os << "Ifc_gas_terminal_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_grid : Ifc_product {
		std::vector<Ifc_grid_axis *> u_axes;
		std::vector<Ifc_grid_axis *> v_axes;
		std::vector<Ifc_grid_axis *> w_axes;

		Ifc_grid() {
			entity = "Ifc_grid";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_grid &o) {
			return os << "Ifc_grid(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << "vector(" << o.u_axes.size() << ")" << ", " << "vector(" << o.v_axes.size() << ")" << ", " << "vector(" << o.w_axes.size() << ")" << ")";
		}
	};

	struct Ifc_group : Ifc_object {
		Ifc_group() {
			entity = "Ifc_group";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_group &o) {
			return os << "Ifc_group(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ")";
		}
	};

	struct Ifc_heat_exchanger_type : Ifc_energy_conversion_device_type {
		Ifc_heat_exchanger_type_enum predefined_type;

		Ifc_heat_exchanger_type() {
			entity = "Ifc_heat_exchanger_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_heat_exchanger_type &o) {
			return os << "Ifc_heat_exchanger_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_humidifier_type : Ifc_energy_conversion_device_type {
		Ifc_humidifier_type_enum predefined_type;

		Ifc_humidifier_type() {
			entity = "Ifc_humidifier_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_humidifier_type &o) {
			return os << "Ifc_humidifier_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_inventory : Ifc_group {
		Ifc_inventory_type_enum inventory_type;
		Ifc_actor_select *jurisdiction;
		std::vector<Ifc_person *> responsible_persons;
		Ifc_calendar_date *last_update_date;
		Ifc_cost_value *current_value;
		Ifc_cost_value *original_value;

		Ifc_inventory() {
			entity = "Ifc_inventory";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_inventory &o) {
			return os << "Ifc_inventory(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.inventory_type << ", " << o.jurisdiction << ", " << "vector(" << o.responsible_persons.size() << ")" << ", " << o.last_update_date << ", " << o.current_value << ", " << o.original_value << ")";
		}
	};

	struct Ifc_junction_box_type : Ifc_flow_fitting_type {
		Ifc_junction_box_type_enum predefined_type;

		Ifc_junction_box_type() {
			entity = "Ifc_junction_box_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_junction_box_type &o) {
			return os << "Ifc_junction_box_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_labor_resource : Ifc_construction_resource {
		Ifc_text skill_set;

		Ifc_labor_resource() {
			entity = "Ifc_labor_resource";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_labor_resource &o) {
			return os << "Ifc_labor_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.resource_identifier << ", " << o.resource_group << ", " << o.resource_consumption << ", " << o.base_quantity << ", " << o.skill_set << ")";
		}
	};

	struct Ifc_lamp_type : Ifc_flow_terminal_type {
		Ifc_lamp_type_enum predefined_type;

		Ifc_lamp_type() {
			entity = "Ifc_lamp_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_lamp_type &o) {
			return os << "Ifc_lamp_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_light_fixture_type : Ifc_flow_terminal_type {
		Ifc_light_fixture_type_enum predefined_type;

		Ifc_light_fixture_type() {
			entity = "Ifc_light_fixture_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_light_fixture_type &o) {
			return os << "Ifc_light_fixture_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_linear_dimension : Ifc_dimension_curve_directed_callout {
		Ifc_linear_dimension() {
			entity = "Ifc_linear_dimension";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_linear_dimension &o) {
			return os << "Ifc_linear_dimension(" << "vector(" << o.contents.size() << ")" << ")";
		}
	};

	struct Ifc_mechanical_fastener : Ifc_fastener {
		Ifc_positive_length_measure nominal_diameter;
		Ifc_positive_length_measure nominal_length;

		Ifc_mechanical_fastener() {
			entity = "Ifc_mechanical_fastener";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_mechanical_fastener &o) {
			return os << "Ifc_mechanical_fastener(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.nominal_diameter << ", " << o.nominal_length << ")";
		}
	};

	struct Ifc_mechanical_fastener_type : Ifc_fastener_type {
		Ifc_mechanical_fastener_type() {
			entity = "Ifc_mechanical_fastener_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_mechanical_fastener_type &o) {
			return os << "Ifc_mechanical_fastener_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ")";
		}
	};

	struct Ifc_member_type : Ifc_building_element_type {
		Ifc_member_type_enum predefined_type;

		Ifc_member_type() {
			entity = "Ifc_member_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_member_type &o) {
			return os << "Ifc_member_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_motor_connection_type : Ifc_energy_conversion_device_type {
		Ifc_motor_connection_type_enum predefined_type;

		Ifc_motor_connection_type() {
			entity = "Ifc_motor_connection_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_motor_connection_type &o) {
			return os << "Ifc_motor_connection_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_move : Ifc_task {
		Ifc_spatial_structure_element *move_from;
		Ifc_spatial_structure_element *move_to;
		std::vector<Ifc_text> punch_list;

		Ifc_move() {
			entity = "Ifc_move";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_move &o) {
			return os << "Ifc_move(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.task_id << ", " << o.status << ", " << o.work_method << ", " << o.is_milestone << ", " << o.priority << ", " << o.move_from << ", " << o.move_to << ", " << "vector(" << o.punch_list.size() << ")" << ")";
		}
	};

	struct Ifc_occupant : Ifc_actor {
		Ifc_occupant_type_enum predefined_type;

		Ifc_occupant() {
			entity = "Ifc_occupant";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_occupant &o) {
			return os << "Ifc_occupant(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.the_actor << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_opening_element : Ifc_feature_element_subtraction {
		Ifc_opening_element() {
			entity = "Ifc_opening_element";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_opening_element &o) {
			return os << "Ifc_opening_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_order_action : Ifc_task {
		Ifc_identifier action_i_d;

		Ifc_order_action() {
			entity = "Ifc_order_action";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_order_action &o) {
			return os << "Ifc_order_action(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.task_id << ", " << o.status << ", " << o.work_method << ", " << o.is_milestone << ", " << o.priority << ", " << o.action_i_d << ")";
		}
	};

	struct Ifc_outlet_type : Ifc_flow_terminal_type {
		Ifc_outlet_type_enum predefined_type;

		Ifc_outlet_type() {
			entity = "Ifc_outlet_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_outlet_type &o) {
			return os << "Ifc_outlet_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_performance_history : Ifc_control {
		Ifc_label life_cycle_phase;

		Ifc_performance_history() {
			entity = "Ifc_performance_history";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_performance_history &o) {
			return os << "Ifc_performance_history(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.life_cycle_phase << ")";
		}
	};

	struct Ifc_permit : Ifc_control {
		Ifc_identifier permit_i_d;

		Ifc_permit() {
			entity = "Ifc_permit";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_permit &o) {
			return os << "Ifc_permit(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.permit_i_d << ")";
		}
	};

	struct Ifc_pipe_fitting_type : Ifc_flow_fitting_type {
		Ifc_pipe_fitting_type_enum predefined_type;

		Ifc_pipe_fitting_type() {
			entity = "Ifc_pipe_fitting_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_pipe_fitting_type &o) {
			return os << "Ifc_pipe_fitting_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_pipe_segment_type : Ifc_flow_segment_type {
		Ifc_pipe_segment_type_enum predefined_type;

		Ifc_pipe_segment_type() {
			entity = "Ifc_pipe_segment_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_pipe_segment_type &o) {
			return os << "Ifc_pipe_segment_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_plate_type : Ifc_building_element_type {
		Ifc_plate_type_enum predefined_type;

		Ifc_plate_type() {
			entity = "Ifc_plate_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_plate_type &o) {
			return os << "Ifc_plate_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_polyline : Ifc_bounded_curve {
		std::vector<Ifc_cartesian_point *> points;

		Ifc_polyline() {
			entity = "Ifc_polyline";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_polyline &o) {
			return os << "Ifc_polyline(" << "vector(" << o.points.size() << ")" << ")";
		}
	};

	struct Ifc_port : Ifc_product {
		virtual ~Ifc_port() {}
	};

	struct Ifc_procedure : Ifc_process {
		Ifc_identifier procedure_i_d;
		Ifc_procedure_type_enum procedure_type;
		Ifc_label user_defined_procedure_type;

		Ifc_procedure() {
			entity = "Ifc_procedure";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_procedure &o) {
			return os << "Ifc_procedure(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.procedure_i_d << ", " << o.procedure_type << ", " << o.user_defined_procedure_type << ")";
		}
	};

	struct Ifc_project_order : Ifc_control {
		Ifc_identifier i_d;
		Ifc_project_order_type_enum predefined_type;
		Ifc_label status;

		Ifc_project_order() {
			entity = "Ifc_project_order";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_project_order &o) {
			return os << "Ifc_project_order(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.i_d << ", " << o.predefined_type << ", " << o.status << ")";
		}
	};

	struct Ifc_project_order_record : Ifc_control {
		std::vector<Ifc_rel_assigns_to_project_order *> records;
		Ifc_project_order_record_type_enum predefined_type;

		Ifc_project_order_record() {
			entity = "Ifc_project_order_record";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_project_order_record &o) {
			return os << "Ifc_project_order_record(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << "vector(" << o.records.size() << ")" << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_projection_element : Ifc_feature_element_addition {
		Ifc_projection_element() {
			entity = "Ifc_projection_element";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_projection_element &o) {
			return os << "Ifc_projection_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_protective_device_type : Ifc_flow_controller_type {
		Ifc_protective_device_type_enum predefined_type;

		Ifc_protective_device_type() {
			entity = "Ifc_protective_device_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_protective_device_type &o) {
			return os << "Ifc_protective_device_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_pump_type : Ifc_flow_moving_device_type {
		Ifc_pump_type_enum predefined_type;

		Ifc_pump_type() {
			entity = "Ifc_pump_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_pump_type &o) {
			return os << "Ifc_pump_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_radius_dimension : Ifc_dimension_curve_directed_callout {
		Ifc_radius_dimension() {
			entity = "Ifc_radius_dimension";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_radius_dimension &o) {
			return os << "Ifc_radius_dimension(" << "vector(" << o.contents.size() << ")" << ")";
		}
	};

	struct Ifc_railing_type : Ifc_building_element_type {
		Ifc_railing_type_enum predefined_type;

		Ifc_railing_type() {
			entity = "Ifc_railing_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_railing_type &o) {
			return os << "Ifc_railing_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_ramp_flight_type : Ifc_building_element_type {
		Ifc_ramp_flight_type_enum predefined_type;

		Ifc_ramp_flight_type() {
			entity = "Ifc_ramp_flight_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_ramp_flight_type &o) {
			return os << "Ifc_ramp_flight_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_rel_aggregates : Ifc_rel_decomposes {
		Ifc_rel_aggregates() {
			entity = "Ifc_rel_aggregates";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_aggregates &o) {
			return os << "Ifc_rel_aggregates(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_object << ", " << "vector(" << o.related_objects.size() << ")" << ")";
		}
	};

	struct Ifc_rel_assigns_tasks : Ifc_rel_assigns_to_control {
		Ifc_schedule_time_control *time_for_task;

		Ifc_rel_assigns_tasks() {
			entity = "Ifc_rel_assigns_tasks";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_assigns_tasks &o) {
			return os << "Ifc_rel_assigns_tasks(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.related_objects_type << ", " << o.relating_control << ", " << o.time_for_task << ")";
		}
	};

	struct Ifc_sanitary_terminal_type : Ifc_flow_terminal_type {
		Ifc_sanitary_terminal_type_enum predefined_type;

		Ifc_sanitary_terminal_type() {
			entity = "Ifc_sanitary_terminal_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_sanitary_terminal_type &o) {
			return os << "Ifc_sanitary_terminal_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_schedule_time_control : Ifc_control {
		Ifc_date_time_select *actual_start;
		Ifc_date_time_select *early_start;
		Ifc_date_time_select *late_start;
		Ifc_date_time_select *schedule_start;
		Ifc_date_time_select *actual_finish;
		Ifc_date_time_select *early_finish;
		Ifc_date_time_select *late_finish;
		Ifc_date_time_select *schedule_finish;
		Ifc_time_measure schedule_duration;
		Ifc_time_measure actual_duration;
		Ifc_time_measure remaining_time;
		Ifc_time_measure free_float;
		Ifc_time_measure total_float;
		bool is_critical;
		Ifc_date_time_select *status_time;
		Ifc_time_measure start_float;
		Ifc_time_measure finish_float;
		Ifc_positive_ratio_measure completion;

		Ifc_schedule_time_control() {
			entity = "Ifc_schedule_time_control";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_schedule_time_control &o) {
			return os << "Ifc_schedule_time_control(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.actual_start << ", " << o.early_start << ", " << o.late_start << ", " << o.schedule_start << ", " << o.actual_finish << ", " << o.early_finish << ", " << o.late_finish << ", " << o.schedule_finish << ", " << o.schedule_duration << ", " << o.actual_duration << ", " << o.remaining_time << ", " << o.free_float << ", " << o.total_float << ", " << o.is_critical << ", " << o.status_time << ", " << o.start_float << ", " << o.finish_float << ", " << o.completion << ")";
		}
	};

	struct Ifc_service_life : Ifc_control {
		Ifc_service_life_type_enum service_life_type;
		Ifc_time_measure service_life_duration;

		Ifc_service_life() {
			entity = "Ifc_service_life";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_service_life &o) {
			return os << "Ifc_service_life(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.service_life_type << ", " << o.service_life_duration << ")";
		}
	};

	struct Ifc_site : Ifc_spatial_structure_element {
		Ifc_compound_plane_angle_measure ref_latitude;
		Ifc_compound_plane_angle_measure ref_longitude;
		Ifc_length_measure ref_elevation;
		Ifc_label land_title_number;
		Ifc_postal_address *site_address;

		Ifc_site() {
			entity = "Ifc_site";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_site &o) {
			return os << "Ifc_site(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.long_name << ", " << o.composition_type << ", " << "vector(" << o.ref_latitude.size() << ")" << ", " << "vector(" << o.ref_longitude.size() << ")" << ", " << o.ref_elevation << ", " << o.land_title_number << ", " << o.site_address << ")";
		}
	};

	struct Ifc_slab_type : Ifc_building_element_type {
		Ifc_slab_type_enum predefined_type;

		Ifc_slab_type() {
			entity = "Ifc_slab_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_slab_type &o) {
			return os << "Ifc_slab_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_space : Ifc_spatial_structure_element {
		Ifc_internal_or_external_enum interior_or_exterior_space;
		Ifc_length_measure elevation_with_flooring;

		Ifc_space() {
			entity = "Ifc_space";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_space &o) {
			return os << "Ifc_space(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.long_name << ", " << o.composition_type << ", " << o.interior_or_exterior_space << ", " << o.elevation_with_flooring << ")";
		}
	};

	struct Ifc_space_heater_type : Ifc_energy_conversion_device_type {
		Ifc_space_heater_type_enum predefined_type;

		Ifc_space_heater_type() {
			entity = "Ifc_space_heater_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_space_heater_type &o) {
			return os << "Ifc_space_heater_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_space_program : Ifc_control {
		Ifc_identifier space_program_identifier;
		Ifc_area_measure max_required_area;
		Ifc_area_measure min_required_area;
		Ifc_spatial_structure_element *requested_location;
		Ifc_area_measure standard_required_area;

		Ifc_space_program() {
			entity = "Ifc_space_program";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_space_program &o) {
			return os << "Ifc_space_program(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.space_program_identifier << ", " << o.max_required_area << ", " << o.min_required_area << ", " << o.requested_location << ", " << o.standard_required_area << ")";
		}
	};

	struct Ifc_space_type : Ifc_spatial_structure_element_type {
		Ifc_space_type_enum predefined_type;

		Ifc_space_type() {
			entity = "Ifc_space_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_space_type &o) {
			return os << "Ifc_space_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_stack_terminal_type : Ifc_flow_terminal_type {
		Ifc_stack_terminal_type_enum predefined_type;

		Ifc_stack_terminal_type() {
			entity = "Ifc_stack_terminal_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_stack_terminal_type &o) {
			return os << "Ifc_stack_terminal_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_stair_flight_type : Ifc_building_element_type {
		Ifc_stair_flight_type_enum predefined_type;

		Ifc_stair_flight_type() {
			entity = "Ifc_stair_flight_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_stair_flight_type &o) {
			return os << "Ifc_stair_flight_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_structural_action : Ifc_structural_activity {
		bool destabilizing_load;
		Ifc_structural_reaction *caused_by;

		virtual ~Ifc_structural_action() {}
	};

	struct Ifc_structural_connection : Ifc_structural_item {
		Ifc_boundary_condition *applied_condition;

		virtual ~Ifc_structural_connection() {}
	};

	struct Ifc_structural_curve_connection : Ifc_structural_connection {
		Ifc_structural_curve_connection() {
			entity = "Ifc_structural_curve_connection";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_curve_connection &o) {
			return os << "Ifc_structural_curve_connection(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_condition << ")";
		}
	};

	struct Ifc_structural_curve_member : Ifc_structural_member {
		Ifc_structural_curve_type_enum predefined_type;

		Ifc_structural_curve_member() {
			entity = "Ifc_structural_curve_member";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_curve_member &o) {
			return os << "Ifc_structural_curve_member(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_structural_curve_member_varying : Ifc_structural_curve_member {
		Ifc_structural_curve_member_varying() {
			entity = "Ifc_structural_curve_member_varying";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_curve_member_varying &o) {
			return os << "Ifc_structural_curve_member_varying(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_structural_linear_action : Ifc_structural_action {
		Ifc_projected_or_true_length_enum projected_or_true;

		Ifc_structural_linear_action() {
			entity = "Ifc_structural_linear_action";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_linear_action &o) {
			return os << "Ifc_structural_linear_action(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_load << ", " << o.global_or_local << ", " << o.destabilizing_load << ", " << o.caused_by << ", " << o.projected_or_true << ")";
		}
	};

	struct Ifc_structural_linear_action_varying : Ifc_structural_linear_action {
		Ifc_shape_aspect *varying_applied_load_location;
		std::vector<Ifc_structural_load *> subsequent_applied_loads;

		Ifc_structural_linear_action_varying() {
			entity = "Ifc_structural_linear_action_varying";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_linear_action_varying &o) {
			return os << "Ifc_structural_linear_action_varying(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_load << ", " << o.global_or_local << ", " << o.destabilizing_load << ", " << o.caused_by << ", " << o.projected_or_true << ", " << o.varying_applied_load_location << ", " << "vector(" << o.subsequent_applied_loads.size() << ")" << ")";
		}
	};

	struct Ifc_structural_load_group : Ifc_group {
		Ifc_load_group_type_enum predefined_type;
		Ifc_action_type_enum action_type;
		Ifc_action_source_type_enum action_source;
		Ifc_ratio_measure coefficient;
		Ifc_label purpose;

		Ifc_structural_load_group() {
			entity = "Ifc_structural_load_group";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_load_group &o) {
			return os << "Ifc_structural_load_group(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.predefined_type << ", " << o.action_type << ", " << o.action_source << ", " << o.coefficient << ", " << o.purpose << ")";
		}
	};

	struct Ifc_structural_planar_action : Ifc_structural_action {
		Ifc_projected_or_true_length_enum projected_or_true;

		Ifc_structural_planar_action() {
			entity = "Ifc_structural_planar_action";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_planar_action &o) {
			return os << "Ifc_structural_planar_action(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_load << ", " << o.global_or_local << ", " << o.destabilizing_load << ", " << o.caused_by << ", " << o.projected_or_true << ")";
		}
	};

	struct Ifc_structural_planar_action_varying : Ifc_structural_planar_action {
		Ifc_shape_aspect *varying_applied_load_location;
		std::vector<Ifc_structural_load *> subsequent_applied_loads;

		Ifc_structural_planar_action_varying() {
			entity = "Ifc_structural_planar_action_varying";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_planar_action_varying &o) {
			return os << "Ifc_structural_planar_action_varying(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_load << ", " << o.global_or_local << ", " << o.destabilizing_load << ", " << o.caused_by << ", " << o.projected_or_true << ", " << o.varying_applied_load_location << ", " << "vector(" << o.subsequent_applied_loads.size() << ")" << ")";
		}
	};

	struct Ifc_structural_point_action : Ifc_structural_action {
		Ifc_structural_point_action() {
			entity = "Ifc_structural_point_action";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_point_action &o) {
			return os << "Ifc_structural_point_action(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_load << ", " << o.global_or_local << ", " << o.destabilizing_load << ", " << o.caused_by << ")";
		}
	};

	struct Ifc_structural_point_connection : Ifc_structural_connection {
		Ifc_structural_point_connection() {
			entity = "Ifc_structural_point_connection";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_point_connection &o) {
			return os << "Ifc_structural_point_connection(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_condition << ")";
		}
	};

	struct Ifc_structural_point_reaction : Ifc_structural_reaction {
		Ifc_structural_point_reaction() {
			entity = "Ifc_structural_point_reaction";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_point_reaction &o) {
			return os << "Ifc_structural_point_reaction(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_load << ", " << o.global_or_local << ")";
		}
	};

	struct Ifc_structural_result_group : Ifc_group {
		Ifc_analysis_theory_type_enum theory_type;
		Ifc_structural_load_group *result_for_load_group;
		bool is_linear;

		Ifc_structural_result_group() {
			entity = "Ifc_structural_result_group";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_result_group &o) {
			return os << "Ifc_structural_result_group(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.theory_type << ", " << o.result_for_load_group << ", " << o.is_linear << ")";
		}
	};

	struct Ifc_structural_surface_connection : Ifc_structural_connection {
		Ifc_structural_surface_connection() {
			entity = "Ifc_structural_surface_connection";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_surface_connection &o) {
			return os << "Ifc_structural_surface_connection(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_condition << ")";
		}
	};

	struct Ifc_sub_contract_resource : Ifc_construction_resource {
		Ifc_actor_select *sub_contractor;
		Ifc_text job_description;

		Ifc_sub_contract_resource() {
			entity = "Ifc_sub_contract_resource";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_sub_contract_resource &o) {
			return os << "Ifc_sub_contract_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.resource_identifier << ", " << o.resource_group << ", " << o.resource_consumption << ", " << o.base_quantity << ", " << o.sub_contractor << ", " << o.job_description << ")";
		}
	};

	struct Ifc_switching_device_type : Ifc_flow_controller_type {
		Ifc_switching_device_type_enum predefined_type;

		Ifc_switching_device_type() {
			entity = "Ifc_switching_device_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_switching_device_type &o) {
			return os << "Ifc_switching_device_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_system : Ifc_group {
		Ifc_system() {
			entity = "Ifc_system";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_system &o) {
			return os << "Ifc_system(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ")";
		}
	};

	struct Ifc_tank_type : Ifc_flow_storage_device_type {
		Ifc_tank_type_enum predefined_type;

		Ifc_tank_type() {
			entity = "Ifc_tank_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_tank_type &o) {
			return os << "Ifc_tank_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_time_series_schedule : Ifc_control {
		std::vector<Ifc_date_time_select *> applicable_dates;
		Ifc_time_series_schedule_type_enum time_series_schedule_type;
		Ifc_time_series *time_series;

		Ifc_time_series_schedule() {
			entity = "Ifc_time_series_schedule";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_time_series_schedule &o) {
			return os << "Ifc_time_series_schedule(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << "vector(" << o.applicable_dates.size() << ")" << ", " << o.time_series_schedule_type << ", " << o.time_series << ")";
		}
	};

	struct Ifc_transformer_type : Ifc_energy_conversion_device_type {
		Ifc_transformer_type_enum predefined_type;

		Ifc_transformer_type() {
			entity = "Ifc_transformer_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_transformer_type &o) {
			return os << "Ifc_transformer_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_transport_element : Ifc_element {
		Ifc_transport_element_type_enum operation_type;
		Ifc_mass_measure capacity_by_weight;
		Ifc_count_measure capacity_by_number;

		Ifc_transport_element() {
			entity = "Ifc_transport_element";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_transport_element &o) {
			return os << "Ifc_transport_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.operation_type << ", " << o.capacity_by_weight << ", " << o.capacity_by_number << ")";
		}
	};

	struct Ifc_trimmed_curve : Ifc_bounded_curve {
		Ifc_curve *basis_curve;
		std::vector<Ifc_trimming_select *> trim_1;
		std::vector<Ifc_trimming_select *> trim_2;
		bool sense_agreement;
		Ifc_trimming_preference master_representation;

		Ifc_trimmed_curve() {
			entity = "Ifc_trimmed_curve";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_trimmed_curve &o) {
			return os << "Ifc_trimmed_curve(" << o.basis_curve << ", " << "vector(" << o.trim_1.size() << ")" << ", " << "vector(" << o.trim_2.size() << ")" << ", " << o.sense_agreement << ", " << o.master_representation << ")";
		}
	};

	struct Ifc_tube_bundle_type : Ifc_energy_conversion_device_type {
		Ifc_tube_bundle_type_enum predefined_type;

		Ifc_tube_bundle_type() {
			entity = "Ifc_tube_bundle_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_tube_bundle_type &o) {
			return os << "Ifc_tube_bundle_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_unitary_equipment_type : Ifc_energy_conversion_device_type {
		Ifc_unitary_equipment_type_enum predefined_type;

		Ifc_unitary_equipment_type() {
			entity = "Ifc_unitary_equipment_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_unitary_equipment_type &o) {
			return os << "Ifc_unitary_equipment_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_valve_type : Ifc_flow_controller_type {
		Ifc_valve_type_enum predefined_type;

		Ifc_valve_type() {
			entity = "Ifc_valve_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_valve_type &o) {
			return os << "Ifc_valve_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_virtual_element : Ifc_element {
		Ifc_virtual_element() {
			entity = "Ifc_virtual_element";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_virtual_element &o) {
			return os << "Ifc_virtual_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_wall_type : Ifc_building_element_type {
		Ifc_wall_type_enum predefined_type;

		Ifc_wall_type() {
			entity = "Ifc_wall_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_wall_type &o) {
			return os << "Ifc_wall_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_waste_terminal_type : Ifc_flow_terminal_type {
		Ifc_waste_terminal_type_enum predefined_type;

		Ifc_waste_terminal_type() {
			entity = "Ifc_waste_terminal_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_waste_terminal_type &o) {
			return os << "Ifc_waste_terminal_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_work_control : Ifc_control {
		Ifc_identifier identifier;
		Ifc_date_time_select *creation_date;
		std::vector<Ifc_person *> creators;
		Ifc_label purpose;
		Ifc_time_measure duration;
		Ifc_time_measure total_float;
		Ifc_date_time_select *start_time;
		Ifc_date_time_select *finish_time;
		Ifc_work_control_type_enum work_control_type;
		Ifc_label user_defined_control_type;

		virtual ~Ifc_work_control() {}
	};

	struct Ifc_work_plan : Ifc_work_control {
		Ifc_work_plan() {
			entity = "Ifc_work_plan";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_work_plan &o) {
			return os << "Ifc_work_plan(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identifier << ", " << o.creation_date << ", " << "vector(" << o.creators.size() << ")" << ", " << o.purpose << ", " << o.duration << ", " << o.total_float << ", " << o.start_time << ", " << o.finish_time << ", " << o.work_control_type << ", " << o.user_defined_control_type << ")";
		}
	};

	struct Ifc_work_schedule : Ifc_work_control {
		Ifc_work_schedule() {
			entity = "Ifc_work_schedule";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_work_schedule &o) {
			return os << "Ifc_work_schedule(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identifier << ", " << o.creation_date << ", " << "vector(" << o.creators.size() << ")" << ", " << o.purpose << ", " << o.duration << ", " << o.total_float << ", " << o.start_time << ", " << o.finish_time << ", " << o.work_control_type << ", " << o.user_defined_control_type << ")";
		}
	};

	struct Ifc_zone : Ifc_group {
		Ifc_zone() {
			entity = "Ifc_zone";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_zone &o) {
			return os << "Ifc_zone(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ")";
		}
	};

	struct Ifc_2_d_composite_curve : Ifc_composite_curve {
		Ifc_2_d_composite_curve() {
			entity = "Ifc_2_d_composite_curve";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_2_d_composite_curve &o) {
			return os << "Ifc_2_d_composite_curve(" << "vector(" << o.segments.size() << ")" << ", " << o.self_intersect << ")";
		}
	};

	struct Ifc_action_request : Ifc_control {
		Ifc_identifier request_i_d;

		Ifc_action_request() {
			entity = "Ifc_action_request";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_action_request &o) {
			return os << "Ifc_action_request(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.request_i_d << ")";
		}
	};

	struct Ifc_air_terminal_box_type : Ifc_flow_controller_type {
		Ifc_air_terminal_box_type_enum predefined_type;

		Ifc_air_terminal_box_type() {
			entity = "Ifc_air_terminal_box_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_air_terminal_box_type &o) {
			return os << "Ifc_air_terminal_box_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_air_terminal_type : Ifc_flow_terminal_type {
		Ifc_air_terminal_type_enum predefined_type;

		Ifc_air_terminal_type() {
			entity = "Ifc_air_terminal_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_air_terminal_type &o) {
			return os << "Ifc_air_terminal_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_air_to_air_heat_recovery_type : Ifc_energy_conversion_device_type {
		Ifc_air_to_air_heat_recovery_type_enum predefined_type;

		Ifc_air_to_air_heat_recovery_type() {
			entity = "Ifc_air_to_air_heat_recovery_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_air_to_air_heat_recovery_type &o) {
			return os << "Ifc_air_to_air_heat_recovery_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_angular_dimension : Ifc_dimension_curve_directed_callout {
		Ifc_angular_dimension() {
			entity = "Ifc_angular_dimension";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_angular_dimension &o) {
			return os << "Ifc_angular_dimension(" << "vector(" << o.contents.size() << ")" << ")";
		}
	};

	struct Ifc_asset : Ifc_group {
		Ifc_identifier asset_i_d;
		Ifc_cost_value *original_value;
		Ifc_cost_value *current_value;
		Ifc_cost_value *total_replacement_cost;
		Ifc_actor_select *owner;
		Ifc_actor_select *user;
		Ifc_person *responsible_person;
		Ifc_calendar_date *incorporation_date;
		Ifc_cost_value *depreciated_value;

		Ifc_asset() {
			entity = "Ifc_asset";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_asset &o) {
			return os << "Ifc_asset(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.asset_i_d << ", " << o.original_value << ", " << o.current_value << ", " << o.total_replacement_cost << ", " << o.owner << ", " << o.user << ", " << o.responsible_person << ", " << o.incorporation_date << ", " << o.depreciated_value << ")";
		}
	};

	struct Ifc_b_spline_curve : Ifc_bounded_curve {
		int degree;
		std::vector<Ifc_cartesian_point *> control_points_list;
		Ifc_b_spline_curve_form curve_form;
		int closed_curve;
		int self_intersect;

		virtual ~Ifc_b_spline_curve() {}
	};

	struct Ifc_beam_type : Ifc_building_element_type {
		Ifc_beam_type_enum predefined_type;

		Ifc_beam_type() {
			entity = "Ifc_beam_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_beam_type &o) {
			return os << "Ifc_beam_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_bezier_curve : Ifc_b_spline_curve {
		Ifc_bezier_curve() {
			entity = "Ifc_bezier_curve";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_bezier_curve &o) {
			return os << "Ifc_bezier_curve(" << o.degree << ", " << "vector(" << o.control_points_list.size() << ")" << ", " << o.curve_form << ", " << o.closed_curve << ", " << o.self_intersect << ")";
		}
	};

	struct Ifc_boiler_type : Ifc_energy_conversion_device_type {
		Ifc_boiler_type_enum predefined_type;

		Ifc_boiler_type() {
			entity = "Ifc_boiler_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_boiler_type &o) {
			return os << "Ifc_boiler_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_building_element : Ifc_element {
		virtual ~Ifc_building_element() {}
	};

	struct Ifc_building_element_component : Ifc_building_element {
		virtual ~Ifc_building_element_component() {}
	};

	struct Ifc_building_element_part : Ifc_building_element_component {
		Ifc_building_element_part() {
			entity = "Ifc_building_element_part";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_building_element_part &o) {
			return os << "Ifc_building_element_part(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_building_element_proxy : Ifc_building_element {
		Ifc_element_composition_enum composition_type;

		Ifc_building_element_proxy() {
			entity = "Ifc_building_element_proxy";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_building_element_proxy &o) {
			return os << "Ifc_building_element_proxy(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.composition_type << ")";
		}
	};

	struct Ifc_building_element_proxy_type : Ifc_building_element_type {
		Ifc_building_element_proxy_type_enum predefined_type;

		Ifc_building_element_proxy_type() {
			entity = "Ifc_building_element_proxy_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_building_element_proxy_type &o) {
			return os << "Ifc_building_element_proxy_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_cable_carrier_fitting_type : Ifc_flow_fitting_type {
		Ifc_cable_carrier_fitting_type_enum predefined_type;

		Ifc_cable_carrier_fitting_type() {
			entity = "Ifc_cable_carrier_fitting_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_cable_carrier_fitting_type &o) {
			return os << "Ifc_cable_carrier_fitting_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_cable_carrier_segment_type : Ifc_flow_segment_type {
		Ifc_cable_carrier_segment_type_enum predefined_type;

		Ifc_cable_carrier_segment_type() {
			entity = "Ifc_cable_carrier_segment_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_cable_carrier_segment_type &o) {
			return os << "Ifc_cable_carrier_segment_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_cable_segment_type : Ifc_flow_segment_type {
		Ifc_cable_segment_type_enum predefined_type;

		Ifc_cable_segment_type() {
			entity = "Ifc_cable_segment_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_cable_segment_type &o) {
			return os << "Ifc_cable_segment_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_chiller_type : Ifc_energy_conversion_device_type {
		Ifc_chiller_type_enum predefined_type;

		Ifc_chiller_type() {
			entity = "Ifc_chiller_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_chiller_type &o) {
			return os << "Ifc_chiller_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_circle : Ifc_conic {
		Ifc_positive_length_measure radius;

		Ifc_circle() {
			entity = "Ifc_circle";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_circle &o) {
			return os << "Ifc_circle(" << o.position << ", " << o.radius << ")";
		}
	};

	struct Ifc_coil_type : Ifc_energy_conversion_device_type {
		Ifc_coil_type_enum predefined_type;

		Ifc_coil_type() {
			entity = "Ifc_coil_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_coil_type &o) {
			return os << "Ifc_coil_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_column : Ifc_building_element {
		Ifc_column() {
			entity = "Ifc_column";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_column &o) {
			return os << "Ifc_column(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_compressor_type : Ifc_flow_moving_device_type {
		Ifc_compressor_type_enum predefined_type;

		Ifc_compressor_type() {
			entity = "Ifc_compressor_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_compressor_type &o) {
			return os << "Ifc_compressor_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_condenser_type : Ifc_energy_conversion_device_type {
		Ifc_condenser_type_enum predefined_type;

		Ifc_condenser_type() {
			entity = "Ifc_condenser_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_condenser_type &o) {
			return os << "Ifc_condenser_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_condition : Ifc_group {
		Ifc_condition() {
			entity = "Ifc_condition";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_condition &o) {
			return os << "Ifc_condition(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ")";
		}
	};

	struct Ifc_condition_criterion : Ifc_control {
		Ifc_condition_criterion_select *criterion;
		Ifc_date_time_select *criterion_date_time;

		Ifc_condition_criterion() {
			entity = "Ifc_condition_criterion";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_condition_criterion &o) {
			return os << "Ifc_condition_criterion(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.criterion << ", " << o.criterion_date_time << ")";
		}
	};

	struct Ifc_construction_equipment_resource : Ifc_construction_resource {
		Ifc_construction_equipment_resource() {
			entity = "Ifc_construction_equipment_resource";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_construction_equipment_resource &o) {
			return os << "Ifc_construction_equipment_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.resource_identifier << ", " << o.resource_group << ", " << o.resource_consumption << ", " << o.base_quantity << ")";
		}
	};

	struct Ifc_construction_material_resource : Ifc_construction_resource {
		std::vector<Ifc_actor_select *> suppliers;
		Ifc_ratio_measure usage_ratio;

		Ifc_construction_material_resource() {
			entity = "Ifc_construction_material_resource";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_construction_material_resource &o) {
			return os << "Ifc_construction_material_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.resource_identifier << ", " << o.resource_group << ", " << o.resource_consumption << ", " << o.base_quantity << ", " << "vector(" << o.suppliers.size() << ")" << ", " << o.usage_ratio << ")";
		}
	};

	struct Ifc_construction_product_resource : Ifc_construction_resource {
		Ifc_construction_product_resource() {
			entity = "Ifc_construction_product_resource";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_construction_product_resource &o) {
			return os << "Ifc_construction_product_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.resource_identifier << ", " << o.resource_group << ", " << o.resource_consumption << ", " << o.base_quantity << ")";
		}
	};

	struct Ifc_cooled_beam_type : Ifc_energy_conversion_device_type {
		Ifc_cooled_beam_type_enum predefined_type;

		Ifc_cooled_beam_type() {
			entity = "Ifc_cooled_beam_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_cooled_beam_type &o) {
			return os << "Ifc_cooled_beam_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_cooling_tower_type : Ifc_energy_conversion_device_type {
		Ifc_cooling_tower_type_enum predefined_type;

		Ifc_cooling_tower_type() {
			entity = "Ifc_cooling_tower_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_cooling_tower_type &o) {
			return os << "Ifc_cooling_tower_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_covering : Ifc_building_element {
		Ifc_covering_type_enum predefined_type;

		Ifc_covering() {
			entity = "Ifc_covering";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_covering &o) {
			return os << "Ifc_covering(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_curtain_wall : Ifc_building_element {
		Ifc_curtain_wall() {
			entity = "Ifc_curtain_wall";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_curtain_wall &o) {
			return os << "Ifc_curtain_wall(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_damper_type : Ifc_flow_controller_type {
		Ifc_damper_type_enum predefined_type;

		Ifc_damper_type() {
			entity = "Ifc_damper_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_damper_type &o) {
			return os << "Ifc_damper_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_diameter_dimension : Ifc_dimension_curve_directed_callout {
		Ifc_diameter_dimension() {
			entity = "Ifc_diameter_dimension";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_diameter_dimension &o) {
			return os << "Ifc_diameter_dimension(" << "vector(" << o.contents.size() << ")" << ")";
		}
	};

	struct Ifc_discrete_accessory : Ifc_element_component {
		Ifc_discrete_accessory() {
			entity = "Ifc_discrete_accessory";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_discrete_accessory &o) {
			return os << "Ifc_discrete_accessory(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_discrete_accessory_type : Ifc_element_component_type {
		Ifc_discrete_accessory_type() {
			entity = "Ifc_discrete_accessory_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_discrete_accessory_type &o) {
			return os << "Ifc_discrete_accessory_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ")";
		}
	};

	struct Ifc_distribution_chamber_element_type : Ifc_distribution_flow_element_type {
		Ifc_distribution_chamber_element_type_enum predefined_type;

		Ifc_distribution_chamber_element_type() {
			entity = "Ifc_distribution_chamber_element_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_distribution_chamber_element_type &o) {
			return os << "Ifc_distribution_chamber_element_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_distribution_control_element_type : Ifc_distribution_element_type {
		virtual ~Ifc_distribution_control_element_type() {}
	};

	struct Ifc_distribution_element : Ifc_element {
		Ifc_distribution_element() {
			entity = "Ifc_distribution_element";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_distribution_element &o) {
			return os << "Ifc_distribution_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_distribution_flow_element : Ifc_distribution_element {
		Ifc_distribution_flow_element() {
			entity = "Ifc_distribution_flow_element";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_distribution_flow_element &o) {
			return os << "Ifc_distribution_flow_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_distribution_port : Ifc_port {
		Ifc_flow_direction_enum flow_direction;

		Ifc_distribution_port() {
			entity = "Ifc_distribution_port";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_distribution_port &o) {
			return os << "Ifc_distribution_port(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.flow_direction << ")";
		}
	};

	struct Ifc_door : Ifc_building_element {
		Ifc_positive_length_measure overall_height;
		Ifc_positive_length_measure overall_width;

		Ifc_door() {
			entity = "Ifc_door";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_door &o) {
			return os << "Ifc_door(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.overall_height << ", " << o.overall_width << ")";
		}
	};

	struct Ifc_duct_fitting_type : Ifc_flow_fitting_type {
		Ifc_duct_fitting_type_enum predefined_type;

		Ifc_duct_fitting_type() {
			entity = "Ifc_duct_fitting_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_duct_fitting_type &o) {
			return os << "Ifc_duct_fitting_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_duct_segment_type : Ifc_flow_segment_type {
		Ifc_duct_segment_type_enum predefined_type;

		Ifc_duct_segment_type() {
			entity = "Ifc_duct_segment_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_duct_segment_type &o) {
			return os << "Ifc_duct_segment_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_duct_silencer_type : Ifc_flow_treatment_device_type {
		Ifc_duct_silencer_type_enum predefined_type;

		Ifc_duct_silencer_type() {
			entity = "Ifc_duct_silencer_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_duct_silencer_type &o) {
			return os << "Ifc_duct_silencer_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_edge_feature : Ifc_feature_element_subtraction {
		Ifc_positive_length_measure feature_length;

		virtual ~Ifc_edge_feature() {}
	};

	struct Ifc_electric_appliance_type : Ifc_flow_terminal_type {
		Ifc_electric_appliance_type_enum predefined_type;

		Ifc_electric_appliance_type() {
			entity = "Ifc_electric_appliance_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_appliance_type &o) {
			return os << "Ifc_electric_appliance_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_electric_flow_storage_device_type : Ifc_flow_storage_device_type {
		Ifc_electric_flow_storage_device_type_enum predefined_type;

		Ifc_electric_flow_storage_device_type() {
			entity = "Ifc_electric_flow_storage_device_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_flow_storage_device_type &o) {
			return os << "Ifc_electric_flow_storage_device_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_electric_generator_type : Ifc_energy_conversion_device_type {
		Ifc_electric_generator_type_enum predefined_type;

		Ifc_electric_generator_type() {
			entity = "Ifc_electric_generator_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_generator_type &o) {
			return os << "Ifc_electric_generator_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_electric_heater_type : Ifc_flow_terminal_type {
		Ifc_electric_heater_type_enum predefined_type;

		Ifc_electric_heater_type() {
			entity = "Ifc_electric_heater_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_heater_type &o) {
			return os << "Ifc_electric_heater_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_electric_motor_type : Ifc_energy_conversion_device_type {
		Ifc_electric_motor_type_enum predefined_type;

		Ifc_electric_motor_type() {
			entity = "Ifc_electric_motor_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_motor_type &o) {
			return os << "Ifc_electric_motor_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_electric_time_control_type : Ifc_flow_controller_type {
		Ifc_electric_time_control_type_enum predefined_type;

		Ifc_electric_time_control_type() {
			entity = "Ifc_electric_time_control_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_time_control_type &o) {
			return os << "Ifc_electric_time_control_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_electrical_circuit : Ifc_system {
		Ifc_electrical_circuit() {
			entity = "Ifc_electrical_circuit";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_electrical_circuit &o) {
			return os << "Ifc_electrical_circuit(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ")";
		}
	};

	struct Ifc_electrical_element : Ifc_element {
		Ifc_electrical_element() {
			entity = "Ifc_electrical_element";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_electrical_element &o) {
			return os << "Ifc_electrical_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_energy_conversion_device : Ifc_distribution_flow_element {
		Ifc_energy_conversion_device() {
			entity = "Ifc_energy_conversion_device";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_energy_conversion_device &o) {
			return os << "Ifc_energy_conversion_device(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_fan_type : Ifc_flow_moving_device_type {
		Ifc_fan_type_enum predefined_type;

		Ifc_fan_type() {
			entity = "Ifc_fan_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_fan_type &o) {
			return os << "Ifc_fan_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_filter_type : Ifc_flow_treatment_device_type {
		Ifc_filter_type_enum predefined_type;

		Ifc_filter_type() {
			entity = "Ifc_filter_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_filter_type &o) {
			return os << "Ifc_filter_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_fire_suppression_terminal_type : Ifc_flow_terminal_type {
		Ifc_fire_suppression_terminal_type_enum predefined_type;

		Ifc_fire_suppression_terminal_type() {
			entity = "Ifc_fire_suppression_terminal_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_fire_suppression_terminal_type &o) {
			return os << "Ifc_fire_suppression_terminal_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_flow_controller : Ifc_distribution_flow_element {
		Ifc_flow_controller() {
			entity = "Ifc_flow_controller";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_controller &o) {
			return os << "Ifc_flow_controller(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_flow_fitting : Ifc_distribution_flow_element {
		Ifc_flow_fitting() {
			entity = "Ifc_flow_fitting";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_fitting &o) {
			return os << "Ifc_flow_fitting(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_flow_instrument_type : Ifc_distribution_control_element_type {
		Ifc_flow_instrument_type_enum predefined_type;

		Ifc_flow_instrument_type() {
			entity = "Ifc_flow_instrument_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_instrument_type &o) {
			return os << "Ifc_flow_instrument_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_flow_moving_device : Ifc_distribution_flow_element {
		Ifc_flow_moving_device() {
			entity = "Ifc_flow_moving_device";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_moving_device &o) {
			return os << "Ifc_flow_moving_device(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_flow_segment : Ifc_distribution_flow_element {
		Ifc_flow_segment() {
			entity = "Ifc_flow_segment";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_segment &o) {
			return os << "Ifc_flow_segment(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_flow_storage_device : Ifc_distribution_flow_element {
		Ifc_flow_storage_device() {
			entity = "Ifc_flow_storage_device";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_storage_device &o) {
			return os << "Ifc_flow_storage_device(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_flow_terminal : Ifc_distribution_flow_element {
		Ifc_flow_terminal() {
			entity = "Ifc_flow_terminal";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_terminal &o) {
			return os << "Ifc_flow_terminal(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_flow_treatment_device : Ifc_distribution_flow_element {
		Ifc_flow_treatment_device() {
			entity = "Ifc_flow_treatment_device";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_treatment_device &o) {
			return os << "Ifc_flow_treatment_device(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_footing : Ifc_building_element {
		Ifc_footing_type_enum predefined_type;

		Ifc_footing() {
			entity = "Ifc_footing";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_footing &o) {
			return os << "Ifc_footing(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_member : Ifc_building_element {
		Ifc_member() {
			entity = "Ifc_member";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_member &o) {
			return os << "Ifc_member(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_pile : Ifc_building_element {
		Ifc_pile_type_enum predefined_type;
		Ifc_pile_construction_enum construction_type;

		Ifc_pile() {
			entity = "Ifc_pile";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_pile &o) {
			return os << "Ifc_pile(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ", " << o.construction_type << ")";
		}
	};

	struct Ifc_plate : Ifc_building_element {
		Ifc_plate() {
			entity = "Ifc_plate";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_plate &o) {
			return os << "Ifc_plate(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_railing : Ifc_building_element {
		Ifc_railing_type_enum predefined_type;

		Ifc_railing() {
			entity = "Ifc_railing";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_railing &o) {
			return os << "Ifc_railing(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_ramp : Ifc_building_element {
		Ifc_ramp_type_enum shape_type;

		Ifc_ramp() {
			entity = "Ifc_ramp";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_ramp &o) {
			return os << "Ifc_ramp(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.shape_type << ")";
		}
	};

	struct Ifc_ramp_flight : Ifc_building_element {
		Ifc_ramp_flight() {
			entity = "Ifc_ramp_flight";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_ramp_flight &o) {
			return os << "Ifc_ramp_flight(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_rational_bezier_curve : Ifc_bezier_curve {
		std::vector<double> weights_data;

		Ifc_rational_bezier_curve() {
			entity = "Ifc_rational_bezier_curve";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rational_bezier_curve &o) {
			return os << "Ifc_rational_bezier_curve(" << o.degree << ", " << "vector(" << o.control_points_list.size() << ")" << ", " << o.curve_form << ", " << o.closed_curve << ", " << o.self_intersect << ", " << "vector(" << o.weights_data.size() << ")" << ")";
		}
	};

	struct Ifc_reinforcing_element : Ifc_building_element_component {
		Ifc_label steel_grade;

		virtual ~Ifc_reinforcing_element() {}
	};

	struct Ifc_reinforcing_mesh : Ifc_reinforcing_element {
		Ifc_positive_length_measure mesh_length;
		Ifc_positive_length_measure mesh_width;
		Ifc_positive_length_measure longitudinal_bar_nominal_diameter;
		Ifc_positive_length_measure transverse_bar_nominal_diameter;
		Ifc_area_measure longitudinal_bar_cross_section_area;
		Ifc_area_measure transverse_bar_cross_section_area;
		Ifc_positive_length_measure longitudinal_bar_spacing;
		Ifc_positive_length_measure transverse_bar_spacing;

		Ifc_reinforcing_mesh() {
			entity = "Ifc_reinforcing_mesh";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_reinforcing_mesh &o) {
			return os << "Ifc_reinforcing_mesh(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.steel_grade << ", " << o.mesh_length << ", " << o.mesh_width << ", " << o.longitudinal_bar_nominal_diameter << ", " << o.transverse_bar_nominal_diameter << ", " << o.longitudinal_bar_cross_section_area << ", " << o.transverse_bar_cross_section_area << ", " << o.longitudinal_bar_spacing << ", " << o.transverse_bar_spacing << ")";
		}
	};

	struct Ifc_roof : Ifc_building_element {
		Ifc_roof_type_enum shape_type;

		Ifc_roof() {
			entity = "Ifc_roof";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_roof &o) {
			return os << "Ifc_roof(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.shape_type << ")";
		}
	};

	struct Ifc_rounded_edge_feature : Ifc_edge_feature {
		Ifc_positive_length_measure radius;

		Ifc_rounded_edge_feature() {
			entity = "Ifc_rounded_edge_feature";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_rounded_edge_feature &o) {
			return os << "Ifc_rounded_edge_feature(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.feature_length << ", " << o.radius << ")";
		}
	};

	struct Ifc_sensor_type : Ifc_distribution_control_element_type {
		Ifc_sensor_type_enum predefined_type;

		Ifc_sensor_type() {
			entity = "Ifc_sensor_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_sensor_type &o) {
			return os << "Ifc_sensor_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_slab : Ifc_building_element {
		Ifc_slab_type_enum predefined_type;

		Ifc_slab() {
			entity = "Ifc_slab";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_slab &o) {
			return os << "Ifc_slab(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_stair : Ifc_building_element {
		Ifc_stair_type_enum shape_type;

		Ifc_stair() {
			entity = "Ifc_stair";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_stair &o) {
			return os << "Ifc_stair(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.shape_type << ")";
		}
	};

	struct Ifc_stair_flight : Ifc_building_element {
		int number_of_riser;
		int number_of_treads;
		Ifc_positive_length_measure riser_height;
		Ifc_positive_length_measure tread_length;

		Ifc_stair_flight() {
			entity = "Ifc_stair_flight";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_stair_flight &o) {
			return os << "Ifc_stair_flight(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.number_of_riser << ", " << o.number_of_treads << ", " << o.riser_height << ", " << o.tread_length << ")";
		}
	};

	struct Ifc_structural_analysis_model : Ifc_system {
		Ifc_analysis_model_type_enum predefined_type;
		Ifc_axis_2_placement_3_d *orientation_of_2_d_plane;
		std::vector<Ifc_structural_load_group *> loaded_by;
		std::vector<Ifc_structural_result_group *> has_results;

		Ifc_structural_analysis_model() {
			entity = "Ifc_structural_analysis_model";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_analysis_model &o) {
			return os << "Ifc_structural_analysis_model(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.predefined_type << ", " << o.orientation_of_2_d_plane << ", " << "vector(" << o.loaded_by.size() << ")" << ", " << "vector(" << o.has_results.size() << ")" << ")";
		}
	};

	struct Ifc_tendon : Ifc_reinforcing_element {
		Ifc_tendon_type_enum predefined_type;
		Ifc_positive_length_measure nominal_diameter;
		Ifc_area_measure cross_section_area;
		Ifc_force_measure tension_force;
		Ifc_pressure_measure pre_stress;
		Ifc_normalised_ratio_measure friction_coefficient;
		Ifc_positive_length_measure anchorage_slip;
		Ifc_positive_length_measure min_curvature_radius;

		Ifc_tendon() {
			entity = "Ifc_tendon";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_tendon &o) {
			return os << "Ifc_tendon(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.steel_grade << ", " << o.predefined_type << ", " << o.nominal_diameter << ", " << o.cross_section_area << ", " << o.tension_force << ", " << o.pre_stress << ", " << o.friction_coefficient << ", " << o.anchorage_slip << ", " << o.min_curvature_radius << ")";
		}
	};

	struct Ifc_tendon_anchor : Ifc_reinforcing_element {
		Ifc_tendon_anchor() {
			entity = "Ifc_tendon_anchor";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_tendon_anchor &o) {
			return os << "Ifc_tendon_anchor(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.steel_grade << ")";
		}
	};

	struct Ifc_vibration_isolator_type : Ifc_discrete_accessory_type {
		Ifc_vibration_isolator_type_enum predefined_type;

		Ifc_vibration_isolator_type() {
			entity = "Ifc_vibration_isolator_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_vibration_isolator_type &o) {
			return os << "Ifc_vibration_isolator_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_wall : Ifc_building_element {
		Ifc_wall() {
			entity = "Ifc_wall";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_wall &o) {
			return os << "Ifc_wall(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_wall_standard_case : Ifc_wall {
		Ifc_wall_standard_case() {
			entity = "Ifc_wall_standard_case";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_wall_standard_case &o) {
			return os << "Ifc_wall_standard_case(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_window : Ifc_building_element {
		Ifc_positive_length_measure overall_height;
		Ifc_positive_length_measure overall_width;

		Ifc_window() {
			entity = "Ifc_window";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_window &o) {
			return os << "Ifc_window(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.overall_height << ", " << o.overall_width << ")";
		}
	};

	struct Ifc_actuator_type : Ifc_distribution_control_element_type {
		Ifc_actuator_type_enum predefined_type;

		Ifc_actuator_type() {
			entity = "Ifc_actuator_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_actuator_type &o) {
			return os << "Ifc_actuator_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_alarm_type : Ifc_distribution_control_element_type {
		Ifc_alarm_type_enum predefined_type;

		Ifc_alarm_type() {
			entity = "Ifc_alarm_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_alarm_type &o) {
			return os << "Ifc_alarm_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_beam : Ifc_building_element {
		Ifc_beam() {
			entity = "Ifc_beam";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_beam &o) {
			return os << "Ifc_beam(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_chamfer_edge_feature : Ifc_edge_feature {
		Ifc_positive_length_measure width;
		Ifc_positive_length_measure height;

		Ifc_chamfer_edge_feature() {
			entity = "Ifc_chamfer_edge_feature";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_chamfer_edge_feature &o) {
			return os << "Ifc_chamfer_edge_feature(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.feature_length << ", " << o.width << ", " << o.height << ")";
		}
	};

	struct Ifc_controller_type : Ifc_distribution_control_element_type {
		Ifc_controller_type_enum predefined_type;

		Ifc_controller_type() {
			entity = "Ifc_controller_type";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_controller_type &o) {
			return os << "Ifc_controller_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << "vector(" << o.has_property_sets.size() << ")" << ", " << "vector(" << o.representation_maps.size() << ")" << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
		}
	};

	struct Ifc_distribution_chamber_element : Ifc_distribution_flow_element {
		Ifc_distribution_chamber_element() {
			entity = "Ifc_distribution_chamber_element";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_distribution_chamber_element &o) {
			return os << "Ifc_distribution_chamber_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
		}
	};

	struct Ifc_distribution_control_element : Ifc_distribution_element {
		Ifc_identifier control_element_id;

		Ifc_distribution_control_element() {
			entity = "Ifc_distribution_control_element";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_distribution_control_element &o) {
			return os << "Ifc_distribution_control_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.control_element_id << ")";
		}
	};

	struct Ifc_electric_distribution_point : Ifc_flow_controller {
		Ifc_electric_distribution_point_function_enum distribution_point_function;
		Ifc_label user_defined_function;

		Ifc_electric_distribution_point() {
			entity = "Ifc_electric_distribution_point";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_distribution_point &o) {
			return os << "Ifc_electric_distribution_point(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.distribution_point_function << ", " << o.user_defined_function << ")";
		}
	};

	struct Ifc_reinforcing_bar : Ifc_reinforcing_element {
		Ifc_positive_length_measure nominal_diameter;
		Ifc_area_measure cross_section_area;
		Ifc_positive_length_measure bar_length;
		Ifc_reinforcing_bar_role_enum bar_role;
		Ifc_reinforcing_bar_surface_enum bar_surface;

		Ifc_reinforcing_bar() {
			entity = "Ifc_reinforcing_bar";
		}
		friend std::ostream &operator<<(std::ostream &os, const Ifc_reinforcing_bar &o) {
			return os << "Ifc_reinforcing_bar(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.steel_grade << ", " << o.nominal_diameter << ", " << o.cross_section_area << ", " << o.bar_length << ", " << o.bar_role << ", " << o.bar_surface << ")";
		}
	};

	class Schema {
	private:
		Step_parser step_parser;

	public:
		std::list<Ifc **> links_to_resolve;
		std::list<std::vector<Ifc *> *> lists_of_links_to_resolve;

		Ifc *parse_ifc_object_definition(std::string &object_class, std::vector<std::string> &object_attributes);
		void print_object_info(Ifc *object);
	};

}

#endif /* Ifc_2x3_schema_hpp */
