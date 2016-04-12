#ifndef Ifc_4_add_1_parser_hpp
#define Ifc_4_add_1_parser_hpp

#include <boost/algorithm/string.hpp>

#include "Step_parser.hpp"

// Defined types (131)
typedef double Ifc_absorbed_dose_measure;
typedef double Ifc_acceleration_measure;
typedef double Ifc_amount_of_substance_measure;
typedef double Ifc_angular_velocity_measure;
typedef double Ifc_area_density_measure;
typedef double Ifc_area_measure;
typedef char * Ifc_binary;
typedef bool Ifc_boolean;
typedef int Ifc_cardinal_point_reference;
typedef std::vector<double> Ifc_complex_number;
typedef std::vector<int> Ifc_compound_plane_angle_measure;
typedef double Ifc_context_dependent_measure;
typedef unsigned int Ifc_count_measure;
typedef double Ifc_curvature_measure;
typedef std::string Ifc_date;
typedef std::string Ifc_date_time;
typedef int Ifc_day_in_month_number;
typedef int Ifc_day_in_week_number;
typedef std::string Ifc_descriptive_measure;
typedef int Ifc_dimension_count;
typedef double Ifc_dose_equivalent_measure;
typedef std::string Ifc_duration;
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
typedef  Ifc_globally_unique_id;
typedef double Ifc_heat_flux_density_measure;
typedef double Ifc_heating_value_measure;
typedef  Ifc_identifier;
typedef double Ifc_illuminance_measure;
typedef double Ifc_inductance_measure;
typedef int Ifc_integer;
typedef int Ifc_integer_count_rate_measure;
typedef double Ifc_ion_concentration_measure;
typedef double Ifc_isothermal_moisture_capacity_measure;
typedef double Ifc_kinematic_viscosity_measure;
typedef  Ifc_label;
typedef Ifc_identifier Ifc_language_id;
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
typedef double Ifc_modulus_of_elasticity_measure;
typedef double Ifc_modulus_of_linear_subgrade_reaction_measure;
typedef double Ifc_modulus_of_rotational_subgrade_reaction_measure;
typedef double Ifc_modulus_of_subgrade_reaction_measure;
typedef double Ifc_moisture_diffusivity_measure;
typedef double Ifc_molecular_weight_measure;
typedef double Ifc_moment_of_inertia_measure;
typedef double Ifc_monetary_measure;
typedef int Ifc_month_in_year_number;
typedef Ifc_length_measure Ifc_non_negative_length_measure;
typedef unsigned int Ifc_numeric_measure;
typedef double Ifc_p_h_measure;
typedef double Ifc_parameter_value;
typedef double Ifc_planar_force_measure;
typedef double Ifc_plane_angle_measure;
typedef Ifc_integer Ifc_positive_integer;
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
typedef double Ifc_section_modulus_measure;
typedef double Ifc_sectional_area_integral_measure;
typedef double Ifc_shear_modulus_measure;
typedef double Ifc_solid_angle_measure;
typedef double Ifc_sound_power_level_measure;
typedef double Ifc_sound_power_measure;
typedef double Ifc_sound_pressure_level_measure;
typedef double Ifc_sound_pressure_measure;
typedef double Ifc_specific_heat_capacity_measure;
typedef double Ifc_specular_exponent;
typedef double Ifc_specular_roughness;
typedef bool Ifc_stripped_optional;
typedef double Ifc_temperature_gradient_measure;
typedef double Ifc_temperature_rate_of_change_measure;
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
typedef std::string Ifc_time;
typedef double Ifc_time_measure;
typedef int Ifc_time_stamp;
typedef double Ifc_torque_measure;
typedef std::string Ifc_u_r_i_reference;
typedef double Ifc_vapor_permeability_measure;
typedef double Ifc_volume_measure;
typedef double Ifc_volumetric_flow_rate_measure;
typedef double Ifc_warping_constant_measure;
typedef double Ifc_warping_moment_measure;
typedef std::vector<Ifc_positive_integer> Ifc_arc_index;
typedef Ifc_label Ifc_box_alignment;
typedef std::vector<Ifc_positive_integer> Ifc_line_index;
typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
typedef Ifc_ratio_measure Ifc_positive_ratio_measure;

// Enums (206)
typedef std::string Ifc_action_request_type_enum;
typedef std::string Ifc_action_source_type_enum;
typedef std::string Ifc_action_type_enum;
typedef std::string Ifc_actuator_type_enum;
typedef std::string Ifc_address_type_enum;
typedef std::string Ifc_air_terminal_box_type_enum;
typedef std::string Ifc_air_terminal_type_enum;
typedef std::string Ifc_air_to_air_heat_recovery_type_enum;
typedef std::string Ifc_alarm_type_enum;
typedef std::string Ifc_analysis_model_type_enum;
typedef std::string Ifc_analysis_theory_type_enum;
typedef std::string Ifc_arithmetic_operator_enum;
typedef std::string Ifc_assembly_place_enum;
typedef std::string Ifc_audio_visual_appliance_type_enum;
typedef std::string Ifc_b_spline_curve_form;
typedef std::string Ifc_b_spline_surface_form;
typedef std::string Ifc_beam_type_enum;
typedef std::string Ifc_benchmark_enum;
typedef std::string Ifc_boiler_type_enum;
typedef std::string Ifc_boolean_operator;
typedef std::string Ifc_building_element_part_type_enum;
typedef std::string Ifc_building_element_proxy_type_enum;
typedef std::string Ifc_building_system_type_enum;
typedef std::string Ifc_burner_type_enum;
typedef std::string Ifc_cable_carrier_fitting_type_enum;
typedef std::string Ifc_cable_carrier_segment_type_enum;
typedef std::string Ifc_cable_fitting_type_enum;
typedef std::string Ifc_cable_segment_type_enum;
typedef std::string Ifc_change_action_enum;
typedef std::string Ifc_chiller_type_enum;
typedef std::string Ifc_chimney_type_enum;
typedef std::string Ifc_coil_type_enum;
typedef std::string Ifc_column_type_enum;
typedef std::string Ifc_communications_appliance_type_enum;
typedef std::string Ifc_complex_property_template_type_enum;
typedef std::string Ifc_compressor_type_enum;
typedef std::string Ifc_condenser_type_enum;
typedef std::string Ifc_connection_type_enum;
typedef std::string Ifc_constraint_enum;
typedef std::string Ifc_construction_equipment_resource_type_enum;
typedef std::string Ifc_construction_material_resource_type_enum;
typedef std::string Ifc_construction_product_resource_type_enum;
typedef std::string Ifc_controller_type_enum;
typedef std::string Ifc_cooled_beam_type_enum;
typedef std::string Ifc_cooling_tower_type_enum;
typedef std::string Ifc_cost_item_type_enum;
typedef std::string Ifc_cost_schedule_type_enum;
typedef std::string Ifc_covering_type_enum;
typedef std::string Ifc_crew_resource_type_enum;
typedef std::string Ifc_curtain_wall_type_enum;
typedef std::string Ifc_curve_interpolation_enum;
typedef std::string Ifc_damper_type_enum;
typedef std::string Ifc_data_origin_enum;
typedef std::string Ifc_derived_unit_enum;
typedef std::string Ifc_direction_sense_enum;
typedef std::string Ifc_discrete_accessory_type_enum;
typedef std::string Ifc_distribution_chamber_element_type_enum;
typedef std::string Ifc_distribution_port_type_enum;
typedef std::string Ifc_distribution_system_enum;
typedef std::string Ifc_document_confidentiality_enum;
typedef std::string Ifc_document_status_enum;
typedef std::string Ifc_door_panel_operation_enum;
typedef std::string Ifc_door_panel_position_enum;
typedef std::string Ifc_door_style_construction_enum;
typedef std::string Ifc_door_style_operation_enum;
typedef std::string Ifc_door_type_enum;
typedef std::string Ifc_door_type_operation_enum;
typedef std::string Ifc_duct_fitting_type_enum;
typedef std::string Ifc_duct_segment_type_enum;
typedef std::string Ifc_duct_silencer_type_enum;
typedef std::string Ifc_electric_appliance_type_enum;
typedef std::string Ifc_electric_distribution_board_type_enum;
typedef std::string Ifc_electric_flow_storage_device_type_enum;
typedef std::string Ifc_electric_generator_type_enum;
typedef std::string Ifc_electric_motor_type_enum;
typedef std::string Ifc_electric_time_control_type_enum;
typedef std::string Ifc_element_assembly_type_enum;
typedef std::string Ifc_element_composition_enum;
typedef std::string Ifc_engine_type_enum;
typedef std::string Ifc_evaporative_cooler_type_enum;
typedef std::string Ifc_evaporator_type_enum;
typedef std::string Ifc_event_trigger_type_enum;
typedef std::string Ifc_event_type_enum;
typedef std::string Ifc_external_spatial_element_type_enum;
typedef std::string Ifc_fan_type_enum;
typedef std::string Ifc_fastener_type_enum;
typedef std::string Ifc_filter_type_enum;
typedef std::string Ifc_fire_suppression_terminal_type_enum;
typedef std::string Ifc_flow_direction_enum;
typedef std::string Ifc_flow_instrument_type_enum;
typedef std::string Ifc_flow_meter_type_enum;
typedef std::string Ifc_footing_type_enum;
typedef std::string Ifc_furniture_type_enum;
typedef std::string Ifc_geographic_element_type_enum;
typedef std::string Ifc_geometric_projection_enum;
typedef std::string Ifc_global_or_local_enum;
typedef std::string Ifc_grid_type_enum;
typedef std::string Ifc_heat_exchanger_type_enum;
typedef std::string Ifc_humidifier_type_enum;
typedef std::string Ifc_interceptor_type_enum;
typedef std::string Ifc_internal_or_external_enum;
typedef std::string Ifc_inventory_type_enum;
typedef std::string Ifc_junction_box_type_enum;
typedef std::string Ifc_knot_type;
typedef std::string Ifc_labor_resource_type_enum;
typedef std::string Ifc_lamp_type_enum;
typedef std::string Ifc_layer_set_direction_enum;
typedef std::string Ifc_light_distribution_curve_enum;
typedef std::string Ifc_light_emission_source_enum;
typedef std::string Ifc_light_fixture_type_enum;
typedef std::string Ifc_load_group_type_enum;
typedef std::string Ifc_logical_operator_enum;
typedef std::string Ifc_mechanical_fastener_type_enum;
typedef std::string Ifc_medical_device_type_enum;
typedef std::string Ifc_member_type_enum;
typedef std::string Ifc_motor_connection_type_enum;
typedef std::string Ifc_null_style;
typedef std::string Ifc_object_type_enum;
typedef std::string Ifc_objective_enum;
typedef std::string Ifc_occupant_type_enum;
typedef std::string Ifc_opening_element_type_enum;
typedef std::string Ifc_outlet_type_enum;
typedef std::string Ifc_performance_history_type_enum;
typedef std::string Ifc_permeable_covering_operation_enum;
typedef std::string Ifc_permit_type_enum;
typedef std::string Ifc_physical_or_virtual_enum;
typedef std::string Ifc_pile_construction_enum;
typedef std::string Ifc_pile_type_enum;
typedef std::string Ifc_pipe_fitting_type_enum;
typedef std::string Ifc_pipe_segment_type_enum;
typedef std::string Ifc_plate_type_enum;
typedef std::string Ifc_procedure_type_enum;
typedef std::string Ifc_profile_type_enum;
typedef std::string Ifc_project_order_type_enum;
typedef std::string Ifc_projected_or_true_length_enum;
typedef std::string Ifc_projection_element_type_enum;
typedef std::string Ifc_property_set_template_type_enum;
typedef std::string Ifc_protective_device_tripping_unit_type_enum;
typedef std::string Ifc_protective_device_type_enum;
typedef std::string Ifc_pump_type_enum;
typedef std::string Ifc_railing_type_enum;
typedef std::string Ifc_ramp_flight_type_enum;
typedef std::string Ifc_ramp_type_enum;
typedef std::string Ifc_recurrence_type_enum;
typedef std::string Ifc_reflectance_method_enum;
typedef std::string Ifc_reinforcing_bar_role_enum;
typedef std::string Ifc_reinforcing_bar_surface_enum;
typedef std::string Ifc_reinforcing_bar_type_enum;
typedef std::string Ifc_reinforcing_mesh_type_enum;
typedef std::string Ifc_role_enum;
typedef std::string Ifc_roof_type_enum;
typedef std::string Ifc_s_i_prefix;
typedef std::string Ifc_s_i_unit_name;
typedef std::string Ifc_sanitary_terminal_type_enum;
typedef std::string Ifc_section_type_enum;
typedef std::string Ifc_sensor_type_enum;
typedef std::string Ifc_sequence_enum;
typedef std::string Ifc_shading_device_type_enum;
typedef std::string Ifc_simple_property_template_type_enum;
typedef std::string Ifc_slab_type_enum;
typedef std::string Ifc_solar_device_type_enum;
typedef std::string Ifc_space_heater_type_enum;
typedef std::string Ifc_space_type_enum;
typedef std::string Ifc_spatial_zone_type_enum;
typedef std::string Ifc_stack_terminal_type_enum;
typedef std::string Ifc_stair_flight_type_enum;
typedef std::string Ifc_stair_type_enum;
typedef std::string Ifc_state_enum;
typedef std::string Ifc_structural_curve_activity_type_enum;
typedef std::string Ifc_structural_curve_member_type_enum;
typedef std::string Ifc_structural_surface_activity_type_enum;
typedef std::string Ifc_structural_surface_member_type_enum;
typedef std::string Ifc_sub_contract_resource_type_enum;
typedef std::string Ifc_surface_feature_type_enum;
typedef std::string Ifc_surface_side;
typedef std::string Ifc_switching_device_type_enum;
typedef std::string Ifc_system_furniture_element_type_enum;
typedef std::string Ifc_tank_type_enum;
typedef std::string Ifc_task_duration_enum;
typedef std::string Ifc_task_type_enum;
typedef std::string Ifc_tendon_anchor_type_enum;
typedef std::string Ifc_tendon_type_enum;
typedef std::string Ifc_text_path;
typedef std::string Ifc_time_series_data_type_enum;
typedef std::string Ifc_transformer_type_enum;
typedef std::string Ifc_transition_code;
typedef std::string Ifc_transport_element_type_enum;
typedef std::string Ifc_trimming_preference;
typedef std::string Ifc_tube_bundle_type_enum;
typedef std::string Ifc_unit_enum;
typedef std::string Ifc_unitary_control_element_type_enum;
typedef std::string Ifc_unitary_equipment_type_enum;
typedef std::string Ifc_valve_type_enum;
typedef std::string Ifc_vibration_isolator_type_enum;
typedef std::string Ifc_voiding_feature_type_enum;
typedef std::string Ifc_wall_type_enum;
typedef std::string Ifc_waste_terminal_type_enum;
typedef std::string Ifc_window_panel_operation_enum;
typedef std::string Ifc_window_panel_position_enum;
typedef std::string Ifc_window_style_construction_enum;
typedef std::string Ifc_window_style_operation_enum;
typedef std::string Ifc_window_type_enum;
typedef std::string Ifc_window_type_partitioning_enum;
typedef std::string Ifc_work_calendar_type_enum;
typedef std::string Ifc_work_plan_type_enum;
typedef std::string Ifc_work_schedule_type_enum;

// Forward declarations (768)
struct Ifc_action_request;
struct Ifc_actor;
struct Ifc_actor_role;
struct Ifc_actuator;
struct Ifc_actuator_type;
struct Ifc_address;
struct Ifc_advanced_brep;
struct Ifc_advanced_brep_with_voids;
struct Ifc_advanced_face;
struct Ifc_air_terminal;
struct Ifc_air_terminal_box;
struct Ifc_air_terminal_box_type;
struct Ifc_air_terminal_type;
struct Ifc_air_to_air_heat_recovery;
struct Ifc_air_to_air_heat_recovery_type;
struct Ifc_alarm;
struct Ifc_alarm_type;
struct Ifc_annotation;
struct Ifc_annotation_fill_area;
struct Ifc_application;
struct Ifc_applied_value;
struct Ifc_approval;
struct Ifc_approval_relationship;
struct Ifc_arbitrary_closed_profile_def;
struct Ifc_arbitrary_open_profile_def;
struct Ifc_arbitrary_profile_def_with_voids;
struct Ifc_asset;
struct Ifc_asymmetric_i_shape_profile_def;
struct Ifc_audio_visual_appliance;
struct Ifc_audio_visual_appliance_type;
struct Ifc_axis_1_placement;
struct Ifc_axis_2_placement_2_d;
struct Ifc_axis_2_placement_3_d;
struct Ifc_b_spline_curve;
struct Ifc_b_spline_curve_with_knots;
struct Ifc_b_spline_surface;
struct Ifc_b_spline_surface_with_knots;
struct Ifc_beam;
struct Ifc_beam_standard_case;
struct Ifc_beam_type;
struct Ifc_blob_texture;
struct Ifc_block;
struct Ifc_boiler;
struct Ifc_boiler_type;
struct Ifc_boolean_clipping_result;
struct Ifc_boolean_result;
struct Ifc_boundary_condition;
struct Ifc_boundary_curve;
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
struct Ifc_building_element_part;
struct Ifc_building_element_part_type;
struct Ifc_building_element_proxy;
struct Ifc_building_element_proxy_type;
struct Ifc_building_element_type;
struct Ifc_building_storey;
struct Ifc_building_system;
struct Ifc_burner;
struct Ifc_burner_type;
struct Ifc_c_shape_profile_def;
struct Ifc_cable_carrier_fitting;
struct Ifc_cable_carrier_fitting_type;
struct Ifc_cable_carrier_segment;
struct Ifc_cable_carrier_segment_type;
struct Ifc_cable_fitting;
struct Ifc_cable_fitting_type;
struct Ifc_cable_segment;
struct Ifc_cable_segment_type;
struct Ifc_cartesian_point;
struct Ifc_cartesian_point_list;
struct Ifc_cartesian_point_list_2_d;
struct Ifc_cartesian_point_list_3_d;
struct Ifc_cartesian_transformation_operator;
struct Ifc_cartesian_transformation_operator_2_d;
struct Ifc_cartesian_transformation_operator_2_dnon_uniform;
struct Ifc_cartesian_transformation_operator_3_d;
struct Ifc_cartesian_transformation_operator_3_dnon_uniform;
struct Ifc_center_line_profile_def;
struct Ifc_chiller;
struct Ifc_chiller_type;
struct Ifc_chimney;
struct Ifc_chimney_type;
struct Ifc_circle;
struct Ifc_circle_hollow_profile_def;
struct Ifc_circle_profile_def;
struct Ifc_civil_element;
struct Ifc_civil_element_type;
struct Ifc_classification;
struct Ifc_classification_reference;
struct Ifc_closed_shell;
struct Ifc_coil;
struct Ifc_coil_type;
struct Ifc_colour_rgb;
struct Ifc_colour_rgb_list;
struct Ifc_colour_specification;
struct Ifc_column;
struct Ifc_column_standard_case;
struct Ifc_column_type;
struct Ifc_communications_appliance;
struct Ifc_communications_appliance_type;
struct Ifc_complex_property;
struct Ifc_complex_property_template;
struct Ifc_composite_curve;
struct Ifc_composite_curve_on_surface;
struct Ifc_composite_curve_segment;
struct Ifc_composite_profile_def;
struct Ifc_compressor;
struct Ifc_compressor_type;
struct Ifc_condenser;
struct Ifc_condenser_type;
struct Ifc_conic;
struct Ifc_connected_face_set;
struct Ifc_connection_curve_geometry;
struct Ifc_connection_geometry;
struct Ifc_connection_point_eccentricity;
struct Ifc_connection_point_geometry;
struct Ifc_connection_surface_geometry;
struct Ifc_connection_volume_geometry;
struct Ifc_constraint;
struct Ifc_construction_equipment_resource;
struct Ifc_construction_equipment_resource_type;
struct Ifc_construction_material_resource;
struct Ifc_construction_material_resource_type;
struct Ifc_construction_product_resource;
struct Ifc_construction_product_resource_type;
struct Ifc_construction_resource;
struct Ifc_construction_resource_type;
struct Ifc_context;
struct Ifc_context_dependent_unit;
struct Ifc_control;
struct Ifc_controller;
struct Ifc_controller_type;
struct Ifc_conversion_based_unit;
struct Ifc_conversion_based_unit_with_offset;
struct Ifc_cooled_beam;
struct Ifc_cooled_beam_type;
struct Ifc_cooling_tower;
struct Ifc_cooling_tower_type;
struct Ifc_coordinate_operation;
struct Ifc_coordinate_reference_system;
struct Ifc_cost_item;
struct Ifc_cost_schedule;
struct Ifc_cost_value;
struct Ifc_covering;
struct Ifc_covering_type;
struct Ifc_crew_resource;
struct Ifc_crew_resource_type;
struct Ifc_csg_primitive_3_d;
struct Ifc_csg_solid;
struct Ifc_currency_relationship;
struct Ifc_curtain_wall;
struct Ifc_curtain_wall_type;
struct Ifc_curve;
struct Ifc_curve_bounded_plane;
struct Ifc_curve_bounded_surface;
struct Ifc_curve_style;
struct Ifc_curve_style_font;
struct Ifc_curve_style_font_and_scaling;
struct Ifc_curve_style_font_pattern;
struct Ifc_cylindrical_surface;
struct Ifc_damper;
struct Ifc_damper_type;
struct Ifc_derived_profile_def;
struct Ifc_derived_unit;
struct Ifc_derived_unit_element;
struct Ifc_dimensional_exponents;
struct Ifc_direction;
struct Ifc_discrete_accessory;
struct Ifc_discrete_accessory_type;
struct Ifc_distribution_chamber_element;
struct Ifc_distribution_chamber_element_type;
struct Ifc_distribution_circuit;
struct Ifc_distribution_control_element;
struct Ifc_distribution_control_element_type;
struct Ifc_distribution_element;
struct Ifc_distribution_element_type;
struct Ifc_distribution_flow_element;
struct Ifc_distribution_flow_element_type;
struct Ifc_distribution_port;
struct Ifc_distribution_system;
struct Ifc_document_information;
struct Ifc_document_information_relationship;
struct Ifc_document_reference;
struct Ifc_door;
struct Ifc_door_lining_properties;
struct Ifc_door_panel_properties;
struct Ifc_door_standard_case;
struct Ifc_door_style;
struct Ifc_door_type;
struct Ifc_draughting_pre_defined_colour;
struct Ifc_draughting_pre_defined_curve_font;
struct Ifc_duct_fitting;
struct Ifc_duct_fitting_type;
struct Ifc_duct_segment;
struct Ifc_duct_segment_type;
struct Ifc_duct_silencer;
struct Ifc_duct_silencer_type;
struct Ifc_edge;
struct Ifc_edge_curve;
struct Ifc_edge_loop;
struct Ifc_electric_appliance;
struct Ifc_electric_appliance_type;
struct Ifc_electric_distribution_board;
struct Ifc_electric_distribution_board_type;
struct Ifc_electric_flow_storage_device;
struct Ifc_electric_flow_storage_device_type;
struct Ifc_electric_generator;
struct Ifc_electric_generator_type;
struct Ifc_electric_motor;
struct Ifc_electric_motor_type;
struct Ifc_electric_time_control;
struct Ifc_electric_time_control_type;
struct Ifc_element;
struct Ifc_element_assembly;
struct Ifc_element_assembly_type;
struct Ifc_element_component;
struct Ifc_element_component_type;
struct Ifc_element_quantity;
struct Ifc_element_type;
struct Ifc_elementary_surface;
struct Ifc_ellipse;
struct Ifc_ellipse_profile_def;
struct Ifc_energy_conversion_device;
struct Ifc_energy_conversion_device_type;
struct Ifc_engine;
struct Ifc_engine_type;
struct Ifc_evaporative_cooler;
struct Ifc_evaporative_cooler_type;
struct Ifc_evaporator;
struct Ifc_evaporator_type;
struct Ifc_event;
struct Ifc_event_time;
struct Ifc_event_type;
struct Ifc_extended_properties;
struct Ifc_external_information;
struct Ifc_external_reference;
struct Ifc_external_reference_relationship;
struct Ifc_external_spatial_element;
struct Ifc_external_spatial_structure_element;
struct Ifc_externally_defined_hatch_style;
struct Ifc_externally_defined_surface_style;
struct Ifc_externally_defined_text_font;
struct Ifc_extruded_area_solid;
struct Ifc_extruded_area_solid_tapered;
struct Ifc_face;
struct Ifc_face_based_surface_model;
struct Ifc_face_bound;
struct Ifc_face_outer_bound;
struct Ifc_face_surface;
struct Ifc_faceted_brep;
struct Ifc_faceted_brep_with_voids;
struct Ifc_failure_connection_condition;
struct Ifc_fan;
struct Ifc_fan_type;
struct Ifc_fastener;
struct Ifc_fastener_type;
struct Ifc_feature_element;
struct Ifc_feature_element_addition;
struct Ifc_feature_element_subtraction;
struct Ifc_fill_area_style;
struct Ifc_fill_area_style_hatching;
struct Ifc_fill_area_style_tiles;
struct Ifc_filter;
struct Ifc_filter_type;
struct Ifc_fire_suppression_terminal;
struct Ifc_fire_suppression_terminal_type;
struct Ifc_fixed_reference_swept_area_solid;
struct Ifc_flow_controller;
struct Ifc_flow_controller_type;
struct Ifc_flow_fitting;
struct Ifc_flow_fitting_type;
struct Ifc_flow_instrument;
struct Ifc_flow_instrument_type;
struct Ifc_flow_meter;
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
struct Ifc_footing;
struct Ifc_footing_type;
struct Ifc_furnishing_element;
struct Ifc_furnishing_element_type;
struct Ifc_furniture;
struct Ifc_furniture_type;
struct Ifc_geographic_element;
struct Ifc_geographic_element_type;
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
struct Ifc_heat_exchanger;
struct Ifc_heat_exchanger_type;
struct Ifc_humidifier;
struct Ifc_humidifier_type;
struct Ifc_i_shape_profile_def;
struct Ifc_image_texture;
struct Ifc_indexed_colour_map;
struct Ifc_indexed_poly_curve;
struct Ifc_indexed_texture_map;
struct Ifc_indexed_triangle_texture_map;
struct Ifc_interceptor;
struct Ifc_interceptor_type;
struct Ifc_inventory;
struct Ifc_irregular_time_series;
struct Ifc_irregular_time_series_value;
struct Ifc_junction_box;
struct Ifc_junction_box_type;
struct Ifc_l_shape_profile_def;
struct Ifc_labor_resource;
struct Ifc_labor_resource_type;
struct Ifc_lag_time;
struct Ifc_lamp;
struct Ifc_lamp_type;
struct Ifc_library_information;
struct Ifc_library_reference;
struct Ifc_light_distribution_data;
struct Ifc_light_fixture;
struct Ifc_light_fixture_type;
struct Ifc_light_intensity_distribution;
struct Ifc_light_source;
struct Ifc_light_source_ambient;
struct Ifc_light_source_directional;
struct Ifc_light_source_goniometric;
struct Ifc_light_source_positional;
struct Ifc_light_source_spot;
struct Ifc_line;
struct Ifc_local_placement;
struct Ifc_loop;
struct Ifc_manifold_solid_brep;
struct Ifc_map_conversion;
struct Ifc_mapped_item;
struct Ifc_material;
struct Ifc_material_classification_relationship;
struct Ifc_material_constituent;
struct Ifc_material_constituent_set;
struct Ifc_material_definition;
struct Ifc_material_definition_representation;
struct Ifc_material_layer;
struct Ifc_material_layer_set;
struct Ifc_material_layer_set_usage;
struct Ifc_material_layer_with_offsets;
struct Ifc_material_list;
struct Ifc_material_profile;
struct Ifc_material_profile_set;
struct Ifc_material_profile_set_usage;
struct Ifc_material_profile_set_usage_tapering;
struct Ifc_material_profile_with_offsets;
struct Ifc_material_properties;
struct Ifc_material_relationship;
struct Ifc_material_usage_definition;
struct Ifc_measure_with_unit;
struct Ifc_mechanical_fastener;
struct Ifc_mechanical_fastener_type;
struct Ifc_medical_device;
struct Ifc_medical_device_type;
struct Ifc_member;
struct Ifc_member_standard_case;
struct Ifc_member_type;
struct Ifc_metric;
struct Ifc_mirrored_profile_def;
struct Ifc_monetary_unit;
struct Ifc_motor_connection;
struct Ifc_motor_connection_type;
struct Ifc_named_unit;
struct Ifc_object;
struct Ifc_object_definition;
struct Ifc_object_placement;
struct Ifc_objective;
struct Ifc_occupant;
struct Ifc_offset_curve_2_d;
struct Ifc_offset_curve_3_d;
struct Ifc_open_shell;
struct Ifc_opening_element;
struct Ifc_opening_standard_case;
struct Ifc_organization;
struct Ifc_organization_relationship;
struct Ifc_oriented_edge;
struct Ifc_outer_boundary_curve;
struct Ifc_outlet;
struct Ifc_outlet_type;
struct Ifc_owner_history;
struct Ifc_parameterized_profile_def;
struct Ifc_path;
struct Ifc_pcurve;
struct Ifc_performance_history;
struct Ifc_permeable_covering_properties;
struct Ifc_permit;
struct Ifc_person;
struct Ifc_person_and_organization;
struct Ifc_physical_complex_quantity;
struct Ifc_physical_quantity;
struct Ifc_physical_simple_quantity;
struct Ifc_pile;
struct Ifc_pile_type;
struct Ifc_pipe_fitting;
struct Ifc_pipe_fitting_type;
struct Ifc_pipe_segment;
struct Ifc_pipe_segment_type;
struct Ifc_pixel_texture;
struct Ifc_placement;
struct Ifc_planar_box;
struct Ifc_planar_extent;
struct Ifc_plane;
struct Ifc_plate;
struct Ifc_plate_standard_case;
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
struct Ifc_pre_defined_item;
struct Ifc_pre_defined_properties;
struct Ifc_pre_defined_property_set;
struct Ifc_pre_defined_text_font;
struct Ifc_presentation_item;
struct Ifc_presentation_layer_assignment;
struct Ifc_presentation_layer_with_style;
struct Ifc_presentation_style;
struct Ifc_presentation_style_assignment;
struct Ifc_procedure;
struct Ifc_procedure_type;
struct Ifc_process;
struct Ifc_product;
struct Ifc_product_definition_shape;
struct Ifc_product_representation;
struct Ifc_profile_def;
struct Ifc_profile_properties;
struct Ifc_project;
struct Ifc_project_library;
struct Ifc_project_order;
struct Ifc_projected_c_r_s;
struct Ifc_projection_element;
struct Ifc_property;
struct Ifc_property_abstraction;
struct Ifc_property_bounded_value;
struct Ifc_property_definition;
struct Ifc_property_dependency_relationship;
struct Ifc_property_enumerated_value;
struct Ifc_property_enumeration;
struct Ifc_property_list_value;
struct Ifc_property_reference_value;
struct Ifc_property_set;
struct Ifc_property_set_definition;
struct Ifc_property_set_template;
struct Ifc_property_single_value;
struct Ifc_property_table_value;
struct Ifc_property_template;
struct Ifc_property_template_definition;
struct Ifc_protective_device;
struct Ifc_protective_device_tripping_unit;
struct Ifc_protective_device_tripping_unit_type;
struct Ifc_protective_device_type;
struct Ifc_proxy;
struct Ifc_pump;
struct Ifc_pump_type;
struct Ifc_quantity_area;
struct Ifc_quantity_count;
struct Ifc_quantity_length;
struct Ifc_quantity_set;
struct Ifc_quantity_time;
struct Ifc_quantity_volume;
struct Ifc_quantity_weight;
struct Ifc_railing;
struct Ifc_railing_type;
struct Ifc_ramp;
struct Ifc_ramp_flight;
struct Ifc_ramp_flight_type;
struct Ifc_ramp_type;
struct Ifc_rational_b_spline_curve_with_knots;
struct Ifc_rational_b_spline_surface_with_knots;
struct Ifc_rectangle_hollow_profile_def;
struct Ifc_rectangle_profile_def;
struct Ifc_rectangular_pyramid;
struct Ifc_rectangular_trimmed_surface;
struct Ifc_recurrence_pattern;
struct Ifc_reference;
struct Ifc_regular_time_series;
struct Ifc_reinforcement_bar_properties;
struct Ifc_reinforcement_definition_properties;
struct Ifc_reinforcing_bar;
struct Ifc_reinforcing_bar_type;
struct Ifc_reinforcing_element;
struct Ifc_reinforcing_element_type;
struct Ifc_reinforcing_mesh;
struct Ifc_reinforcing_mesh_type;
struct Ifc_rel_aggregates;
struct Ifc_rel_assigns;
struct Ifc_rel_assigns_to_actor;
struct Ifc_rel_assigns_to_control;
struct Ifc_rel_assigns_to_group;
struct Ifc_rel_assigns_to_group_by_factor;
struct Ifc_rel_assigns_to_process;
struct Ifc_rel_assigns_to_product;
struct Ifc_rel_assigns_to_resource;
struct Ifc_rel_associates;
struct Ifc_rel_associates_approval;
struct Ifc_rel_associates_classification;
struct Ifc_rel_associates_constraint;
struct Ifc_rel_associates_document;
struct Ifc_rel_associates_library;
struct Ifc_rel_associates_material;
struct Ifc_rel_connects;
struct Ifc_rel_connects_elements;
struct Ifc_rel_connects_path_elements;
struct Ifc_rel_connects_port_to_element;
struct Ifc_rel_connects_ports;
struct Ifc_rel_connects_structural_activity;
struct Ifc_rel_connects_structural_member;
struct Ifc_rel_connects_with_eccentricity;
struct Ifc_rel_connects_with_realizing_elements;
struct Ifc_rel_contained_in_spatial_structure;
struct Ifc_rel_covers_bldg_elements;
struct Ifc_rel_covers_spaces;
struct Ifc_rel_declares;
struct Ifc_rel_decomposes;
struct Ifc_rel_defines;
struct Ifc_rel_defines_by_object;
struct Ifc_rel_defines_by_properties;
struct Ifc_rel_defines_by_template;
struct Ifc_rel_defines_by_type;
struct Ifc_rel_fills_element;
struct Ifc_rel_flow_control_elements;
struct Ifc_rel_interferes_elements;
struct Ifc_rel_nests;
struct Ifc_rel_projects_element;
struct Ifc_rel_referenced_in_spatial_structure;
struct Ifc_rel_sequence;
struct Ifc_rel_services_buildings;
struct Ifc_rel_space_boundary;
struct Ifc_rel_space_boundary_1st_level;
struct Ifc_rel_space_boundary_2nd_level;
struct Ifc_rel_voids_element;
struct Ifc_relationship;
struct Ifc_reparametrised_composite_curve_segment;
struct Ifc_representation;
struct Ifc_representation_context;
struct Ifc_representation_item;
struct Ifc_representation_map;
struct Ifc_resource;
struct Ifc_resource_approval_relationship;
struct Ifc_resource_constraint_relationship;
struct Ifc_resource_level_relationship;
struct Ifc_resource_time;
struct Ifc_revolved_area_solid;
struct Ifc_revolved_area_solid_tapered;
struct Ifc_right_circular_cone;
struct Ifc_right_circular_cylinder;
struct Ifc_roof;
struct Ifc_roof_type;
struct Ifc_root;
struct Ifc_rounded_rectangle_profile_def;
struct Ifc_s_i_unit;
struct Ifc_sanitary_terminal;
struct Ifc_sanitary_terminal_type;
struct Ifc_scheduling_time;
struct Ifc_section_properties;
struct Ifc_section_reinforcement_properties;
struct Ifc_sectioned_spine;
struct Ifc_sensor;
struct Ifc_sensor_type;
struct Ifc_shading_device;
struct Ifc_shading_device_type;
struct Ifc_shape_aspect;
struct Ifc_shape_model;
struct Ifc_shape_representation;
struct Ifc_shell_based_surface_model;
struct Ifc_simple_property;
struct Ifc_simple_property_template;
struct Ifc_site;
struct Ifc_slab;
struct Ifc_slab_elemented_case;
struct Ifc_slab_standard_case;
struct Ifc_slab_type;
struct Ifc_slippage_connection_condition;
struct Ifc_solar_device;
struct Ifc_solar_device_type;
struct Ifc_solid_model;
struct Ifc_space;
struct Ifc_space_heater;
struct Ifc_space_heater_type;
struct Ifc_space_type;
struct Ifc_spatial_element;
struct Ifc_spatial_element_type;
struct Ifc_spatial_structure_element;
struct Ifc_spatial_structure_element_type;
struct Ifc_spatial_zone;
struct Ifc_spatial_zone_type;
struct Ifc_sphere;
struct Ifc_stack_terminal;
struct Ifc_stack_terminal_type;
struct Ifc_stair;
struct Ifc_stair_flight;
struct Ifc_stair_flight_type;
struct Ifc_stair_type;
struct Ifc_structural_action;
struct Ifc_structural_activity;
struct Ifc_structural_analysis_model;
struct Ifc_structural_connection;
struct Ifc_structural_connection_condition;
struct Ifc_structural_curve_action;
struct Ifc_structural_curve_connection;
struct Ifc_structural_curve_member;
struct Ifc_structural_curve_member_varying;
struct Ifc_structural_curve_reaction;
struct Ifc_structural_item;
struct Ifc_structural_linear_action;
struct Ifc_structural_load;
struct Ifc_structural_load_case;
struct Ifc_structural_load_configuration;
struct Ifc_structural_load_group;
struct Ifc_structural_load_linear_force;
struct Ifc_structural_load_or_result;
struct Ifc_structural_load_planar_force;
struct Ifc_structural_load_single_displacement;
struct Ifc_structural_load_single_displacement_distortion;
struct Ifc_structural_load_single_force;
struct Ifc_structural_load_single_force_warping;
struct Ifc_structural_load_static;
struct Ifc_structural_load_temperature;
struct Ifc_structural_member;
struct Ifc_structural_planar_action;
struct Ifc_structural_point_action;
struct Ifc_structural_point_connection;
struct Ifc_structural_point_reaction;
struct Ifc_structural_reaction;
struct Ifc_structural_result_group;
struct Ifc_structural_surface_action;
struct Ifc_structural_surface_connection;
struct Ifc_structural_surface_member;
struct Ifc_structural_surface_member_varying;
struct Ifc_structural_surface_reaction;
struct Ifc_style_model;
struct Ifc_styled_item;
struct Ifc_styled_representation;
struct Ifc_sub_contract_resource;
struct Ifc_sub_contract_resource_type;
struct Ifc_subedge;
struct Ifc_surface;
struct Ifc_surface_curve_swept_area_solid;
struct Ifc_surface_feature;
struct Ifc_surface_of_linear_extrusion;
struct Ifc_surface_of_revolution;
struct Ifc_surface_reinforcement_area;
struct Ifc_surface_style;
struct Ifc_surface_style_lighting;
struct Ifc_surface_style_refraction;
struct Ifc_surface_style_rendering;
struct Ifc_surface_style_shading;
struct Ifc_surface_style_with_textures;
struct Ifc_surface_texture;
struct Ifc_swept_area_solid;
struct Ifc_swept_disk_solid;
struct Ifc_swept_disk_solid_polygonal;
struct Ifc_swept_surface;
struct Ifc_switching_device;
struct Ifc_switching_device_type;
struct Ifc_system;
struct Ifc_system_furniture_element;
struct Ifc_system_furniture_element_type;
struct Ifc_t_shape_profile_def;
struct Ifc_table;
struct Ifc_table_column;
struct Ifc_table_row;
struct Ifc_tank;
struct Ifc_tank_type;
struct Ifc_task;
struct Ifc_task_time;
struct Ifc_task_time_recurring;
struct Ifc_task_type;
struct Ifc_telecom_address;
struct Ifc_tendon;
struct Ifc_tendon_anchor;
struct Ifc_tendon_anchor_type;
struct Ifc_tendon_type;
struct Ifc_tessellated_face_set;
struct Ifc_tessellated_item;
struct Ifc_text_literal;
struct Ifc_text_literal_with_extent;
struct Ifc_text_style;
struct Ifc_text_style_font_model;
struct Ifc_text_style_for_defined_font;
struct Ifc_text_style_text_model;
struct Ifc_texture_coordinate;
struct Ifc_texture_coordinate_generator;
struct Ifc_texture_map;
struct Ifc_texture_vertex;
struct Ifc_texture_vertex_list;
struct Ifc_time_period;
struct Ifc_time_series;
struct Ifc_time_series_value;
struct Ifc_topological_representation_item;
struct Ifc_topology_representation;
struct Ifc_transformer;
struct Ifc_transformer_type;
struct Ifc_transport_element;
struct Ifc_transport_element_type;
struct Ifc_trapezium_profile_def;
struct Ifc_triangulated_face_set;
struct Ifc_trimmed_curve;
struct Ifc_tube_bundle;
struct Ifc_tube_bundle_type;
struct Ifc_type_object;
struct Ifc_type_process;
struct Ifc_type_product;
struct Ifc_type_resource;
struct Ifc_u_shape_profile_def;
struct Ifc_unit_assignment;
struct Ifc_unitary_control_element;
struct Ifc_unitary_control_element_type;
struct Ifc_unitary_equipment;
struct Ifc_unitary_equipment_type;
struct Ifc_valve;
struct Ifc_valve_type;
struct Ifc_vector;
struct Ifc_vertex;
struct Ifc_vertex_loop;
struct Ifc_vertex_point;
struct Ifc_vibration_isolator;
struct Ifc_vibration_isolator_type;
struct Ifc_virtual_element;
struct Ifc_virtual_grid_intersection;
struct Ifc_voiding_feature;
struct Ifc_wall;
struct Ifc_wall_elemented_case;
struct Ifc_wall_standard_case;
struct Ifc_wall_type;
struct Ifc_waste_terminal;
struct Ifc_waste_terminal_type;
struct Ifc_window;
struct Ifc_window_lining_properties;
struct Ifc_window_panel_properties;
struct Ifc_window_standard_case;
struct Ifc_window_style;
struct Ifc_window_type;
struct Ifc_work_calendar;
struct Ifc_work_control;
struct Ifc_work_plan;
struct Ifc_work_schedule;
struct Ifc_work_time;
struct Ifc_z_shape_profile_def;
struct Ifc_zone;

// Base class
struct Ifc {
	std::string entity;
	virtual ~Ifc() {}
};

// Select types (60)
struct Ifc_actor_select {virtual ~Ifc_actor_select() {} };
struct Ifc_applied_value_select {virtual ~Ifc_applied_value_select() {} };
struct Ifc_axis_2_placement {virtual ~Ifc_axis_2_placement() {} };
struct Ifc_bending_parameter_select {virtual ~Ifc_bending_parameter_select() {} };
struct Ifc_boolean_operand {virtual ~Ifc_boolean_operand() {} };
struct Ifc_classification_reference_select {virtual ~Ifc_classification_reference_select() {} };
struct Ifc_classification_select {virtual ~Ifc_classification_select() {} };
struct Ifc_colour {virtual ~Ifc_colour() {} };
struct Ifc_colour_or_factor {virtual ~Ifc_colour_or_factor() {} };
struct Ifc_coordinate_reference_system_select {virtual ~Ifc_coordinate_reference_system_select() {} };
struct Ifc_csg_select {virtual ~Ifc_csg_select() {} };
struct Ifc_curve_font_or_scaled_curve_font_select {virtual ~Ifc_curve_font_or_scaled_curve_font_select() {} };
struct Ifc_curve_on_surface {virtual ~Ifc_curve_on_surface() {} };
struct Ifc_curve_or_edge_curve {virtual ~Ifc_curve_or_edge_curve() {} };
struct Ifc_curve_style_font_select {virtual ~Ifc_curve_style_font_select() {} };
struct Ifc_definition_select {virtual ~Ifc_definition_select() {} };
struct Ifc_derived_measure_value {virtual ~Ifc_derived_measure_value() {} };
struct Ifc_document_select {virtual ~Ifc_document_select() {} };
struct Ifc_fill_style_select {virtual ~Ifc_fill_style_select() {} };
struct Ifc_geometric_set_select {virtual ~Ifc_geometric_set_select() {} };
struct Ifc_grid_placement_direction_select {virtual ~Ifc_grid_placement_direction_select() {} };
struct Ifc_hatch_line_distance_select {virtual ~Ifc_hatch_line_distance_select() {} };
struct Ifc_layered_item {virtual ~Ifc_layered_item() {} };
struct Ifc_library_select {virtual ~Ifc_library_select() {} };
struct Ifc_light_distribution_data_source_select {virtual ~Ifc_light_distribution_data_source_select() {} };
struct Ifc_material_select {virtual ~Ifc_material_select() {} };
struct Ifc_measure_value {virtual ~Ifc_measure_value() {} };
struct Ifc_metric_value_select {virtual ~Ifc_metric_value_select() {} };
struct Ifc_modulus_of_rotational_subgrade_reaction_select {virtual ~Ifc_modulus_of_rotational_subgrade_reaction_select() {} };
struct Ifc_modulus_of_subgrade_reaction_select {virtual ~Ifc_modulus_of_subgrade_reaction_select() {} };
struct Ifc_modulus_of_translational_subgrade_reaction_select {virtual ~Ifc_modulus_of_translational_subgrade_reaction_select() {} };
struct Ifc_object_reference_select {virtual ~Ifc_object_reference_select() {} };
struct Ifc_point_or_vertex_point {virtual ~Ifc_point_or_vertex_point() {} };
struct Ifc_presentation_style_select {virtual ~Ifc_presentation_style_select() {} };
struct Ifc_process_select {virtual ~Ifc_process_select() {} };
struct Ifc_product_representation_select {virtual ~Ifc_product_representation_select() {} };
struct Ifc_product_select {virtual ~Ifc_product_select() {} };
struct Ifc_property_set_definition_select {virtual ~Ifc_property_set_definition_select() {} };
struct Ifc_resource_object_select {virtual ~Ifc_resource_object_select() {} };
struct Ifc_resource_select {virtual ~Ifc_resource_select() {} };
struct Ifc_rotational_stiffness_select {virtual ~Ifc_rotational_stiffness_select() {} };
struct Ifc_segment_index_select {virtual ~Ifc_segment_index_select() {} };
struct Ifc_shell {virtual ~Ifc_shell() {} };
struct Ifc_simple_value {virtual ~Ifc_simple_value() {} };
struct Ifc_size_select {virtual ~Ifc_size_select() {} };
struct Ifc_solid_or_shell {virtual ~Ifc_solid_or_shell() {} };
struct Ifc_space_boundary_select {virtual ~Ifc_space_boundary_select() {} };
struct Ifc_specular_highlight_select {virtual ~Ifc_specular_highlight_select() {} };
struct Ifc_structural_activity_assignment_select {virtual ~Ifc_structural_activity_assignment_select() {} };
struct Ifc_style_assignment_select {virtual ~Ifc_style_assignment_select() {} };
struct Ifc_surface_or_face_surface {virtual ~Ifc_surface_or_face_surface() {} };
struct Ifc_surface_style_element_select {virtual ~Ifc_surface_style_element_select() {} };
struct Ifc_text_font_select {virtual ~Ifc_text_font_select() {} };
struct Ifc_time_or_ratio_select {virtual ~Ifc_time_or_ratio_select() {} };
struct Ifc_translational_stiffness_select {virtual ~Ifc_translational_stiffness_select() {} };
struct Ifc_trimming_select {virtual ~Ifc_trimming_select() {} };
struct Ifc_unit {virtual ~Ifc_unit() {} };
struct Ifc_value {virtual ~Ifc_value() {} };
struct Ifc_vector_or_direction {virtual ~Ifc_vector_or_direction() {} };
struct Ifc_warping_stiffness_select {virtual ~Ifc_warping_stiffness_select() {} };

// Entities (768)
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
}

struct Ifc_address : Ifc {
	Ifc_address_type_enum purpose;
	Ifc_text description;
	Ifc_label user_defined_purpose;

	virtual ~Ifc_address() {}
}

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
}

struct Ifc_applied_value : Ifc {
	Ifc_label name;
	Ifc_text description;
	Ifc_applied_value_select *applied_value;
	Ifc_measure_with_unit *unit_basis;
	Ifc_date applicable_date;
	Ifc_date fixed_until_date;
	Ifc_label category;
	Ifc_label condition;
	Ifc_arithmetic_operator_enum arithmetic_operator;
	std::vector<Ifc_applied_value *> components;

	Ifc_applied_value() {
		entity = "Ifc_applied_value";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_applied_value &o) {
		return os << "Ifc_applied_value(" << o.name << ", " << o.description << ", " << o.applied_value << ", " << o.unit_basis << ", " << o.applicable_date << ", " << o.fixed_until_date << ", " << o.category << ", " << o.condition << ", " << o.arithmetic_operator << ", " << o.components << ")";
	}
}

struct Ifc_approval : Ifc {
	Ifc_identifier identifier;
	Ifc_label name;
	Ifc_text description;
	Ifc_date_time time_of_approval;
	Ifc_label status;
	Ifc_label level;
	Ifc_text qualifier;
	Ifc_actor_select *requesting_approval;
	Ifc_actor_select *giving_approval;

	Ifc_approval() {
		entity = "Ifc_approval";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_approval &o) {
		return os << "Ifc_approval(" << o.identifier << ", " << o.name << ", " << o.description << ", " << o.time_of_approval << ", " << o.status << ", " << o.level << ", " << o.qualifier << ", " << o.requesting_approval << ", " << o.giving_approval << ")";
	}
}

struct Ifc_boundary_condition : Ifc {
	Ifc_label name;

	virtual ~Ifc_boundary_condition() {}
}

struct Ifc_boundary_edge_condition : IfcBoundaryCondition {
	Ifc_modulus_of_translational_subgrade_reaction_select *translational_stiffness_by_length_x;
	Ifc_modulus_of_translational_subgrade_reaction_select *translational_stiffness_by_length_y;
	Ifc_modulus_of_translational_subgrade_reaction_select *translational_stiffness_by_length_z;
	Ifc_modulus_of_rotational_subgrade_reaction_select *rotational_stiffness_by_length_x;
	Ifc_modulus_of_rotational_subgrade_reaction_select *rotational_stiffness_by_length_y;
	Ifc_modulus_of_rotational_subgrade_reaction_select *rotational_stiffness_by_length_z;

	Ifc_boundary_edge_condition() {
		entity = "Ifc_boundary_edge_condition";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_boundary_edge_condition &o) {
		return os << "Ifc_boundary_edge_condition(" << o.name << ", " << o.translational_stiffness_by_length_x << ", " << o.translational_stiffness_by_length_y << ", " << o.translational_stiffness_by_length_z << ", " << o.rotational_stiffness_by_length_x << ", " << o.rotational_stiffness_by_length_y << ", " << o.rotational_stiffness_by_length_z << ")";
	}
}

struct Ifc_boundary_face_condition : IfcBoundaryCondition {
	Ifc_modulus_of_subgrade_reaction_select *translational_stiffness_by_area_x;
	Ifc_modulus_of_subgrade_reaction_select *translational_stiffness_by_area_y;
	Ifc_modulus_of_subgrade_reaction_select *translational_stiffness_by_area_z;

	Ifc_boundary_face_condition() {
		entity = "Ifc_boundary_face_condition";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_boundary_face_condition &o) {
		return os << "Ifc_boundary_face_condition(" << o.name << ", " << o.translational_stiffness_by_area_x << ", " << o.translational_stiffness_by_area_y << ", " << o.translational_stiffness_by_area_z << ")";
	}
}

struct Ifc_boundary_node_condition : IfcBoundaryCondition {
	Ifc_translational_stiffness_select *translational_stiffness_x;
	Ifc_translational_stiffness_select *translational_stiffness_y;
	Ifc_translational_stiffness_select *translational_stiffness_z;
	Ifc_rotational_stiffness_select *rotational_stiffness_x;
	Ifc_rotational_stiffness_select *rotational_stiffness_y;
	Ifc_rotational_stiffness_select *rotational_stiffness_z;

	Ifc_boundary_node_condition() {
		entity = "Ifc_boundary_node_condition";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_boundary_node_condition &o) {
		return os << "Ifc_boundary_node_condition(" << o.name << ", " << o.translational_stiffness_x << ", " << o.translational_stiffness_y << ", " << o.translational_stiffness_z << ", " << o.rotational_stiffness_x << ", " << o.rotational_stiffness_y << ", " << o.rotational_stiffness_z << ")";
	}
}

struct Ifc_boundary_node_condition_warping : IfcBoundaryNodeCondition {
	Ifc_warping_stiffness_select *warping_stiffness;

	Ifc_boundary_node_condition_warping() {
		entity = "Ifc_boundary_node_condition_warping";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_boundary_node_condition_warping &o) {
		return os << "Ifc_boundary_node_condition_warping(" << o.name << ", " << o.translational_stiffness_x << ", " << o.translational_stiffness_y << ", " << o.translational_stiffness_z << ", " << o.rotational_stiffness_x << ", " << o.rotational_stiffness_y << ", " << o.rotational_stiffness_z << ", " << o.warping_stiffness << ")";
	}
}

struct Ifc_connection_geometry : Ifc {
	virtual ~Ifc_connection_geometry() {}
}

struct Ifc_connection_point_geometry : IfcConnectionGeometry {
	Ifc_point_or_vertex_point *point_on_relating_element;
	Ifc_point_or_vertex_point *point_on_related_element;

	Ifc_connection_point_geometry() {
		entity = "Ifc_connection_point_geometry";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_connection_point_geometry &o) {
		return os << "Ifc_connection_point_geometry(" << o.point_on_relating_element << ", " << o.point_on_related_element << ")";
	}
}

struct Ifc_connection_surface_geometry : IfcConnectionGeometry {
	Ifc_surface_or_face_surface *surface_on_relating_element;
	Ifc_surface_or_face_surface *surface_on_related_element;

	Ifc_connection_surface_geometry() {
		entity = "Ifc_connection_surface_geometry";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_connection_surface_geometry &o) {
		return os << "Ifc_connection_surface_geometry(" << o.surface_on_relating_element << ", " << o.surface_on_related_element << ")";
	}
}

struct Ifc_connection_volume_geometry : IfcConnectionGeometry {
	Ifc_solid_or_shell *volume_on_relating_element;
	Ifc_solid_or_shell *volume_on_related_element;

	Ifc_connection_volume_geometry() {
		entity = "Ifc_connection_volume_geometry";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_connection_volume_geometry &o) {
		return os << "Ifc_connection_volume_geometry(" << o.volume_on_relating_element << ", " << o.volume_on_related_element << ")";
	}
}

struct Ifc_constraint : Ifc {
	Ifc_label name;
	Ifc_text description;
	Ifc_constraint_enum constraint_grade;
	Ifc_label constraint_source;
	Ifc_actor_select *creating_actor;
	Ifc_date_time creation_time;
	Ifc_label user_defined_grade;

	virtual ~Ifc_constraint() {}
}

struct Ifc_coordinate_operation : Ifc {
	Ifc_coordinate_reference_system_select *source_c_r_s;
	Ifc_coordinate_reference_system *target_c_r_s;

	virtual ~Ifc_coordinate_operation() {}
}

struct Ifc_coordinate_reference_system : Ifc {
	Ifc_label name;
	Ifc_text description;
	Ifc_identifier geodetic_datum;
	Ifc_identifier vertical_datum;

	virtual ~Ifc_coordinate_reference_system() {}
}

struct Ifc_cost_value : IfcAppliedValue {
	Ifc_cost_value() {
		entity = "Ifc_cost_value";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cost_value &o) {
		return os << "Ifc_cost_value(" << o.name << ", " << o.description << ", " << o.applied_value << ", " << o.unit_basis << ", " << o.applicable_date << ", " << o.fixed_until_date << ", " << o.category << ", " << o.condition << ", " << o.arithmetic_operator << ", " << o.components << ")";
	}
}

struct Ifc_derived_unit : Ifc {
	std::vector<Ifc_derived_unit_element *> elements;
	Ifc_derived_unit_enum unit_type;
	Ifc_label user_defined_type;

	Ifc_derived_unit() {
		entity = "Ifc_derived_unit";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_derived_unit &o) {
		return os << "Ifc_derived_unit(" << o.elements << ", " << o.unit_type << ", " << o.user_defined_type << ")";
	}
}

struct Ifc_derived_unit_element : Ifc {
	Ifc_named_unit *unit;
	int exponent;

	Ifc_derived_unit_element() {
		entity = "Ifc_derived_unit_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_derived_unit_element &o) {
		return os << "Ifc_derived_unit_element(" << o.unit << ", " << o.exponent << ")";
	}
}

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
}

struct Ifc_external_information : Ifc {
	virtual ~Ifc_external_information() {}
}

struct Ifc_external_reference : Ifc {
	Ifc_u_r_i_reference location;
	Ifc_identifier identification;
	Ifc_label name;

	virtual ~Ifc_external_reference() {}
}

struct Ifc_externally_defined_hatch_style : IfcExternalReference {
	Ifc_externally_defined_hatch_style() {
		entity = "Ifc_externally_defined_hatch_style";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_externally_defined_hatch_style &o) {
		return os << "Ifc_externally_defined_hatch_style(" << o.location << ", " << o.identification << ", " << o.name << ")";
	}
}

struct Ifc_externally_defined_surface_style : IfcExternalReference {
	Ifc_externally_defined_surface_style() {
		entity = "Ifc_externally_defined_surface_style";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_externally_defined_surface_style &o) {
		return os << "Ifc_externally_defined_surface_style(" << o.location << ", " << o.identification << ", " << o.name << ")";
	}
}

struct Ifc_externally_defined_text_font : IfcExternalReference {
	Ifc_externally_defined_text_font() {
		entity = "Ifc_externally_defined_text_font";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_externally_defined_text_font &o) {
		return os << "Ifc_externally_defined_text_font(" << o.location << ", " << o.identification << ", " << o.name << ")";
	}
}

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
}

struct Ifc_irregular_time_series_value : Ifc {
	Ifc_date_time time_stamp;
	std::vector<Ifc_value *> list_values;

	Ifc_irregular_time_series_value() {
		entity = "Ifc_irregular_time_series_value";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_irregular_time_series_value &o) {
		return os << "Ifc_irregular_time_series_value(" << o.time_stamp << ", " << o.list_values << ")";
	}
}

struct Ifc_library_information : IfcExternalInformation {
	Ifc_label name;
	Ifc_label version;
	Ifc_actor_select *publisher;
	Ifc_date_time version_date;
	Ifc_u_r_i_reference location;
	Ifc_text description;

	Ifc_library_information() {
		entity = "Ifc_library_information";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_library_information &o) {
		return os << "Ifc_library_information(" << o.name << ", " << o.version << ", " << o.publisher << ", " << o.version_date << ", " << o.location << ", " << o.description << ")";
	}
}

struct Ifc_library_reference : IfcExternalReference {
	Ifc_text description;
	Ifc_language_id language;
	Ifc_library_information *referenced_library;

	Ifc_library_reference() {
		entity = "Ifc_library_reference";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_library_reference &o) {
		return os << "Ifc_library_reference(" << o.location << ", " << o.identification << ", " << o.name << ", " << o.description << ", " << o.language << ", " << o.referenced_library << ")";
	}
}

struct Ifc_light_distribution_data : Ifc {
	Ifc_plane_angle_measure main_plane_angle;
	std::vector<Ifc_plane_angle_measure> secondary_plane_angle;
	std::vector<Ifc_luminous_intensity_distribution_measure> luminous_intensity;

	Ifc_light_distribution_data() {
		entity = "Ifc_light_distribution_data";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_light_distribution_data &o) {
		return os << "Ifc_light_distribution_data(" << o.main_plane_angle << ", " << o.secondary_plane_angle << ", " << o.luminous_intensity << ")";
	}
}

struct Ifc_light_intensity_distribution : Ifc {
	Ifc_light_distribution_curve_enum light_distribution_curve;
	std::vector<Ifc_light_distribution_data *> distribution_data;

	Ifc_light_intensity_distribution() {
		entity = "Ifc_light_intensity_distribution";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_light_intensity_distribution &o) {
		return os << "Ifc_light_intensity_distribution(" << o.light_distribution_curve << ", " << o.distribution_data << ")";
	}
}

struct Ifc_map_conversion : IfcCoordinateOperation {
	Ifc_length_measure eastings;
	Ifc_length_measure northings;
	Ifc_length_measure orthogonal_height;
	Ifc_real x_axis_abscissa;
	Ifc_real x_axis_ordinate;
	Ifc_real scale;

	Ifc_map_conversion() {
		entity = "Ifc_map_conversion";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_map_conversion &o) {
		return os << "Ifc_map_conversion(" << o.source_c_r_s << ", " << o.target_c_r_s << ", " << o.eastings << ", " << o.northings << ", " << o.orthogonal_height << ", " << o.x_axis_abscissa << ", " << o.x_axis_ordinate << ", " << o.scale << ")";
	}
}

struct Ifc_material_classification_relationship : Ifc {
	std::vector<Ifc_classification_select *> material_classifications;
	Ifc_material *classified_material;

	Ifc_material_classification_relationship() {
		entity = "Ifc_material_classification_relationship";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_material_classification_relationship &o) {
		return os << "Ifc_material_classification_relationship(" << o.material_classifications << ", " << o.classified_material << ")";
	}
}

struct Ifc_material_definition : Ifc {
	virtual ~Ifc_material_definition() {}
}

struct Ifc_material_layer : IfcMaterialDefinition {
	Ifc_material *material;
	Ifc_non_negative_length_measure layer_thickness;
	Ifc_logical is_ventilated;
	Ifc_label name;
	Ifc_text description;
	Ifc_label category;
	Ifc_integer priority;

	Ifc_material_layer() {
		entity = "Ifc_material_layer";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_material_layer &o) {
		return os << "Ifc_material_layer(" << o.material << ", " << o.layer_thickness << ", " << o.is_ventilated << ", " << o.name << ", " << o.description << ", " << o.category << ", " << o.priority << ")";
	}
}

struct Ifc_material_layer_set : IfcMaterialDefinition {
	std::vector<Ifc_material_layer *> material_layers;
	Ifc_label layer_set_name;
	Ifc_text description;

	Ifc_material_layer_set() {
		entity = "Ifc_material_layer_set";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_material_layer_set &o) {
		return os << "Ifc_material_layer_set(" << o.material_layers << ", " << o.layer_set_name << ", " << o.description << ")";
	}
}

struct Ifc_material_layer_with_offsets : IfcMaterialLayer {
	Ifc_layer_set_direction_enum offset_direction;
	std::vector<Ifc_length_measure> offset_values;

	Ifc_material_layer_with_offsets() {
		entity = "Ifc_material_layer_with_offsets";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_material_layer_with_offsets &o) {
		return os << "Ifc_material_layer_with_offsets(" << o.material << ", " << o.layer_thickness << ", " << o.is_ventilated << ", " << o.name << ", " << o.description << ", " << o.category << ", " << o.priority << ", " << o.offset_direction << ", " << o.offset_values << ")";
	}
}

struct Ifc_material_list : Ifc {
	std::vector<Ifc_material *> materials;

	Ifc_material_list() {
		entity = "Ifc_material_list";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_material_list &o) {
		return os << "Ifc_material_list(" << o.materials << ")";
	}
}

struct Ifc_material_profile : IfcMaterialDefinition {
	Ifc_label name;
	Ifc_text description;
	Ifc_material *material;
	Ifc_profile_def *profile;
	Ifc_integer priority;
	Ifc_label category;

	Ifc_material_profile() {
		entity = "Ifc_material_profile";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_material_profile &o) {
		return os << "Ifc_material_profile(" << o.name << ", " << o.description << ", " << o.material << ", " << o.profile << ", " << o.priority << ", " << o.category << ")";
	}
}

struct Ifc_material_profile_set : IfcMaterialDefinition {
	Ifc_label name;
	Ifc_text description;
	std::vector<Ifc_material_profile *> material_profiles;
	Ifc_composite_profile_def *composite_profile;

	Ifc_material_profile_set() {
		entity = "Ifc_material_profile_set";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_material_profile_set &o) {
		return os << "Ifc_material_profile_set(" << o.name << ", " << o.description << ", " << o.material_profiles << ", " << o.composite_profile << ")";
	}
}

struct Ifc_material_profile_with_offsets : IfcMaterialProfile {
	std::vector<Ifc_length_measure> offset_values;

	Ifc_material_profile_with_offsets() {
		entity = "Ifc_material_profile_with_offsets";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_material_profile_with_offsets &o) {
		return os << "Ifc_material_profile_with_offsets(" << o.name << ", " << o.description << ", " << o.material << ", " << o.profile << ", " << o.priority << ", " << o.category << ", " << o.offset_values << ")";
	}
}

struct Ifc_material_usage_definition : Ifc {
	virtual ~Ifc_material_usage_definition() {}
}

struct Ifc_measure_with_unit : Ifc {
	Ifc_value *value_component;
	Ifc_unit *unit_component;

	Ifc_measure_with_unit() {
		entity = "Ifc_measure_with_unit";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_measure_with_unit &o) {
		return os << "Ifc_measure_with_unit(" << o.value_component << ", " << o.unit_component << ")";
	}
}

struct Ifc_metric : IfcConstraint {
	Ifc_benchmark_enum benchmark;
	Ifc_label value_source;
	Ifc_metric_value_select *data_value;
	Ifc_reference *reference_path;

	Ifc_metric() {
		entity = "Ifc_metric";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_metric &o) {
		return os << "Ifc_metric(" << o.name << ", " << o.description << ", " << o.constraint_grade << ", " << o.constraint_source << ", " << o.creating_actor << ", " << o.creation_time << ", " << o.user_defined_grade << ", " << o.benchmark << ", " << o.value_source << ", " << o.data_value << ", " << o.reference_path << ")";
	}
}

struct Ifc_monetary_unit : Ifc {
	Ifc_label currency;

	Ifc_monetary_unit() {
		entity = "Ifc_monetary_unit";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_monetary_unit &o) {
		return os << "Ifc_monetary_unit(" << o.currency << ")";
	}
}

struct Ifc_named_unit : Ifc {
	Ifc_dimensional_exponents *dimensions;
	Ifc_unit_enum unit_type;

	virtual ~Ifc_named_unit() {}
}

struct Ifc_object_placement : Ifc {
	virtual ~Ifc_object_placement() {}
}

struct Ifc_objective : IfcConstraint {
	std::vector<Ifc_constraint *> benchmark_values;
	Ifc_logical_operator_enum logical_aggregator;
	Ifc_objective_enum objective_qualifier;
	Ifc_label user_defined_qualifier;

	Ifc_objective() {
		entity = "Ifc_objective";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_objective &o) {
		return os << "Ifc_objective(" << o.name << ", " << o.description << ", " << o.constraint_grade << ", " << o.constraint_source << ", " << o.creating_actor << ", " << o.creation_time << ", " << o.user_defined_grade << ", " << o.benchmark_values << ", " << o.logical_aggregator << ", " << o.objective_qualifier << ", " << o.user_defined_qualifier << ")";
	}
}

struct Ifc_organization : Ifc {
	Ifc_identifier identification;
	Ifc_label name;
	Ifc_text description;
	std::vector<Ifc_actor_role *> roles;
	std::vector<Ifc_address *> addresses;

	Ifc_organization() {
		entity = "Ifc_organization";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_organization &o) {
		return os << "Ifc_organization(" << o.identification << ", " << o.name << ", " << o.description << ", " << o.roles << ", " << o.addresses << ")";
	}
}

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
}

struct Ifc_person : Ifc {
	Ifc_identifier identification;
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
		return os << "Ifc_person(" << o.identification << ", " << o.family_name << ", " << o.given_name << ", " << o.middle_names << ", " << o.prefix_titles << ", " << o.suffix_titles << ", " << o.roles << ", " << o.addresses << ")";
	}
}

struct Ifc_person_and_organization : Ifc {
	Ifc_person *the_person;
	Ifc_organization *the_organization;
	std::vector<Ifc_actor_role *> roles;

	Ifc_person_and_organization() {
		entity = "Ifc_person_and_organization";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_person_and_organization &o) {
		return os << "Ifc_person_and_organization(" << o.the_person << ", " << o.the_organization << ", " << o.roles << ")";
	}
}

struct Ifc_physical_quantity : Ifc {
	Ifc_label name;
	Ifc_text description;

	virtual ~Ifc_physical_quantity() {}
}

struct Ifc_physical_simple_quantity : IfcPhysicalQuantity {
	Ifc_named_unit *unit;

	virtual ~Ifc_physical_simple_quantity() {}
}

struct Ifc_postal_address : IfcAddress {
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
		return os << "Ifc_postal_address(" << o.purpose << ", " << o.description << ", " << o.user_defined_purpose << ", " << o.internal_location << ", " << o.address_lines << ", " << o.postal_box << ", " << o.town << ", " << o.region << ", " << o.postal_code << ", " << o.country << ")";
	}
}

struct Ifc_presentation_item : Ifc {
	virtual ~Ifc_presentation_item() {}
}

struct Ifc_presentation_layer_assignment : Ifc {
	Ifc_label name;
	Ifc_text description;
	std::vector<Ifc_layered_item *> assigned_items;
	Ifc_identifier identifier;

	Ifc_presentation_layer_assignment() {
		entity = "Ifc_presentation_layer_assignment";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_presentation_layer_assignment &o) {
		return os << "Ifc_presentation_layer_assignment(" << o.name << ", " << o.description << ", " << o.assigned_items << ", " << o.identifier << ")";
	}
}

struct Ifc_presentation_layer_with_style : IfcPresentationLayerAssignment {
	Ifc_logical layer_on;
	Ifc_logical layer_frozen;
	Ifc_logical layer_blocked;
	std::vector<Ifc_presentation_style *> layer_styles;

	Ifc_presentation_layer_with_style() {
		entity = "Ifc_presentation_layer_with_style";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_presentation_layer_with_style &o) {
		return os << "Ifc_presentation_layer_with_style(" << o.name << ", " << o.description << ", " << o.assigned_items << ", " << o.identifier << ", " << o.layer_on << ", " << o.layer_frozen << ", " << o.layer_blocked << ", " << o.layer_styles << ")";
	}
}

struct Ifc_presentation_style : Ifc {
	Ifc_label name;

	virtual ~Ifc_presentation_style() {}
}

struct Ifc_presentation_style_assignment : Ifc {
	std::vector<Ifc_presentation_style_select *> styles;

	Ifc_presentation_style_assignment() {
		entity = "Ifc_presentation_style_assignment";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_presentation_style_assignment &o) {
		return os << "Ifc_presentation_style_assignment(" << o.styles << ")";
	}
}

struct Ifc_product_representation : Ifc {
	Ifc_label name;
	Ifc_text description;
	std::vector<Ifc_representation *> representations;

	virtual ~Ifc_product_representation() {}
}

struct Ifc_profile_def : Ifc {
	Ifc_profile_type_enum profile_type;
	Ifc_label profile_name;

	Ifc_profile_def() {
		entity = "Ifc_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_profile_def &o) {
		return os << "Ifc_profile_def(" << o.profile_type << ", " << o.profile_name << ")";
	}
}

struct Ifc_projected_c_r_s : IfcCoordinateReferenceSystem {
	Ifc_identifier map_projection;
	Ifc_identifier map_zone;
	Ifc_named_unit *map_unit;

	Ifc_projected_c_r_s() {
		entity = "Ifc_projected_c_r_s";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_projected_c_r_s &o) {
		return os << "Ifc_projected_c_r_s(" << o.name << ", " << o.description << ", " << o.geodetic_datum << ", " << o.vertical_datum << ", " << o.map_projection << ", " << o.map_zone << ", " << o.map_unit << ")";
	}
}

struct Ifc_property_abstraction : Ifc {
	virtual ~Ifc_property_abstraction() {}
}

struct Ifc_property_enumeration : IfcPropertyAbstraction {
	Ifc_label name;
	std::vector<Ifc_value *> enumeration_values;
	Ifc_unit *unit;

	Ifc_property_enumeration() {
		entity = "Ifc_property_enumeration";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_property_enumeration &o) {
		return os << "Ifc_property_enumeration(" << o.name << ", " << o.enumeration_values << ", " << o.unit << ")";
	}
}

struct Ifc_quantity_area : IfcPhysicalSimpleQuantity {
	Ifc_area_measure area_value;
	Ifc_label formula;

	Ifc_quantity_area() {
		entity = "Ifc_quantity_area";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_quantity_area &o) {
		return os << "Ifc_quantity_area(" << o.name << ", " << o.description << ", " << o.unit << ", " << o.area_value << ", " << o.formula << ")";
	}
}

struct Ifc_quantity_count : IfcPhysicalSimpleQuantity {
	Ifc_count_measure count_value;
	Ifc_label formula;

	Ifc_quantity_count() {
		entity = "Ifc_quantity_count";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_quantity_count &o) {
		return os << "Ifc_quantity_count(" << o.name << ", " << o.description << ", " << o.unit << ", " << o.count_value << ", " << o.formula << ")";
	}
}

struct Ifc_quantity_length : IfcPhysicalSimpleQuantity {
	Ifc_length_measure length_value;
	Ifc_label formula;

	Ifc_quantity_length() {
		entity = "Ifc_quantity_length";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_quantity_length &o) {
		return os << "Ifc_quantity_length(" << o.name << ", " << o.description << ", " << o.unit << ", " << o.length_value << ", " << o.formula << ")";
	}
}

struct Ifc_quantity_time : IfcPhysicalSimpleQuantity {
	Ifc_time_measure time_value;
	Ifc_label formula;

	Ifc_quantity_time() {
		entity = "Ifc_quantity_time";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_quantity_time &o) {
		return os << "Ifc_quantity_time(" << o.name << ", " << o.description << ", " << o.unit << ", " << o.time_value << ", " << o.formula << ")";
	}
}

struct Ifc_quantity_volume : IfcPhysicalSimpleQuantity {
	Ifc_volume_measure volume_value;
	Ifc_label formula;

	Ifc_quantity_volume() {
		entity = "Ifc_quantity_volume";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_quantity_volume &o) {
		return os << "Ifc_quantity_volume(" << o.name << ", " << o.description << ", " << o.unit << ", " << o.volume_value << ", " << o.formula << ")";
	}
}

struct Ifc_quantity_weight : IfcPhysicalSimpleQuantity {
	Ifc_mass_measure weight_value;
	Ifc_label formula;

	Ifc_quantity_weight() {
		entity = "Ifc_quantity_weight";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_quantity_weight &o) {
		return os << "Ifc_quantity_weight(" << o.name << ", " << o.description << ", " << o.unit << ", " << o.weight_value << ", " << o.formula << ")";
	}
}

struct Ifc_recurrence_pattern : Ifc {
	Ifc_recurrence_type_enum recurrence_type;
	std::vector<Ifc_day_in_month_number> day_component;
	std::vector<Ifc_day_in_week_number> weekday_component;
	std::vector<Ifc_month_in_year_number> month_component;
	Ifc_integer position;
	Ifc_integer interval;
	Ifc_integer occurrences;
	std::vector<Ifc_time_period *> time_periods;

	Ifc_recurrence_pattern() {
		entity = "Ifc_recurrence_pattern";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_recurrence_pattern &o) {
		return os << "Ifc_recurrence_pattern(" << o.recurrence_type << ", " << o.day_component << ", " << o.weekday_component << ", " << o.month_component << ", " << o.position << ", " << o.interval << ", " << o.occurrences << ", " << o.time_periods << ")";
	}
}

struct Ifc_reference : Ifc {
	Ifc_identifier type_identifier;
	Ifc_identifier attribute_identifier;
	Ifc_label instance_name;
	std::vector<Ifc_integer> list_positions;
	Ifc_reference *inner_reference;

	Ifc_reference() {
		entity = "Ifc_reference";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_reference &o) {
		return os << "Ifc_reference(" << o.type_identifier << ", " << o.attribute_identifier << ", " << o.instance_name << ", " << o.list_positions << ", " << o.inner_reference << ")";
	}
}

struct Ifc_representation : Ifc {
	Ifc_representation_context *context_of_items;
	Ifc_label representation_identifier;
	Ifc_label representation_type;
	std::vector<Ifc_representation_item *> items;

	virtual ~Ifc_representation() {}
}

struct Ifc_representation_context : Ifc {
	Ifc_label context_identifier;
	Ifc_label context_type;

	virtual ~Ifc_representation_context() {}
}

struct Ifc_representation_item : Ifc {
	virtual ~Ifc_representation_item() {}
}

struct Ifc_representation_map : Ifc {
	Ifc_axis_2_placement *mapping_origin;
	Ifc_representation *mapped_representation;

	Ifc_representation_map() {
		entity = "Ifc_representation_map";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_representation_map &o) {
		return os << "Ifc_representation_map(" << o.mapping_origin << ", " << o.mapped_representation << ")";
	}
}

struct Ifc_resource_level_relationship : Ifc {
	Ifc_label name;
	Ifc_text description;

	virtual ~Ifc_resource_level_relationship() {}
}

struct Ifc_root : Ifc {
	Ifc_globally_unique_id global_id;
	Ifc_owner_history *owner_history;
	Ifc_label name;
	Ifc_text description;

	virtual ~Ifc_root() {}
}

struct Ifc_s_i_unit : IfcNamedUnit {
	Ifc_s_i_prefix prefix;
	Ifc_s_i_unit_name name;

	Ifc_s_i_unit() {
		entity = "Ifc_s_i_unit";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_s_i_unit &o) {
		return os << "Ifc_s_i_unit(" << o.dimensions << ", " << o.unit_type << ", " << o.prefix << ", " << o.name << ")";
	}
}

struct Ifc_scheduling_time : Ifc {
	Ifc_label name;
	Ifc_data_origin_enum data_origin;
	Ifc_label user_defined_data_origin;

	virtual ~Ifc_scheduling_time() {}
}

struct Ifc_shape_aspect : Ifc {
	std::vector<Ifc_shape_model *> shape_representations;
	Ifc_label name;
	Ifc_text description;
	Ifc_logical product_definitional;
	Ifc_product_representation_select *part_of_product_definition_shape;

	Ifc_shape_aspect() {
		entity = "Ifc_shape_aspect";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_shape_aspect &o) {
		return os << "Ifc_shape_aspect(" << o.shape_representations << ", " << o.name << ", " << o.description << ", " << o.product_definitional << ", " << o.part_of_product_definition_shape << ")";
	}
}

struct Ifc_shape_model : IfcRepresentation {
	virtual ~Ifc_shape_model() {}
}

struct Ifc_shape_representation : IfcShapeModel {
	Ifc_shape_representation() {
		entity = "Ifc_shape_representation";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_shape_representation &o) {
		return os << "Ifc_shape_representation(" << o.context_of_items << ", " << o.representation_identifier << ", " << o.representation_type << ", " << o.items << ")";
	}
}

struct Ifc_structural_connection_condition : Ifc {
	Ifc_label name;

	virtual ~Ifc_structural_connection_condition() {}
}

struct Ifc_structural_load : Ifc {
	Ifc_label name;

	virtual ~Ifc_structural_load() {}
}

struct Ifc_structural_load_configuration : IfcStructuralLoad {
	std::vector<Ifc_structural_load_or_result *> values;
	std::vector<std::vector<Ifc_length_measure>> locations;

	Ifc_structural_load_configuration() {
		entity = "Ifc_structural_load_configuration";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_load_configuration &o) {
		return os << "Ifc_structural_load_configuration(" << o.name << ", " << o.values << ", " << o.locations << ")";
	}
}

struct Ifc_structural_load_or_result : IfcStructuralLoad {
	virtual ~Ifc_structural_load_or_result() {}
}

struct Ifc_structural_load_static : IfcStructuralLoadOrResult {
	virtual ~Ifc_structural_load_static() {}
}

struct Ifc_structural_load_temperature : IfcStructuralLoadStatic {
	Ifc_thermodynamic_temperature_measure delta_t_constant;
	Ifc_thermodynamic_temperature_measure delta_t_y;
	Ifc_thermodynamic_temperature_measure delta_t_z;

	Ifc_structural_load_temperature() {
		entity = "Ifc_structural_load_temperature";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_load_temperature &o) {
		return os << "Ifc_structural_load_temperature(" << o.name << ", " << o.delta_t_constant << ", " << o.delta_t_y << ", " << o.delta_t_z << ")";
	}
}

struct Ifc_style_model : IfcRepresentation {
	virtual ~Ifc_style_model() {}
}

struct Ifc_styled_item : IfcRepresentationItem {
	Ifc_representation_item *item;
	std::vector<Ifc_style_assignment_select *> styles;
	Ifc_label name;

	Ifc_styled_item() {
		entity = "Ifc_styled_item";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_styled_item &o) {
		return os << "Ifc_styled_item(" << o.item << ", " << o.styles << ", " << o.name << ")";
	}
}

struct Ifc_styled_representation : IfcStyleModel {
	Ifc_styled_representation() {
		entity = "Ifc_styled_representation";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_styled_representation &o) {
		return os << "Ifc_styled_representation(" << o.context_of_items << ", " << o.representation_identifier << ", " << o.representation_type << ", " << o.items << ")";
	}
}

struct Ifc_surface_reinforcement_area : IfcStructuralLoadOrResult {
	std::vector<Ifc_length_measure> surface_reinforcement_1;
	std::vector<Ifc_length_measure> surface_reinforcement_2;
	Ifc_ratio_measure shear_reinforcement;

	Ifc_surface_reinforcement_area() {
		entity = "Ifc_surface_reinforcement_area";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_reinforcement_area &o) {
		return os << "Ifc_surface_reinforcement_area(" << o.name << ", " << o.surface_reinforcement_1 << ", " << o.surface_reinforcement_2 << ", " << o.shear_reinforcement << ")";
	}
}

struct Ifc_surface_style : IfcPresentationStyle {
	Ifc_surface_side side;
	std::vector<Ifc_surface_style_element_select *> styles;

	Ifc_surface_style() {
		entity = "Ifc_surface_style";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_style &o) {
		return os << "Ifc_surface_style(" << o.name << ", " << o.side << ", " << o.styles << ")";
	}
}

struct Ifc_surface_style_lighting : IfcPresentationItem {
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
}

struct Ifc_surface_style_refraction : IfcPresentationItem {
	Ifc_real refraction_index;
	Ifc_real dispersion_factor;

	Ifc_surface_style_refraction() {
		entity = "Ifc_surface_style_refraction";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_style_refraction &o) {
		return os << "Ifc_surface_style_refraction(" << o.refraction_index << ", " << o.dispersion_factor << ")";
	}
}

struct Ifc_surface_style_shading : IfcPresentationItem {
	Ifc_colour_rgb *surface_colour;
	Ifc_normalised_ratio_measure transparency;

	Ifc_surface_style_shading() {
		entity = "Ifc_surface_style_shading";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_style_shading &o) {
		return os << "Ifc_surface_style_shading(" << o.surface_colour << ", " << o.transparency << ")";
	}
}

struct Ifc_surface_style_with_textures : IfcPresentationItem {
	std::vector<Ifc_surface_texture *> textures;

	Ifc_surface_style_with_textures() {
		entity = "Ifc_surface_style_with_textures";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_style_with_textures &o) {
		return os << "Ifc_surface_style_with_textures(" << o.textures << ")";
	}
}

struct Ifc_surface_texture : IfcPresentationItem {
	Ifc_boolean repeat_s;
	Ifc_boolean repeat_t;
	Ifc_identifier mode;
	Ifc_cartesian_transformation_operator_2_d *texture_transform;
	std::vector<Ifc_identifier> parameter;

	virtual ~Ifc_surface_texture() {}
}

struct Ifc_table : Ifc {
	Ifc_label name;
	std::vector<Ifc_table_row *> rows;
	std::vector<Ifc_table_column *> columns;

	Ifc_table() {
		entity = "Ifc_table";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_table &o) {
		return os << "Ifc_table(" << o.name << ", " << o.rows << ", " << o.columns << ")";
	}
}

struct Ifc_table_column : Ifc {
	Ifc_identifier identifier;
	Ifc_label name;
	Ifc_text description;
	Ifc_unit *unit;
	Ifc_reference *reference_path;

	Ifc_table_column() {
		entity = "Ifc_table_column";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_table_column &o) {
		return os << "Ifc_table_column(" << o.identifier << ", " << o.name << ", " << o.description << ", " << o.unit << ", " << o.reference_path << ")";
	}
}

struct Ifc_table_row : Ifc {
	std::vector<Ifc_value *> row_cells;
	Ifc_boolean is_heading;

	Ifc_table_row() {
		entity = "Ifc_table_row";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_table_row &o) {
		return os << "Ifc_table_row(" << o.row_cells << ", " << o.is_heading << ")";
	}
}

struct Ifc_task_time : IfcSchedulingTime {
	Ifc_task_duration_enum duration_type;
	Ifc_duration schedule_duration;
	Ifc_date_time schedule_start;
	Ifc_date_time schedule_finish;
	Ifc_date_time early_start;
	Ifc_date_time early_finish;
	Ifc_date_time late_start;
	Ifc_date_time late_finish;
	Ifc_duration free_float;
	Ifc_duration total_float;
	Ifc_boolean is_critical;
	Ifc_date_time status_time;
	Ifc_duration actual_duration;
	Ifc_date_time actual_start;
	Ifc_date_time actual_finish;
	Ifc_duration remaining_time;
	Ifc_positive_ratio_measure completion;

	Ifc_task_time() {
		entity = "Ifc_task_time";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_task_time &o) {
		return os << "Ifc_task_time(" << o.name << ", " << o.data_origin << ", " << o.user_defined_data_origin << ", " << o.duration_type << ", " << o.schedule_duration << ", " << o.schedule_start << ", " << o.schedule_finish << ", " << o.early_start << ", " << o.early_finish << ", " << o.late_start << ", " << o.late_finish << ", " << o.free_float << ", " << o.total_float << ", " << o.is_critical << ", " << o.status_time << ", " << o.actual_duration << ", " << o.actual_start << ", " << o.actual_finish << ", " << o.remaining_time << ", " << o.completion << ")";
	}
}

struct Ifc_task_time_recurring : IfcTaskTime {
	Ifc_recurrence_pattern *recurrence;

	Ifc_task_time_recurring() {
		entity = "Ifc_task_time_recurring";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_task_time_recurring &o) {
		return os << "Ifc_task_time_recurring(" << o.name << ", " << o.data_origin << ", " << o.user_defined_data_origin << ", " << o.duration_type << ", " << o.schedule_duration << ", " << o.schedule_start << ", " << o.schedule_finish << ", " << o.early_start << ", " << o.early_finish << ", " << o.late_start << ", " << o.late_finish << ", " << o.free_float << ", " << o.total_float << ", " << o.is_critical << ", " << o.status_time << ", " << o.actual_duration << ", " << o.actual_start << ", " << o.actual_finish << ", " << o.remaining_time << ", " << o.completion << ", " << o.recurrence << ")";
	}
}

struct Ifc_telecom_address : IfcAddress {
	std::vector<Ifc_label> telephone_numbers;
	std::vector<Ifc_label> facsimile_numbers;
	Ifc_label pager_number;
	std::vector<Ifc_label> electronic_mail_addresses;
	Ifc_u_r_i_reference w_w_w_home_page_u_r_l;
	std::vector<Ifc_u_r_i_reference> messaging_i_ds;

	Ifc_telecom_address() {
		entity = "Ifc_telecom_address";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_telecom_address &o) {
		return os << "Ifc_telecom_address(" << o.purpose << ", " << o.description << ", " << o.user_defined_purpose << ", " << o.telephone_numbers << ", " << o.facsimile_numbers << ", " << o.pager_number << ", " << o.electronic_mail_addresses << ", " << o.w_w_w_home_page_u_r_l << ", " << o.messaging_i_ds << ")";
	}
}

struct Ifc_text_style : IfcPresentationStyle {
	Ifc_text_style_for_defined_font *text_character_appearance;
	Ifc_text_style_text_model *text_style;
	Ifc_text_font_select *text_font_style;
	Ifc_boolean model_or_draughting;

	Ifc_text_style() {
		entity = "Ifc_text_style";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_text_style &o) {
		return os << "Ifc_text_style(" << o.name << ", " << o.text_character_appearance << ", " << o.text_style << ", " << o.text_font_style << ", " << o.model_or_draughting << ")";
	}
}

struct Ifc_text_style_for_defined_font : IfcPresentationItem {
	Ifc_colour *colour;
	Ifc_colour *background_colour;

	Ifc_text_style_for_defined_font() {
		entity = "Ifc_text_style_for_defined_font";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_text_style_for_defined_font &o) {
		return os << "Ifc_text_style_for_defined_font(" << o.colour << ", " << o.background_colour << ")";
	}
}

struct Ifc_text_style_text_model : IfcPresentationItem {
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
}

struct Ifc_texture_coordinate : IfcPresentationItem {
	std::vector<Ifc_surface_texture *> maps;

	virtual ~Ifc_texture_coordinate() {}
}

struct Ifc_texture_coordinate_generator : IfcTextureCoordinate {
	Ifc_label mode;
	std::vector<Ifc_real> parameter;

	Ifc_texture_coordinate_generator() {
		entity = "Ifc_texture_coordinate_generator";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_texture_coordinate_generator &o) {
		return os << "Ifc_texture_coordinate_generator(" << o.maps << ", " << o.mode << ", " << o.parameter << ")";
	}
}

struct Ifc_texture_map : IfcTextureCoordinate {
	std::vector<Ifc_texture_vertex *> vertices;
	Ifc_face *mapped_to;

	Ifc_texture_map() {
		entity = "Ifc_texture_map";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_texture_map &o) {
		return os << "Ifc_texture_map(" << o.maps << ", " << o.vertices << ", " << o.mapped_to << ")";
	}
}

struct Ifc_texture_vertex : IfcPresentationItem {
	std::vector<Ifc_parameter_value> coordinates;

	Ifc_texture_vertex() {
		entity = "Ifc_texture_vertex";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_texture_vertex &o) {
		return os << "Ifc_texture_vertex(" << o.coordinates << ")";
	}
}

struct Ifc_texture_vertex_list : IfcPresentationItem {
	std::vector<std::vector<Ifc_parameter_value>> tex_coords_list;

	Ifc_texture_vertex_list() {
		entity = "Ifc_texture_vertex_list";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_texture_vertex_list &o) {
		return os << "Ifc_texture_vertex_list(" << o.tex_coords_list << ")";
	}
}

struct Ifc_time_period : Ifc {
	Ifc_time start_time;
	Ifc_time end_time;

	Ifc_time_period() {
		entity = "Ifc_time_period";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_time_period &o) {
		return os << "Ifc_time_period(" << o.start_time << ", " << o.end_time << ")";
	}
}

struct Ifc_time_series : Ifc {
	Ifc_label name;
	Ifc_text description;
	Ifc_date_time start_time;
	Ifc_date_time end_time;
	Ifc_time_series_data_type_enum time_series_data_type;
	Ifc_data_origin_enum data_origin;
	Ifc_label user_defined_data_origin;
	Ifc_unit *unit;

	virtual ~Ifc_time_series() {}
}

struct Ifc_time_series_value : Ifc {
	std::vector<Ifc_value *> list_values;

	Ifc_time_series_value() {
		entity = "Ifc_time_series_value";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_time_series_value &o) {
		return os << "Ifc_time_series_value(" << o.list_values << ")";
	}
}

struct Ifc_topological_representation_item : IfcRepresentationItem {
	virtual ~Ifc_topological_representation_item() {}
}

struct Ifc_topology_representation : IfcShapeModel {
	Ifc_topology_representation() {
		entity = "Ifc_topology_representation";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_topology_representation &o) {
		return os << "Ifc_topology_representation(" << o.context_of_items << ", " << o.representation_identifier << ", " << o.representation_type << ", " << o.items << ")";
	}
}

struct Ifc_unit_assignment : Ifc {
	std::vector<Ifc_unit *> units;

	Ifc_unit_assignment() {
		entity = "Ifc_unit_assignment";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_unit_assignment &o) {
		return os << "Ifc_unit_assignment(" << o.units << ")";
	}
}

struct Ifc_vertex : IfcTopologicalRepresentationItem {
	Ifc_vertex() {
		entity = "Ifc_vertex";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_vertex &o) {
		return os << "Ifc_vertex(" << ")";
	}
}

struct Ifc_vertex_point : IfcVertex {
	Ifc_point *vertex_geometry;

	Ifc_vertex_point() {
		entity = "Ifc_vertex_point";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_vertex_point &o) {
		return os << "Ifc_vertex_point(" << o.vertex_geometry << ")";
	}
}

struct Ifc_virtual_grid_intersection : Ifc {
	std::vector<Ifc_grid_axis *> intersecting_axes;
	std::vector<Ifc_length_measure> offset_distances;

	Ifc_virtual_grid_intersection() {
		entity = "Ifc_virtual_grid_intersection";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_virtual_grid_intersection &o) {
		return os << "Ifc_virtual_grid_intersection(" << o.intersecting_axes << ", " << o.offset_distances << ")";
	}
}

struct Ifc_work_time : IfcSchedulingTime {
	Ifc_recurrence_pattern *recurrence_pattern;
	Ifc_date start;
	Ifc_date finish;

	Ifc_work_time() {
		entity = "Ifc_work_time";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_work_time &o) {
		return os << "Ifc_work_time(" << o.name << ", " << o.data_origin << ", " << o.user_defined_data_origin << ", " << o.recurrence_pattern << ", " << o.start << ", " << o.finish << ")";
	}
}

struct Ifc_approval_relationship : IfcResourceLevelRelationship {
	Ifc_approval *relating_approval;
	std::vector<Ifc_approval *> related_approvals;

	Ifc_approval_relationship() {
		entity = "Ifc_approval_relationship";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_approval_relationship &o) {
		return os << "Ifc_approval_relationship(" << o.name << ", " << o.description << ", " << o.relating_approval << ", " << o.related_approvals << ")";
	}
}

struct Ifc_arbitrary_closed_profile_def : IfcProfileDef {
	Ifc_curve *outer_curve;

	Ifc_arbitrary_closed_profile_def() {
		entity = "Ifc_arbitrary_closed_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_arbitrary_closed_profile_def &o) {
		return os << "Ifc_arbitrary_closed_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.outer_curve << ")";
	}
}

struct Ifc_arbitrary_open_profile_def : IfcProfileDef {
	Ifc_bounded_curve *curve;

	Ifc_arbitrary_open_profile_def() {
		entity = "Ifc_arbitrary_open_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_arbitrary_open_profile_def &o) {
		return os << "Ifc_arbitrary_open_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.curve << ")";
	}
}

struct Ifc_arbitrary_profile_def_with_voids : IfcArbitraryClosedProfileDef {
	std::vector<Ifc_curve *> inner_curves;

	Ifc_arbitrary_profile_def_with_voids() {
		entity = "Ifc_arbitrary_profile_def_with_voids";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_arbitrary_profile_def_with_voids &o) {
		return os << "Ifc_arbitrary_profile_def_with_voids(" << o.profile_type << ", " << o.profile_name << ", " << o.outer_curve << ", " << o.inner_curves << ")";
	}
}

struct Ifc_blob_texture : IfcSurfaceTexture {
	Ifc_identifier raster_format;
	Ifc_binary raster_code;

	Ifc_blob_texture() {
		entity = "Ifc_blob_texture";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_blob_texture &o) {
		return os << "Ifc_blob_texture(" << o.repeat_s << ", " << o.repeat_t << ", " << o.mode << ", " << o.texture_transform << ", " << o.parameter << ", " << o.raster_format << ", " << o.raster_code << ")";
	}
}

struct Ifc_center_line_profile_def : IfcArbitraryOpenProfileDef {
	Ifc_positive_length_measure thickness;

	Ifc_center_line_profile_def() {
		entity = "Ifc_center_line_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_center_line_profile_def &o) {
		return os << "Ifc_center_line_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.curve << ", " << o.thickness << ")";
	}
}

struct Ifc_classification : IfcExternalInformation {
	Ifc_label source;
	Ifc_label edition;
	Ifc_date edition_date;
	Ifc_label name;
	Ifc_text description;
	Ifc_u_r_i_reference location;
	std::vector<Ifc_identifier> reference_tokens;

	Ifc_classification() {
		entity = "Ifc_classification";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_classification &o) {
		return os << "Ifc_classification(" << o.source << ", " << o.edition << ", " << o.edition_date << ", " << o.name << ", " << o.description << ", " << o.location << ", " << o.reference_tokens << ")";
	}
}

struct Ifc_classification_reference : IfcExternalReference {
	Ifc_classification_reference_select *referenced_source;
	Ifc_text description;
	Ifc_identifier sort;

	Ifc_classification_reference() {
		entity = "Ifc_classification_reference";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_classification_reference &o) {
		return os << "Ifc_classification_reference(" << o.location << ", " << o.identification << ", " << o.name << ", " << o.referenced_source << ", " << o.description << ", " << o.sort << ")";
	}
}

struct Ifc_colour_rgb_list : IfcPresentationItem {
	std::vector<std::vector<Ifc_normalised_ratio_measure>> colour_list;

	Ifc_colour_rgb_list() {
		entity = "Ifc_colour_rgb_list";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_colour_rgb_list &o) {
		return os << "Ifc_colour_rgb_list(" << o.colour_list << ")";
	}
}

struct Ifc_colour_specification : IfcPresentationItem {
	Ifc_label name;

	virtual ~Ifc_colour_specification() {}
}

struct Ifc_composite_profile_def : IfcProfileDef {
	std::vector<Ifc_profile_def *> profiles;
	Ifc_label label;

	Ifc_composite_profile_def() {
		entity = "Ifc_composite_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_composite_profile_def &o) {
		return os << "Ifc_composite_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.profiles << ", " << o.label << ")";
	}
}

struct Ifc_connected_face_set : IfcTopologicalRepresentationItem {
	std::vector<Ifc_face *> cfs_faces;

	Ifc_connected_face_set() {
		entity = "Ifc_connected_face_set";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_connected_face_set &o) {
		return os << "Ifc_connected_face_set(" << o.cfs_faces << ")";
	}
}

struct Ifc_connection_curve_geometry : IfcConnectionGeometry {
	Ifc_curve_or_edge_curve *curve_on_relating_element;
	Ifc_curve_or_edge_curve *curve_on_related_element;

	Ifc_connection_curve_geometry() {
		entity = "Ifc_connection_curve_geometry";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_connection_curve_geometry &o) {
		return os << "Ifc_connection_curve_geometry(" << o.curve_on_relating_element << ", " << o.curve_on_related_element << ")";
	}
}

struct Ifc_connection_point_eccentricity : IfcConnectionPointGeometry {
	Ifc_length_measure eccentricity_in_x;
	Ifc_length_measure eccentricity_in_y;
	Ifc_length_measure eccentricity_in_z;

	Ifc_connection_point_eccentricity() {
		entity = "Ifc_connection_point_eccentricity";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_connection_point_eccentricity &o) {
		return os << "Ifc_connection_point_eccentricity(" << o.point_on_relating_element << ", " << o.point_on_related_element << ", " << o.eccentricity_in_x << ", " << o.eccentricity_in_y << ", " << o.eccentricity_in_z << ")";
	}
}

struct Ifc_context_dependent_unit : IfcNamedUnit {
	Ifc_label name;

	Ifc_context_dependent_unit() {
		entity = "Ifc_context_dependent_unit";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_context_dependent_unit &o) {
		return os << "Ifc_context_dependent_unit(" << o.dimensions << ", " << o.unit_type << ", " << o.name << ")";
	}
}

struct Ifc_conversion_based_unit : IfcNamedUnit {
	Ifc_label name;
	Ifc_measure_with_unit *conversion_factor;

	Ifc_conversion_based_unit() {
		entity = "Ifc_conversion_based_unit";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_conversion_based_unit &o) {
		return os << "Ifc_conversion_based_unit(" << o.dimensions << ", " << o.unit_type << ", " << o.name << ", " << o.conversion_factor << ")";
	}
}

struct Ifc_conversion_based_unit_with_offset : IfcConversionBasedUnit {
	Ifc_real conversion_offset;

	Ifc_conversion_based_unit_with_offset() {
		entity = "Ifc_conversion_based_unit_with_offset";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_conversion_based_unit_with_offset &o) {
		return os << "Ifc_conversion_based_unit_with_offset(" << o.dimensions << ", " << o.unit_type << ", " << o.name << ", " << o.conversion_factor << ", " << o.conversion_offset << ")";
	}
}

struct Ifc_currency_relationship : IfcResourceLevelRelationship {
	Ifc_monetary_unit *relating_monetary_unit;
	Ifc_monetary_unit *related_monetary_unit;
	Ifc_positive_ratio_measure exchange_rate;
	Ifc_date_time rate_date_time;
	Ifc_library_information *rate_source;

	Ifc_currency_relationship() {
		entity = "Ifc_currency_relationship";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_currency_relationship &o) {
		return os << "Ifc_currency_relationship(" << o.name << ", " << o.description << ", " << o.relating_monetary_unit << ", " << o.related_monetary_unit << ", " << o.exchange_rate << ", " << o.rate_date_time << ", " << o.rate_source << ")";
	}
}

struct Ifc_curve_style : IfcPresentationStyle {
	Ifc_curve_font_or_scaled_curve_font_select *curve_font;
	Ifc_size_select *curve_width;
	Ifc_colour *curve_colour;
	Ifc_boolean model_or_draughting;

	Ifc_curve_style() {
		entity = "Ifc_curve_style";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_curve_style &o) {
		return os << "Ifc_curve_style(" << o.name << ", " << o.curve_font << ", " << o.curve_width << ", " << o.curve_colour << ", " << o.model_or_draughting << ")";
	}
}

struct Ifc_curve_style_font : IfcPresentationItem {
	Ifc_label name;
	std::vector<Ifc_curve_style_font_pattern *> pattern_list;

	Ifc_curve_style_font() {
		entity = "Ifc_curve_style_font";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_curve_style_font &o) {
		return os << "Ifc_curve_style_font(" << o.name << ", " << o.pattern_list << ")";
	}
}

struct Ifc_curve_style_font_and_scaling : IfcPresentationItem {
	Ifc_label name;
	Ifc_curve_style_font_select *curve_font;
	Ifc_positive_ratio_measure curve_font_scaling;

	Ifc_curve_style_font_and_scaling() {
		entity = "Ifc_curve_style_font_and_scaling";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_curve_style_font_and_scaling &o) {
		return os << "Ifc_curve_style_font_and_scaling(" << o.name << ", " << o.curve_font << ", " << o.curve_font_scaling << ")";
	}
}

struct Ifc_curve_style_font_pattern : IfcPresentationItem {
	Ifc_length_measure visible_segment_length;
	Ifc_positive_length_measure invisible_segment_length;

	Ifc_curve_style_font_pattern() {
		entity = "Ifc_curve_style_font_pattern";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_curve_style_font_pattern &o) {
		return os << "Ifc_curve_style_font_pattern(" << o.visible_segment_length << ", " << o.invisible_segment_length << ")";
	}
}

struct Ifc_derived_profile_def : IfcProfileDef {
	Ifc_profile_def *parent_profile;
	Ifc_cartesian_transformation_operator_2_d *operator;
	Ifc_label label;

	Ifc_derived_profile_def() {
		entity = "Ifc_derived_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_derived_profile_def &o) {
		return os << "Ifc_derived_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.parent_profile << ", " << o.operator << ", " << o.label << ")";
	}
}

struct Ifc_document_information : IfcExternalInformation {
	Ifc_identifier identification;
	Ifc_label name;
	Ifc_text description;
	Ifc_u_r_i_reference location;
	Ifc_text purpose;
	Ifc_text intended_use;
	Ifc_text scope;
	Ifc_label revision;
	Ifc_actor_select *document_owner;
	std::vector<Ifc_actor_select *> editors;
	Ifc_date_time creation_time;
	Ifc_date_time last_revision_time;
	Ifc_identifier electronic_format;
	Ifc_date valid_from;
	Ifc_date valid_until;
	Ifc_document_confidentiality_enum confidentiality;
	Ifc_document_status_enum status;

	Ifc_document_information() {
		entity = "Ifc_document_information";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_document_information &o) {
		return os << "Ifc_document_information(" << o.identification << ", " << o.name << ", " << o.description << ", " << o.location << ", " << o.purpose << ", " << o.intended_use << ", " << o.scope << ", " << o.revision << ", " << o.document_owner << ", " << o.editors << ", " << o.creation_time << ", " << o.last_revision_time << ", " << o.electronic_format << ", " << o.valid_from << ", " << o.valid_until << ", " << o.confidentiality << ", " << o.status << ")";
	}
}

struct Ifc_document_information_relationship : IfcResourceLevelRelationship {
	Ifc_document_information *relating_document;
	std::vector<Ifc_document_information *> related_documents;
	Ifc_label relationship_type;

	Ifc_document_information_relationship() {
		entity = "Ifc_document_information_relationship";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_document_information_relationship &o) {
		return os << "Ifc_document_information_relationship(" << o.name << ", " << o.description << ", " << o.relating_document << ", " << o.related_documents << ", " << o.relationship_type << ")";
	}
}

struct Ifc_document_reference : IfcExternalReference {
	Ifc_text description;
	Ifc_document_information *referenced_document;

	Ifc_document_reference() {
		entity = "Ifc_document_reference";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_document_reference &o) {
		return os << "Ifc_document_reference(" << o.location << ", " << o.identification << ", " << o.name << ", " << o.description << ", " << o.referenced_document << ")";
	}
}

struct Ifc_edge : IfcTopologicalRepresentationItem {
	Ifc_vertex *edge_start;
	Ifc_vertex *edge_end;

	Ifc_edge() {
		entity = "Ifc_edge";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_edge &o) {
		return os << "Ifc_edge(" << o.edge_start << ", " << o.edge_end << ")";
	}
}

struct Ifc_edge_curve : IfcEdge {
	Ifc_curve *edge_geometry;
	Ifc_boolean same_sense;

	Ifc_edge_curve() {
		entity = "Ifc_edge_curve";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_edge_curve &o) {
		return os << "Ifc_edge_curve(" << o.edge_start << ", " << o.edge_end << ", " << o.edge_geometry << ", " << o.same_sense << ")";
	}
}

struct Ifc_event_time : IfcSchedulingTime {
	Ifc_date_time actual_date;
	Ifc_date_time early_date;
	Ifc_date_time late_date;
	Ifc_date_time schedule_date;

	Ifc_event_time() {
		entity = "Ifc_event_time";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_event_time &o) {
		return os << "Ifc_event_time(" << o.name << ", " << o.data_origin << ", " << o.user_defined_data_origin << ", " << o.actual_date << ", " << o.early_date << ", " << o.late_date << ", " << o.schedule_date << ")";
	}
}

struct Ifc_extended_properties : IfcPropertyAbstraction {
	Ifc_identifier name;
	Ifc_text description;
	std::vector<Ifc_property *> properties;

	virtual ~Ifc_extended_properties() {}
}

struct Ifc_external_reference_relationship : IfcResourceLevelRelationship {
	Ifc_external_reference *relating_reference;
	std::vector<Ifc_resource_object_select *> related_resource_objects;

	Ifc_external_reference_relationship() {
		entity = "Ifc_external_reference_relationship";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_external_reference_relationship &o) {
		return os << "Ifc_external_reference_relationship(" << o.name << ", " << o.description << ", " << o.relating_reference << ", " << o.related_resource_objects << ")";
	}
}

struct Ifc_face : IfcTopologicalRepresentationItem {
	std::vector<Ifc_face_bound *> bounds;

	Ifc_face() {
		entity = "Ifc_face";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_face &o) {
		return os << "Ifc_face(" << o.bounds << ")";
	}
}

struct Ifc_face_bound : IfcTopologicalRepresentationItem {
	Ifc_loop *bound;
	Ifc_boolean orientation;

	Ifc_face_bound() {
		entity = "Ifc_face_bound";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_face_bound &o) {
		return os << "Ifc_face_bound(" << o.bound << ", " << o.orientation << ")";
	}
}

struct Ifc_face_outer_bound : IfcFaceBound {
	Ifc_face_outer_bound() {
		entity = "Ifc_face_outer_bound";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_face_outer_bound &o) {
		return os << "Ifc_face_outer_bound(" << o.bound << ", " << o.orientation << ")";
	}
}

struct Ifc_face_surface : IfcFace {
	Ifc_surface *face_surface;
	Ifc_boolean same_sense;

	Ifc_face_surface() {
		entity = "Ifc_face_surface";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_face_surface &o) {
		return os << "Ifc_face_surface(" << o.bounds << ", " << o.face_surface << ", " << o.same_sense << ")";
	}
}

struct Ifc_failure_connection_condition : IfcStructuralConnectionCondition {
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
}

struct Ifc_fill_area_style : IfcPresentationStyle {
	std::vector<Ifc_fill_style_select *> fill_styles;
	Ifc_boolean modelor_draughting;

	Ifc_fill_area_style() {
		entity = "Ifc_fill_area_style";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_fill_area_style &o) {
		return os << "Ifc_fill_area_style(" << o.name << ", " << o.fill_styles << ", " << o.modelor_draughting << ")";
	}
}

struct Ifc_geometric_representation_context : IfcRepresentationContext {
	Ifc_dimension_count coordinate_space_dimension;
	Ifc_real precision;
	Ifc_axis_2_placement *world_coordinate_system;
	Ifc_direction *true_north;

	Ifc_geometric_representation_context() {
		entity = "Ifc_geometric_representation_context";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_geometric_representation_context &o) {
		return os << "Ifc_geometric_representation_context(" << o.context_identifier << ", " << o.context_type << ", " << o.coordinate_space_dimension << ", " << o.precision << ", " << o.world_coordinate_system << ", " << o.true_north << ")";
	}
}

struct Ifc_geometric_representation_item : IfcRepresentationItem {
	virtual ~Ifc_geometric_representation_item() {}
}

struct Ifc_geometric_representation_sub_context : IfcGeometricRepresentationContext {
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
}

struct Ifc_geometric_set : IfcGeometricRepresentationItem {
	std::vector<Ifc_geometric_set_select *> elements;

	Ifc_geometric_set() {
		entity = "Ifc_geometric_set";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_geometric_set &o) {
		return os << "Ifc_geometric_set(" << o.elements << ")";
	}
}

struct Ifc_grid_placement : IfcObjectPlacement {
	Ifc_virtual_grid_intersection *placement_location;
	Ifc_grid_placement_direction_select *placement_ref_direction;

	Ifc_grid_placement() {
		entity = "Ifc_grid_placement";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_grid_placement &o) {
		return os << "Ifc_grid_placement(" << o.placement_location << ", " << o.placement_ref_direction << ")";
	}
}

struct Ifc_half_space_solid : IfcGeometricRepresentationItem {
	Ifc_surface *base_surface;
	Ifc_boolean agreement_flag;

	Ifc_half_space_solid() {
		entity = "Ifc_half_space_solid";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_half_space_solid &o) {
		return os << "Ifc_half_space_solid(" << o.base_surface << ", " << o.agreement_flag << ")";
	}
}

struct Ifc_image_texture : IfcSurfaceTexture {
	Ifc_u_r_i_reference u_r_l_reference;

	Ifc_image_texture() {
		entity = "Ifc_image_texture";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_image_texture &o) {
		return os << "Ifc_image_texture(" << o.repeat_s << ", " << o.repeat_t << ", " << o.mode << ", " << o.texture_transform << ", " << o.parameter << ", " << o.u_r_l_reference << ")";
	}
}

struct Ifc_indexed_colour_map : IfcPresentationItem {
	Ifc_tessellated_face_set *mapped_to;
	Ifc_normalised_ratio_measure opacity;
	Ifc_colour_rgb_list *colours;
	std::vector<Ifc_positive_integer> colour_index;

	Ifc_indexed_colour_map() {
		entity = "Ifc_indexed_colour_map";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_indexed_colour_map &o) {
		return os << "Ifc_indexed_colour_map(" << o.mapped_to << ", " << o.opacity << ", " << o.colours << ", " << o.colour_index << ")";
	}
}

struct Ifc_indexed_texture_map : IfcTextureCoordinate {
	Ifc_tessellated_face_set *mapped_to;
	Ifc_texture_vertex_list *tex_coords;

	virtual ~Ifc_indexed_texture_map() {}
}

struct Ifc_indexed_triangle_texture_map : IfcIndexedTextureMap {
	std::vector<std::vector<Ifc_positive_integer>> tex_coord_index;

	Ifc_indexed_triangle_texture_map() {
		entity = "Ifc_indexed_triangle_texture_map";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_indexed_triangle_texture_map &o) {
		return os << "Ifc_indexed_triangle_texture_map(" << o.maps << ", " << o.mapped_to << ", " << o.tex_coords << ", " << o.tex_coord_index << ")";
	}
}

struct Ifc_irregular_time_series : IfcTimeSeries {
	std::vector<Ifc_irregular_time_series_value *> values;

	Ifc_irregular_time_series() {
		entity = "Ifc_irregular_time_series";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_irregular_time_series &o) {
		return os << "Ifc_irregular_time_series(" << o.name << ", " << o.description << ", " << o.start_time << ", " << o.end_time << ", " << o.time_series_data_type << ", " << o.data_origin << ", " << o.user_defined_data_origin << ", " << o.unit << ", " << o.values << ")";
	}
}

struct Ifc_lag_time : IfcSchedulingTime {
	Ifc_time_or_ratio_select *lag_value;
	Ifc_task_duration_enum duration_type;

	Ifc_lag_time() {
		entity = "Ifc_lag_time";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_lag_time &o) {
		return os << "Ifc_lag_time(" << o.name << ", " << o.data_origin << ", " << o.user_defined_data_origin << ", " << o.lag_value << ", " << o.duration_type << ")";
	}
}

struct Ifc_light_source : IfcGeometricRepresentationItem {
	Ifc_label name;
	Ifc_colour_rgb *light_colour;
	Ifc_normalised_ratio_measure ambient_intensity;
	Ifc_normalised_ratio_measure intensity;

	virtual ~Ifc_light_source() {}
}

struct Ifc_light_source_ambient : IfcLightSource {
	Ifc_light_source_ambient() {
		entity = "Ifc_light_source_ambient";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_light_source_ambient &o) {
		return os << "Ifc_light_source_ambient(" << o.name << ", " << o.light_colour << ", " << o.ambient_intensity << ", " << o.intensity << ")";
	}
}

struct Ifc_light_source_directional : IfcLightSource {
	Ifc_direction *orientation;

	Ifc_light_source_directional() {
		entity = "Ifc_light_source_directional";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_light_source_directional &o) {
		return os << "Ifc_light_source_directional(" << o.name << ", " << o.light_colour << ", " << o.ambient_intensity << ", " << o.intensity << ", " << o.orientation << ")";
	}
}

struct Ifc_light_source_goniometric : IfcLightSource {
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
}

struct Ifc_light_source_positional : IfcLightSource {
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
}

struct Ifc_light_source_spot : IfcLightSourcePositional {
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
}

struct Ifc_local_placement : IfcObjectPlacement {
	Ifc_object_placement *placement_rel_to;
	Ifc_axis_2_placement *relative_placement;

	Ifc_local_placement() {
		entity = "Ifc_local_placement";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_local_placement &o) {
		return os << "Ifc_local_placement(" << o.placement_rel_to << ", " << o.relative_placement << ")";
	}
}

struct Ifc_loop : IfcTopologicalRepresentationItem {
	Ifc_loop() {
		entity = "Ifc_loop";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_loop &o) {
		return os << "Ifc_loop(" << ")";
	}
}

struct Ifc_mapped_item : IfcRepresentationItem {
	Ifc_representation_map *mapping_source;
	Ifc_cartesian_transformation_operator *mapping_target;

	Ifc_mapped_item() {
		entity = "Ifc_mapped_item";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_mapped_item &o) {
		return os << "Ifc_mapped_item(" << o.mapping_source << ", " << o.mapping_target << ")";
	}
}

struct Ifc_material : IfcMaterialDefinition {
	Ifc_label name;
	Ifc_text description;
	Ifc_label category;

	Ifc_material() {
		entity = "Ifc_material";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_material &o) {
		return os << "Ifc_material(" << o.name << ", " << o.description << ", " << o.category << ")";
	}
}

struct Ifc_material_constituent : IfcMaterialDefinition {
	Ifc_label name;
	Ifc_text description;
	Ifc_material *material;
	Ifc_normalised_ratio_measure fraction;
	Ifc_label category;

	Ifc_material_constituent() {
		entity = "Ifc_material_constituent";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_material_constituent &o) {
		return os << "Ifc_material_constituent(" << o.name << ", " << o.description << ", " << o.material << ", " << o.fraction << ", " << o.category << ")";
	}
}

struct Ifc_material_constituent_set : IfcMaterialDefinition {
	Ifc_label name;
	Ifc_text description;
	std::vector<Ifc_material_constituent *> material_constituents;

	Ifc_material_constituent_set() {
		entity = "Ifc_material_constituent_set";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_material_constituent_set &o) {
		return os << "Ifc_material_constituent_set(" << o.name << ", " << o.description << ", " << o.material_constituents << ")";
	}
}

struct Ifc_material_definition_representation : IfcProductRepresentation {
	Ifc_material *represented_material;

	Ifc_material_definition_representation() {
		entity = "Ifc_material_definition_representation";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_material_definition_representation &o) {
		return os << "Ifc_material_definition_representation(" << o.name << ", " << o.description << ", " << o.representations << ", " << o.represented_material << ")";
	}
}

struct Ifc_material_layer_set_usage : IfcMaterialUsageDefinition {
	Ifc_material_layer_set *for_layer_set;
	Ifc_layer_set_direction_enum layer_set_direction;
	Ifc_direction_sense_enum direction_sense;
	Ifc_length_measure offset_from_reference_line;
	Ifc_positive_length_measure reference_extent;

	Ifc_material_layer_set_usage() {
		entity = "Ifc_material_layer_set_usage";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_material_layer_set_usage &o) {
		return os << "Ifc_material_layer_set_usage(" << o.for_layer_set << ", " << o.layer_set_direction << ", " << o.direction_sense << ", " << o.offset_from_reference_line << ", " << o.reference_extent << ")";
	}
}

struct Ifc_material_profile_set_usage : IfcMaterialUsageDefinition {
	Ifc_material_profile_set *for_profile_set;
	Ifc_cardinal_point_reference cardinal_point;
	Ifc_positive_length_measure reference_extent;

	Ifc_material_profile_set_usage() {
		entity = "Ifc_material_profile_set_usage";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_material_profile_set_usage &o) {
		return os << "Ifc_material_profile_set_usage(" << o.for_profile_set << ", " << o.cardinal_point << ", " << o.reference_extent << ")";
	}
}

struct Ifc_material_profile_set_usage_tapering : IfcMaterialProfileSetUsage {
	Ifc_material_profile_set *for_profile_end_set;
	Ifc_cardinal_point_reference cardinal_end_point;

	Ifc_material_profile_set_usage_tapering() {
		entity = "Ifc_material_profile_set_usage_tapering";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_material_profile_set_usage_tapering &o) {
		return os << "Ifc_material_profile_set_usage_tapering(" << o.for_profile_set << ", " << o.cardinal_point << ", " << o.reference_extent << ", " << o.for_profile_end_set << ", " << o.cardinal_end_point << ")";
	}
}

struct Ifc_material_properties : IfcExtendedProperties {
	Ifc_material_definition *material;

	Ifc_material_properties() {
		entity = "Ifc_material_properties";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_material_properties &o) {
		return os << "Ifc_material_properties(" << o.name << ", " << o.description << ", " << o.properties << ", " << o.material << ")";
	}
}

struct Ifc_material_relationship : IfcResourceLevelRelationship {
	Ifc_material *relating_material;
	std::vector<Ifc_material *> related_materials;
	Ifc_label expression;

	Ifc_material_relationship() {
		entity = "Ifc_material_relationship";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_material_relationship &o) {
		return os << "Ifc_material_relationship(" << o.name << ", " << o.description << ", " << o.relating_material << ", " << o.related_materials << ", " << o.expression << ")";
	}
}

struct Ifc_mirrored_profile_def : IfcDerivedProfileDef {
	Ifc_mirrored_profile_def() {
		entity = "Ifc_mirrored_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_mirrored_profile_def &o) {
		return os << "Ifc_mirrored_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.parent_profile << ", " << o.operator << ", " << o.label << ")";
	}
}

struct Ifc_object_definition : IfcRoot {
	virtual ~Ifc_object_definition() {}
}

struct Ifc_open_shell : IfcConnectedFaceSet {
	Ifc_open_shell() {
		entity = "Ifc_open_shell";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_open_shell &o) {
		return os << "Ifc_open_shell(" << o.cfs_faces << ")";
	}
}

struct Ifc_organization_relationship : IfcResourceLevelRelationship {
	Ifc_organization *relating_organization;
	std::vector<Ifc_organization *> related_organizations;

	Ifc_organization_relationship() {
		entity = "Ifc_organization_relationship";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_organization_relationship &o) {
		return os << "Ifc_organization_relationship(" << o.name << ", " << o.description << ", " << o.relating_organization << ", " << o.related_organizations << ")";
	}
}

struct Ifc_oriented_edge : IfcEdge {
	Ifc_edge *edge_element;
	Ifc_boolean orientation;

	Ifc_oriented_edge() {
		entity = "Ifc_oriented_edge";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_oriented_edge &o) {
		return os << "Ifc_oriented_edge(" << o.edge_start << ", " << o.edge_end << ", " << o.edge_element << ", " << o.orientation << ")";
	}
}

struct Ifc_parameterized_profile_def : IfcProfileDef {
	Ifc_axis_2_placement_2_d *position;

	virtual ~Ifc_parameterized_profile_def() {}
}

struct Ifc_path : IfcTopologicalRepresentationItem {
	std::vector<Ifc_oriented_edge *> edge_list;

	Ifc_path() {
		entity = "Ifc_path";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_path &o) {
		return os << "Ifc_path(" << o.edge_list << ")";
	}
}

struct Ifc_physical_complex_quantity : IfcPhysicalQuantity {
	std::vector<Ifc_physical_quantity *> has_quantities;
	Ifc_label discrimination;
	Ifc_label quality;
	Ifc_label usage;

	Ifc_physical_complex_quantity() {
		entity = "Ifc_physical_complex_quantity";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_physical_complex_quantity &o) {
		return os << "Ifc_physical_complex_quantity(" << o.name << ", " << o.description << ", " << o.has_quantities << ", " << o.discrimination << ", " << o.quality << ", " << o.usage << ")";
	}
}

struct Ifc_pixel_texture : IfcSurfaceTexture {
	Ifc_integer width;
	Ifc_integer height;
	Ifc_integer colour_components;
	std::vector<Ifc_binary> pixel;

	Ifc_pixel_texture() {
		entity = "Ifc_pixel_texture";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_pixel_texture &o) {
		return os << "Ifc_pixel_texture(" << o.repeat_s << ", " << o.repeat_t << ", " << o.mode << ", " << o.texture_transform << ", " << o.parameter << ", " << o.width << ", " << o.height << ", " << o.colour_components << ", " << o.pixel << ")";
	}
}

struct Ifc_placement : IfcGeometricRepresentationItem {
	Ifc_cartesian_point *location;

	virtual ~Ifc_placement() {}
}

struct Ifc_planar_extent : IfcGeometricRepresentationItem {
	Ifc_length_measure size_in_x;
	Ifc_length_measure size_in_y;

	Ifc_planar_extent() {
		entity = "Ifc_planar_extent";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_planar_extent &o) {
		return os << "Ifc_planar_extent(" << o.size_in_x << ", " << o.size_in_y << ")";
	}
}

struct Ifc_point : IfcGeometricRepresentationItem {
	virtual ~Ifc_point() {}
}

struct Ifc_point_on_curve : IfcPoint {
	Ifc_curve *basis_curve;
	Ifc_parameter_value point_parameter;

	Ifc_point_on_curve() {
		entity = "Ifc_point_on_curve";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_point_on_curve &o) {
		return os << "Ifc_point_on_curve(" << o.basis_curve << ", " << o.point_parameter << ")";
	}
}

struct Ifc_point_on_surface : IfcPoint {
	Ifc_surface *basis_surface;
	Ifc_parameter_value point_parameter_u;
	Ifc_parameter_value point_parameter_v;

	Ifc_point_on_surface() {
		entity = "Ifc_point_on_surface";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_point_on_surface &o) {
		return os << "Ifc_point_on_surface(" << o.basis_surface << ", " << o.point_parameter_u << ", " << o.point_parameter_v << ")";
	}
}

struct Ifc_poly_loop : IfcLoop {
	std::vector<Ifc_cartesian_point *> polygon;

	Ifc_poly_loop() {
		entity = "Ifc_poly_loop";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_poly_loop &o) {
		return os << "Ifc_poly_loop(" << o.polygon << ")";
	}
}

struct Ifc_polygonal_bounded_half_space : IfcHalfSpaceSolid {
	Ifc_axis_2_placement_3_d *position;
	Ifc_bounded_curve *polygonal_boundary;

	Ifc_polygonal_bounded_half_space() {
		entity = "Ifc_polygonal_bounded_half_space";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_polygonal_bounded_half_space &o) {
		return os << "Ifc_polygonal_bounded_half_space(" << o.base_surface << ", " << o.agreement_flag << ", " << o.position << ", " << o.polygonal_boundary << ")";
	}
}

struct Ifc_pre_defined_item : IfcPresentationItem {
	Ifc_label name;

	virtual ~Ifc_pre_defined_item() {}
}

struct Ifc_pre_defined_properties : IfcPropertyAbstraction {
	virtual ~Ifc_pre_defined_properties() {}
}

struct Ifc_pre_defined_text_font : IfcPreDefinedItem {
	virtual ~Ifc_pre_defined_text_font() {}
}

struct Ifc_product_definition_shape : IfcProductRepresentation {
	Ifc_product_definition_shape() {
		entity = "Ifc_product_definition_shape";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_product_definition_shape &o) {
		return os << "Ifc_product_definition_shape(" << o.name << ", " << o.description << ", " << o.representations << ")";
	}
}

struct Ifc_profile_properties : IfcExtendedProperties {
	Ifc_profile_def *profile_definition;

	Ifc_profile_properties() {
		entity = "Ifc_profile_properties";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_profile_properties &o) {
		return os << "Ifc_profile_properties(" << o.name << ", " << o.description << ", " << o.properties << ", " << o.profile_definition << ")";
	}
}

struct Ifc_property : IfcPropertyAbstraction {
	Ifc_identifier name;
	Ifc_text description;

	virtual ~Ifc_property() {}
}

struct Ifc_property_definition : IfcRoot {
	virtual ~Ifc_property_definition() {}
}

struct Ifc_property_dependency_relationship : IfcResourceLevelRelationship {
	Ifc_property *depending_property;
	Ifc_property *dependant_property;
	Ifc_text expression;

	Ifc_property_dependency_relationship() {
		entity = "Ifc_property_dependency_relationship";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_property_dependency_relationship &o) {
		return os << "Ifc_property_dependency_relationship(" << o.name << ", " << o.description << ", " << o.depending_property << ", " << o.dependant_property << ", " << o.expression << ")";
	}
}

struct Ifc_property_set_definition : IfcPropertyDefinition {
	virtual ~Ifc_property_set_definition() {}
}

struct Ifc_property_template_definition : IfcPropertyDefinition {
	virtual ~Ifc_property_template_definition() {}
}

struct Ifc_quantity_set : IfcPropertySetDefinition {
	virtual ~Ifc_quantity_set() {}
}

struct Ifc_rectangle_profile_def : IfcParameterizedProfileDef {
	Ifc_positive_length_measure x_dim;
	Ifc_positive_length_measure y_dim;

	Ifc_rectangle_profile_def() {
		entity = "Ifc_rectangle_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rectangle_profile_def &o) {
		return os << "Ifc_rectangle_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.x_dim << ", " << o.y_dim << ")";
	}
}

struct Ifc_regular_time_series : IfcTimeSeries {
	Ifc_time_measure time_step;
	std::vector<Ifc_time_series_value *> values;

	Ifc_regular_time_series() {
		entity = "Ifc_regular_time_series";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_regular_time_series &o) {
		return os << "Ifc_regular_time_series(" << o.name << ", " << o.description << ", " << o.start_time << ", " << o.end_time << ", " << o.time_series_data_type << ", " << o.data_origin << ", " << o.user_defined_data_origin << ", " << o.unit << ", " << o.time_step << ", " << o.values << ")";
	}
}

struct Ifc_reinforcement_bar_properties : IfcPreDefinedProperties {
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
}

struct Ifc_relationship : IfcRoot {
	virtual ~Ifc_relationship() {}
}

struct Ifc_resource_approval_relationship : IfcResourceLevelRelationship {
	std::vector<Ifc_resource_object_select *> related_resource_objects;
	Ifc_approval *relating_approval;

	Ifc_resource_approval_relationship() {
		entity = "Ifc_resource_approval_relationship";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_resource_approval_relationship &o) {
		return os << "Ifc_resource_approval_relationship(" << o.name << ", " << o.description << ", " << o.related_resource_objects << ", " << o.relating_approval << ")";
	}
}

struct Ifc_resource_constraint_relationship : IfcResourceLevelRelationship {
	Ifc_constraint *relating_constraint;
	std::vector<Ifc_resource_object_select *> related_resource_objects;

	Ifc_resource_constraint_relationship() {
		entity = "Ifc_resource_constraint_relationship";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_resource_constraint_relationship &o) {
		return os << "Ifc_resource_constraint_relationship(" << o.name << ", " << o.description << ", " << o.relating_constraint << ", " << o.related_resource_objects << ")";
	}
}

struct Ifc_resource_time : IfcSchedulingTime {
	Ifc_duration schedule_work;
	Ifc_positive_ratio_measure schedule_usage;
	Ifc_date_time schedule_start;
	Ifc_date_time schedule_finish;
	Ifc_label schedule_contour;
	Ifc_duration leveling_delay;
	Ifc_boolean is_over_allocated;
	Ifc_date_time status_time;
	Ifc_duration actual_work;
	Ifc_positive_ratio_measure actual_usage;
	Ifc_date_time actual_start;
	Ifc_date_time actual_finish;
	Ifc_duration remaining_work;
	Ifc_positive_ratio_measure remaining_usage;
	Ifc_positive_ratio_measure completion;

	Ifc_resource_time() {
		entity = "Ifc_resource_time";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_resource_time &o) {
		return os << "Ifc_resource_time(" << o.name << ", " << o.data_origin << ", " << o.user_defined_data_origin << ", " << o.schedule_work << ", " << o.schedule_usage << ", " << o.schedule_start << ", " << o.schedule_finish << ", " << o.schedule_contour << ", " << o.leveling_delay << ", " << o.is_over_allocated << ", " << o.status_time << ", " << o.actual_work << ", " << o.actual_usage << ", " << o.actual_start << ", " << o.actual_finish << ", " << o.remaining_work << ", " << o.remaining_usage << ", " << o.completion << ")";
	}
}

struct Ifc_rounded_rectangle_profile_def : IfcRectangleProfileDef {
	Ifc_positive_length_measure rounding_radius;

	Ifc_rounded_rectangle_profile_def() {
		entity = "Ifc_rounded_rectangle_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rounded_rectangle_profile_def &o) {
		return os << "Ifc_rounded_rectangle_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.x_dim << ", " << o.y_dim << ", " << o.rounding_radius << ")";
	}
}

struct Ifc_section_properties : IfcPreDefinedProperties {
	Ifc_section_type_enum section_type;
	Ifc_profile_def *start_profile;
	Ifc_profile_def *end_profile;

	Ifc_section_properties() {
		entity = "Ifc_section_properties";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_section_properties &o) {
		return os << "Ifc_section_properties(" << o.section_type << ", " << o.start_profile << ", " << o.end_profile << ")";
	}
}

struct Ifc_section_reinforcement_properties : IfcPreDefinedProperties {
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
		return os << "Ifc_section_reinforcement_properties(" << o.longitudinal_start_position << ", " << o.longitudinal_end_position << ", " << o.transverse_position << ", " << o.reinforcement_role << ", " << o.section_definition << ", " << o.cross_section_reinforcement_definitions << ")";
	}
}

struct Ifc_sectioned_spine : IfcGeometricRepresentationItem {
	Ifc_composite_curve *spine_curve;
	std::vector<Ifc_profile_def *> cross_sections;
	std::vector<Ifc_axis_2_placement_3_d *> cross_section_positions;

	Ifc_sectioned_spine() {
		entity = "Ifc_sectioned_spine";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_sectioned_spine &o) {
		return os << "Ifc_sectioned_spine(" << o.spine_curve << ", " << o.cross_sections << ", " << o.cross_section_positions << ")";
	}
}

struct Ifc_shell_based_surface_model : IfcGeometricRepresentationItem {
	std::vector<Ifc_shell *> sbsm_boundary;

	Ifc_shell_based_surface_model() {
		entity = "Ifc_shell_based_surface_model";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_shell_based_surface_model &o) {
		return os << "Ifc_shell_based_surface_model(" << o.sbsm_boundary << ")";
	}
}

struct Ifc_simple_property : IfcProperty {
	virtual ~Ifc_simple_property() {}
}

struct Ifc_slippage_connection_condition : IfcStructuralConnectionCondition {
	Ifc_length_measure slippage_x;
	Ifc_length_measure slippage_y;
	Ifc_length_measure slippage_z;

	Ifc_slippage_connection_condition() {
		entity = "Ifc_slippage_connection_condition";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_slippage_connection_condition &o) {
		return os << "Ifc_slippage_connection_condition(" << o.name << ", " << o.slippage_x << ", " << o.slippage_y << ", " << o.slippage_z << ")";
	}
}

struct Ifc_solid_model : IfcGeometricRepresentationItem {
	virtual ~Ifc_solid_model() {}
}

struct Ifc_structural_load_linear_force : IfcStructuralLoadStatic {
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
}

struct Ifc_structural_load_planar_force : IfcStructuralLoadStatic {
	Ifc_planar_force_measure planar_force_x;
	Ifc_planar_force_measure planar_force_y;
	Ifc_planar_force_measure planar_force_z;

	Ifc_structural_load_planar_force() {
		entity = "Ifc_structural_load_planar_force";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_load_planar_force &o) {
		return os << "Ifc_structural_load_planar_force(" << o.name << ", " << o.planar_force_x << ", " << o.planar_force_y << ", " << o.planar_force_z << ")";
	}
}

struct Ifc_structural_load_single_displacement : IfcStructuralLoadStatic {
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
}

struct Ifc_structural_load_single_displacement_distortion : IfcStructuralLoadSingleDisplacement {
	Ifc_curvature_measure distortion;

	Ifc_structural_load_single_displacement_distortion() {
		entity = "Ifc_structural_load_single_displacement_distortion";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_load_single_displacement_distortion &o) {
		return os << "Ifc_structural_load_single_displacement_distortion(" << o.name << ", " << o.displacement_x << ", " << o.displacement_y << ", " << o.displacement_z << ", " << o.rotational_displacement_r_x << ", " << o.rotational_displacement_r_y << ", " << o.rotational_displacement_r_z << ", " << o.distortion << ")";
	}
}

struct Ifc_structural_load_single_force : IfcStructuralLoadStatic {
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
}

struct Ifc_structural_load_single_force_warping : IfcStructuralLoadSingleForce {
	Ifc_warping_moment_measure warping_moment;

	Ifc_structural_load_single_force_warping() {
		entity = "Ifc_structural_load_single_force_warping";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_load_single_force_warping &o) {
		return os << "Ifc_structural_load_single_force_warping(" << o.name << ", " << o.force_x << ", " << o.force_y << ", " << o.force_z << ", " << o.moment_x << ", " << o.moment_y << ", " << o.moment_z << ", " << o.warping_moment << ")";
	}
}

struct Ifc_subedge : IfcEdge {
	Ifc_edge *parent_edge;

	Ifc_subedge() {
		entity = "Ifc_subedge";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_subedge &o) {
		return os << "Ifc_subedge(" << o.edge_start << ", " << o.edge_end << ", " << o.parent_edge << ")";
	}
}

struct Ifc_surface : IfcGeometricRepresentationItem {
	virtual ~Ifc_surface() {}
}

struct Ifc_surface_style_rendering : IfcSurfaceStyleShading {
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
}

struct Ifc_swept_area_solid : IfcSolidModel {
	Ifc_profile_def *swept_area;
	Ifc_axis_2_placement_3_d *position;

	virtual ~Ifc_swept_area_solid() {}
}

struct Ifc_swept_disk_solid : IfcSolidModel {
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
}

struct Ifc_swept_disk_solid_polygonal : IfcSweptDiskSolid {
	Ifc_positive_length_measure fillet_radius;

	Ifc_swept_disk_solid_polygonal() {
		entity = "Ifc_swept_disk_solid_polygonal";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_swept_disk_solid_polygonal &o) {
		return os << "Ifc_swept_disk_solid_polygonal(" << o.directrix << ", " << o.radius << ", " << o.inner_radius << ", " << o.start_param << ", " << o.end_param << ", " << o.fillet_radius << ")";
	}
}

struct Ifc_swept_surface : IfcSurface {
	Ifc_profile_def *swept_curve;
	Ifc_axis_2_placement_3_d *position;

	virtual ~Ifc_swept_surface() {}
}

struct Ifc_t_shape_profile_def : IfcParameterizedProfileDef {
	Ifc_positive_length_measure depth;
	Ifc_positive_length_measure flange_width;
	Ifc_positive_length_measure web_thickness;
	Ifc_positive_length_measure flange_thickness;
	Ifc_non_negative_length_measure fillet_radius;
	Ifc_non_negative_length_measure flange_edge_radius;
	Ifc_non_negative_length_measure web_edge_radius;
	Ifc_plane_angle_measure web_slope;
	Ifc_plane_angle_measure flange_slope;

	Ifc_t_shape_profile_def() {
		entity = "Ifc_t_shape_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_t_shape_profile_def &o) {
		return os << "Ifc_t_shape_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.depth << ", " << o.flange_width << ", " << o.web_thickness << ", " << o.flange_thickness << ", " << o.fillet_radius << ", " << o.flange_edge_radius << ", " << o.web_edge_radius << ", " << o.web_slope << ", " << o.flange_slope << ")";
	}
}

struct Ifc_tessellated_item : IfcGeometricRepresentationItem {
	virtual ~Ifc_tessellated_item() {}
}

struct Ifc_text_literal : IfcGeometricRepresentationItem {
	Ifc_presentable_text literal;
	Ifc_axis_2_placement *placement;
	Ifc_text_path path;

	Ifc_text_literal() {
		entity = "Ifc_text_literal";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_text_literal &o) {
		return os << "Ifc_text_literal(" << o.literal << ", " << o.placement << ", " << o.path << ")";
	}
}

struct Ifc_text_literal_with_extent : IfcTextLiteral {
	Ifc_planar_extent *extent;
	Ifc_box_alignment box_alignment;

	Ifc_text_literal_with_extent() {
		entity = "Ifc_text_literal_with_extent";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_text_literal_with_extent &o) {
		return os << "Ifc_text_literal_with_extent(" << o.literal << ", " << o.placement << ", " << o.path << ", " << o.extent << ", " << o.box_alignment << ")";
	}
}

struct Ifc_text_style_font_model : IfcPreDefinedTextFont {
	std::vector<Ifc_text_font_name> font_family;
	Ifc_font_style font_style;
	Ifc_font_variant font_variant;
	Ifc_font_weight font_weight;
	Ifc_size_select *font_size;

	Ifc_text_style_font_model() {
		entity = "Ifc_text_style_font_model";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_text_style_font_model &o) {
		return os << "Ifc_text_style_font_model(" << o.name << ", " << o.font_family << ", " << o.font_style << ", " << o.font_variant << ", " << o.font_weight << ", " << o.font_size << ")";
	}
}

struct Ifc_trapezium_profile_def : IfcParameterizedProfileDef {
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
}

struct Ifc_type_object : IfcObjectDefinition {
	Ifc_identifier applicable_occurrence;
	std::vector<Ifc_property_set_definition *> has_property_sets;

	Ifc_type_object() {
		entity = "Ifc_type_object";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_type_object &o) {
		return os << "Ifc_type_object(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ")";
	}
}

struct Ifc_type_process : IfcTypeObject {
	Ifc_identifier identification;
	Ifc_text long_description;
	Ifc_label process_type;

	virtual ~Ifc_type_process() {}
}

struct Ifc_type_product : IfcTypeObject {
	std::vector<Ifc_representation_map *> representation_maps;
	Ifc_label tag;

	Ifc_type_product() {
		entity = "Ifc_type_product";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_type_product &o) {
		return os << "Ifc_type_product(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ")";
	}
}

struct Ifc_type_resource : IfcTypeObject {
	Ifc_identifier identification;
	Ifc_text long_description;
	Ifc_label resource_type;

	virtual ~Ifc_type_resource() {}
}

struct Ifc_u_shape_profile_def : IfcParameterizedProfileDef {
	Ifc_positive_length_measure depth;
	Ifc_positive_length_measure flange_width;
	Ifc_positive_length_measure web_thickness;
	Ifc_positive_length_measure flange_thickness;
	Ifc_non_negative_length_measure fillet_radius;
	Ifc_non_negative_length_measure edge_radius;
	Ifc_plane_angle_measure flange_slope;

	Ifc_u_shape_profile_def() {
		entity = "Ifc_u_shape_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_u_shape_profile_def &o) {
		return os << "Ifc_u_shape_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.depth << ", " << o.flange_width << ", " << o.web_thickness << ", " << o.flange_thickness << ", " << o.fillet_radius << ", " << o.edge_radius << ", " << o.flange_slope << ")";
	}
}

struct Ifc_vector : IfcGeometricRepresentationItem {
	Ifc_direction *orientation;
	Ifc_length_measure magnitude;

	Ifc_vector() {
		entity = "Ifc_vector";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_vector &o) {
		return os << "Ifc_vector(" << o.orientation << ", " << o.magnitude << ")";
	}
}

struct Ifc_vertex_loop : IfcLoop {
	Ifc_vertex *loop_vertex;

	Ifc_vertex_loop() {
		entity = "Ifc_vertex_loop";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_vertex_loop &o) {
		return os << "Ifc_vertex_loop(" << o.loop_vertex << ")";
	}
}

struct Ifc_window_style : IfcTypeProduct {
	Ifc_window_style_construction_enum construction_type;
	Ifc_window_style_operation_enum operation_type;
	Ifc_boolean parameter_takes_precedence;
	Ifc_boolean sizeable;

	Ifc_window_style() {
		entity = "Ifc_window_style";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_window_style &o) {
		return os << "Ifc_window_style(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.construction_type << ", " << o.operation_type << ", " << o.parameter_takes_precedence << ", " << o.sizeable << ")";
	}
}

struct Ifc_z_shape_profile_def : IfcParameterizedProfileDef {
	Ifc_positive_length_measure depth;
	Ifc_positive_length_measure flange_width;
	Ifc_positive_length_measure web_thickness;
	Ifc_positive_length_measure flange_thickness;
	Ifc_non_negative_length_measure fillet_radius;
	Ifc_non_negative_length_measure edge_radius;

	Ifc_z_shape_profile_def() {
		entity = "Ifc_z_shape_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_z_shape_profile_def &o) {
		return os << "Ifc_z_shape_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.depth << ", " << o.flange_width << ", " << o.web_thickness << ", " << o.flange_thickness << ", " << o.fillet_radius << ", " << o.edge_radius << ")";
	}
}

struct Ifc_advanced_face : IfcFaceSurface {
	Ifc_advanced_face() {
		entity = "Ifc_advanced_face";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_advanced_face &o) {
		return os << "Ifc_advanced_face(" << o.bounds << ", " << o.face_surface << ", " << o.same_sense << ")";
	}
}

struct Ifc_annotation_fill_area : IfcGeometricRepresentationItem {
	Ifc_curve *outer_boundary;
	std::vector<Ifc_curve *> inner_boundaries;

	Ifc_annotation_fill_area() {
		entity = "Ifc_annotation_fill_area";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_annotation_fill_area &o) {
		return os << "Ifc_annotation_fill_area(" << o.outer_boundary << ", " << o.inner_boundaries << ")";
	}
}

struct Ifc_asymmetric_i_shape_profile_def : IfcParameterizedProfileDef {
	Ifc_positive_length_measure bottom_flange_width;
	Ifc_positive_length_measure overall_depth;
	Ifc_positive_length_measure web_thickness;
	Ifc_positive_length_measure bottom_flange_thickness;
	Ifc_non_negative_length_measure bottom_flange_fillet_radius;
	Ifc_positive_length_measure top_flange_width;
	Ifc_positive_length_measure top_flange_thickness;
	Ifc_non_negative_length_measure top_flange_fillet_radius;
	Ifc_non_negative_length_measure bottom_flange_edge_radius;
	Ifc_plane_angle_measure bottom_flange_slope;
	Ifc_non_negative_length_measure top_flange_edge_radius;
	Ifc_plane_angle_measure top_flange_slope;

	Ifc_asymmetric_i_shape_profile_def() {
		entity = "Ifc_asymmetric_i_shape_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_asymmetric_i_shape_profile_def &o) {
		return os << "Ifc_asymmetric_i_shape_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.bottom_flange_width << ", " << o.overall_depth << ", " << o.web_thickness << ", " << o.bottom_flange_thickness << ", " << o.bottom_flange_fillet_radius << ", " << o.top_flange_width << ", " << o.top_flange_thickness << ", " << o.top_flange_fillet_radius << ", " << o.bottom_flange_edge_radius << ", " << o.bottom_flange_slope << ", " << o.top_flange_edge_radius << ", " << o.top_flange_slope << ")";
	}
}

struct Ifc_axis_1_placement : IfcPlacement {
	Ifc_direction *axis;

	Ifc_axis_1_placement() {
		entity = "Ifc_axis_1_placement";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_axis_1_placement &o) {
		return os << "Ifc_axis_1_placement(" << o.location << ", " << o.axis << ")";
	}
}

struct Ifc_axis_2_placement_2_d : IfcPlacement {
	Ifc_direction *ref_direction;

	Ifc_axis_2_placement_2_d() {
		entity = "Ifc_axis_2_placement_2_d";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_axis_2_placement_2_d &o) {
		return os << "Ifc_axis_2_placement_2_d(" << o.location << ", " << o.ref_direction << ")";
	}
}

struct Ifc_axis_2_placement_3_d : IfcPlacement {
	Ifc_direction *axis;
	Ifc_direction *ref_direction;

	Ifc_axis_2_placement_3_d() {
		entity = "Ifc_axis_2_placement_3_d";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_axis_2_placement_3_d &o) {
		return os << "Ifc_axis_2_placement_3_d(" << o.location << ", " << o.axis << ", " << o.ref_direction << ")";
	}
}

struct Ifc_boolean_result : IfcGeometricRepresentationItem {
	Ifc_boolean_operator operator;
	Ifc_boolean_operand *first_operand;
	Ifc_boolean_operand *second_operand;

	Ifc_boolean_result() {
		entity = "Ifc_boolean_result";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_boolean_result &o) {
		return os << "Ifc_boolean_result(" << o.operator << ", " << o.first_operand << ", " << o.second_operand << ")";
	}
}

struct Ifc_bounded_surface : IfcSurface {
	virtual ~Ifc_bounded_surface() {}
}

struct Ifc_bounding_box : IfcGeometricRepresentationItem {
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
}

struct Ifc_boxed_half_space : IfcHalfSpaceSolid {
	Ifc_bounding_box *enclosure;

	Ifc_boxed_half_space() {
		entity = "Ifc_boxed_half_space";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_boxed_half_space &o) {
		return os << "Ifc_boxed_half_space(" << o.base_surface << ", " << o.agreement_flag << ", " << o.enclosure << ")";
	}
}

struct Ifc_c_shape_profile_def : IfcParameterizedProfileDef {
	Ifc_positive_length_measure depth;
	Ifc_positive_length_measure width;
	Ifc_positive_length_measure wall_thickness;
	Ifc_positive_length_measure girth;
	Ifc_non_negative_length_measure internal_fillet_radius;

	Ifc_c_shape_profile_def() {
		entity = "Ifc_c_shape_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_c_shape_profile_def &o) {
		return os << "Ifc_c_shape_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.depth << ", " << o.width << ", " << o.wall_thickness << ", " << o.girth << ", " << o.internal_fillet_radius << ")";
	}
}

struct Ifc_cartesian_point : IfcPoint {
	std::vector<Ifc_length_measure> coordinates;

	Ifc_cartesian_point() {
		entity = "Ifc_cartesian_point";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cartesian_point &o) {
		return os << "Ifc_cartesian_point(" << o.coordinates << ")";
	}
}

struct Ifc_cartesian_point_list : IfcGeometricRepresentationItem {
	virtual ~Ifc_cartesian_point_list() {}
}

struct Ifc_cartesian_point_list_2_d : IfcCartesianPointList {
	std::vector<std::vector<Ifc_length_measure>> coord_list;

	Ifc_cartesian_point_list_2_d() {
		entity = "Ifc_cartesian_point_list_2_d";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cartesian_point_list_2_d &o) {
		return os << "Ifc_cartesian_point_list_2_d(" << o.coord_list << ")";
	}
}

struct Ifc_cartesian_point_list_3_d : IfcCartesianPointList {
	std::vector<std::vector<Ifc_length_measure>> coord_list;

	Ifc_cartesian_point_list_3_d() {
		entity = "Ifc_cartesian_point_list_3_d";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cartesian_point_list_3_d &o) {
		return os << "Ifc_cartesian_point_list_3_d(" << o.coord_list << ")";
	}
}

struct Ifc_cartesian_transformation_operator : IfcGeometricRepresentationItem {
	Ifc_direction *axis_1;
	Ifc_direction *axis_2;
	Ifc_cartesian_point *local_origin;
	Ifc_real scale;

	virtual ~Ifc_cartesian_transformation_operator() {}
}

struct Ifc_cartesian_transformation_operator_2_d : IfcCartesianTransformationOperator {
	Ifc_cartesian_transformation_operator_2_d() {
		entity = "Ifc_cartesian_transformation_operator_2_d";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cartesian_transformation_operator_2_d &o) {
		return os << "Ifc_cartesian_transformation_operator_2_d(" << o.axis_1 << ", " << o.axis_2 << ", " << o.local_origin << ", " << o.scale << ")";
	}
}

struct Ifc_cartesian_transformation_operator_2_dnon_uniform : IfcCartesianTransformationOperator2D {
	Ifc_real scale_2;

	Ifc_cartesian_transformation_operator_2_dnon_uniform() {
		entity = "Ifc_cartesian_transformation_operator_2_dnon_uniform";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cartesian_transformation_operator_2_dnon_uniform &o) {
		return os << "Ifc_cartesian_transformation_operator_2_dnon_uniform(" << o.axis_1 << ", " << o.axis_2 << ", " << o.local_origin << ", " << o.scale << ", " << o.scale_2 << ")";
	}
}

struct Ifc_cartesian_transformation_operator_3_d : IfcCartesianTransformationOperator {
	Ifc_direction *axis_3;

	Ifc_cartesian_transformation_operator_3_d() {
		entity = "Ifc_cartesian_transformation_operator_3_d";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cartesian_transformation_operator_3_d &o) {
		return os << "Ifc_cartesian_transformation_operator_3_d(" << o.axis_1 << ", " << o.axis_2 << ", " << o.local_origin << ", " << o.scale << ", " << o.axis_3 << ")";
	}
}

struct Ifc_cartesian_transformation_operator_3_dnon_uniform : IfcCartesianTransformationOperator3D {
	Ifc_real scale_2;
	Ifc_real scale_3;

	Ifc_cartesian_transformation_operator_3_dnon_uniform() {
		entity = "Ifc_cartesian_transformation_operator_3_dnon_uniform";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cartesian_transformation_operator_3_dnon_uniform &o) {
		return os << "Ifc_cartesian_transformation_operator_3_dnon_uniform(" << o.axis_1 << ", " << o.axis_2 << ", " << o.local_origin << ", " << o.scale << ", " << o.axis_3 << ", " << o.scale_2 << ", " << o.scale_3 << ")";
	}
}

struct Ifc_circle_profile_def : IfcParameterizedProfileDef {
	Ifc_positive_length_measure radius;

	Ifc_circle_profile_def() {
		entity = "Ifc_circle_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_circle_profile_def &o) {
		return os << "Ifc_circle_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.radius << ")";
	}
}

struct Ifc_closed_shell : IfcConnectedFaceSet {
	Ifc_closed_shell() {
		entity = "Ifc_closed_shell";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_closed_shell &o) {
		return os << "Ifc_closed_shell(" << o.cfs_faces << ")";
	}
}

struct Ifc_colour_rgb : IfcColourSpecification {
	Ifc_normalised_ratio_measure red;
	Ifc_normalised_ratio_measure green;
	Ifc_normalised_ratio_measure blue;

	Ifc_colour_rgb() {
		entity = "Ifc_colour_rgb";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_colour_rgb &o) {
		return os << "Ifc_colour_rgb(" << o.name << ", " << o.red << ", " << o.green << ", " << o.blue << ")";
	}
}

struct Ifc_complex_property : IfcProperty {
	Ifc_identifier usage_name;
	std::vector<Ifc_property *> has_properties;

	Ifc_complex_property() {
		entity = "Ifc_complex_property";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_complex_property &o) {
		return os << "Ifc_complex_property(" << o.name << ", " << o.description << ", " << o.usage_name << ", " << o.has_properties << ")";
	}
}

struct Ifc_composite_curve_segment : IfcGeometricRepresentationItem {
	Ifc_transition_code transition;
	Ifc_boolean same_sense;
	Ifc_curve *parent_curve;

	Ifc_composite_curve_segment() {
		entity = "Ifc_composite_curve_segment";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_composite_curve_segment &o) {
		return os << "Ifc_composite_curve_segment(" << o.transition << ", " << o.same_sense << ", " << o.parent_curve << ")";
	}
}

struct Ifc_construction_resource_type : IfcTypeResource {
	std::vector<Ifc_applied_value *> base_costs;
	Ifc_physical_quantity *base_quantity;

	virtual ~Ifc_construction_resource_type() {}
}

struct Ifc_context : IfcObjectDefinition {
	Ifc_label object_type;
	Ifc_label long_name;
	Ifc_label phase;
	std::vector<Ifc_representation_context *> representation_contexts;
	Ifc_unit_assignment *units_in_context;

	virtual ~Ifc_context() {}
}

struct Ifc_crew_resource_type : IfcConstructionResourceType {
	Ifc_crew_resource_type_enum predefined_type;

	Ifc_crew_resource_type() {
		entity = "Ifc_crew_resource_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_crew_resource_type &o) {
		return os << "Ifc_crew_resource_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.identification << ", " << o.long_description << ", " << o.resource_type << ", " << o.base_costs << ", " << o.base_quantity << ", " << o.predefined_type << ")";
	}
}

struct Ifc_csg_primitive_3_d : IfcGeometricRepresentationItem {
	Ifc_axis_2_placement_3_d *position;

	virtual ~Ifc_csg_primitive_3_d() {}
}

struct Ifc_csg_solid : IfcSolidModel {
	Ifc_csg_select *tree_root_expression;

	Ifc_csg_solid() {
		entity = "Ifc_csg_solid";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_csg_solid &o) {
		return os << "Ifc_csg_solid(" << o.tree_root_expression << ")";
	}
}

struct Ifc_curve : IfcGeometricRepresentationItem {
	virtual ~Ifc_curve() {}
}

struct Ifc_curve_bounded_plane : IfcBoundedSurface {
	Ifc_plane *basis_surface;
	Ifc_curve *outer_boundary;
	std::vector<Ifc_curve *> inner_boundaries;

	Ifc_curve_bounded_plane() {
		entity = "Ifc_curve_bounded_plane";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_curve_bounded_plane &o) {
		return os << "Ifc_curve_bounded_plane(" << o.basis_surface << ", " << o.outer_boundary << ", " << o.inner_boundaries << ")";
	}
}

struct Ifc_curve_bounded_surface : IfcBoundedSurface {
	Ifc_surface *basis_surface;
	std::vector<Ifc_boundary_curve *> boundaries;
	Ifc_boolean implicit_outer;

	Ifc_curve_bounded_surface() {
		entity = "Ifc_curve_bounded_surface";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_curve_bounded_surface &o) {
		return os << "Ifc_curve_bounded_surface(" << o.basis_surface << ", " << o.boundaries << ", " << o.implicit_outer << ")";
	}
}

struct Ifc_direction : IfcGeometricRepresentationItem {
	std::vector<Ifc_real> direction_ratios;

	Ifc_direction() {
		entity = "Ifc_direction";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_direction &o) {
		return os << "Ifc_direction(" << o.direction_ratios << ")";
	}
}

struct Ifc_door_style : IfcTypeProduct {
	Ifc_door_style_operation_enum operation_type;
	Ifc_door_style_construction_enum construction_type;
	Ifc_boolean parameter_takes_precedence;
	Ifc_boolean sizeable;

	Ifc_door_style() {
		entity = "Ifc_door_style";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_door_style &o) {
		return os << "Ifc_door_style(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.operation_type << ", " << o.construction_type << ", " << o.parameter_takes_precedence << ", " << o.sizeable << ")";
	}
}

struct Ifc_edge_loop : IfcLoop {
	std::vector<Ifc_oriented_edge *> edge_list;

	Ifc_edge_loop() {
		entity = "Ifc_edge_loop";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_edge_loop &o) {
		return os << "Ifc_edge_loop(" << o.edge_list << ")";
	}
}

struct Ifc_element_quantity : IfcQuantitySet {
	Ifc_label method_of_measurement;
	std::vector<Ifc_physical_quantity *> quantities;

	Ifc_element_quantity() {
		entity = "Ifc_element_quantity";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_element_quantity &o) {
		return os << "Ifc_element_quantity(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.method_of_measurement << ", " << o.quantities << ")";
	}
}

struct Ifc_element_type : IfcTypeProduct {
	Ifc_label element_type;

	virtual ~Ifc_element_type() {}
}

struct Ifc_elementary_surface : IfcSurface {
	Ifc_axis_2_placement_3_d *position;

	virtual ~Ifc_elementary_surface() {}
}

struct Ifc_ellipse_profile_def : IfcParameterizedProfileDef {
	Ifc_positive_length_measure semi_axis_1;
	Ifc_positive_length_measure semi_axis_2;

	Ifc_ellipse_profile_def() {
		entity = "Ifc_ellipse_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_ellipse_profile_def &o) {
		return os << "Ifc_ellipse_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.semi_axis_1 << ", " << o.semi_axis_2 << ")";
	}
}

struct Ifc_event_type : IfcTypeProcess {
	Ifc_event_type_enum predefined_type;
	Ifc_event_trigger_type_enum event_trigger_type;
	Ifc_label user_defined_event_trigger_type;

	Ifc_event_type() {
		entity = "Ifc_event_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_event_type &o) {
		return os << "Ifc_event_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.identification << ", " << o.long_description << ", " << o.process_type << ", " << o.predefined_type << ", " << o.event_trigger_type << ", " << o.user_defined_event_trigger_type << ")";
	}
}

struct Ifc_extruded_area_solid : IfcSweptAreaSolid {
	Ifc_direction *extruded_direction;
	Ifc_positive_length_measure depth;

	Ifc_extruded_area_solid() {
		entity = "Ifc_extruded_area_solid";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_extruded_area_solid &o) {
		return os << "Ifc_extruded_area_solid(" << o.swept_area << ", " << o.position << ", " << o.extruded_direction << ", " << o.depth << ")";
	}
}

struct Ifc_extruded_area_solid_tapered : IfcExtrudedAreaSolid {
	Ifc_profile_def *end_swept_area;

	Ifc_extruded_area_solid_tapered() {
		entity = "Ifc_extruded_area_solid_tapered";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_extruded_area_solid_tapered &o) {
		return os << "Ifc_extruded_area_solid_tapered(" << o.swept_area << ", " << o.position << ", " << o.extruded_direction << ", " << o.depth << ", " << o.end_swept_area << ")";
	}
}

struct Ifc_face_based_surface_model : IfcGeometricRepresentationItem {
	std::vector<Ifc_connected_face_set *> fbsm_faces;

	Ifc_face_based_surface_model() {
		entity = "Ifc_face_based_surface_model";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_face_based_surface_model &o) {
		return os << "Ifc_face_based_surface_model(" << o.fbsm_faces << ")";
	}
}

struct Ifc_fill_area_style_hatching : IfcGeometricRepresentationItem {
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
}

struct Ifc_fill_area_style_tiles : IfcGeometricRepresentationItem {
	std::vector<Ifc_vector *> tiling_pattern;
	std::vector<Ifc_styled_item *> tiles;
	Ifc_positive_ratio_measure tiling_scale;

	Ifc_fill_area_style_tiles() {
		entity = "Ifc_fill_area_style_tiles";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_fill_area_style_tiles &o) {
		return os << "Ifc_fill_area_style_tiles(" << o.tiling_pattern << ", " << o.tiles << ", " << o.tiling_scale << ")";
	}
}

struct Ifc_fixed_reference_swept_area_solid : IfcSweptAreaSolid {
	Ifc_curve *directrix;
	Ifc_parameter_value start_param;
	Ifc_parameter_value end_param;
	Ifc_direction *fixed_reference;

	Ifc_fixed_reference_swept_area_solid() {
		entity = "Ifc_fixed_reference_swept_area_solid";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_fixed_reference_swept_area_solid &o) {
		return os << "Ifc_fixed_reference_swept_area_solid(" << o.swept_area << ", " << o.position << ", " << o.directrix << ", " << o.start_param << ", " << o.end_param << ", " << o.fixed_reference << ")";
	}
}

struct Ifc_furnishing_element_type : IfcElementType {
	Ifc_furnishing_element_type() {
		entity = "Ifc_furnishing_element_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_furnishing_element_type &o) {
		return os << "Ifc_furnishing_element_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ")";
	}
}

struct Ifc_furniture_type : IfcFurnishingElementType {
	Ifc_assembly_place_enum assembly_place;
	Ifc_furniture_type_enum predefined_type;

	Ifc_furniture_type() {
		entity = "Ifc_furniture_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_furniture_type &o) {
		return os << "Ifc_furniture_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.assembly_place << ", " << o.predefined_type << ")";
	}
}

struct Ifc_geographic_element_type : IfcElementType {
	Ifc_geographic_element_type_enum predefined_type;

	Ifc_geographic_element_type() {
		entity = "Ifc_geographic_element_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_geographic_element_type &o) {
		return os << "Ifc_geographic_element_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_geometric_curve_set : IfcGeometricSet {
	Ifc_geometric_curve_set() {
		entity = "Ifc_geometric_curve_set";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_geometric_curve_set &o) {
		return os << "Ifc_geometric_curve_set(" << o.elements << ")";
	}
}

struct Ifc_i_shape_profile_def : IfcParameterizedProfileDef {
	Ifc_positive_length_measure overall_width;
	Ifc_positive_length_measure overall_depth;
	Ifc_positive_length_measure web_thickness;
	Ifc_positive_length_measure flange_thickness;
	Ifc_non_negative_length_measure fillet_radius;
	Ifc_non_negative_length_measure flange_edge_radius;
	Ifc_plane_angle_measure flange_slope;

	Ifc_i_shape_profile_def() {
		entity = "Ifc_i_shape_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_i_shape_profile_def &o) {
		return os << "Ifc_i_shape_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.overall_width << ", " << o.overall_depth << ", " << o.web_thickness << ", " << o.flange_thickness << ", " << o.fillet_radius << ", " << o.flange_edge_radius << ", " << o.flange_slope << ")";
	}
}

struct Ifc_l_shape_profile_def : IfcParameterizedProfileDef {
	Ifc_positive_length_measure depth;
	Ifc_positive_length_measure width;
	Ifc_positive_length_measure thickness;
	Ifc_non_negative_length_measure fillet_radius;
	Ifc_non_negative_length_measure edge_radius;
	Ifc_plane_angle_measure leg_slope;

	Ifc_l_shape_profile_def() {
		entity = "Ifc_l_shape_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_l_shape_profile_def &o) {
		return os << "Ifc_l_shape_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.depth << ", " << o.width << ", " << o.thickness << ", " << o.fillet_radius << ", " << o.edge_radius << ", " << o.leg_slope << ")";
	}
}

struct Ifc_labor_resource_type : IfcConstructionResourceType {
	Ifc_labor_resource_type_enum predefined_type;

	Ifc_labor_resource_type() {
		entity = "Ifc_labor_resource_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_labor_resource_type &o) {
		return os << "Ifc_labor_resource_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.identification << ", " << o.long_description << ", " << o.resource_type << ", " << o.base_costs << ", " << o.base_quantity << ", " << o.predefined_type << ")";
	}
}

struct Ifc_line : IfcCurve {
	Ifc_cartesian_point *pnt;
	Ifc_vector *dir;

	Ifc_line() {
		entity = "Ifc_line";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_line &o) {
		return os << "Ifc_line(" << o.pnt << ", " << o.dir << ")";
	}
}

struct Ifc_manifold_solid_brep : IfcSolidModel {
	Ifc_closed_shell *outer;

	virtual ~Ifc_manifold_solid_brep() {}
}

struct Ifc_object : IfcObjectDefinition {
	Ifc_label object_type;

	virtual ~Ifc_object() {}
}

struct Ifc_offset_curve_2_d : IfcCurve {
	Ifc_curve *basis_curve;
	Ifc_length_measure distance;
	Ifc_logical self_intersect;

	Ifc_offset_curve_2_d() {
		entity = "Ifc_offset_curve_2_d";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_offset_curve_2_d &o) {
		return os << "Ifc_offset_curve_2_d(" << o.basis_curve << ", " << o.distance << ", " << o.self_intersect << ")";
	}
}

struct Ifc_offset_curve_3_d : IfcCurve {
	Ifc_curve *basis_curve;
	Ifc_length_measure distance;
	Ifc_logical self_intersect;
	Ifc_direction *ref_direction;

	Ifc_offset_curve_3_d() {
		entity = "Ifc_offset_curve_3_d";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_offset_curve_3_d &o) {
		return os << "Ifc_offset_curve_3_d(" << o.basis_curve << ", " << o.distance << ", " << o.self_intersect << ", " << o.ref_direction << ")";
	}
}

struct Ifc_pcurve : IfcCurve {
	Ifc_surface *basis_surface;
	Ifc_curve *reference_curve;

	Ifc_pcurve() {
		entity = "Ifc_pcurve";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_pcurve &o) {
		return os << "Ifc_pcurve(" << o.basis_surface << ", " << o.reference_curve << ")";
	}
}

struct Ifc_planar_box : IfcPlanarExtent {
	Ifc_axis_2_placement *placement;

	Ifc_planar_box() {
		entity = "Ifc_planar_box";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_planar_box &o) {
		return os << "Ifc_planar_box(" << o.size_in_x << ", " << o.size_in_y << ", " << o.placement << ")";
	}
}

struct Ifc_plane : IfcElementarySurface {
	Ifc_plane() {
		entity = "Ifc_plane";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_plane &o) {
		return os << "Ifc_plane(" << o.position << ")";
	}
}

struct Ifc_pre_defined_colour : IfcPreDefinedItem {
	virtual ~Ifc_pre_defined_colour() {}
}

struct Ifc_pre_defined_curve_font : IfcPreDefinedItem {
	virtual ~Ifc_pre_defined_curve_font() {}
}

struct Ifc_pre_defined_property_set : IfcPropertySetDefinition {
	virtual ~Ifc_pre_defined_property_set() {}
}

struct Ifc_procedure_type : IfcTypeProcess {
	Ifc_procedure_type_enum predefined_type;

	Ifc_procedure_type() {
		entity = "Ifc_procedure_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_procedure_type &o) {
		return os << "Ifc_procedure_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.identification << ", " << o.long_description << ", " << o.process_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_process : IfcObject {
	Ifc_identifier identification;
	Ifc_text long_description;

	virtual ~Ifc_process() {}
}

struct Ifc_product : IfcObject {
	Ifc_object_placement *object_placement;
	Ifc_product_representation *representation;

	virtual ~Ifc_product() {}
}

struct Ifc_project : IfcContext {
	Ifc_project() {
		entity = "Ifc_project";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_project &o) {
		return os << "Ifc_project(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.long_name << ", " << o.phase << ", " << o.representation_contexts << ", " << o.units_in_context << ")";
	}
}

struct Ifc_project_library : IfcContext {
	Ifc_project_library() {
		entity = "Ifc_project_library";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_project_library &o) {
		return os << "Ifc_project_library(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.long_name << ", " << o.phase << ", " << o.representation_contexts << ", " << o.units_in_context << ")";
	}
}

struct Ifc_property_bounded_value : IfcSimpleProperty {
	Ifc_value *upper_bound_value;
	Ifc_value *lower_bound_value;
	Ifc_unit *unit;
	Ifc_value *set_point_value;

	Ifc_property_bounded_value() {
		entity = "Ifc_property_bounded_value";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_property_bounded_value &o) {
		return os << "Ifc_property_bounded_value(" << o.name << ", " << o.description << ", " << o.upper_bound_value << ", " << o.lower_bound_value << ", " << o.unit << ", " << o.set_point_value << ")";
	}
}

struct Ifc_property_enumerated_value : IfcSimpleProperty {
	std::vector<Ifc_value *> enumeration_values;
	Ifc_property_enumeration *enumeration_reference;

	Ifc_property_enumerated_value() {
		entity = "Ifc_property_enumerated_value";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_property_enumerated_value &o) {
		return os << "Ifc_property_enumerated_value(" << o.name << ", " << o.description << ", " << o.enumeration_values << ", " << o.enumeration_reference << ")";
	}
}

struct Ifc_property_list_value : IfcSimpleProperty {
	std::vector<Ifc_value *> list_values;
	Ifc_unit *unit;

	Ifc_property_list_value() {
		entity = "Ifc_property_list_value";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_property_list_value &o) {
		return os << "Ifc_property_list_value(" << o.name << ", " << o.description << ", " << o.list_values << ", " << o.unit << ")";
	}
}

struct Ifc_property_reference_value : IfcSimpleProperty {
	Ifc_text usage_name;
	Ifc_object_reference_select *property_reference;

	Ifc_property_reference_value() {
		entity = "Ifc_property_reference_value";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_property_reference_value &o) {
		return os << "Ifc_property_reference_value(" << o.name << ", " << o.description << ", " << o.usage_name << ", " << o.property_reference << ")";
	}
}

struct Ifc_property_set : IfcPropertySetDefinition {
	std::vector<Ifc_property *> has_properties;

	Ifc_property_set() {
		entity = "Ifc_property_set";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_property_set &o) {
		return os << "Ifc_property_set(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.has_properties << ")";
	}
}

struct Ifc_property_set_template : IfcPropertyTemplateDefinition {
	Ifc_property_set_template_type_enum template_type;
	Ifc_identifier applicable_entity;
	std::vector<Ifc_property_template *> has_property_templates;

	Ifc_property_set_template() {
		entity = "Ifc_property_set_template";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_property_set_template &o) {
		return os << "Ifc_property_set_template(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.template_type << ", " << o.applicable_entity << ", " << o.has_property_templates << ")";
	}
}

struct Ifc_property_single_value : IfcSimpleProperty {
	Ifc_value *nominal_value;
	Ifc_unit *unit;

	Ifc_property_single_value() {
		entity = "Ifc_property_single_value";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_property_single_value &o) {
		return os << "Ifc_property_single_value(" << o.name << ", " << o.description << ", " << o.nominal_value << ", " << o.unit << ")";
	}
}

struct Ifc_property_table_value : IfcSimpleProperty {
	std::vector<Ifc_value *> defining_values;
	std::vector<Ifc_value *> defined_values;
	Ifc_text expression;
	Ifc_unit *defining_unit;
	Ifc_unit *defined_unit;
	Ifc_curve_interpolation_enum curve_interpolation;

	Ifc_property_table_value() {
		entity = "Ifc_property_table_value";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_property_table_value &o) {
		return os << "Ifc_property_table_value(" << o.name << ", " << o.description << ", " << o.defining_values << ", " << o.defined_values << ", " << o.expression << ", " << o.defining_unit << ", " << o.defined_unit << ", " << o.curve_interpolation << ")";
	}
}

struct Ifc_property_template : IfcPropertyTemplateDefinition {
	virtual ~Ifc_property_template() {}
}

struct Ifc_proxy : IfcProduct {
	Ifc_object_type_enum proxy_type;
	Ifc_label tag;

	Ifc_proxy() {
		entity = "Ifc_proxy";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_proxy &o) {
		return os << "Ifc_proxy(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.proxy_type << ", " << o.tag << ")";
	}
}

struct Ifc_rectangle_hollow_profile_def : IfcRectangleProfileDef {
	Ifc_positive_length_measure wall_thickness;
	Ifc_non_negative_length_measure inner_fillet_radius;
	Ifc_non_negative_length_measure outer_fillet_radius;

	Ifc_rectangle_hollow_profile_def() {
		entity = "Ifc_rectangle_hollow_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rectangle_hollow_profile_def &o) {
		return os << "Ifc_rectangle_hollow_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.x_dim << ", " << o.y_dim << ", " << o.wall_thickness << ", " << o.inner_fillet_radius << ", " << o.outer_fillet_radius << ")";
	}
}

struct Ifc_rectangular_pyramid : IfcCsgPrimitive3D {
	Ifc_positive_length_measure x_length;
	Ifc_positive_length_measure y_length;
	Ifc_positive_length_measure height;

	Ifc_rectangular_pyramid() {
		entity = "Ifc_rectangular_pyramid";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rectangular_pyramid &o) {
		return os << "Ifc_rectangular_pyramid(" << o.position << ", " << o.x_length << ", " << o.y_length << ", " << o.height << ")";
	}
}

struct Ifc_rectangular_trimmed_surface : IfcBoundedSurface {
	Ifc_surface *basis_surface;
	Ifc_parameter_value u_1;
	Ifc_parameter_value v_1;
	Ifc_parameter_value u_2;
	Ifc_parameter_value v_2;
	Ifc_boolean usense;
	Ifc_boolean vsense;

	Ifc_rectangular_trimmed_surface() {
		entity = "Ifc_rectangular_trimmed_surface";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rectangular_trimmed_surface &o) {
		return os << "Ifc_rectangular_trimmed_surface(" << o.basis_surface << ", " << o.u_1 << ", " << o.v_1 << ", " << o.u_2 << ", " << o.v_2 << ", " << o.usense << ", " << o.vsense << ")";
	}
}

struct Ifc_reinforcement_definition_properties : IfcPreDefinedPropertySet {
	Ifc_label definition_type;
	std::vector<Ifc_section_reinforcement_properties *> reinforcement_section_definitions;

	Ifc_reinforcement_definition_properties() {
		entity = "Ifc_reinforcement_definition_properties";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_reinforcement_definition_properties &o) {
		return os << "Ifc_reinforcement_definition_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.definition_type << ", " << o.reinforcement_section_definitions << ")";
	}
}

struct Ifc_rel_assigns : IfcRelationship {
	std::vector<Ifc_object_definition *> related_objects;
	Ifc_object_type_enum related_objects_type;

	virtual ~Ifc_rel_assigns() {}
}

struct Ifc_rel_assigns_to_actor : IfcRelAssigns {
	Ifc_actor *relating_actor;
	Ifc_actor_role *acting_role;

	Ifc_rel_assigns_to_actor() {
		entity = "Ifc_rel_assigns_to_actor";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_assigns_to_actor &o) {
		return os << "Ifc_rel_assigns_to_actor(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_objects << ", " << o.related_objects_type << ", " << o.relating_actor << ", " << o.acting_role << ")";
	}
}

struct Ifc_rel_assigns_to_control : IfcRelAssigns {
	Ifc_control *relating_control;

	Ifc_rel_assigns_to_control() {
		entity = "Ifc_rel_assigns_to_control";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_assigns_to_control &o) {
		return os << "Ifc_rel_assigns_to_control(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_objects << ", " << o.related_objects_type << ", " << o.relating_control << ")";
	}
}

struct Ifc_rel_assigns_to_group : IfcRelAssigns {
	Ifc_group *relating_group;

	Ifc_rel_assigns_to_group() {
		entity = "Ifc_rel_assigns_to_group";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_assigns_to_group &o) {
		return os << "Ifc_rel_assigns_to_group(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_objects << ", " << o.related_objects_type << ", " << o.relating_group << ")";
	}
}

struct Ifc_rel_assigns_to_group_by_factor : IfcRelAssignsToGroup {
	Ifc_ratio_measure factor;

	Ifc_rel_assigns_to_group_by_factor() {
		entity = "Ifc_rel_assigns_to_group_by_factor";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_assigns_to_group_by_factor &o) {
		return os << "Ifc_rel_assigns_to_group_by_factor(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_objects << ", " << o.related_objects_type << ", " << o.relating_group << ", " << o.factor << ")";
	}
}

struct Ifc_rel_assigns_to_process : IfcRelAssigns {
	Ifc_process_select *relating_process;
	Ifc_measure_with_unit *quantity_in_process;

	Ifc_rel_assigns_to_process() {
		entity = "Ifc_rel_assigns_to_process";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_assigns_to_process &o) {
		return os << "Ifc_rel_assigns_to_process(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_objects << ", " << o.related_objects_type << ", " << o.relating_process << ", " << o.quantity_in_process << ")";
	}
}

struct Ifc_rel_assigns_to_product : IfcRelAssigns {
	Ifc_product_select *relating_product;

	Ifc_rel_assigns_to_product() {
		entity = "Ifc_rel_assigns_to_product";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_assigns_to_product &o) {
		return os << "Ifc_rel_assigns_to_product(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_objects << ", " << o.related_objects_type << ", " << o.relating_product << ")";
	}
}

struct Ifc_rel_assigns_to_resource : IfcRelAssigns {
	Ifc_resource_select *relating_resource;

	Ifc_rel_assigns_to_resource() {
		entity = "Ifc_rel_assigns_to_resource";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_assigns_to_resource &o) {
		return os << "Ifc_rel_assigns_to_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_objects << ", " << o.related_objects_type << ", " << o.relating_resource << ")";
	}
}

struct Ifc_rel_associates : IfcRelationship {
	std::vector<Ifc_definition_select *> related_objects;

	virtual ~Ifc_rel_associates() {}
}

struct Ifc_rel_associates_approval : IfcRelAssociates {
	Ifc_approval *relating_approval;

	Ifc_rel_associates_approval() {
		entity = "Ifc_rel_associates_approval";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_associates_approval &o) {
		return os << "Ifc_rel_associates_approval(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_objects << ", " << o.relating_approval << ")";
	}
}

struct Ifc_rel_associates_classification : IfcRelAssociates {
	Ifc_classification_select *relating_classification;

	Ifc_rel_associates_classification() {
		entity = "Ifc_rel_associates_classification";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_associates_classification &o) {
		return os << "Ifc_rel_associates_classification(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_objects << ", " << o.relating_classification << ")";
	}
}

struct Ifc_rel_associates_constraint : IfcRelAssociates {
	Ifc_label intent;
	Ifc_constraint *relating_constraint;

	Ifc_rel_associates_constraint() {
		entity = "Ifc_rel_associates_constraint";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_associates_constraint &o) {
		return os << "Ifc_rel_associates_constraint(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_objects << ", " << o.intent << ", " << o.relating_constraint << ")";
	}
}

struct Ifc_rel_associates_document : IfcRelAssociates {
	Ifc_document_select *relating_document;

	Ifc_rel_associates_document() {
		entity = "Ifc_rel_associates_document";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_associates_document &o) {
		return os << "Ifc_rel_associates_document(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_objects << ", " << o.relating_document << ")";
	}
}

struct Ifc_rel_associates_library : IfcRelAssociates {
	Ifc_library_select *relating_library;

	Ifc_rel_associates_library() {
		entity = "Ifc_rel_associates_library";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_associates_library &o) {
		return os << "Ifc_rel_associates_library(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_objects << ", " << o.relating_library << ")";
	}
}

struct Ifc_rel_associates_material : IfcRelAssociates {
	Ifc_material_select *relating_material;

	Ifc_rel_associates_material() {
		entity = "Ifc_rel_associates_material";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_associates_material &o) {
		return os << "Ifc_rel_associates_material(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_objects << ", " << o.relating_material << ")";
	}
}

struct Ifc_rel_connects : IfcRelationship {
	virtual ~Ifc_rel_connects() {}
}

struct Ifc_rel_connects_elements : IfcRelConnects {
	Ifc_connection_geometry *connection_geometry;
	Ifc_element *relating_element;
	Ifc_element *related_element;

	Ifc_rel_connects_elements() {
		entity = "Ifc_rel_connects_elements";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_connects_elements &o) {
		return os << "Ifc_rel_connects_elements(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.connection_geometry << ", " << o.relating_element << ", " << o.related_element << ")";
	}
}

struct Ifc_rel_connects_path_elements : IfcRelConnectsElements {
	std::vector<Ifc_integer> relating_priorities;
	std::vector<Ifc_integer> related_priorities;
	Ifc_connection_type_enum related_connection_type;
	Ifc_connection_type_enum relating_connection_type;

	Ifc_rel_connects_path_elements() {
		entity = "Ifc_rel_connects_path_elements";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_connects_path_elements &o) {
		return os << "Ifc_rel_connects_path_elements(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.connection_geometry << ", " << o.relating_element << ", " << o.related_element << ", " << o.relating_priorities << ", " << o.related_priorities << ", " << o.related_connection_type << ", " << o.relating_connection_type << ")";
	}
}

struct Ifc_rel_connects_port_to_element : IfcRelConnects {
	Ifc_port *relating_port;
	Ifc_distribution_element *related_element;

	Ifc_rel_connects_port_to_element() {
		entity = "Ifc_rel_connects_port_to_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_connects_port_to_element &o) {
		return os << "Ifc_rel_connects_port_to_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_port << ", " << o.related_element << ")";
	}
}

struct Ifc_rel_connects_ports : IfcRelConnects {
	Ifc_port *relating_port;
	Ifc_port *related_port;
	Ifc_element *realizing_element;

	Ifc_rel_connects_ports() {
		entity = "Ifc_rel_connects_ports";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_connects_ports &o) {
		return os << "Ifc_rel_connects_ports(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_port << ", " << o.related_port << ", " << o.realizing_element << ")";
	}
}

struct Ifc_rel_connects_structural_activity : IfcRelConnects {
	Ifc_structural_activity_assignment_select *relating_element;
	Ifc_structural_activity *related_structural_activity;

	Ifc_rel_connects_structural_activity() {
		entity = "Ifc_rel_connects_structural_activity";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_connects_structural_activity &o) {
		return os << "Ifc_rel_connects_structural_activity(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_element << ", " << o.related_structural_activity << ")";
	}
}

struct Ifc_rel_connects_structural_member : IfcRelConnects {
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
}

struct Ifc_rel_connects_with_eccentricity : IfcRelConnectsStructuralMember {
	Ifc_connection_geometry *connection_constraint;

	Ifc_rel_connects_with_eccentricity() {
		entity = "Ifc_rel_connects_with_eccentricity";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_connects_with_eccentricity &o) {
		return os << "Ifc_rel_connects_with_eccentricity(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_structural_member << ", " << o.related_structural_connection << ", " << o.applied_condition << ", " << o.additional_conditions << ", " << o.supported_length << ", " << o.condition_coordinate_system << ", " << o.connection_constraint << ")";
	}
}

struct Ifc_rel_connects_with_realizing_elements : IfcRelConnectsElements {
	std::vector<Ifc_element *> realizing_elements;
	Ifc_label connection_type;

	Ifc_rel_connects_with_realizing_elements() {
		entity = "Ifc_rel_connects_with_realizing_elements";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_connects_with_realizing_elements &o) {
		return os << "Ifc_rel_connects_with_realizing_elements(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.connection_geometry << ", " << o.relating_element << ", " << o.related_element << ", " << o.realizing_elements << ", " << o.connection_type << ")";
	}
}

struct Ifc_rel_contained_in_spatial_structure : IfcRelConnects {
	std::vector<Ifc_product *> related_elements;
	Ifc_spatial_element *relating_structure;

	Ifc_rel_contained_in_spatial_structure() {
		entity = "Ifc_rel_contained_in_spatial_structure";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_contained_in_spatial_structure &o) {
		return os << "Ifc_rel_contained_in_spatial_structure(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_elements << ", " << o.relating_structure << ")";
	}
}

struct Ifc_rel_covers_bldg_elements : IfcRelConnects {
	Ifc_element *relating_building_element;
	std::vector<Ifc_covering *> related_coverings;

	Ifc_rel_covers_bldg_elements() {
		entity = "Ifc_rel_covers_bldg_elements";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_covers_bldg_elements &o) {
		return os << "Ifc_rel_covers_bldg_elements(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_building_element << ", " << o.related_coverings << ")";
	}
}

struct Ifc_rel_covers_spaces : IfcRelConnects {
	Ifc_space *relating_space;
	std::vector<Ifc_covering *> related_coverings;

	Ifc_rel_covers_spaces() {
		entity = "Ifc_rel_covers_spaces";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_covers_spaces &o) {
		return os << "Ifc_rel_covers_spaces(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_space << ", " << o.related_coverings << ")";
	}
}

struct Ifc_rel_declares : IfcRelationship {
	Ifc_context *relating_context;
	std::vector<Ifc_definition_select *> related_definitions;

	Ifc_rel_declares() {
		entity = "Ifc_rel_declares";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_declares &o) {
		return os << "Ifc_rel_declares(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_context << ", " << o.related_definitions << ")";
	}
}

struct Ifc_rel_decomposes : IfcRelationship {
	virtual ~Ifc_rel_decomposes() {}
}

struct Ifc_rel_defines : IfcRelationship {
	virtual ~Ifc_rel_defines() {}
}

struct Ifc_rel_defines_by_object : IfcRelDefines {
	std::vector<Ifc_object *> related_objects;
	Ifc_object *relating_object;

	Ifc_rel_defines_by_object() {
		entity = "Ifc_rel_defines_by_object";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_defines_by_object &o) {
		return os << "Ifc_rel_defines_by_object(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_objects << ", " << o.relating_object << ")";
	}
}

struct Ifc_rel_defines_by_properties : IfcRelDefines {
	std::vector<Ifc_object_definition *> related_objects;
	Ifc_property_set_definition_select *relating_property_definition;

	Ifc_rel_defines_by_properties() {
		entity = "Ifc_rel_defines_by_properties";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_defines_by_properties &o) {
		return os << "Ifc_rel_defines_by_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_objects << ", " << o.relating_property_definition << ")";
	}
}

struct Ifc_rel_defines_by_template : IfcRelDefines {
	std::vector<Ifc_property_set_definition *> related_property_sets;
	Ifc_property_set_template *relating_template;

	Ifc_rel_defines_by_template() {
		entity = "Ifc_rel_defines_by_template";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_defines_by_template &o) {
		return os << "Ifc_rel_defines_by_template(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_property_sets << ", " << o.relating_template << ")";
	}
}

struct Ifc_rel_defines_by_type : IfcRelDefines {
	std::vector<Ifc_object *> related_objects;
	Ifc_type_object *relating_type;

	Ifc_rel_defines_by_type() {
		entity = "Ifc_rel_defines_by_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_defines_by_type &o) {
		return os << "Ifc_rel_defines_by_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_objects << ", " << o.relating_type << ")";
	}
}

struct Ifc_rel_fills_element : IfcRelConnects {
	Ifc_opening_element *relating_opening_element;
	Ifc_element *related_building_element;

	Ifc_rel_fills_element() {
		entity = "Ifc_rel_fills_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_fills_element &o) {
		return os << "Ifc_rel_fills_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_opening_element << ", " << o.related_building_element << ")";
	}
}

struct Ifc_rel_flow_control_elements : IfcRelConnects {
	std::vector<Ifc_distribution_control_element *> related_control_elements;
	Ifc_distribution_flow_element *relating_flow_element;

	Ifc_rel_flow_control_elements() {
		entity = "Ifc_rel_flow_control_elements";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_flow_control_elements &o) {
		return os << "Ifc_rel_flow_control_elements(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_control_elements << ", " << o.relating_flow_element << ")";
	}
}

struct Ifc_rel_interferes_elements : IfcRelConnects {
	Ifc_element *relating_element;
	Ifc_element *related_element;
	Ifc_connection_geometry *interference_geometry;
	Ifc_identifier interference_type;
	int implied_order;

	Ifc_rel_interferes_elements() {
		entity = "Ifc_rel_interferes_elements";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_interferes_elements &o) {
		return os << "Ifc_rel_interferes_elements(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_element << ", " << o.related_element << ", " << o.interference_geometry << ", " << o.interference_type << ", " << o.implied_order << ")";
	}
}

struct Ifc_rel_nests : IfcRelDecomposes {
	Ifc_object_definition *relating_object;
	std::vector<Ifc_object_definition *> related_objects;

	Ifc_rel_nests() {
		entity = "Ifc_rel_nests";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_nests &o) {
		return os << "Ifc_rel_nests(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_object << ", " << o.related_objects << ")";
	}
}

struct Ifc_rel_projects_element : IfcRelDecomposes {
	Ifc_element *relating_element;
	Ifc_feature_element_addition *related_feature_element;

	Ifc_rel_projects_element() {
		entity = "Ifc_rel_projects_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_projects_element &o) {
		return os << "Ifc_rel_projects_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_element << ", " << o.related_feature_element << ")";
	}
}

struct Ifc_rel_referenced_in_spatial_structure : IfcRelConnects {
	std::vector<Ifc_product *> related_elements;
	Ifc_spatial_element *relating_structure;

	Ifc_rel_referenced_in_spatial_structure() {
		entity = "Ifc_rel_referenced_in_spatial_structure";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_referenced_in_spatial_structure &o) {
		return os << "Ifc_rel_referenced_in_spatial_structure(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.related_elements << ", " << o.relating_structure << ")";
	}
}

struct Ifc_rel_sequence : IfcRelConnects {
	Ifc_process *relating_process;
	Ifc_process *related_process;
	Ifc_lag_time *time_lag;
	Ifc_sequence_enum sequence_type;
	Ifc_label user_defined_sequence_type;

	Ifc_rel_sequence() {
		entity = "Ifc_rel_sequence";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_sequence &o) {
		return os << "Ifc_rel_sequence(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_process << ", " << o.related_process << ", " << o.time_lag << ", " << o.sequence_type << ", " << o.user_defined_sequence_type << ")";
	}
}

struct Ifc_rel_services_buildings : IfcRelConnects {
	Ifc_system *relating_system;
	std::vector<Ifc_spatial_element *> related_buildings;

	Ifc_rel_services_buildings() {
		entity = "Ifc_rel_services_buildings";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_services_buildings &o) {
		return os << "Ifc_rel_services_buildings(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_system << ", " << o.related_buildings << ")";
	}
}

struct Ifc_rel_space_boundary : IfcRelConnects {
	Ifc_space_boundary_select *relating_space;
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
}

struct Ifc_rel_space_boundary_1st_level : IfcRelSpaceBoundary {
	Ifc_rel_space_boundary_1st_level *parent_boundary;

	Ifc_rel_space_boundary_1st_level() {
		entity = "Ifc_rel_space_boundary_1st_level";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_space_boundary_1st_level &o) {
		return os << "Ifc_rel_space_boundary_1st_level(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_space << ", " << o.related_building_element << ", " << o.connection_geometry << ", " << o.physical_or_virtual_boundary << ", " << o.internal_or_external_boundary << ", " << o.parent_boundary << ")";
	}
}

struct Ifc_rel_space_boundary_2nd_level : IfcRelSpaceBoundary1stLevel {
	Ifc_rel_space_boundary_2nd_level *corresponding_boundary;

	Ifc_rel_space_boundary_2nd_level() {
		entity = "Ifc_rel_space_boundary_2nd_level";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_space_boundary_2nd_level &o) {
		return os << "Ifc_rel_space_boundary_2nd_level(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_space << ", " << o.related_building_element << ", " << o.connection_geometry << ", " << o.physical_or_virtual_boundary << ", " << o.internal_or_external_boundary << ", " << o.parent_boundary << ", " << o.corresponding_boundary << ")";
	}
}

struct Ifc_rel_voids_element : IfcRelDecomposes {
	Ifc_element *relating_building_element;
	Ifc_feature_element_subtraction *related_opening_element;

	Ifc_rel_voids_element() {
		entity = "Ifc_rel_voids_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_voids_element &o) {
		return os << "Ifc_rel_voids_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_building_element << ", " << o.related_opening_element << ")";
	}
}

struct Ifc_reparametrised_composite_curve_segment : IfcCompositeCurveSegment {
	Ifc_parameter_value param_length;

	Ifc_reparametrised_composite_curve_segment() {
		entity = "Ifc_reparametrised_composite_curve_segment";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_reparametrised_composite_curve_segment &o) {
		return os << "Ifc_reparametrised_composite_curve_segment(" << o.transition << ", " << o.same_sense << ", " << o.parent_curve << ", " << o.param_length << ")";
	}
}

struct Ifc_resource : IfcObject {
	Ifc_identifier identification;
	Ifc_text long_description;

	virtual ~Ifc_resource() {}
}

struct Ifc_revolved_area_solid : IfcSweptAreaSolid {
	Ifc_axis_1_placement *axis;
	Ifc_plane_angle_measure angle;

	Ifc_revolved_area_solid() {
		entity = "Ifc_revolved_area_solid";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_revolved_area_solid &o) {
		return os << "Ifc_revolved_area_solid(" << o.swept_area << ", " << o.position << ", " << o.axis << ", " << o.angle << ")";
	}
}

struct Ifc_revolved_area_solid_tapered : IfcRevolvedAreaSolid {
	Ifc_profile_def *end_swept_area;

	Ifc_revolved_area_solid_tapered() {
		entity = "Ifc_revolved_area_solid_tapered";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_revolved_area_solid_tapered &o) {
		return os << "Ifc_revolved_area_solid_tapered(" << o.swept_area << ", " << o.position << ", " << o.axis << ", " << o.angle << ", " << o.end_swept_area << ")";
	}
}

struct Ifc_right_circular_cone : IfcCsgPrimitive3D {
	Ifc_positive_length_measure height;
	Ifc_positive_length_measure bottom_radius;

	Ifc_right_circular_cone() {
		entity = "Ifc_right_circular_cone";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_right_circular_cone &o) {
		return os << "Ifc_right_circular_cone(" << o.position << ", " << o.height << ", " << o.bottom_radius << ")";
	}
}

struct Ifc_right_circular_cylinder : IfcCsgPrimitive3D {
	Ifc_positive_length_measure height;
	Ifc_positive_length_measure radius;

	Ifc_right_circular_cylinder() {
		entity = "Ifc_right_circular_cylinder";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_right_circular_cylinder &o) {
		return os << "Ifc_right_circular_cylinder(" << o.position << ", " << o.height << ", " << o.radius << ")";
	}
}

struct Ifc_simple_property_template : IfcPropertyTemplate {
	Ifc_simple_property_template_type_enum template_type;
	Ifc_label primary_measure_type;
	Ifc_label secondary_measure_type;
	Ifc_property_enumeration *enumerators;
	Ifc_unit *primary_unit;
	Ifc_unit *secondary_unit;
	Ifc_label expression;
	Ifc_state_enum access_state;

	Ifc_simple_property_template() {
		entity = "Ifc_simple_property_template";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_simple_property_template &o) {
		return os << "Ifc_simple_property_template(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.template_type << ", " << o.primary_measure_type << ", " << o.secondary_measure_type << ", " << o.enumerators << ", " << o.primary_unit << ", " << o.secondary_unit << ", " << o.expression << ", " << o.access_state << ")";
	}
}

struct Ifc_spatial_element : IfcProduct {
	Ifc_label long_name;

	virtual ~Ifc_spatial_element() {}
}

struct Ifc_spatial_element_type : IfcTypeProduct {
	Ifc_label element_type;

	virtual ~Ifc_spatial_element_type() {}
}

struct Ifc_spatial_structure_element : IfcSpatialElement {
	Ifc_element_composition_enum composition_type;

	virtual ~Ifc_spatial_structure_element() {}
}

struct Ifc_spatial_structure_element_type : IfcSpatialElementType {
	virtual ~Ifc_spatial_structure_element_type() {}
}

struct Ifc_spatial_zone : IfcSpatialElement {
	Ifc_spatial_zone_type_enum predefined_type;

	Ifc_spatial_zone() {
		entity = "Ifc_spatial_zone";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_spatial_zone &o) {
		return os << "Ifc_spatial_zone(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.long_name << ", " << o.predefined_type << ")";
	}
}

struct Ifc_spatial_zone_type : IfcSpatialElementType {
	Ifc_spatial_zone_type_enum predefined_type;
	Ifc_label long_name;

	Ifc_spatial_zone_type() {
		entity = "Ifc_spatial_zone_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_spatial_zone_type &o) {
		return os << "Ifc_spatial_zone_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ", " << o.long_name << ")";
	}
}

struct Ifc_sphere : IfcCsgPrimitive3D {
	Ifc_positive_length_measure radius;

	Ifc_sphere() {
		entity = "Ifc_sphere";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_sphere &o) {
		return os << "Ifc_sphere(" << o.position << ", " << o.radius << ")";
	}
}

struct Ifc_structural_activity : IfcProduct {
	Ifc_structural_load *applied_load;
	Ifc_global_or_local_enum global_or_local;

	virtual ~Ifc_structural_activity() {}
}

struct Ifc_structural_item : IfcProduct {
	virtual ~Ifc_structural_item() {}
}

struct Ifc_structural_member : IfcStructuralItem {
	virtual ~Ifc_structural_member() {}
}

struct Ifc_structural_reaction : IfcStructuralActivity {
	virtual ~Ifc_structural_reaction() {}
}

struct Ifc_structural_surface_member : IfcStructuralMember {
	Ifc_structural_surface_member_type_enum predefined_type;
	Ifc_positive_length_measure thickness;

	Ifc_structural_surface_member() {
		entity = "Ifc_structural_surface_member";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_surface_member &o) {
		return os << "Ifc_structural_surface_member(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.predefined_type << ", " << o.thickness << ")";
	}
}

struct Ifc_structural_surface_member_varying : IfcStructuralSurfaceMember {
	Ifc_structural_surface_member_varying() {
		entity = "Ifc_structural_surface_member_varying";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_surface_member_varying &o) {
		return os << "Ifc_structural_surface_member_varying(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.predefined_type << ", " << o.thickness << ")";
	}
}

struct Ifc_structural_surface_reaction : IfcStructuralReaction {
	Ifc_structural_surface_activity_type_enum predefined_type;

	Ifc_structural_surface_reaction() {
		entity = "Ifc_structural_surface_reaction";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_surface_reaction &o) {
		return os << "Ifc_structural_surface_reaction(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_load << ", " << o.global_or_local << ", " << o.predefined_type << ")";
	}
}

struct Ifc_sub_contract_resource_type : IfcConstructionResourceType {
	Ifc_sub_contract_resource_type_enum predefined_type;

	Ifc_sub_contract_resource_type() {
		entity = "Ifc_sub_contract_resource_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_sub_contract_resource_type &o) {
		return os << "Ifc_sub_contract_resource_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.identification << ", " << o.long_description << ", " << o.resource_type << ", " << o.base_costs << ", " << o.base_quantity << ", " << o.predefined_type << ")";
	}
}

struct Ifc_surface_curve_swept_area_solid : IfcSweptAreaSolid {
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
}

struct Ifc_surface_of_linear_extrusion : IfcSweptSurface {
	Ifc_direction *extruded_direction;
	Ifc_length_measure depth;

	Ifc_surface_of_linear_extrusion() {
		entity = "Ifc_surface_of_linear_extrusion";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_of_linear_extrusion &o) {
		return os << "Ifc_surface_of_linear_extrusion(" << o.swept_curve << ", " << o.position << ", " << o.extruded_direction << ", " << o.depth << ")";
	}
}

struct Ifc_surface_of_revolution : IfcSweptSurface {
	Ifc_axis_1_placement *axis_position;

	Ifc_surface_of_revolution() {
		entity = "Ifc_surface_of_revolution";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_of_revolution &o) {
		return os << "Ifc_surface_of_revolution(" << o.swept_curve << ", " << o.position << ", " << o.axis_position << ")";
	}
}

struct Ifc_system_furniture_element_type : IfcFurnishingElementType {
	Ifc_system_furniture_element_type_enum predefined_type;

	Ifc_system_furniture_element_type() {
		entity = "Ifc_system_furniture_element_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_system_furniture_element_type &o) {
		return os << "Ifc_system_furniture_element_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_task : IfcProcess {
	Ifc_label status;
	Ifc_label work_method;
	Ifc_boolean is_milestone;
	Ifc_integer priority;
	Ifc_task_time *task_time;
	Ifc_task_type_enum predefined_type;

	Ifc_task() {
		entity = "Ifc_task";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_task &o) {
		return os << "Ifc_task(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identification << ", " << o.long_description << ", " << o.status << ", " << o.work_method << ", " << o.is_milestone << ", " << o.priority << ", " << o.task_time << ", " << o.predefined_type << ")";
	}
}

struct Ifc_task_type : IfcTypeProcess {
	Ifc_task_type_enum predefined_type;
	Ifc_label work_method;

	Ifc_task_type() {
		entity = "Ifc_task_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_task_type &o) {
		return os << "Ifc_task_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.identification << ", " << o.long_description << ", " << o.process_type << ", " << o.predefined_type << ", " << o.work_method << ")";
	}
}

struct Ifc_tessellated_face_set : IfcTessellatedItem {
	Ifc_cartesian_point_list_3_d *coordinates;
	std::vector<std::vector<Ifc_parameter_value>> normals;
	Ifc_boolean closed;

	virtual ~Ifc_tessellated_face_set() {}
}

struct Ifc_transport_element_type : IfcElementType {
	Ifc_transport_element_type_enum predefined_type;

	Ifc_transport_element_type() {
		entity = "Ifc_transport_element_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_transport_element_type &o) {
		return os << "Ifc_transport_element_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_triangulated_face_set : IfcTessellatedFaceSet {
	std::vector<std::vector<Ifc_positive_integer>> coord_index;
	std::vector<std::vector<Ifc_positive_integer>> normal_index;

	Ifc_triangulated_face_set() {
		entity = "Ifc_triangulated_face_set";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_triangulated_face_set &o) {
		return os << "Ifc_triangulated_face_set(" << o.coordinates << ", " << o.normals << ", " << o.closed << ", " << o.coord_index << ", " << o.normal_index << ")";
	}
}

struct Ifc_window_lining_properties : IfcPreDefinedPropertySet {
	Ifc_positive_length_measure lining_depth;
	Ifc_non_negative_length_measure lining_thickness;
	Ifc_non_negative_length_measure transom_thickness;
	Ifc_non_negative_length_measure mullion_thickness;
	Ifc_normalised_ratio_measure first_transom_offset;
	Ifc_normalised_ratio_measure second_transom_offset;
	Ifc_normalised_ratio_measure first_mullion_offset;
	Ifc_normalised_ratio_measure second_mullion_offset;
	Ifc_shape_aspect *shape_aspect_style;
	Ifc_length_measure lining_offset;
	Ifc_length_measure lining_to_panel_offset_x;
	Ifc_length_measure lining_to_panel_offset_y;

	Ifc_window_lining_properties() {
		entity = "Ifc_window_lining_properties";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_window_lining_properties &o) {
		return os << "Ifc_window_lining_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.lining_depth << ", " << o.lining_thickness << ", " << o.transom_thickness << ", " << o.mullion_thickness << ", " << o.first_transom_offset << ", " << o.second_transom_offset << ", " << o.first_mullion_offset << ", " << o.second_mullion_offset << ", " << o.shape_aspect_style << ", " << o.lining_offset << ", " << o.lining_to_panel_offset_x << ", " << o.lining_to_panel_offset_y << ")";
	}
}

struct Ifc_window_panel_properties : IfcPreDefinedPropertySet {
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
}

struct Ifc_actor : IfcObject {
	Ifc_actor_select *the_actor;

	Ifc_actor() {
		entity = "Ifc_actor";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_actor &o) {
		return os << "Ifc_actor(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.the_actor << ")";
	}
}

struct Ifc_advanced_brep : IfcManifoldSolidBrep {
	Ifc_advanced_brep() {
		entity = "Ifc_advanced_brep";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_advanced_brep &o) {
		return os << "Ifc_advanced_brep(" << o.outer << ")";
	}
}

struct Ifc_advanced_brep_with_voids : IfcAdvancedBrep {
	std::vector<Ifc_closed_shell *> voids;

	Ifc_advanced_brep_with_voids() {
		entity = "Ifc_advanced_brep_with_voids";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_advanced_brep_with_voids &o) {
		return os << "Ifc_advanced_brep_with_voids(" << o.outer << ", " << o.voids << ")";
	}
}

struct Ifc_annotation : IfcProduct {
	Ifc_annotation() {
		entity = "Ifc_annotation";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_annotation &o) {
		return os << "Ifc_annotation(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ")";
	}
}

struct Ifc_b_spline_surface : IfcBoundedSurface {
	Ifc_integer u_degree;
	Ifc_integer v_degree;
	std::vector<std::vector<Ifc_cartesian_point *>> control_points_list;
	Ifc_b_spline_surface_form surface_form;
	Ifc_logical u_closed;
	Ifc_logical v_closed;
	Ifc_logical self_intersect;

	virtual ~Ifc_b_spline_surface() {}
}

struct Ifc_b_spline_surface_with_knots : IfcBSplineSurface {
	std::vector<Ifc_integer> u_multiplicities;
	std::vector<Ifc_integer> v_multiplicities;
	std::vector<Ifc_parameter_value> u_knots;
	std::vector<Ifc_parameter_value> v_knots;
	Ifc_knot_type knot_spec;

	Ifc_b_spline_surface_with_knots() {
		entity = "Ifc_b_spline_surface_with_knots";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_b_spline_surface_with_knots &o) {
		return os << "Ifc_b_spline_surface_with_knots(" << o.u_degree << ", " << o.v_degree << ", " << o.control_points_list << ", " << o.surface_form << ", " << o.u_closed << ", " << o.v_closed << ", " << o.self_intersect << ", " << o.u_multiplicities << ", " << o.v_multiplicities << ", " << o.u_knots << ", " << o.v_knots << ", " << o.knot_spec << ")";
	}
}

struct Ifc_block : IfcCsgPrimitive3D {
	Ifc_positive_length_measure x_length;
	Ifc_positive_length_measure y_length;
	Ifc_positive_length_measure z_length;

	Ifc_block() {
		entity = "Ifc_block";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_block &o) {
		return os << "Ifc_block(" << o.position << ", " << o.x_length << ", " << o.y_length << ", " << o.z_length << ")";
	}
}

struct Ifc_boolean_clipping_result : IfcBooleanResult {
	Ifc_boolean_clipping_result() {
		entity = "Ifc_boolean_clipping_result";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_boolean_clipping_result &o) {
		return os << "Ifc_boolean_clipping_result(" << o.operator << ", " << o.first_operand << ", " << o.second_operand << ")";
	}
}

struct Ifc_bounded_curve : IfcCurve {
	virtual ~Ifc_bounded_curve() {}
}

struct Ifc_building : IfcSpatialStructureElement {
	Ifc_length_measure elevation_of_ref_height;
	Ifc_length_measure elevation_of_terrain;
	Ifc_postal_address *building_address;

	Ifc_building() {
		entity = "Ifc_building";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_building &o) {
		return os << "Ifc_building(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.long_name << ", " << o.composition_type << ", " << o.elevation_of_ref_height << ", " << o.elevation_of_terrain << ", " << o.building_address << ")";
	}
}

struct Ifc_building_element_type : IfcElementType {
	virtual ~Ifc_building_element_type() {}
}

struct Ifc_building_storey : IfcSpatialStructureElement {
	Ifc_length_measure elevation;

	Ifc_building_storey() {
		entity = "Ifc_building_storey";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_building_storey &o) {
		return os << "Ifc_building_storey(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.long_name << ", " << o.composition_type << ", " << o.elevation << ")";
	}
}

struct Ifc_chimney_type : IfcBuildingElementType {
	Ifc_chimney_type_enum predefined_type;

	Ifc_chimney_type() {
		entity = "Ifc_chimney_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_chimney_type &o) {
		return os << "Ifc_chimney_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_circle_hollow_profile_def : IfcCircleProfileDef {
	Ifc_positive_length_measure wall_thickness;

	Ifc_circle_hollow_profile_def() {
		entity = "Ifc_circle_hollow_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_circle_hollow_profile_def &o) {
		return os << "Ifc_circle_hollow_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.radius << ", " << o.wall_thickness << ")";
	}
}

struct Ifc_civil_element_type : IfcElementType {
	Ifc_civil_element_type() {
		entity = "Ifc_civil_element_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_civil_element_type &o) {
		return os << "Ifc_civil_element_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ")";
	}
}

struct Ifc_column_type : IfcBuildingElementType {
	Ifc_column_type_enum predefined_type;

	Ifc_column_type() {
		entity = "Ifc_column_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_column_type &o) {
		return os << "Ifc_column_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_complex_property_template : IfcPropertyTemplate {
	Ifc_label usage_name;
	Ifc_complex_property_template_type_enum template_type;
	std::vector<Ifc_property_template *> has_property_templates;

	Ifc_complex_property_template() {
		entity = "Ifc_complex_property_template";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_complex_property_template &o) {
		return os << "Ifc_complex_property_template(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.usage_name << ", " << o.template_type << ", " << o.has_property_templates << ")";
	}
}

struct Ifc_composite_curve : IfcBoundedCurve {
	std::vector<Ifc_composite_curve_segment *> segments;
	Ifc_logical self_intersect;

	Ifc_composite_curve() {
		entity = "Ifc_composite_curve";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_composite_curve &o) {
		return os << "Ifc_composite_curve(" << o.segments << ", " << o.self_intersect << ")";
	}
}

struct Ifc_composite_curve_on_surface : IfcCompositeCurve {
	Ifc_composite_curve_on_surface() {
		entity = "Ifc_composite_curve_on_surface";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_composite_curve_on_surface &o) {
		return os << "Ifc_composite_curve_on_surface(" << o.segments << ", " << o.self_intersect << ")";
	}
}

struct Ifc_conic : IfcCurve {
	Ifc_axis_2_placement *position;

	virtual ~Ifc_conic() {}
}

struct Ifc_construction_equipment_resource_type : IfcConstructionResourceType {
	Ifc_construction_equipment_resource_type_enum predefined_type;

	Ifc_construction_equipment_resource_type() {
		entity = "Ifc_construction_equipment_resource_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_construction_equipment_resource_type &o) {
		return os << "Ifc_construction_equipment_resource_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.identification << ", " << o.long_description << ", " << o.resource_type << ", " << o.base_costs << ", " << o.base_quantity << ", " << o.predefined_type << ")";
	}
}

struct Ifc_construction_material_resource_type : IfcConstructionResourceType {
	Ifc_construction_material_resource_type_enum predefined_type;

	Ifc_construction_material_resource_type() {
		entity = "Ifc_construction_material_resource_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_construction_material_resource_type &o) {
		return os << "Ifc_construction_material_resource_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.identification << ", " << o.long_description << ", " << o.resource_type << ", " << o.base_costs << ", " << o.base_quantity << ", " << o.predefined_type << ")";
	}
}

struct Ifc_construction_product_resource_type : IfcConstructionResourceType {
	Ifc_construction_product_resource_type_enum predefined_type;

	Ifc_construction_product_resource_type() {
		entity = "Ifc_construction_product_resource_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_construction_product_resource_type &o) {
		return os << "Ifc_construction_product_resource_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.identification << ", " << o.long_description << ", " << o.resource_type << ", " << o.base_costs << ", " << o.base_quantity << ", " << o.predefined_type << ")";
	}
}

struct Ifc_construction_resource : IfcResource {
	Ifc_resource_time *usage;
	std::vector<Ifc_applied_value *> base_costs;
	Ifc_physical_quantity *base_quantity;

	virtual ~Ifc_construction_resource() {}
}

struct Ifc_control : IfcObject {
	Ifc_identifier identification;

	virtual ~Ifc_control() {}
}

struct Ifc_cost_item : IfcControl {
	Ifc_cost_item_type_enum predefined_type;
	std::vector<Ifc_cost_value *> cost_values;
	std::vector<Ifc_physical_quantity *> cost_quantities;

	Ifc_cost_item() {
		entity = "Ifc_cost_item";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cost_item &o) {
		return os << "Ifc_cost_item(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identification << ", " << o.predefined_type << ", " << o.cost_values << ", " << o.cost_quantities << ")";
	}
}

struct Ifc_cost_schedule : IfcControl {
	Ifc_cost_schedule_type_enum predefined_type;
	Ifc_label status;
	Ifc_date_time submitted_on;
	Ifc_date_time update_date;

	Ifc_cost_schedule() {
		entity = "Ifc_cost_schedule";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cost_schedule &o) {
		return os << "Ifc_cost_schedule(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identification << ", " << o.predefined_type << ", " << o.status << ", " << o.submitted_on << ", " << o.update_date << ")";
	}
}

struct Ifc_covering_type : IfcBuildingElementType {
	Ifc_covering_type_enum predefined_type;

	Ifc_covering_type() {
		entity = "Ifc_covering_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_covering_type &o) {
		return os << "Ifc_covering_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_crew_resource : IfcConstructionResource {
	Ifc_crew_resource_type_enum predefined_type;

	Ifc_crew_resource() {
		entity = "Ifc_crew_resource";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_crew_resource &o) {
		return os << "Ifc_crew_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identification << ", " << o.long_description << ", " << o.usage << ", " << o.base_costs << ", " << o.base_quantity << ", " << o.predefined_type << ")";
	}
}

struct Ifc_curtain_wall_type : IfcBuildingElementType {
	Ifc_curtain_wall_type_enum predefined_type;

	Ifc_curtain_wall_type() {
		entity = "Ifc_curtain_wall_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_curtain_wall_type &o) {
		return os << "Ifc_curtain_wall_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_cylindrical_surface : IfcElementarySurface {
	Ifc_positive_length_measure radius;

	Ifc_cylindrical_surface() {
		entity = "Ifc_cylindrical_surface";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cylindrical_surface &o) {
		return os << "Ifc_cylindrical_surface(" << o.position << ", " << o.radius << ")";
	}
}

struct Ifc_distribution_element_type : IfcElementType {
	Ifc_distribution_element_type() {
		entity = "Ifc_distribution_element_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_distribution_element_type &o) {
		return os << "Ifc_distribution_element_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ")";
	}
}

struct Ifc_distribution_flow_element_type : IfcDistributionElementType {
	virtual ~Ifc_distribution_flow_element_type() {}
}

struct Ifc_door_lining_properties : IfcPreDefinedPropertySet {
	Ifc_positive_length_measure lining_depth;
	Ifc_non_negative_length_measure lining_thickness;
	Ifc_positive_length_measure threshold_depth;
	Ifc_non_negative_length_measure threshold_thickness;
	Ifc_non_negative_length_measure transom_thickness;
	Ifc_length_measure transom_offset;
	Ifc_length_measure lining_offset;
	Ifc_length_measure threshold_offset;
	Ifc_positive_length_measure casing_thickness;
	Ifc_positive_length_measure casing_depth;
	Ifc_shape_aspect *shape_aspect_style;
	Ifc_length_measure lining_to_panel_offset_x;
	Ifc_length_measure lining_to_panel_offset_y;

	Ifc_door_lining_properties() {
		entity = "Ifc_door_lining_properties";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_door_lining_properties &o) {
		return os << "Ifc_door_lining_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.lining_depth << ", " << o.lining_thickness << ", " << o.threshold_depth << ", " << o.threshold_thickness << ", " << o.transom_thickness << ", " << o.transom_offset << ", " << o.lining_offset << ", " << o.threshold_offset << ", " << o.casing_thickness << ", " << o.casing_depth << ", " << o.shape_aspect_style << ", " << o.lining_to_panel_offset_x << ", " << o.lining_to_panel_offset_y << ")";
	}
}

struct Ifc_door_panel_properties : IfcPreDefinedPropertySet {
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
}

struct Ifc_door_type : IfcBuildingElementType {
	Ifc_door_type_enum predefined_type;
	Ifc_door_type_operation_enum operation_type;
	Ifc_boolean parameter_takes_precedence;
	Ifc_label user_defined_operation_type;

	Ifc_door_type() {
		entity = "Ifc_door_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_door_type &o) {
		return os << "Ifc_door_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ", " << o.operation_type << ", " << o.parameter_takes_precedence << ", " << o.user_defined_operation_type << ")";
	}
}

struct Ifc_draughting_pre_defined_colour : IfcPreDefinedColour {
	Ifc_draughting_pre_defined_colour() {
		entity = "Ifc_draughting_pre_defined_colour";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_draughting_pre_defined_colour &o) {
		return os << "Ifc_draughting_pre_defined_colour(" << o.name << ")";
	}
}

struct Ifc_draughting_pre_defined_curve_font : IfcPreDefinedCurveFont {
	Ifc_draughting_pre_defined_curve_font() {
		entity = "Ifc_draughting_pre_defined_curve_font";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_draughting_pre_defined_curve_font &o) {
		return os << "Ifc_draughting_pre_defined_curve_font(" << o.name << ")";
	}
}

struct Ifc_element : IfcProduct {
	Ifc_identifier tag;

	virtual ~Ifc_element() {}
}

struct Ifc_element_assembly : IfcElement {
	Ifc_assembly_place_enum assembly_place;
	Ifc_element_assembly_type_enum predefined_type;

	Ifc_element_assembly() {
		entity = "Ifc_element_assembly";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_element_assembly &o) {
		return os << "Ifc_element_assembly(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.assembly_place << ", " << o.predefined_type << ")";
	}
}

struct Ifc_element_assembly_type : IfcElementType {
	Ifc_element_assembly_type_enum predefined_type;

	Ifc_element_assembly_type() {
		entity = "Ifc_element_assembly_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_element_assembly_type &o) {
		return os << "Ifc_element_assembly_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_element_component : IfcElement {
	virtual ~Ifc_element_component() {}
}

struct Ifc_element_component_type : IfcElementType {
	virtual ~Ifc_element_component_type() {}
}

struct Ifc_ellipse : IfcConic {
	Ifc_positive_length_measure semi_axis_1;
	Ifc_positive_length_measure semi_axis_2;

	Ifc_ellipse() {
		entity = "Ifc_ellipse";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_ellipse &o) {
		return os << "Ifc_ellipse(" << o.position << ", " << o.semi_axis_1 << ", " << o.semi_axis_2 << ")";
	}
}

struct Ifc_energy_conversion_device_type : IfcDistributionFlowElementType {
	virtual ~Ifc_energy_conversion_device_type() {}
}

struct Ifc_engine_type : IfcEnergyConversionDeviceType {
	Ifc_engine_type_enum predefined_type;

	Ifc_engine_type() {
		entity = "Ifc_engine_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_engine_type &o) {
		return os << "Ifc_engine_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_evaporative_cooler_type : IfcEnergyConversionDeviceType {
	Ifc_evaporative_cooler_type_enum predefined_type;

	Ifc_evaporative_cooler_type() {
		entity = "Ifc_evaporative_cooler_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_evaporative_cooler_type &o) {
		return os << "Ifc_evaporative_cooler_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_evaporator_type : IfcEnergyConversionDeviceType {
	Ifc_evaporator_type_enum predefined_type;

	Ifc_evaporator_type() {
		entity = "Ifc_evaporator_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_evaporator_type &o) {
		return os << "Ifc_evaporator_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_event : IfcProcess {
	Ifc_event_type_enum predefined_type;
	Ifc_event_trigger_type_enum event_trigger_type;
	Ifc_label user_defined_event_trigger_type;
	Ifc_event_time *event_occurence_time;

	Ifc_event() {
		entity = "Ifc_event";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_event &o) {
		return os << "Ifc_event(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identification << ", " << o.long_description << ", " << o.predefined_type << ", " << o.event_trigger_type << ", " << o.user_defined_event_trigger_type << ", " << o.event_occurence_time << ")";
	}
}

struct Ifc_external_spatial_structure_element : IfcSpatialElement {
	virtual ~Ifc_external_spatial_structure_element() {}
}

struct Ifc_faceted_brep : IfcManifoldSolidBrep {
	Ifc_faceted_brep() {
		entity = "Ifc_faceted_brep";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_faceted_brep &o) {
		return os << "Ifc_faceted_brep(" << o.outer << ")";
	}
}

struct Ifc_faceted_brep_with_voids : IfcFacetedBrep {
	std::vector<Ifc_closed_shell *> voids;

	Ifc_faceted_brep_with_voids() {
		entity = "Ifc_faceted_brep_with_voids";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_faceted_brep_with_voids &o) {
		return os << "Ifc_faceted_brep_with_voids(" << o.outer << ", " << o.voids << ")";
	}
}

struct Ifc_fastener : IfcElementComponent {
	Ifc_fastener_type_enum predefined_type;

	Ifc_fastener() {
		entity = "Ifc_fastener";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_fastener &o) {
		return os << "Ifc_fastener(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_fastener_type : IfcElementComponentType {
	Ifc_fastener_type_enum predefined_type;

	Ifc_fastener_type() {
		entity = "Ifc_fastener_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_fastener_type &o) {
		return os << "Ifc_fastener_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_feature_element : IfcElement {
	virtual ~Ifc_feature_element() {}
}

struct Ifc_feature_element_addition : IfcFeatureElement {
	virtual ~Ifc_feature_element_addition() {}
}

struct Ifc_feature_element_subtraction : IfcFeatureElement {
	virtual ~Ifc_feature_element_subtraction() {}
}

struct Ifc_flow_controller_type : IfcDistributionFlowElementType {
	virtual ~Ifc_flow_controller_type() {}
}

struct Ifc_flow_fitting_type : IfcDistributionFlowElementType {
	virtual ~Ifc_flow_fitting_type() {}
}

struct Ifc_flow_meter_type : IfcFlowControllerType {
	Ifc_flow_meter_type_enum predefined_type;

	Ifc_flow_meter_type() {
		entity = "Ifc_flow_meter_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_meter_type &o) {
		return os << "Ifc_flow_meter_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_flow_moving_device_type : IfcDistributionFlowElementType {
	virtual ~Ifc_flow_moving_device_type() {}
}

struct Ifc_flow_segment_type : IfcDistributionFlowElementType {
	virtual ~Ifc_flow_segment_type() {}
}

struct Ifc_flow_storage_device_type : IfcDistributionFlowElementType {
	virtual ~Ifc_flow_storage_device_type() {}
}

struct Ifc_flow_terminal_type : IfcDistributionFlowElementType {
	virtual ~Ifc_flow_terminal_type() {}
}

struct Ifc_flow_treatment_device_type : IfcDistributionFlowElementType {
	virtual ~Ifc_flow_treatment_device_type() {}
}

struct Ifc_footing_type : IfcBuildingElementType {
	Ifc_footing_type_enum predefined_type;

	Ifc_footing_type() {
		entity = "Ifc_footing_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_footing_type &o) {
		return os << "Ifc_footing_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_furnishing_element : IfcElement {
	Ifc_furnishing_element() {
		entity = "Ifc_furnishing_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_furnishing_element &o) {
		return os << "Ifc_furnishing_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
	}
}

struct Ifc_furniture : IfcFurnishingElement {
	Ifc_furniture_type_enum predefined_type;

	Ifc_furniture() {
		entity = "Ifc_furniture";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_furniture &o) {
		return os << "Ifc_furniture(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_geographic_element : IfcElement {
	Ifc_geographic_element_type_enum predefined_type;

	Ifc_geographic_element() {
		entity = "Ifc_geographic_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_geographic_element &o) {
		return os << "Ifc_geographic_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_grid : IfcProduct {
	std::vector<Ifc_grid_axis *> u_axes;
	std::vector<Ifc_grid_axis *> v_axes;
	std::vector<Ifc_grid_axis *> w_axes;
	Ifc_grid_type_enum predefined_type;

	Ifc_grid() {
		entity = "Ifc_grid";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_grid &o) {
		return os << "Ifc_grid(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.u_axes << ", " << o.v_axes << ", " << o.w_axes << ", " << o.predefined_type << ")";
	}
}

struct Ifc_group : IfcObject {
	Ifc_group() {
		entity = "Ifc_group";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_group &o) {
		return os << "Ifc_group(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ")";
	}
}

struct Ifc_heat_exchanger_type : IfcEnergyConversionDeviceType {
	Ifc_heat_exchanger_type_enum predefined_type;

	Ifc_heat_exchanger_type() {
		entity = "Ifc_heat_exchanger_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_heat_exchanger_type &o) {
		return os << "Ifc_heat_exchanger_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_humidifier_type : IfcEnergyConversionDeviceType {
	Ifc_humidifier_type_enum predefined_type;

	Ifc_humidifier_type() {
		entity = "Ifc_humidifier_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_humidifier_type &o) {
		return os << "Ifc_humidifier_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_indexed_poly_curve : IfcBoundedCurve {
	Ifc_cartesian_point_list *points;
	std::vector<Ifc_segment_index_select *> segments;
	Ifc_boolean self_intersect;

	Ifc_indexed_poly_curve() {
		entity = "Ifc_indexed_poly_curve";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_indexed_poly_curve &o) {
		return os << "Ifc_indexed_poly_curve(" << o.points << ", " << o.segments << ", " << o.self_intersect << ")";
	}
}

struct Ifc_interceptor_type : IfcFlowTreatmentDeviceType {
	Ifc_interceptor_type_enum predefined_type;

	Ifc_interceptor_type() {
		entity = "Ifc_interceptor_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_interceptor_type &o) {
		return os << "Ifc_interceptor_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_inventory : IfcGroup {
	Ifc_inventory_type_enum predefined_type;
	Ifc_actor_select *jurisdiction;
	std::vector<Ifc_person *> responsible_persons;
	Ifc_date last_update_date;
	Ifc_cost_value *current_value;
	Ifc_cost_value *original_value;

	Ifc_inventory() {
		entity = "Ifc_inventory";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_inventory &o) {
		return os << "Ifc_inventory(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.predefined_type << ", " << o.jurisdiction << ", " << o.responsible_persons << ", " << o.last_update_date << ", " << o.current_value << ", " << o.original_value << ")";
	}
}

struct Ifc_junction_box_type : IfcFlowFittingType {
	Ifc_junction_box_type_enum predefined_type;

	Ifc_junction_box_type() {
		entity = "Ifc_junction_box_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_junction_box_type &o) {
		return os << "Ifc_junction_box_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_labor_resource : IfcConstructionResource {
	Ifc_labor_resource_type_enum predefined_type;

	Ifc_labor_resource() {
		entity = "Ifc_labor_resource";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_labor_resource &o) {
		return os << "Ifc_labor_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identification << ", " << o.long_description << ", " << o.usage << ", " << o.base_costs << ", " << o.base_quantity << ", " << o.predefined_type << ")";
	}
}

struct Ifc_lamp_type : IfcFlowTerminalType {
	Ifc_lamp_type_enum predefined_type;

	Ifc_lamp_type() {
		entity = "Ifc_lamp_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_lamp_type &o) {
		return os << "Ifc_lamp_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_light_fixture_type : IfcFlowTerminalType {
	Ifc_light_fixture_type_enum predefined_type;

	Ifc_light_fixture_type() {
		entity = "Ifc_light_fixture_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_light_fixture_type &o) {
		return os << "Ifc_light_fixture_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_mechanical_fastener : IfcElementComponent {
	Ifc_positive_length_measure nominal_diameter;
	Ifc_positive_length_measure nominal_length;
	Ifc_mechanical_fastener_type_enum predefined_type;

	Ifc_mechanical_fastener() {
		entity = "Ifc_mechanical_fastener";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_mechanical_fastener &o) {
		return os << "Ifc_mechanical_fastener(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.nominal_diameter << ", " << o.nominal_length << ", " << o.predefined_type << ")";
	}
}

struct Ifc_mechanical_fastener_type : IfcElementComponentType {
	Ifc_mechanical_fastener_type_enum predefined_type;
	Ifc_positive_length_measure nominal_diameter;
	Ifc_positive_length_measure nominal_length;

	Ifc_mechanical_fastener_type() {
		entity = "Ifc_mechanical_fastener_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_mechanical_fastener_type &o) {
		return os << "Ifc_mechanical_fastener_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ", " << o.nominal_diameter << ", " << o.nominal_length << ")";
	}
}

struct Ifc_medical_device_type : IfcFlowTerminalType {
	Ifc_medical_device_type_enum predefined_type;

	Ifc_medical_device_type() {
		entity = "Ifc_medical_device_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_medical_device_type &o) {
		return os << "Ifc_medical_device_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_member_type : IfcBuildingElementType {
	Ifc_member_type_enum predefined_type;

	Ifc_member_type() {
		entity = "Ifc_member_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_member_type &o) {
		return os << "Ifc_member_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_motor_connection_type : IfcEnergyConversionDeviceType {
	Ifc_motor_connection_type_enum predefined_type;

	Ifc_motor_connection_type() {
		entity = "Ifc_motor_connection_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_motor_connection_type &o) {
		return os << "Ifc_motor_connection_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_occupant : IfcActor {
	Ifc_occupant_type_enum predefined_type;

	Ifc_occupant() {
		entity = "Ifc_occupant";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_occupant &o) {
		return os << "Ifc_occupant(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.the_actor << ", " << o.predefined_type << ")";
	}
}

struct Ifc_opening_element : IfcFeatureElementSubtraction {
	Ifc_opening_element_type_enum predefined_type;

	Ifc_opening_element() {
		entity = "Ifc_opening_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_opening_element &o) {
		return os << "Ifc_opening_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_opening_standard_case : IfcOpeningElement {
	Ifc_opening_standard_case() {
		entity = "Ifc_opening_standard_case";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_opening_standard_case &o) {
		return os << "Ifc_opening_standard_case(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_outlet_type : IfcFlowTerminalType {
	Ifc_outlet_type_enum predefined_type;

	Ifc_outlet_type() {
		entity = "Ifc_outlet_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_outlet_type &o) {
		return os << "Ifc_outlet_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_performance_history : IfcControl {
	Ifc_label life_cycle_phase;
	Ifc_performance_history_type_enum predefined_type;

	Ifc_performance_history() {
		entity = "Ifc_performance_history";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_performance_history &o) {
		return os << "Ifc_performance_history(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identification << ", " << o.life_cycle_phase << ", " << o.predefined_type << ")";
	}
}

struct Ifc_permeable_covering_properties : IfcPreDefinedPropertySet {
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
}

struct Ifc_permit : IfcControl {
	Ifc_permit_type_enum predefined_type;
	Ifc_label status;
	Ifc_text long_description;

	Ifc_permit() {
		entity = "Ifc_permit";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_permit &o) {
		return os << "Ifc_permit(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identification << ", " << o.predefined_type << ", " << o.status << ", " << o.long_description << ")";
	}
}

struct Ifc_pile_type : IfcBuildingElementType {
	Ifc_pile_type_enum predefined_type;

	Ifc_pile_type() {
		entity = "Ifc_pile_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_pile_type &o) {
		return os << "Ifc_pile_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_pipe_fitting_type : IfcFlowFittingType {
	Ifc_pipe_fitting_type_enum predefined_type;

	Ifc_pipe_fitting_type() {
		entity = "Ifc_pipe_fitting_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_pipe_fitting_type &o) {
		return os << "Ifc_pipe_fitting_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_pipe_segment_type : IfcFlowSegmentType {
	Ifc_pipe_segment_type_enum predefined_type;

	Ifc_pipe_segment_type() {
		entity = "Ifc_pipe_segment_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_pipe_segment_type &o) {
		return os << "Ifc_pipe_segment_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_plate_type : IfcBuildingElementType {
	Ifc_plate_type_enum predefined_type;

	Ifc_plate_type() {
		entity = "Ifc_plate_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_plate_type &o) {
		return os << "Ifc_plate_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_polyline : IfcBoundedCurve {
	std::vector<Ifc_cartesian_point *> points;

	Ifc_polyline() {
		entity = "Ifc_polyline";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_polyline &o) {
		return os << "Ifc_polyline(" << o.points << ")";
	}
}

struct Ifc_port : IfcProduct {
	virtual ~Ifc_port() {}
}

struct Ifc_procedure : IfcProcess {
	Ifc_procedure_type_enum predefined_type;

	Ifc_procedure() {
		entity = "Ifc_procedure";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_procedure &o) {
		return os << "Ifc_procedure(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identification << ", " << o.long_description << ", " << o.predefined_type << ")";
	}
}

struct Ifc_project_order : IfcControl {
	Ifc_project_order_type_enum predefined_type;
	Ifc_label status;
	Ifc_text long_description;

	Ifc_project_order() {
		entity = "Ifc_project_order";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_project_order &o) {
		return os << "Ifc_project_order(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identification << ", " << o.predefined_type << ", " << o.status << ", " << o.long_description << ")";
	}
}

struct Ifc_projection_element : IfcFeatureElementAddition {
	Ifc_projection_element_type_enum predefined_type;

	Ifc_projection_element() {
		entity = "Ifc_projection_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_projection_element &o) {
		return os << "Ifc_projection_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_protective_device_type : IfcFlowControllerType {
	Ifc_protective_device_type_enum predefined_type;

	Ifc_protective_device_type() {
		entity = "Ifc_protective_device_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_protective_device_type &o) {
		return os << "Ifc_protective_device_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_pump_type : IfcFlowMovingDeviceType {
	Ifc_pump_type_enum predefined_type;

	Ifc_pump_type() {
		entity = "Ifc_pump_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_pump_type &o) {
		return os << "Ifc_pump_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_railing_type : IfcBuildingElementType {
	Ifc_railing_type_enum predefined_type;

	Ifc_railing_type() {
		entity = "Ifc_railing_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_railing_type &o) {
		return os << "Ifc_railing_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_ramp_flight_type : IfcBuildingElementType {
	Ifc_ramp_flight_type_enum predefined_type;

	Ifc_ramp_flight_type() {
		entity = "Ifc_ramp_flight_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_ramp_flight_type &o) {
		return os << "Ifc_ramp_flight_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_ramp_type : IfcBuildingElementType {
	Ifc_ramp_type_enum predefined_type;

	Ifc_ramp_type() {
		entity = "Ifc_ramp_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_ramp_type &o) {
		return os << "Ifc_ramp_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_rational_b_spline_surface_with_knots : IfcBSplineSurfaceWithKnots {
	std::vector<std::vector<Ifc_real>> weights_data;

	Ifc_rational_b_spline_surface_with_knots() {
		entity = "Ifc_rational_b_spline_surface_with_knots";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rational_b_spline_surface_with_knots &o) {
		return os << "Ifc_rational_b_spline_surface_with_knots(" << o.u_degree << ", " << o.v_degree << ", " << o.control_points_list << ", " << o.surface_form << ", " << o.u_closed << ", " << o.v_closed << ", " << o.self_intersect << ", " << o.u_multiplicities << ", " << o.v_multiplicities << ", " << o.u_knots << ", " << o.v_knots << ", " << o.knot_spec << ", " << o.weights_data << ")";
	}
}

struct Ifc_reinforcing_element : IfcElementComponent {
	Ifc_label steel_grade;

	virtual ~Ifc_reinforcing_element() {}
}

struct Ifc_reinforcing_element_type : IfcElementComponentType {
	virtual ~Ifc_reinforcing_element_type() {}
}

struct Ifc_reinforcing_mesh : IfcReinforcingElement {
	Ifc_positive_length_measure mesh_length;
	Ifc_positive_length_measure mesh_width;
	Ifc_positive_length_measure longitudinal_bar_nominal_diameter;
	Ifc_positive_length_measure transverse_bar_nominal_diameter;
	Ifc_area_measure longitudinal_bar_cross_section_area;
	Ifc_area_measure transverse_bar_cross_section_area;
	Ifc_positive_length_measure longitudinal_bar_spacing;
	Ifc_positive_length_measure transverse_bar_spacing;
	Ifc_reinforcing_mesh_type_enum predefined_type;

	Ifc_reinforcing_mesh() {
		entity = "Ifc_reinforcing_mesh";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_reinforcing_mesh &o) {
		return os << "Ifc_reinforcing_mesh(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.steel_grade << ", " << o.mesh_length << ", " << o.mesh_width << ", " << o.longitudinal_bar_nominal_diameter << ", " << o.transverse_bar_nominal_diameter << ", " << o.longitudinal_bar_cross_section_area << ", " << o.transverse_bar_cross_section_area << ", " << o.longitudinal_bar_spacing << ", " << o.transverse_bar_spacing << ", " << o.predefined_type << ")";
	}
}

struct Ifc_reinforcing_mesh_type : IfcReinforcingElementType {
	Ifc_reinforcing_mesh_type_enum predefined_type;
	Ifc_positive_length_measure mesh_length;
	Ifc_positive_length_measure mesh_width;
	Ifc_positive_length_measure longitudinal_bar_nominal_diameter;
	Ifc_positive_length_measure transverse_bar_nominal_diameter;
	Ifc_area_measure longitudinal_bar_cross_section_area;
	Ifc_area_measure transverse_bar_cross_section_area;
	Ifc_positive_length_measure longitudinal_bar_spacing;
	Ifc_positive_length_measure transverse_bar_spacing;
	Ifc_label bending_shape_code;
	std::vector<Ifc_bending_parameter_select *> bending_parameters;

	Ifc_reinforcing_mesh_type() {
		entity = "Ifc_reinforcing_mesh_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_reinforcing_mesh_type &o) {
		return os << "Ifc_reinforcing_mesh_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ", " << o.mesh_length << ", " << o.mesh_width << ", " << o.longitudinal_bar_nominal_diameter << ", " << o.transverse_bar_nominal_diameter << ", " << o.longitudinal_bar_cross_section_area << ", " << o.transverse_bar_cross_section_area << ", " << o.longitudinal_bar_spacing << ", " << o.transverse_bar_spacing << ", " << o.bending_shape_code << ", " << o.bending_parameters << ")";
	}
}

struct Ifc_rel_aggregates : IfcRelDecomposes {
	Ifc_object_definition *relating_object;
	std::vector<Ifc_object_definition *> related_objects;

	Ifc_rel_aggregates() {
		entity = "Ifc_rel_aggregates";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_aggregates &o) {
		return os << "Ifc_rel_aggregates(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_object << ", " << o.related_objects << ")";
	}
}

struct Ifc_roof_type : IfcBuildingElementType {
	Ifc_roof_type_enum predefined_type;

	Ifc_roof_type() {
		entity = "Ifc_roof_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_roof_type &o) {
		return os << "Ifc_roof_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_sanitary_terminal_type : IfcFlowTerminalType {
	Ifc_sanitary_terminal_type_enum predefined_type;

	Ifc_sanitary_terminal_type() {
		entity = "Ifc_sanitary_terminal_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_sanitary_terminal_type &o) {
		return os << "Ifc_sanitary_terminal_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_shading_device_type : IfcBuildingElementType {
	Ifc_shading_device_type_enum predefined_type;

	Ifc_shading_device_type() {
		entity = "Ifc_shading_device_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_shading_device_type &o) {
		return os << "Ifc_shading_device_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_site : IfcSpatialStructureElement {
	Ifc_compound_plane_angle_measure ref_latitude;
	Ifc_compound_plane_angle_measure ref_longitude;
	Ifc_length_measure ref_elevation;
	Ifc_label land_title_number;
	Ifc_postal_address *site_address;

	Ifc_site() {
		entity = "Ifc_site";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_site &o) {
		return os << "Ifc_site(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.long_name << ", " << o.composition_type << ", " << o.ref_latitude << ", " << o.ref_longitude << ", " << o.ref_elevation << ", " << o.land_title_number << ", " << o.site_address << ")";
	}
}

struct Ifc_slab_type : IfcBuildingElementType {
	Ifc_slab_type_enum predefined_type;

	Ifc_slab_type() {
		entity = "Ifc_slab_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_slab_type &o) {
		return os << "Ifc_slab_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_solar_device_type : IfcEnergyConversionDeviceType {
	Ifc_solar_device_type_enum predefined_type;

	Ifc_solar_device_type() {
		entity = "Ifc_solar_device_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_solar_device_type &o) {
		return os << "Ifc_solar_device_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_space : IfcSpatialStructureElement {
	Ifc_space_type_enum predefined_type;
	Ifc_length_measure elevation_with_flooring;

	Ifc_space() {
		entity = "Ifc_space";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_space &o) {
		return os << "Ifc_space(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.long_name << ", " << o.composition_type << ", " << o.predefined_type << ", " << o.elevation_with_flooring << ")";
	}
}

struct Ifc_space_heater_type : IfcFlowTerminalType {
	Ifc_space_heater_type_enum predefined_type;

	Ifc_space_heater_type() {
		entity = "Ifc_space_heater_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_space_heater_type &o) {
		return os << "Ifc_space_heater_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_space_type : IfcSpatialStructureElementType {
	Ifc_space_type_enum predefined_type;
	Ifc_label long_name;

	Ifc_space_type() {
		entity = "Ifc_space_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_space_type &o) {
		return os << "Ifc_space_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ", " << o.long_name << ")";
	}
}

struct Ifc_stack_terminal_type : IfcFlowTerminalType {
	Ifc_stack_terminal_type_enum predefined_type;

	Ifc_stack_terminal_type() {
		entity = "Ifc_stack_terminal_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_stack_terminal_type &o) {
		return os << "Ifc_stack_terminal_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_stair_flight_type : IfcBuildingElementType {
	Ifc_stair_flight_type_enum predefined_type;

	Ifc_stair_flight_type() {
		entity = "Ifc_stair_flight_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_stair_flight_type &o) {
		return os << "Ifc_stair_flight_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_stair_type : IfcBuildingElementType {
	Ifc_stair_type_enum predefined_type;

	Ifc_stair_type() {
		entity = "Ifc_stair_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_stair_type &o) {
		return os << "Ifc_stair_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_structural_action : IfcStructuralActivity {
	Ifc_boolean destabilizing_load;

	virtual ~Ifc_structural_action() {}
}

struct Ifc_structural_connection : IfcStructuralItem {
	Ifc_boundary_condition *applied_condition;

	virtual ~Ifc_structural_connection() {}
}

struct Ifc_structural_curve_action : IfcStructuralAction {
	Ifc_projected_or_true_length_enum projected_or_true;
	Ifc_structural_curve_activity_type_enum predefined_type;

	Ifc_structural_curve_action() {
		entity = "Ifc_structural_curve_action";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_curve_action &o) {
		return os << "Ifc_structural_curve_action(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_load << ", " << o.global_or_local << ", " << o.destabilizing_load << ", " << o.projected_or_true << ", " << o.predefined_type << ")";
	}
}

struct Ifc_structural_curve_connection : IfcStructuralConnection {
	Ifc_direction *axis;

	Ifc_structural_curve_connection() {
		entity = "Ifc_structural_curve_connection";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_curve_connection &o) {
		return os << "Ifc_structural_curve_connection(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_condition << ", " << o.axis << ")";
	}
}

struct Ifc_structural_curve_member : IfcStructuralMember {
	Ifc_structural_curve_member_type_enum predefined_type;
	Ifc_direction *axis;

	Ifc_structural_curve_member() {
		entity = "Ifc_structural_curve_member";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_curve_member &o) {
		return os << "Ifc_structural_curve_member(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.predefined_type << ", " << o.axis << ")";
	}
}

struct Ifc_structural_curve_member_varying : IfcStructuralCurveMember {
	Ifc_structural_curve_member_varying() {
		entity = "Ifc_structural_curve_member_varying";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_curve_member_varying &o) {
		return os << "Ifc_structural_curve_member_varying(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.predefined_type << ", " << o.axis << ")";
	}
}

struct Ifc_structural_curve_reaction : IfcStructuralReaction {
	Ifc_structural_curve_activity_type_enum predefined_type;

	Ifc_structural_curve_reaction() {
		entity = "Ifc_structural_curve_reaction";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_curve_reaction &o) {
		return os << "Ifc_structural_curve_reaction(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_load << ", " << o.global_or_local << ", " << o.predefined_type << ")";
	}
}

struct Ifc_structural_linear_action : IfcStructuralCurveAction {
	Ifc_structural_linear_action() {
		entity = "Ifc_structural_linear_action";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_linear_action &o) {
		return os << "Ifc_structural_linear_action(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_load << ", " << o.global_or_local << ", " << o.destabilizing_load << ", " << o.projected_or_true << ", " << o.predefined_type << ")";
	}
}

struct Ifc_structural_load_group : IfcGroup {
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
}

struct Ifc_structural_point_action : IfcStructuralAction {
	Ifc_structural_point_action() {
		entity = "Ifc_structural_point_action";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_point_action &o) {
		return os << "Ifc_structural_point_action(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_load << ", " << o.global_or_local << ", " << o.destabilizing_load << ")";
	}
}

struct Ifc_structural_point_connection : IfcStructuralConnection {
	Ifc_axis_2_placement_3_d *condition_coordinate_system;

	Ifc_structural_point_connection() {
		entity = "Ifc_structural_point_connection";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_point_connection &o) {
		return os << "Ifc_structural_point_connection(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_condition << ", " << o.condition_coordinate_system << ")";
	}
}

struct Ifc_structural_point_reaction : IfcStructuralReaction {
	Ifc_structural_point_reaction() {
		entity = "Ifc_structural_point_reaction";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_point_reaction &o) {
		return os << "Ifc_structural_point_reaction(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_load << ", " << o.global_or_local << ")";
	}
}

struct Ifc_structural_result_group : IfcGroup {
	Ifc_analysis_theory_type_enum theory_type;
	Ifc_structural_load_group *result_for_load_group;
	Ifc_boolean is_linear;

	Ifc_structural_result_group() {
		entity = "Ifc_structural_result_group";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_result_group &o) {
		return os << "Ifc_structural_result_group(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.theory_type << ", " << o.result_for_load_group << ", " << o.is_linear << ")";
	}
}

struct Ifc_structural_surface_action : IfcStructuralAction {
	Ifc_projected_or_true_length_enum projected_or_true;
	Ifc_structural_surface_activity_type_enum predefined_type;

	Ifc_structural_surface_action() {
		entity = "Ifc_structural_surface_action";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_surface_action &o) {
		return os << "Ifc_structural_surface_action(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_load << ", " << o.global_or_local << ", " << o.destabilizing_load << ", " << o.projected_or_true << ", " << o.predefined_type << ")";
	}
}

struct Ifc_structural_surface_connection : IfcStructuralConnection {
	Ifc_structural_surface_connection() {
		entity = "Ifc_structural_surface_connection";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_surface_connection &o) {
		return os << "Ifc_structural_surface_connection(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_condition << ")";
	}
}

struct Ifc_sub_contract_resource : IfcConstructionResource {
	Ifc_sub_contract_resource_type_enum predefined_type;

	Ifc_sub_contract_resource() {
		entity = "Ifc_sub_contract_resource";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_sub_contract_resource &o) {
		return os << "Ifc_sub_contract_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identification << ", " << o.long_description << ", " << o.usage << ", " << o.base_costs << ", " << o.base_quantity << ", " << o.predefined_type << ")";
	}
}

struct Ifc_surface_feature : IfcFeatureElement {
	Ifc_surface_feature_type_enum predefined_type;

	Ifc_surface_feature() {
		entity = "Ifc_surface_feature";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_feature &o) {
		return os << "Ifc_surface_feature(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_switching_device_type : IfcFlowControllerType {
	Ifc_switching_device_type_enum predefined_type;

	Ifc_switching_device_type() {
		entity = "Ifc_switching_device_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_switching_device_type &o) {
		return os << "Ifc_switching_device_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_system : IfcGroup {
	Ifc_system() {
		entity = "Ifc_system";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_system &o) {
		return os << "Ifc_system(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ")";
	}
}

struct Ifc_system_furniture_element : IfcFurnishingElement {
	Ifc_system_furniture_element_type_enum predefined_type;

	Ifc_system_furniture_element() {
		entity = "Ifc_system_furniture_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_system_furniture_element &o) {
		return os << "Ifc_system_furniture_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_tank_type : IfcFlowStorageDeviceType {
	Ifc_tank_type_enum predefined_type;

	Ifc_tank_type() {
		entity = "Ifc_tank_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_tank_type &o) {
		return os << "Ifc_tank_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_tendon : IfcReinforcingElement {
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
}

struct Ifc_tendon_anchor : IfcReinforcingElement {
	Ifc_tendon_anchor_type_enum predefined_type;

	Ifc_tendon_anchor() {
		entity = "Ifc_tendon_anchor";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_tendon_anchor &o) {
		return os << "Ifc_tendon_anchor(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.steel_grade << ", " << o.predefined_type << ")";
	}
}

struct Ifc_tendon_anchor_type : IfcReinforcingElementType {
	Ifc_tendon_anchor_type_enum predefined_type;

	Ifc_tendon_anchor_type() {
		entity = "Ifc_tendon_anchor_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_tendon_anchor_type &o) {
		return os << "Ifc_tendon_anchor_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_tendon_type : IfcReinforcingElementType {
	Ifc_tendon_type_enum predefined_type;
	Ifc_positive_length_measure nominal_diameter;
	Ifc_area_measure cross_section_area;
	Ifc_positive_length_measure sheeth_diameter;

	Ifc_tendon_type() {
		entity = "Ifc_tendon_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_tendon_type &o) {
		return os << "Ifc_tendon_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ", " << o.nominal_diameter << ", " << o.cross_section_area << ", " << o.sheeth_diameter << ")";
	}
}

struct Ifc_transformer_type : IfcEnergyConversionDeviceType {
	Ifc_transformer_type_enum predefined_type;

	Ifc_transformer_type() {
		entity = "Ifc_transformer_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_transformer_type &o) {
		return os << "Ifc_transformer_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_transport_element : IfcElement {
	Ifc_transport_element_type_enum predefined_type;

	Ifc_transport_element() {
		entity = "Ifc_transport_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_transport_element &o) {
		return os << "Ifc_transport_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_trimmed_curve : IfcBoundedCurve {
	Ifc_curve *basis_curve;
	std::vector<Ifc_trimming_select *> trim_1;
	std::vector<Ifc_trimming_select *> trim_2;
	Ifc_boolean sense_agreement;
	Ifc_trimming_preference master_representation;

	Ifc_trimmed_curve() {
		entity = "Ifc_trimmed_curve";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_trimmed_curve &o) {
		return os << "Ifc_trimmed_curve(" << o.basis_curve << ", " << o.trim_1 << ", " << o.trim_2 << ", " << o.sense_agreement << ", " << o.master_representation << ")";
	}
}

struct Ifc_tube_bundle_type : IfcEnergyConversionDeviceType {
	Ifc_tube_bundle_type_enum predefined_type;

	Ifc_tube_bundle_type() {
		entity = "Ifc_tube_bundle_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_tube_bundle_type &o) {
		return os << "Ifc_tube_bundle_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_unitary_equipment_type : IfcEnergyConversionDeviceType {
	Ifc_unitary_equipment_type_enum predefined_type;

	Ifc_unitary_equipment_type() {
		entity = "Ifc_unitary_equipment_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_unitary_equipment_type &o) {
		return os << "Ifc_unitary_equipment_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_valve_type : IfcFlowControllerType {
	Ifc_valve_type_enum predefined_type;

	Ifc_valve_type() {
		entity = "Ifc_valve_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_valve_type &o) {
		return os << "Ifc_valve_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_vibration_isolator : IfcElementComponent {
	Ifc_vibration_isolator_type_enum predefined_type;

	Ifc_vibration_isolator() {
		entity = "Ifc_vibration_isolator";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_vibration_isolator &o) {
		return os << "Ifc_vibration_isolator(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_vibration_isolator_type : IfcElementComponentType {
	Ifc_vibration_isolator_type_enum predefined_type;

	Ifc_vibration_isolator_type() {
		entity = "Ifc_vibration_isolator_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_vibration_isolator_type &o) {
		return os << "Ifc_vibration_isolator_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_virtual_element : IfcElement {
	Ifc_virtual_element() {
		entity = "Ifc_virtual_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_virtual_element &o) {
		return os << "Ifc_virtual_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
	}
}

struct Ifc_voiding_feature : IfcFeatureElementSubtraction {
	Ifc_voiding_feature_type_enum predefined_type;

	Ifc_voiding_feature() {
		entity = "Ifc_voiding_feature";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_voiding_feature &o) {
		return os << "Ifc_voiding_feature(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_wall_type : IfcBuildingElementType {
	Ifc_wall_type_enum predefined_type;

	Ifc_wall_type() {
		entity = "Ifc_wall_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_wall_type &o) {
		return os << "Ifc_wall_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_waste_terminal_type : IfcFlowTerminalType {
	Ifc_waste_terminal_type_enum predefined_type;

	Ifc_waste_terminal_type() {
		entity = "Ifc_waste_terminal_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_waste_terminal_type &o) {
		return os << "Ifc_waste_terminal_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_window_type : IfcBuildingElementType {
	Ifc_window_type_enum predefined_type;
	Ifc_window_type_partitioning_enum partitioning_type;
	Ifc_boolean parameter_takes_precedence;
	Ifc_label user_defined_partitioning_type;

	Ifc_window_type() {
		entity = "Ifc_window_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_window_type &o) {
		return os << "Ifc_window_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ", " << o.partitioning_type << ", " << o.parameter_takes_precedence << ", " << o.user_defined_partitioning_type << ")";
	}
}

struct Ifc_work_calendar : IfcControl {
	std::vector<Ifc_work_time *> working_times;
	std::vector<Ifc_work_time *> exception_times;
	Ifc_work_calendar_type_enum predefined_type;

	Ifc_work_calendar() {
		entity = "Ifc_work_calendar";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_work_calendar &o) {
		return os << "Ifc_work_calendar(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identification << ", " << o.working_times << ", " << o.exception_times << ", " << o.predefined_type << ")";
	}
}

struct Ifc_work_control : IfcControl {
	Ifc_date_time creation_date;
	std::vector<Ifc_person *> creators;
	Ifc_label purpose;
	Ifc_duration duration;
	Ifc_duration total_float;
	Ifc_date_time start_time;
	Ifc_date_time finish_time;

	virtual ~Ifc_work_control() {}
}

struct Ifc_work_plan : IfcWorkControl {
	Ifc_work_plan_type_enum predefined_type;

	Ifc_work_plan() {
		entity = "Ifc_work_plan";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_work_plan &o) {
		return os << "Ifc_work_plan(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identification << ", " << o.creation_date << ", " << o.creators << ", " << o.purpose << ", " << o.duration << ", " << o.total_float << ", " << o.start_time << ", " << o.finish_time << ", " << o.predefined_type << ")";
	}
}

struct Ifc_work_schedule : IfcWorkControl {
	Ifc_work_schedule_type_enum predefined_type;

	Ifc_work_schedule() {
		entity = "Ifc_work_schedule";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_work_schedule &o) {
		return os << "Ifc_work_schedule(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identification << ", " << o.creation_date << ", " << o.creators << ", " << o.purpose << ", " << o.duration << ", " << o.total_float << ", " << o.start_time << ", " << o.finish_time << ", " << o.predefined_type << ")";
	}
}

struct Ifc_zone : IfcSystem {
	Ifc_label long_name;

	Ifc_zone() {
		entity = "Ifc_zone";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_zone &o) {
		return os << "Ifc_zone(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.long_name << ")";
	}
}

struct Ifc_action_request : IfcControl {
	Ifc_action_request_type_enum predefined_type;
	Ifc_label status;
	Ifc_text long_description;

	Ifc_action_request() {
		entity = "Ifc_action_request";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_action_request &o) {
		return os << "Ifc_action_request(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identification << ", " << o.predefined_type << ", " << o.status << ", " << o.long_description << ")";
	}
}

struct Ifc_air_terminal_box_type : IfcFlowControllerType {
	Ifc_air_terminal_box_type_enum predefined_type;

	Ifc_air_terminal_box_type() {
		entity = "Ifc_air_terminal_box_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_air_terminal_box_type &o) {
		return os << "Ifc_air_terminal_box_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_air_terminal_type : IfcFlowTerminalType {
	Ifc_air_terminal_type_enum predefined_type;

	Ifc_air_terminal_type() {
		entity = "Ifc_air_terminal_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_air_terminal_type &o) {
		return os << "Ifc_air_terminal_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_air_to_air_heat_recovery_type : IfcEnergyConversionDeviceType {
	Ifc_air_to_air_heat_recovery_type_enum predefined_type;

	Ifc_air_to_air_heat_recovery_type() {
		entity = "Ifc_air_to_air_heat_recovery_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_air_to_air_heat_recovery_type &o) {
		return os << "Ifc_air_to_air_heat_recovery_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_asset : IfcGroup {
	Ifc_identifier identification;
	Ifc_cost_value *original_value;
	Ifc_cost_value *current_value;
	Ifc_cost_value *total_replacement_cost;
	Ifc_actor_select *owner;
	Ifc_actor_select *user;
	Ifc_person *responsible_person;
	Ifc_date incorporation_date;
	Ifc_cost_value *depreciated_value;

	Ifc_asset() {
		entity = "Ifc_asset";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_asset &o) {
		return os << "Ifc_asset(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identification << ", " << o.original_value << ", " << o.current_value << ", " << o.total_replacement_cost << ", " << o.owner << ", " << o.user << ", " << o.responsible_person << ", " << o.incorporation_date << ", " << o.depreciated_value << ")";
	}
}

struct Ifc_audio_visual_appliance_type : IfcFlowTerminalType {
	Ifc_audio_visual_appliance_type_enum predefined_type;

	Ifc_audio_visual_appliance_type() {
		entity = "Ifc_audio_visual_appliance_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_audio_visual_appliance_type &o) {
		return os << "Ifc_audio_visual_appliance_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_b_spline_curve : IfcBoundedCurve {
	Ifc_integer degree;
	std::vector<Ifc_cartesian_point *> control_points_list;
	Ifc_b_spline_curve_form curve_form;
	Ifc_logical closed_curve;
	Ifc_logical self_intersect;

	virtual ~Ifc_b_spline_curve() {}
}

struct Ifc_b_spline_curve_with_knots : IfcBSplineCurve {
	std::vector<Ifc_integer> knot_multiplicities;
	std::vector<Ifc_parameter_value> knots;
	Ifc_knot_type knot_spec;

	Ifc_b_spline_curve_with_knots() {
		entity = "Ifc_b_spline_curve_with_knots";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_b_spline_curve_with_knots &o) {
		return os << "Ifc_b_spline_curve_with_knots(" << o.degree << ", " << o.control_points_list << ", " << o.curve_form << ", " << o.closed_curve << ", " << o.self_intersect << ", " << o.knot_multiplicities << ", " << o.knots << ", " << o.knot_spec << ")";
	}
}

struct Ifc_beam_type : IfcBuildingElementType {
	Ifc_beam_type_enum predefined_type;

	Ifc_beam_type() {
		entity = "Ifc_beam_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_beam_type &o) {
		return os << "Ifc_beam_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_boiler_type : IfcEnergyConversionDeviceType {
	Ifc_boiler_type_enum predefined_type;

	Ifc_boiler_type() {
		entity = "Ifc_boiler_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_boiler_type &o) {
		return os << "Ifc_boiler_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_boundary_curve : IfcCompositeCurveOnSurface {
	Ifc_boundary_curve() {
		entity = "Ifc_boundary_curve";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_boundary_curve &o) {
		return os << "Ifc_boundary_curve(" << o.segments << ", " << o.self_intersect << ")";
	}
}

struct Ifc_building_element : IfcElement {
	virtual ~Ifc_building_element() {}
}

struct Ifc_building_element_part : IfcElementComponent {
	Ifc_building_element_part_type_enum predefined_type;

	Ifc_building_element_part() {
		entity = "Ifc_building_element_part";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_building_element_part &o) {
		return os << "Ifc_building_element_part(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_building_element_part_type : IfcElementComponentType {
	Ifc_building_element_part_type_enum predefined_type;

	Ifc_building_element_part_type() {
		entity = "Ifc_building_element_part_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_building_element_part_type &o) {
		return os << "Ifc_building_element_part_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_building_element_proxy : IfcBuildingElement {
	Ifc_building_element_proxy_type_enum predefined_type;

	Ifc_building_element_proxy() {
		entity = "Ifc_building_element_proxy";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_building_element_proxy &o) {
		return os << "Ifc_building_element_proxy(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_building_element_proxy_type : IfcBuildingElementType {
	Ifc_building_element_proxy_type_enum predefined_type;

	Ifc_building_element_proxy_type() {
		entity = "Ifc_building_element_proxy_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_building_element_proxy_type &o) {
		return os << "Ifc_building_element_proxy_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_building_system : IfcSystem {
	Ifc_building_system_type_enum predefined_type;
	Ifc_label long_name;

	Ifc_building_system() {
		entity = "Ifc_building_system";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_building_system &o) {
		return os << "Ifc_building_system(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.predefined_type << ", " << o.long_name << ")";
	}
}

struct Ifc_burner_type : IfcEnergyConversionDeviceType {
	Ifc_burner_type_enum predefined_type;

	Ifc_burner_type() {
		entity = "Ifc_burner_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_burner_type &o) {
		return os << "Ifc_burner_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_cable_carrier_fitting_type : IfcFlowFittingType {
	Ifc_cable_carrier_fitting_type_enum predefined_type;

	Ifc_cable_carrier_fitting_type() {
		entity = "Ifc_cable_carrier_fitting_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cable_carrier_fitting_type &o) {
		return os << "Ifc_cable_carrier_fitting_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_cable_carrier_segment_type : IfcFlowSegmentType {
	Ifc_cable_carrier_segment_type_enum predefined_type;

	Ifc_cable_carrier_segment_type() {
		entity = "Ifc_cable_carrier_segment_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cable_carrier_segment_type &o) {
		return os << "Ifc_cable_carrier_segment_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_cable_fitting_type : IfcFlowFittingType {
	Ifc_cable_fitting_type_enum predefined_type;

	Ifc_cable_fitting_type() {
		entity = "Ifc_cable_fitting_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cable_fitting_type &o) {
		return os << "Ifc_cable_fitting_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_cable_segment_type : IfcFlowSegmentType {
	Ifc_cable_segment_type_enum predefined_type;

	Ifc_cable_segment_type() {
		entity = "Ifc_cable_segment_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cable_segment_type &o) {
		return os << "Ifc_cable_segment_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_chiller_type : IfcEnergyConversionDeviceType {
	Ifc_chiller_type_enum predefined_type;

	Ifc_chiller_type() {
		entity = "Ifc_chiller_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_chiller_type &o) {
		return os << "Ifc_chiller_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_chimney : IfcBuildingElement {
	Ifc_chimney_type_enum predefined_type;

	Ifc_chimney() {
		entity = "Ifc_chimney";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_chimney &o) {
		return os << "Ifc_chimney(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_circle : IfcConic {
	Ifc_positive_length_measure radius;

	Ifc_circle() {
		entity = "Ifc_circle";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_circle &o) {
		return os << "Ifc_circle(" << o.position << ", " << o.radius << ")";
	}
}

struct Ifc_civil_element : IfcElement {
	Ifc_civil_element() {
		entity = "Ifc_civil_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_civil_element &o) {
		return os << "Ifc_civil_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
	}
}

struct Ifc_coil_type : IfcEnergyConversionDeviceType {
	Ifc_coil_type_enum predefined_type;

	Ifc_coil_type() {
		entity = "Ifc_coil_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_coil_type &o) {
		return os << "Ifc_coil_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_column : IfcBuildingElement {
	Ifc_column_type_enum predefined_type;

	Ifc_column() {
		entity = "Ifc_column";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_column &o) {
		return os << "Ifc_column(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_column_standard_case : IfcColumn {
	Ifc_column_standard_case() {
		entity = "Ifc_column_standard_case";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_column_standard_case &o) {
		return os << "Ifc_column_standard_case(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_communications_appliance_type : IfcFlowTerminalType {
	Ifc_communications_appliance_type_enum predefined_type;

	Ifc_communications_appliance_type() {
		entity = "Ifc_communications_appliance_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_communications_appliance_type &o) {
		return os << "Ifc_communications_appliance_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_compressor_type : IfcFlowMovingDeviceType {
	Ifc_compressor_type_enum predefined_type;

	Ifc_compressor_type() {
		entity = "Ifc_compressor_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_compressor_type &o) {
		return os << "Ifc_compressor_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_condenser_type : IfcEnergyConversionDeviceType {
	Ifc_condenser_type_enum predefined_type;

	Ifc_condenser_type() {
		entity = "Ifc_condenser_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_condenser_type &o) {
		return os << "Ifc_condenser_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_construction_equipment_resource : IfcConstructionResource {
	Ifc_construction_equipment_resource_type_enum predefined_type;

	Ifc_construction_equipment_resource() {
		entity = "Ifc_construction_equipment_resource";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_construction_equipment_resource &o) {
		return os << "Ifc_construction_equipment_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identification << ", " << o.long_description << ", " << o.usage << ", " << o.base_costs << ", " << o.base_quantity << ", " << o.predefined_type << ")";
	}
}

struct Ifc_construction_material_resource : IfcConstructionResource {
	Ifc_construction_material_resource_type_enum predefined_type;

	Ifc_construction_material_resource() {
		entity = "Ifc_construction_material_resource";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_construction_material_resource &o) {
		return os << "Ifc_construction_material_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identification << ", " << o.long_description << ", " << o.usage << ", " << o.base_costs << ", " << o.base_quantity << ", " << o.predefined_type << ")";
	}
}

struct Ifc_construction_product_resource : IfcConstructionResource {
	Ifc_construction_product_resource_type_enum predefined_type;

	Ifc_construction_product_resource() {
		entity = "Ifc_construction_product_resource";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_construction_product_resource &o) {
		return os << "Ifc_construction_product_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identification << ", " << o.long_description << ", " << o.usage << ", " << o.base_costs << ", " << o.base_quantity << ", " << o.predefined_type << ")";
	}
}

struct Ifc_cooled_beam_type : IfcEnergyConversionDeviceType {
	Ifc_cooled_beam_type_enum predefined_type;

	Ifc_cooled_beam_type() {
		entity = "Ifc_cooled_beam_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cooled_beam_type &o) {
		return os << "Ifc_cooled_beam_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_cooling_tower_type : IfcEnergyConversionDeviceType {
	Ifc_cooling_tower_type_enum predefined_type;

	Ifc_cooling_tower_type() {
		entity = "Ifc_cooling_tower_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cooling_tower_type &o) {
		return os << "Ifc_cooling_tower_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_covering : IfcBuildingElement {
	Ifc_covering_type_enum predefined_type;

	Ifc_covering() {
		entity = "Ifc_covering";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_covering &o) {
		return os << "Ifc_covering(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_curtain_wall : IfcBuildingElement {
	Ifc_curtain_wall_type_enum predefined_type;

	Ifc_curtain_wall() {
		entity = "Ifc_curtain_wall";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_curtain_wall &o) {
		return os << "Ifc_curtain_wall(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_damper_type : IfcFlowControllerType {
	Ifc_damper_type_enum predefined_type;

	Ifc_damper_type() {
		entity = "Ifc_damper_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_damper_type &o) {
		return os << "Ifc_damper_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_discrete_accessory : IfcElementComponent {
	Ifc_discrete_accessory_type_enum predefined_type;

	Ifc_discrete_accessory() {
		entity = "Ifc_discrete_accessory";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_discrete_accessory &o) {
		return os << "Ifc_discrete_accessory(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_discrete_accessory_type : IfcElementComponentType {
	Ifc_discrete_accessory_type_enum predefined_type;

	Ifc_discrete_accessory_type() {
		entity = "Ifc_discrete_accessory_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_discrete_accessory_type &o) {
		return os << "Ifc_discrete_accessory_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_distribution_chamber_element_type : IfcDistributionFlowElementType {
	Ifc_distribution_chamber_element_type_enum predefined_type;

	Ifc_distribution_chamber_element_type() {
		entity = "Ifc_distribution_chamber_element_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_distribution_chamber_element_type &o) {
		return os << "Ifc_distribution_chamber_element_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_distribution_control_element_type : IfcDistributionElementType {
	virtual ~Ifc_distribution_control_element_type() {}
}

struct Ifc_distribution_element : IfcElement {
	Ifc_distribution_element() {
		entity = "Ifc_distribution_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_distribution_element &o) {
		return os << "Ifc_distribution_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
	}
}

struct Ifc_distribution_flow_element : IfcDistributionElement {
	Ifc_distribution_flow_element() {
		entity = "Ifc_distribution_flow_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_distribution_flow_element &o) {
		return os << "Ifc_distribution_flow_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
	}
}

struct Ifc_distribution_port : IfcPort {
	Ifc_flow_direction_enum flow_direction;
	Ifc_distribution_port_type_enum predefined_type;
	Ifc_distribution_system_enum system_type;

	Ifc_distribution_port() {
		entity = "Ifc_distribution_port";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_distribution_port &o) {
		return os << "Ifc_distribution_port(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.flow_direction << ", " << o.predefined_type << ", " << o.system_type << ")";
	}
}

struct Ifc_distribution_system : IfcSystem {
	Ifc_label long_name;
	Ifc_distribution_system_enum predefined_type;

	Ifc_distribution_system() {
		entity = "Ifc_distribution_system";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_distribution_system &o) {
		return os << "Ifc_distribution_system(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.long_name << ", " << o.predefined_type << ")";
	}
}

struct Ifc_door : IfcBuildingElement {
	Ifc_positive_length_measure overall_height;
	Ifc_positive_length_measure overall_width;
	Ifc_door_type_enum predefined_type;
	Ifc_door_type_operation_enum operation_type;
	Ifc_label user_defined_operation_type;

	Ifc_door() {
		entity = "Ifc_door";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_door &o) {
		return os << "Ifc_door(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.overall_height << ", " << o.overall_width << ", " << o.predefined_type << ", " << o.operation_type << ", " << o.user_defined_operation_type << ")";
	}
}

struct Ifc_door_standard_case : IfcDoor {
	Ifc_door_standard_case() {
		entity = "Ifc_door_standard_case";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_door_standard_case &o) {
		return os << "Ifc_door_standard_case(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.overall_height << ", " << o.overall_width << ", " << o.predefined_type << ", " << o.operation_type << ", " << o.user_defined_operation_type << ")";
	}
}

struct Ifc_duct_fitting_type : IfcFlowFittingType {
	Ifc_duct_fitting_type_enum predefined_type;

	Ifc_duct_fitting_type() {
		entity = "Ifc_duct_fitting_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_duct_fitting_type &o) {
		return os << "Ifc_duct_fitting_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_duct_segment_type : IfcFlowSegmentType {
	Ifc_duct_segment_type_enum predefined_type;

	Ifc_duct_segment_type() {
		entity = "Ifc_duct_segment_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_duct_segment_type &o) {
		return os << "Ifc_duct_segment_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_duct_silencer_type : IfcFlowTreatmentDeviceType {
	Ifc_duct_silencer_type_enum predefined_type;

	Ifc_duct_silencer_type() {
		entity = "Ifc_duct_silencer_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_duct_silencer_type &o) {
		return os << "Ifc_duct_silencer_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_electric_appliance_type : IfcFlowTerminalType {
	Ifc_electric_appliance_type_enum predefined_type;

	Ifc_electric_appliance_type() {
		entity = "Ifc_electric_appliance_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_appliance_type &o) {
		return os << "Ifc_electric_appliance_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_electric_distribution_board_type : IfcFlowControllerType {
	Ifc_electric_distribution_board_type_enum predefined_type;

	Ifc_electric_distribution_board_type() {
		entity = "Ifc_electric_distribution_board_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_distribution_board_type &o) {
		return os << "Ifc_electric_distribution_board_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_electric_flow_storage_device_type : IfcFlowStorageDeviceType {
	Ifc_electric_flow_storage_device_type_enum predefined_type;

	Ifc_electric_flow_storage_device_type() {
		entity = "Ifc_electric_flow_storage_device_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_flow_storage_device_type &o) {
		return os << "Ifc_electric_flow_storage_device_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_electric_generator_type : IfcEnergyConversionDeviceType {
	Ifc_electric_generator_type_enum predefined_type;

	Ifc_electric_generator_type() {
		entity = "Ifc_electric_generator_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_generator_type &o) {
		return os << "Ifc_electric_generator_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_electric_motor_type : IfcEnergyConversionDeviceType {
	Ifc_electric_motor_type_enum predefined_type;

	Ifc_electric_motor_type() {
		entity = "Ifc_electric_motor_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_motor_type &o) {
		return os << "Ifc_electric_motor_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_electric_time_control_type : IfcFlowControllerType {
	Ifc_electric_time_control_type_enum predefined_type;

	Ifc_electric_time_control_type() {
		entity = "Ifc_electric_time_control_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_time_control_type &o) {
		return os << "Ifc_electric_time_control_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_energy_conversion_device : IfcDistributionFlowElement {
	Ifc_energy_conversion_device() {
		entity = "Ifc_energy_conversion_device";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_energy_conversion_device &o) {
		return os << "Ifc_energy_conversion_device(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
	}
}

struct Ifc_engine : IfcEnergyConversionDevice {
	Ifc_engine_type_enum predefined_type;

	Ifc_engine() {
		entity = "Ifc_engine";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_engine &o) {
		return os << "Ifc_engine(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_evaporative_cooler : IfcEnergyConversionDevice {
	Ifc_evaporative_cooler_type_enum predefined_type;

	Ifc_evaporative_cooler() {
		entity = "Ifc_evaporative_cooler";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_evaporative_cooler &o) {
		return os << "Ifc_evaporative_cooler(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_evaporator : IfcEnergyConversionDevice {
	Ifc_evaporator_type_enum predefined_type;

	Ifc_evaporator() {
		entity = "Ifc_evaporator";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_evaporator &o) {
		return os << "Ifc_evaporator(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_external_spatial_element : IfcExternalSpatialStructureElement {
	Ifc_external_spatial_element_type_enum predefined_type;

	Ifc_external_spatial_element() {
		entity = "Ifc_external_spatial_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_external_spatial_element &o) {
		return os << "Ifc_external_spatial_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.long_name << ", " << o.predefined_type << ")";
	}
}

struct Ifc_fan_type : IfcFlowMovingDeviceType {
	Ifc_fan_type_enum predefined_type;

	Ifc_fan_type() {
		entity = "Ifc_fan_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_fan_type &o) {
		return os << "Ifc_fan_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_filter_type : IfcFlowTreatmentDeviceType {
	Ifc_filter_type_enum predefined_type;

	Ifc_filter_type() {
		entity = "Ifc_filter_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_filter_type &o) {
		return os << "Ifc_filter_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_fire_suppression_terminal_type : IfcFlowTerminalType {
	Ifc_fire_suppression_terminal_type_enum predefined_type;

	Ifc_fire_suppression_terminal_type() {
		entity = "Ifc_fire_suppression_terminal_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_fire_suppression_terminal_type &o) {
		return os << "Ifc_fire_suppression_terminal_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_flow_controller : IfcDistributionFlowElement {
	Ifc_flow_controller() {
		entity = "Ifc_flow_controller";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_controller &o) {
		return os << "Ifc_flow_controller(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
	}
}

struct Ifc_flow_fitting : IfcDistributionFlowElement {
	Ifc_flow_fitting() {
		entity = "Ifc_flow_fitting";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_fitting &o) {
		return os << "Ifc_flow_fitting(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
	}
}

struct Ifc_flow_instrument_type : IfcDistributionControlElementType {
	Ifc_flow_instrument_type_enum predefined_type;

	Ifc_flow_instrument_type() {
		entity = "Ifc_flow_instrument_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_instrument_type &o) {
		return os << "Ifc_flow_instrument_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_flow_meter : IfcFlowController {
	Ifc_flow_meter_type_enum predefined_type;

	Ifc_flow_meter() {
		entity = "Ifc_flow_meter";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_meter &o) {
		return os << "Ifc_flow_meter(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_flow_moving_device : IfcDistributionFlowElement {
	Ifc_flow_moving_device() {
		entity = "Ifc_flow_moving_device";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_moving_device &o) {
		return os << "Ifc_flow_moving_device(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
	}
}

struct Ifc_flow_segment : IfcDistributionFlowElement {
	Ifc_flow_segment() {
		entity = "Ifc_flow_segment";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_segment &o) {
		return os << "Ifc_flow_segment(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
	}
}

struct Ifc_flow_storage_device : IfcDistributionFlowElement {
	Ifc_flow_storage_device() {
		entity = "Ifc_flow_storage_device";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_storage_device &o) {
		return os << "Ifc_flow_storage_device(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
	}
}

struct Ifc_flow_terminal : IfcDistributionFlowElement {
	Ifc_flow_terminal() {
		entity = "Ifc_flow_terminal";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_terminal &o) {
		return os << "Ifc_flow_terminal(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
	}
}

struct Ifc_flow_treatment_device : IfcDistributionFlowElement {
	Ifc_flow_treatment_device() {
		entity = "Ifc_flow_treatment_device";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_treatment_device &o) {
		return os << "Ifc_flow_treatment_device(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
	}
}

struct Ifc_footing : IfcBuildingElement {
	Ifc_footing_type_enum predefined_type;

	Ifc_footing() {
		entity = "Ifc_footing";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_footing &o) {
		return os << "Ifc_footing(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_heat_exchanger : IfcEnergyConversionDevice {
	Ifc_heat_exchanger_type_enum predefined_type;

	Ifc_heat_exchanger() {
		entity = "Ifc_heat_exchanger";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_heat_exchanger &o) {
		return os << "Ifc_heat_exchanger(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_humidifier : IfcEnergyConversionDevice {
	Ifc_humidifier_type_enum predefined_type;

	Ifc_humidifier() {
		entity = "Ifc_humidifier";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_humidifier &o) {
		return os << "Ifc_humidifier(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_interceptor : IfcFlowTreatmentDevice {
	Ifc_interceptor_type_enum predefined_type;

	Ifc_interceptor() {
		entity = "Ifc_interceptor";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_interceptor &o) {
		return os << "Ifc_interceptor(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_junction_box : IfcFlowFitting {
	Ifc_junction_box_type_enum predefined_type;

	Ifc_junction_box() {
		entity = "Ifc_junction_box";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_junction_box &o) {
		return os << "Ifc_junction_box(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_lamp : IfcFlowTerminal {
	Ifc_lamp_type_enum predefined_type;

	Ifc_lamp() {
		entity = "Ifc_lamp";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_lamp &o) {
		return os << "Ifc_lamp(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_light_fixture : IfcFlowTerminal {
	Ifc_light_fixture_type_enum predefined_type;

	Ifc_light_fixture() {
		entity = "Ifc_light_fixture";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_light_fixture &o) {
		return os << "Ifc_light_fixture(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_medical_device : IfcFlowTerminal {
	Ifc_medical_device_type_enum predefined_type;

	Ifc_medical_device() {
		entity = "Ifc_medical_device";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_medical_device &o) {
		return os << "Ifc_medical_device(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_member : IfcBuildingElement {
	Ifc_member_type_enum predefined_type;

	Ifc_member() {
		entity = "Ifc_member";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_member &o) {
		return os << "Ifc_member(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_member_standard_case : IfcMember {
	Ifc_member_standard_case() {
		entity = "Ifc_member_standard_case";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_member_standard_case &o) {
		return os << "Ifc_member_standard_case(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_motor_connection : IfcEnergyConversionDevice {
	Ifc_motor_connection_type_enum predefined_type;

	Ifc_motor_connection() {
		entity = "Ifc_motor_connection";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_motor_connection &o) {
		return os << "Ifc_motor_connection(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_outer_boundary_curve : IfcBoundaryCurve {
	Ifc_outer_boundary_curve() {
		entity = "Ifc_outer_boundary_curve";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_outer_boundary_curve &o) {
		return os << "Ifc_outer_boundary_curve(" << o.segments << ", " << o.self_intersect << ")";
	}
}

struct Ifc_outlet : IfcFlowTerminal {
	Ifc_outlet_type_enum predefined_type;

	Ifc_outlet() {
		entity = "Ifc_outlet";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_outlet &o) {
		return os << "Ifc_outlet(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_pile : IfcBuildingElement {
	Ifc_pile_type_enum predefined_type;
	Ifc_pile_construction_enum construction_type;

	Ifc_pile() {
		entity = "Ifc_pile";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_pile &o) {
		return os << "Ifc_pile(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ", " << o.construction_type << ")";
	}
}

struct Ifc_pipe_fitting : IfcFlowFitting {
	Ifc_pipe_fitting_type_enum predefined_type;

	Ifc_pipe_fitting() {
		entity = "Ifc_pipe_fitting";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_pipe_fitting &o) {
		return os << "Ifc_pipe_fitting(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_pipe_segment : IfcFlowSegment {
	Ifc_pipe_segment_type_enum predefined_type;

	Ifc_pipe_segment() {
		entity = "Ifc_pipe_segment";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_pipe_segment &o) {
		return os << "Ifc_pipe_segment(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_plate : IfcBuildingElement {
	Ifc_plate_type_enum predefined_type;

	Ifc_plate() {
		entity = "Ifc_plate";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_plate &o) {
		return os << "Ifc_plate(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_plate_standard_case : IfcPlate {
	Ifc_plate_standard_case() {
		entity = "Ifc_plate_standard_case";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_plate_standard_case &o) {
		return os << "Ifc_plate_standard_case(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_protective_device : IfcFlowController {
	Ifc_protective_device_type_enum predefined_type;

	Ifc_protective_device() {
		entity = "Ifc_protective_device";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_protective_device &o) {
		return os << "Ifc_protective_device(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_protective_device_tripping_unit_type : IfcDistributionControlElementType {
	Ifc_protective_device_tripping_unit_type_enum predefined_type;

	Ifc_protective_device_tripping_unit_type() {
		entity = "Ifc_protective_device_tripping_unit_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_protective_device_tripping_unit_type &o) {
		return os << "Ifc_protective_device_tripping_unit_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_pump : IfcFlowMovingDevice {
	Ifc_pump_type_enum predefined_type;

	Ifc_pump() {
		entity = "Ifc_pump";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_pump &o) {
		return os << "Ifc_pump(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_railing : IfcBuildingElement {
	Ifc_railing_type_enum predefined_type;

	Ifc_railing() {
		entity = "Ifc_railing";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_railing &o) {
		return os << "Ifc_railing(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_ramp : IfcBuildingElement {
	Ifc_ramp_type_enum predefined_type;

	Ifc_ramp() {
		entity = "Ifc_ramp";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_ramp &o) {
		return os << "Ifc_ramp(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_ramp_flight : IfcBuildingElement {
	Ifc_ramp_flight_type_enum predefined_type;

	Ifc_ramp_flight() {
		entity = "Ifc_ramp_flight";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_ramp_flight &o) {
		return os << "Ifc_ramp_flight(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_rational_b_spline_curve_with_knots : IfcBSplineCurveWithKnots {
	std::vector<Ifc_real> weights_data;

	Ifc_rational_b_spline_curve_with_knots() {
		entity = "Ifc_rational_b_spline_curve_with_knots";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rational_b_spline_curve_with_knots &o) {
		return os << "Ifc_rational_b_spline_curve_with_knots(" << o.degree << ", " << o.control_points_list << ", " << o.curve_form << ", " << o.closed_curve << ", " << o.self_intersect << ", " << o.knot_multiplicities << ", " << o.knots << ", " << o.knot_spec << ", " << o.weights_data << ")";
	}
}

struct Ifc_reinforcing_bar : IfcReinforcingElement {
	Ifc_positive_length_measure nominal_diameter;
	Ifc_area_measure cross_section_area;
	Ifc_positive_length_measure bar_length;
	Ifc_reinforcing_bar_type_enum predefined_type;
	Ifc_reinforcing_bar_surface_enum bar_surface;

	Ifc_reinforcing_bar() {
		entity = "Ifc_reinforcing_bar";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_reinforcing_bar &o) {
		return os << "Ifc_reinforcing_bar(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.steel_grade << ", " << o.nominal_diameter << ", " << o.cross_section_area << ", " << o.bar_length << ", " << o.predefined_type << ", " << o.bar_surface << ")";
	}
}

struct Ifc_reinforcing_bar_type : IfcReinforcingElementType {
	Ifc_reinforcing_bar_type_enum predefined_type;
	Ifc_positive_length_measure nominal_diameter;
	Ifc_area_measure cross_section_area;
	Ifc_positive_length_measure bar_length;
	Ifc_reinforcing_bar_surface_enum bar_surface;
	Ifc_label bending_shape_code;
	std::vector<Ifc_bending_parameter_select *> bending_parameters;

	Ifc_reinforcing_bar_type() {
		entity = "Ifc_reinforcing_bar_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_reinforcing_bar_type &o) {
		return os << "Ifc_reinforcing_bar_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ", " << o.nominal_diameter << ", " << o.cross_section_area << ", " << o.bar_length << ", " << o.bar_surface << ", " << o.bending_shape_code << ", " << o.bending_parameters << ")";
	}
}

struct Ifc_roof : IfcBuildingElement {
	Ifc_roof_type_enum predefined_type;

	Ifc_roof() {
		entity = "Ifc_roof";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_roof &o) {
		return os << "Ifc_roof(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_sanitary_terminal : IfcFlowTerminal {
	Ifc_sanitary_terminal_type_enum predefined_type;

	Ifc_sanitary_terminal() {
		entity = "Ifc_sanitary_terminal";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_sanitary_terminal &o) {
		return os << "Ifc_sanitary_terminal(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_sensor_type : IfcDistributionControlElementType {
	Ifc_sensor_type_enum predefined_type;

	Ifc_sensor_type() {
		entity = "Ifc_sensor_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_sensor_type &o) {
		return os << "Ifc_sensor_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_shading_device : IfcBuildingElement {
	Ifc_shading_device_type_enum predefined_type;

	Ifc_shading_device() {
		entity = "Ifc_shading_device";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_shading_device &o) {
		return os << "Ifc_shading_device(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_slab : IfcBuildingElement {
	Ifc_slab_type_enum predefined_type;

	Ifc_slab() {
		entity = "Ifc_slab";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_slab &o) {
		return os << "Ifc_slab(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_slab_elemented_case : IfcSlab {
	Ifc_slab_elemented_case() {
		entity = "Ifc_slab_elemented_case";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_slab_elemented_case &o) {
		return os << "Ifc_slab_elemented_case(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_slab_standard_case : IfcSlab {
	Ifc_slab_standard_case() {
		entity = "Ifc_slab_standard_case";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_slab_standard_case &o) {
		return os << "Ifc_slab_standard_case(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_solar_device : IfcEnergyConversionDevice {
	Ifc_solar_device_type_enum predefined_type;

	Ifc_solar_device() {
		entity = "Ifc_solar_device";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_solar_device &o) {
		return os << "Ifc_solar_device(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_space_heater : IfcFlowTerminal {
	Ifc_space_heater_type_enum predefined_type;

	Ifc_space_heater() {
		entity = "Ifc_space_heater";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_space_heater &o) {
		return os << "Ifc_space_heater(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_stack_terminal : IfcFlowTerminal {
	Ifc_stack_terminal_type_enum predefined_type;

	Ifc_stack_terminal() {
		entity = "Ifc_stack_terminal";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_stack_terminal &o) {
		return os << "Ifc_stack_terminal(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_stair : IfcBuildingElement {
	Ifc_stair_type_enum predefined_type;

	Ifc_stair() {
		entity = "Ifc_stair";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_stair &o) {
		return os << "Ifc_stair(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_stair_flight : IfcBuildingElement {
	Ifc_integer number_of_risers;
	Ifc_integer number_of_treads;
	Ifc_positive_length_measure riser_height;
	Ifc_positive_length_measure tread_length;
	Ifc_stair_flight_type_enum predefined_type;

	Ifc_stair_flight() {
		entity = "Ifc_stair_flight";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_stair_flight &o) {
		return os << "Ifc_stair_flight(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.number_of_risers << ", " << o.number_of_treads << ", " << o.riser_height << ", " << o.tread_length << ", " << o.predefined_type << ")";
	}
}

struct Ifc_structural_analysis_model : IfcSystem {
	Ifc_analysis_model_type_enum predefined_type;
	Ifc_axis_2_placement_3_d *orientation_of_2_d_plane;
	std::vector<Ifc_structural_load_group *> loaded_by;
	std::vector<Ifc_structural_result_group *> has_results;
	Ifc_object_placement *shared_placement;

	Ifc_structural_analysis_model() {
		entity = "Ifc_structural_analysis_model";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_analysis_model &o) {
		return os << "Ifc_structural_analysis_model(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.predefined_type << ", " << o.orientation_of_2_d_plane << ", " << o.loaded_by << ", " << o.has_results << ", " << o.shared_placement << ")";
	}
}

struct Ifc_structural_load_case : IfcStructuralLoadGroup {
	std::vector<Ifc_ratio_measure> self_weight_coefficients;

	Ifc_structural_load_case() {
		entity = "Ifc_structural_load_case";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_load_case &o) {
		return os << "Ifc_structural_load_case(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.predefined_type << ", " << o.action_type << ", " << o.action_source << ", " << o.coefficient << ", " << o.purpose << ", " << o.self_weight_coefficients << ")";
	}
}

struct Ifc_structural_planar_action : IfcStructuralSurfaceAction {
	Ifc_structural_planar_action() {
		entity = "Ifc_structural_planar_action";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_structural_planar_action &o) {
		return os << "Ifc_structural_planar_action(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.applied_load << ", " << o.global_or_local << ", " << o.destabilizing_load << ", " << o.projected_or_true << ", " << o.predefined_type << ")";
	}
}

struct Ifc_switching_device : IfcFlowController {
	Ifc_switching_device_type_enum predefined_type;

	Ifc_switching_device() {
		entity = "Ifc_switching_device";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_switching_device &o) {
		return os << "Ifc_switching_device(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_tank : IfcFlowStorageDevice {
	Ifc_tank_type_enum predefined_type;

	Ifc_tank() {
		entity = "Ifc_tank";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_tank &o) {
		return os << "Ifc_tank(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_transformer : IfcEnergyConversionDevice {
	Ifc_transformer_type_enum predefined_type;

	Ifc_transformer() {
		entity = "Ifc_transformer";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_transformer &o) {
		return os << "Ifc_transformer(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_tube_bundle : IfcEnergyConversionDevice {
	Ifc_tube_bundle_type_enum predefined_type;

	Ifc_tube_bundle() {
		entity = "Ifc_tube_bundle";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_tube_bundle &o) {
		return os << "Ifc_tube_bundle(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_unitary_control_element_type : IfcDistributionControlElementType {
	Ifc_unitary_control_element_type_enum predefined_type;

	Ifc_unitary_control_element_type() {
		entity = "Ifc_unitary_control_element_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_unitary_control_element_type &o) {
		return os << "Ifc_unitary_control_element_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_unitary_equipment : IfcEnergyConversionDevice {
	Ifc_unitary_equipment_type_enum predefined_type;

	Ifc_unitary_equipment() {
		entity = "Ifc_unitary_equipment";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_unitary_equipment &o) {
		return os << "Ifc_unitary_equipment(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_valve : IfcFlowController {
	Ifc_valve_type_enum predefined_type;

	Ifc_valve() {
		entity = "Ifc_valve";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_valve &o) {
		return os << "Ifc_valve(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_wall : IfcBuildingElement {
	Ifc_wall_type_enum predefined_type;

	Ifc_wall() {
		entity = "Ifc_wall";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_wall &o) {
		return os << "Ifc_wall(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_wall_elemented_case : IfcWall {
	Ifc_wall_elemented_case() {
		entity = "Ifc_wall_elemented_case";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_wall_elemented_case &o) {
		return os << "Ifc_wall_elemented_case(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_wall_standard_case : IfcWall {
	Ifc_wall_standard_case() {
		entity = "Ifc_wall_standard_case";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_wall_standard_case &o) {
		return os << "Ifc_wall_standard_case(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_waste_terminal : IfcFlowTerminal {
	Ifc_waste_terminal_type_enum predefined_type;

	Ifc_waste_terminal() {
		entity = "Ifc_waste_terminal";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_waste_terminal &o) {
		return os << "Ifc_waste_terminal(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_window : IfcBuildingElement {
	Ifc_positive_length_measure overall_height;
	Ifc_positive_length_measure overall_width;
	Ifc_window_type_enum predefined_type;
	Ifc_window_type_partitioning_enum partitioning_type;
	Ifc_label user_defined_partitioning_type;

	Ifc_window() {
		entity = "Ifc_window";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_window &o) {
		return os << "Ifc_window(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.overall_height << ", " << o.overall_width << ", " << o.predefined_type << ", " << o.partitioning_type << ", " << o.user_defined_partitioning_type << ")";
	}
}

struct Ifc_window_standard_case : IfcWindow {
	Ifc_window_standard_case() {
		entity = "Ifc_window_standard_case";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_window_standard_case &o) {
		return os << "Ifc_window_standard_case(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.overall_height << ", " << o.overall_width << ", " << o.predefined_type << ", " << o.partitioning_type << ", " << o.user_defined_partitioning_type << ")";
	}
}

struct Ifc_actuator_type : IfcDistributionControlElementType {
	Ifc_actuator_type_enum predefined_type;

	Ifc_actuator_type() {
		entity = "Ifc_actuator_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_actuator_type &o) {
		return os << "Ifc_actuator_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_air_terminal : IfcFlowTerminal {
	Ifc_air_terminal_type_enum predefined_type;

	Ifc_air_terminal() {
		entity = "Ifc_air_terminal";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_air_terminal &o) {
		return os << "Ifc_air_terminal(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_air_terminal_box : IfcFlowController {
	Ifc_air_terminal_box_type_enum predefined_type;

	Ifc_air_terminal_box() {
		entity = "Ifc_air_terminal_box";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_air_terminal_box &o) {
		return os << "Ifc_air_terminal_box(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_air_to_air_heat_recovery : IfcEnergyConversionDevice {
	Ifc_air_to_air_heat_recovery_type_enum predefined_type;

	Ifc_air_to_air_heat_recovery() {
		entity = "Ifc_air_to_air_heat_recovery";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_air_to_air_heat_recovery &o) {
		return os << "Ifc_air_to_air_heat_recovery(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_alarm_type : IfcDistributionControlElementType {
	Ifc_alarm_type_enum predefined_type;

	Ifc_alarm_type() {
		entity = "Ifc_alarm_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_alarm_type &o) {
		return os << "Ifc_alarm_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_audio_visual_appliance : IfcFlowTerminal {
	Ifc_audio_visual_appliance_type_enum predefined_type;

	Ifc_audio_visual_appliance() {
		entity = "Ifc_audio_visual_appliance";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_audio_visual_appliance &o) {
		return os << "Ifc_audio_visual_appliance(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_beam : IfcBuildingElement {
	Ifc_beam_type_enum predefined_type;

	Ifc_beam() {
		entity = "Ifc_beam";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_beam &o) {
		return os << "Ifc_beam(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_beam_standard_case : IfcBeam {
	Ifc_beam_standard_case() {
		entity = "Ifc_beam_standard_case";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_beam_standard_case &o) {
		return os << "Ifc_beam_standard_case(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_boiler : IfcEnergyConversionDevice {
	Ifc_boiler_type_enum predefined_type;

	Ifc_boiler() {
		entity = "Ifc_boiler";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_boiler &o) {
		return os << "Ifc_boiler(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_burner : IfcEnergyConversionDevice {
	Ifc_burner_type_enum predefined_type;

	Ifc_burner() {
		entity = "Ifc_burner";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_burner &o) {
		return os << "Ifc_burner(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_cable_carrier_fitting : IfcFlowFitting {
	Ifc_cable_carrier_fitting_type_enum predefined_type;

	Ifc_cable_carrier_fitting() {
		entity = "Ifc_cable_carrier_fitting";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cable_carrier_fitting &o) {
		return os << "Ifc_cable_carrier_fitting(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_cable_carrier_segment : IfcFlowSegment {
	Ifc_cable_carrier_segment_type_enum predefined_type;

	Ifc_cable_carrier_segment() {
		entity = "Ifc_cable_carrier_segment";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cable_carrier_segment &o) {
		return os << "Ifc_cable_carrier_segment(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_cable_fitting : IfcFlowFitting {
	Ifc_cable_fitting_type_enum predefined_type;

	Ifc_cable_fitting() {
		entity = "Ifc_cable_fitting";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cable_fitting &o) {
		return os << "Ifc_cable_fitting(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_cable_segment : IfcFlowSegment {
	Ifc_cable_segment_type_enum predefined_type;

	Ifc_cable_segment() {
		entity = "Ifc_cable_segment";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cable_segment &o) {
		return os << "Ifc_cable_segment(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_chiller : IfcEnergyConversionDevice {
	Ifc_chiller_type_enum predefined_type;

	Ifc_chiller() {
		entity = "Ifc_chiller";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_chiller &o) {
		return os << "Ifc_chiller(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_coil : IfcEnergyConversionDevice {
	Ifc_coil_type_enum predefined_type;

	Ifc_coil() {
		entity = "Ifc_coil";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_coil &o) {
		return os << "Ifc_coil(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_communications_appliance : IfcFlowTerminal {
	Ifc_communications_appliance_type_enum predefined_type;

	Ifc_communications_appliance() {
		entity = "Ifc_communications_appliance";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_communications_appliance &o) {
		return os << "Ifc_communications_appliance(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_compressor : IfcFlowMovingDevice {
	Ifc_compressor_type_enum predefined_type;

	Ifc_compressor() {
		entity = "Ifc_compressor";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_compressor &o) {
		return os << "Ifc_compressor(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_condenser : IfcEnergyConversionDevice {
	Ifc_condenser_type_enum predefined_type;

	Ifc_condenser() {
		entity = "Ifc_condenser";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_condenser &o) {
		return os << "Ifc_condenser(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_controller_type : IfcDistributionControlElementType {
	Ifc_controller_type_enum predefined_type;

	Ifc_controller_type() {
		entity = "Ifc_controller_type";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_controller_type &o) {
		return os << "Ifc_controller_type(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_occurrence << ", " << o.has_property_sets << ", " << o.representation_maps << ", " << o.tag << ", " << o.element_type << ", " << o.predefined_type << ")";
	}
}

struct Ifc_cooled_beam : IfcEnergyConversionDevice {
	Ifc_cooled_beam_type_enum predefined_type;

	Ifc_cooled_beam() {
		entity = "Ifc_cooled_beam";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cooled_beam &o) {
		return os << "Ifc_cooled_beam(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_cooling_tower : IfcEnergyConversionDevice {
	Ifc_cooling_tower_type_enum predefined_type;

	Ifc_cooling_tower() {
		entity = "Ifc_cooling_tower";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cooling_tower &o) {
		return os << "Ifc_cooling_tower(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_damper : IfcFlowController {
	Ifc_damper_type_enum predefined_type;

	Ifc_damper() {
		entity = "Ifc_damper";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_damper &o) {
		return os << "Ifc_damper(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_distribution_chamber_element : IfcDistributionFlowElement {
	Ifc_distribution_chamber_element_type_enum predefined_type;

	Ifc_distribution_chamber_element() {
		entity = "Ifc_distribution_chamber_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_distribution_chamber_element &o) {
		return os << "Ifc_distribution_chamber_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_distribution_circuit : IfcDistributionSystem {
	Ifc_distribution_circuit() {
		entity = "Ifc_distribution_circuit";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_distribution_circuit &o) {
		return os << "Ifc_distribution_circuit(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.long_name << ", " << o.predefined_type << ")";
	}
}

struct Ifc_distribution_control_element : IfcDistributionElement {
	Ifc_distribution_control_element() {
		entity = "Ifc_distribution_control_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_distribution_control_element &o) {
		return os << "Ifc_distribution_control_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
	}
}

struct Ifc_duct_fitting : IfcFlowFitting {
	Ifc_duct_fitting_type_enum predefined_type;

	Ifc_duct_fitting() {
		entity = "Ifc_duct_fitting";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_duct_fitting &o) {
		return os << "Ifc_duct_fitting(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_duct_segment : IfcFlowSegment {
	Ifc_duct_segment_type_enum predefined_type;

	Ifc_duct_segment() {
		entity = "Ifc_duct_segment";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_duct_segment &o) {
		return os << "Ifc_duct_segment(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_duct_silencer : IfcFlowTreatmentDevice {
	Ifc_duct_silencer_type_enum predefined_type;

	Ifc_duct_silencer() {
		entity = "Ifc_duct_silencer";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_duct_silencer &o) {
		return os << "Ifc_duct_silencer(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_electric_appliance : IfcFlowTerminal {
	Ifc_electric_appliance_type_enum predefined_type;

	Ifc_electric_appliance() {
		entity = "Ifc_electric_appliance";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_appliance &o) {
		return os << "Ifc_electric_appliance(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_electric_distribution_board : IfcFlowController {
	Ifc_electric_distribution_board_type_enum predefined_type;

	Ifc_electric_distribution_board() {
		entity = "Ifc_electric_distribution_board";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_distribution_board &o) {
		return os << "Ifc_electric_distribution_board(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_electric_flow_storage_device : IfcFlowStorageDevice {
	Ifc_electric_flow_storage_device_type_enum predefined_type;

	Ifc_electric_flow_storage_device() {
		entity = "Ifc_electric_flow_storage_device";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_flow_storage_device &o) {
		return os << "Ifc_electric_flow_storage_device(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_electric_generator : IfcEnergyConversionDevice {
	Ifc_electric_generator_type_enum predefined_type;

	Ifc_electric_generator() {
		entity = "Ifc_electric_generator";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_generator &o) {
		return os << "Ifc_electric_generator(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_electric_motor : IfcEnergyConversionDevice {
	Ifc_electric_motor_type_enum predefined_type;

	Ifc_electric_motor() {
		entity = "Ifc_electric_motor";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_motor &o) {
		return os << "Ifc_electric_motor(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_electric_time_control : IfcFlowController {
	Ifc_electric_time_control_type_enum predefined_type;

	Ifc_electric_time_control() {
		entity = "Ifc_electric_time_control";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_time_control &o) {
		return os << "Ifc_electric_time_control(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_fan : IfcFlowMovingDevice {
	Ifc_fan_type_enum predefined_type;

	Ifc_fan() {
		entity = "Ifc_fan";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_fan &o) {
		return os << "Ifc_fan(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_filter : IfcFlowTreatmentDevice {
	Ifc_filter_type_enum predefined_type;

	Ifc_filter() {
		entity = "Ifc_filter";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_filter &o) {
		return os << "Ifc_filter(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_fire_suppression_terminal : IfcFlowTerminal {
	Ifc_fire_suppression_terminal_type_enum predefined_type;

	Ifc_fire_suppression_terminal() {
		entity = "Ifc_fire_suppression_terminal";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_fire_suppression_terminal &o) {
		return os << "Ifc_fire_suppression_terminal(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_flow_instrument : IfcDistributionControlElement {
	Ifc_flow_instrument_type_enum predefined_type;

	Ifc_flow_instrument() {
		entity = "Ifc_flow_instrument";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_instrument &o) {
		return os << "Ifc_flow_instrument(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_protective_device_tripping_unit : IfcDistributionControlElement {
	Ifc_protective_device_tripping_unit_type_enum predefined_type;

	Ifc_protective_device_tripping_unit() {
		entity = "Ifc_protective_device_tripping_unit";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_protective_device_tripping_unit &o) {
		return os << "Ifc_protective_device_tripping_unit(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_sensor : IfcDistributionControlElement {
	Ifc_sensor_type_enum predefined_type;

	Ifc_sensor() {
		entity = "Ifc_sensor";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_sensor &o) {
		return os << "Ifc_sensor(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_unitary_control_element : IfcDistributionControlElement {
	Ifc_unitary_control_element_type_enum predefined_type;

	Ifc_unitary_control_element() {
		entity = "Ifc_unitary_control_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_unitary_control_element &o) {
		return os << "Ifc_unitary_control_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_actuator : IfcDistributionControlElement {
	Ifc_actuator_type_enum predefined_type;

	Ifc_actuator() {
		entity = "Ifc_actuator";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_actuator &o) {
		return os << "Ifc_actuator(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_alarm : IfcDistributionControlElement {
	Ifc_alarm_type_enum predefined_type;

	Ifc_alarm() {
		entity = "Ifc_alarm";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_alarm &o) {
		return os << "Ifc_alarm(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

struct Ifc_controller : IfcDistributionControlElement {
	Ifc_controller_type_enum predefined_type;

	Ifc_controller() {
		entity = "Ifc_controller";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_controller &o) {
		return os << "Ifc_controller(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
}

// Types with entity dependencies (1)
typedef std::vector<Ifc_property_set_definition> Ifc_property_set_definition_set;

class Ifc_4_add_1_parser {
private:
	Step_parser step_parser;

public:
	std::list<Ifc **> links_to_resolve;
	std::list<std::vector<Ifc *> *> lists_of_links_to_resolve;

	Ifc *parse_ifc_object_definition(std::string &object_class, std::vector<std::string> &object_attributes);
	void print_object_info(Ifc *object);
};

#endif /* Ifc_4_add_1_parser_hpp */
