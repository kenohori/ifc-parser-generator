#ifndef Ifc_2x_schema_hpp
#define Ifc_2x_schema_hpp

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

// Forward declarations (370)
struct Ifc_2_d_composite_curve;
struct Ifc_action_time_control;
struct Ifc_actor;
struct Ifc_actor_role;
struct Ifc_actuator;
struct Ifc_address;
struct Ifc_air_filter;
struct Ifc_air_terminal;
struct Ifc_air_terminal_box;
struct Ifc_application;
struct Ifc_approval;
struct Ifc_approval_usage;
struct Ifc_arbitrary_closed_profile_def;
struct Ifc_arbitrary_open_profile_def;
struct Ifc_arbitrary_profile_def_with_voids;
struct Ifc_assessory;
struct Ifc_asset;
struct Ifc_axis_1_placement;
struct Ifc_axis_2_placement_2_d;
struct Ifc_axis_2_placement_3_d;
struct Ifc_beam;
struct Ifc_boiler;
struct Ifc_boolean_clipping_result;
struct Ifc_boolean_result;
struct Ifc_bounded_curve;
struct Ifc_bounded_surface;
struct Ifc_bounding_box;
struct Ifc_boxed_half_space;
struct Ifc_budget;
struct Ifc_building;
struct Ifc_building_element;
struct Ifc_building_element_proxy;
struct Ifc_building_storey;
struct Ifc_built_in;
struct Ifc_c_m_doc_package;
struct Ifc_calendar_date;
struct Ifc_cartesian_point;
struct Ifc_cartesian_transformation_operator;
struct Ifc_cartesian_transformation_operator_2_d;
struct Ifc_cartesian_transformation_operator_2_dnon_uniform;
struct Ifc_cartesian_transformation_operator_3_d;
struct Ifc_cartesian_transformation_operator_3_dnon_uniform;
struct Ifc_change_order;
struct Ifc_chiller;
struct Ifc_circle;
struct Ifc_circle_profile_def;
struct Ifc_classification;
struct Ifc_classification_item;
struct Ifc_classification_item_relationship;
struct Ifc_classification_notation;
struct Ifc_classification_notation_facet;
struct Ifc_classification_reference;
struct Ifc_closed_shell;
struct Ifc_coil;
struct Ifc_column;
struct Ifc_compartment;
struct Ifc_complex_property;
struct Ifc_composite_curve;
struct Ifc_composite_curve_segment;
struct Ifc_composite_profile_def;
struct Ifc_compressor;
struct Ifc_conic;
struct Ifc_connected_face_set;
struct Ifc_connection_constraint;
struct Ifc_connection_curve_geometry;
struct Ifc_connection_geometry;
struct Ifc_connection_point_geometry;
struct Ifc_connection_port_geometry;
struct Ifc_connection_surface_geometry;
struct Ifc_constraint;
struct Ifc_constraint_aggregation_relationship;
struct Ifc_constraint_usage;
struct Ifc_construction_equipment_resource;
struct Ifc_construction_material_resource;
struct Ifc_construction_product_resource;
struct Ifc_context_dependent_unit;
struct Ifc_control;
struct Ifc_control_element;
struct Ifc_controller;
struct Ifc_conversion_based_unit;
struct Ifc_cooling_tower;
struct Ifc_coordinated_universal_time_offset;
struct Ifc_cost;
struct Ifc_cost_modifier;
struct Ifc_cost_modifier_value;
struct Ifc_cost_quantity;
struct Ifc_cost_schedule;
struct Ifc_cost_value;
struct Ifc_cost_value_relationship;
struct Ifc_covering;
struct Ifc_crew_resource;
struct Ifc_csg_solid;
struct Ifc_curtain_wall;
struct Ifc_curve;
struct Ifc_curve_bounded_plane;
struct Ifc_damper;
struct Ifc_date_and_time;
struct Ifc_derived_profile_def;
struct Ifc_derived_unit;
struct Ifc_derived_unit_element;
struct Ifc_dimensional_exponents;
struct Ifc_direction;
struct Ifc_directional_light_source;
struct Ifc_discrete_element;
struct Ifc_distribution_element;
struct Ifc_distribution_flow_element;
struct Ifc_document_electronic_format;
struct Ifc_document_information;
struct Ifc_document_information_relationship;
struct Ifc_document_reference;
struct Ifc_door;
struct Ifc_door_lining_properties;
struct Ifc_door_panel_properties;
struct Ifc_door_style;
struct Ifc_edge;
struct Ifc_edge_curve;
struct Ifc_electric_motor;
struct Ifc_electrical_appliance;
struct Ifc_electrical_base_properties;
struct Ifc_electrical_element;
struct Ifc_electrical_extended_properties;
struct Ifc_element;
struct Ifc_element_quantity;
struct Ifc_elementary_surface;
struct Ifc_ellipse;
struct Ifc_ellipse_profile_def;
struct Ifc_equipment_element;
struct Ifc_equipment_standard;
struct Ifc_extended_material_properties;
struct Ifc_external_reference;
struct Ifc_extruded_area_solid;
struct Ifc_face;
struct Ifc_face_based_surface_model;
struct Ifc_face_bound;
struct Ifc_face_outer_bound;
struct Ifc_face_surface;
struct Ifc_faceted_brep;
struct Ifc_faceted_brep_with_voids;
struct Ifc_fan;
struct Ifc_flow_controller;
struct Ifc_flow_fitting;
struct Ifc_flow_segment;
struct Ifc_flow_terminal;
struct Ifc_fluid_flow_properties;
struct Ifc_fluid_moving_device;
struct Ifc_furnishing_element;
struct Ifc_furniture;
struct Ifc_furniture_standard;
struct Ifc_general_material_properties;
struct Ifc_geometric_representation_context;
struct Ifc_geometric_representation_item;
struct Ifc_geometric_set;
struct Ifc_grid;
struct Ifc_grid_axis;
struct Ifc_grid_placement;
struct Ifc_group;
struct Ifc_half_space_solid;
struct Ifc_heat_exchanger;
struct Ifc_heat_transfer_device;
struct Ifc_hydronic_heater;
struct Ifc_hygroscopic_material_properties;
struct Ifc_inventory;
struct Ifc_ishape_profile_def;
struct Ifc_labor_resource;
struct Ifc_library_information;
struct Ifc_library_reference;
struct Ifc_light_fixture;
struct Ifc_line;
struct Ifc_local_placement;
struct Ifc_local_time;
struct Ifc_loop;
struct Ifc_maintenance_record;
struct Ifc_maintenance_work_order;
struct Ifc_manifold_solid_brep;
struct Ifc_manufacturer_information;
struct Ifc_mapped_item;
struct Ifc_material;
struct Ifc_material_classification_relationship;
struct Ifc_material_layer;
struct Ifc_material_layer_set;
struct Ifc_material_layer_set_usage;
struct Ifc_material_list;
struct Ifc_material_properties;
struct Ifc_measure_with_unit;
struct Ifc_mechanical_material_properties;
struct Ifc_metric;
struct Ifc_metric_benchmark;
struct Ifc_metric_value;
struct Ifc_monetary_unit;
struct Ifc_move;
struct Ifc_named_unit;
struct Ifc_object;
struct Ifc_object_placement;
struct Ifc_objective;
struct Ifc_occupant;
struct Ifc_offset_curve_2_d;
struct Ifc_offset_curve_3_d;
struct Ifc_open_shell;
struct Ifc_opening_element;
struct Ifc_optical_material_properties;
struct Ifc_organization;
struct Ifc_organization_relationship;
struct Ifc_oriented_edge;
struct Ifc_outlet;
struct Ifc_owner_history;
struct Ifc_path;
struct Ifc_permeable_covering_properties;
struct Ifc_person;
struct Ifc_person_and_organization;
struct Ifc_physical_quantity;
struct Ifc_placement;
struct Ifc_plane;
struct Ifc_point;
struct Ifc_point_light_source;
struct Ifc_poly_loop;
struct Ifc_polygonal_bounded_half_space;
struct Ifc_polyline;
struct Ifc_postal_address;
struct Ifc_presentation_light_source;
struct Ifc_process;
struct Ifc_product;
struct Ifc_product_definition_shape;
struct Ifc_product_representation;
struct Ifc_profile_def;
struct Ifc_project;
struct Ifc_project_order;
struct Ifc_property;
struct Ifc_property_bounded_value;
struct Ifc_property_definition;
struct Ifc_property_enumerated_value;
struct Ifc_property_enumeration;
struct Ifc_property_reference_value;
struct Ifc_property_set;
struct Ifc_property_set_definition;
struct Ifc_property_single_value;
struct Ifc_property_table_value;
struct Ifc_proxy;
struct Ifc_pump;
struct Ifc_purchase_order;
struct Ifc_quantity_area;
struct Ifc_quantity_count;
struct Ifc_quantity_length;
struct Ifc_quantity_volume;
struct Ifc_quantity_weight;
struct Ifc_railing;
struct Ifc_ramp;
struct Ifc_ramp_flight;
struct Ifc_rectangle_profile_def;
struct Ifc_rectangular_trimmed_surface;
struct Ifc_reference_edge;
struct Ifc_reference_face;
struct Ifc_reference_geometry;
struct Ifc_reference_vertex;
struct Ifc_references_cost_document;
struct Ifc_rel_aggregates;
struct Ifc_rel_aggregates_resources;
struct Ifc_rel_assigns;
struct Ifc_rel_assigns_f_m_standard;
struct Ifc_rel_assigns_tasks;
struct Ifc_rel_assigns_to_actor;
struct Ifc_rel_assigns_to_control;
struct Ifc_rel_assigns_to_group;
struct Ifc_rel_assigns_to_process;
struct Ifc_rel_assigns_to_product;
struct Ifc_rel_assigns_to_resource;
struct Ifc_rel_associates;
struct Ifc_rel_associates_classification;
struct Ifc_rel_associates_document;
struct Ifc_rel_associates_library;
struct Ifc_rel_associates_material;
struct Ifc_rel_connects;
struct Ifc_rel_connects_elements;
struct Ifc_rel_connects_path_elements;
struct Ifc_rel_connects_ports;
struct Ifc_rel_contained_in_spatial_structure;
struct Ifc_rel_costs_objects;
struct Ifc_rel_covers_bldg_elements;
struct Ifc_rel_decomposes;
struct Ifc_rel_defines;
struct Ifc_rel_defines_by_properties;
struct Ifc_rel_defines_by_type;
struct Ifc_rel_fills_element;
struct Ifc_rel_flow_control_elements;
struct Ifc_rel_interaction_requirements;
struct Ifc_rel_maintenance_event;
struct Ifc_rel_nests;
struct Ifc_rel_occupies_spaces;
struct Ifc_rel_overrides_properties;
struct Ifc_rel_sequence;
struct Ifc_rel_services_buildings;
struct Ifc_rel_space_boundary;
struct Ifc_rel_uses_resource;
struct Ifc_rel_voids_element;
struct Ifc_relationship;
struct Ifc_representation;
struct Ifc_representation_context;
struct Ifc_representation_item;
struct Ifc_representation_map;
struct Ifc_resource;
struct Ifc_revolved_area_solid;
struct Ifc_roof;
struct Ifc_root;
struct Ifc_rounded_rectangle_profile_def;
struct Ifc_s_i_unit;
struct Ifc_sanitary_terminal;
struct Ifc_schedule_time_control;
struct Ifc_sectioned_spine;
struct Ifc_sensor;
struct Ifc_shape_aspect;
struct Ifc_shape_representation;
struct Ifc_shell_based_surface_model;
struct Ifc_simple_property;
struct Ifc_site;
struct Ifc_slab;
struct Ifc_solid_model;
struct Ifc_space;
struct Ifc_space_program;
struct Ifc_space_program_group;
struct Ifc_space_thermal_load;
struct Ifc_spatial_structure_element;
struct Ifc_spot_light_source;
struct Ifc_stair;
struct Ifc_stair_flight;
struct Ifc_storage_device;
struct Ifc_sub_contract_resource;
struct Ifc_surface;
struct Ifc_surface_extended_properties;
struct Ifc_surface_of_linear_extrusion;
struct Ifc_surface_of_revolution;
struct Ifc_surface_rendering_properties;
struct Ifc_surface_shading_properties;
struct Ifc_surface_style;
struct Ifc_surface_style_properties;
struct Ifc_surface_style_usage;
struct Ifc_swept_area_solid;
struct Ifc_swept_surface;
struct Ifc_system;
struct Ifc_system_furniture_element;
struct Ifc_table;
struct Ifc_table_row;
struct Ifc_tank;
struct Ifc_task;
struct Ifc_telecom_address;
struct Ifc_thermal_material_properties;
struct Ifc_topological_representation_item;
struct Ifc_transport_element;
struct Ifc_trapezium_profile_def;
struct Ifc_treatment_device;
struct Ifc_trimmed_curve;
struct Ifc_tube_bundle;
struct Ifc_type_object;
struct Ifc_type_product;
struct Ifc_unit_assignment;
struct Ifc_unit_heater;
struct Ifc_valve;
struct Ifc_vector;
struct Ifc_vertex;
struct Ifc_vertex_point;
struct Ifc_virtual_grid_intersection;
struct Ifc_wall;
struct Ifc_wall_standard_case;
struct Ifc_window;
struct Ifc_window_lining_properties;
struct Ifc_window_panel_properties;
struct Ifc_window_style;
struct Ifc_work_control;
struct Ifc_work_order;
struct Ifc_work_plan;
struct Ifc_work_schedule;
struct Ifc_zone;

// Base class
struct Ifc {
	std::string entity;
	virtual ~Ifc() {}
};

// Select types (23)
struct Ifc_actor_select {virtual ~Ifc_actor_select() {} };
struct Ifc_axis_2_placement {virtual ~Ifc_axis_2_placement() {} };
struct Ifc_boolean_operand {virtual ~Ifc_boolean_operand() {} };
struct Ifc_classification_notation_select {virtual ~Ifc_classification_notation_select() {} };
struct Ifc_cost_modifier_value_select {virtual ~Ifc_cost_modifier_value_select() {} };
struct Ifc_csg_select {virtual ~Ifc_csg_select() {} };
struct Ifc_date_time_select {virtual ~Ifc_date_time_select() {} };
struct Ifc_derived_measure_value {virtual ~Ifc_derived_measure_value() {} };
struct Ifc_document_select {virtual ~Ifc_document_select() {} };
struct Ifc_f_m_standard_select {virtual ~Ifc_f_m_standard_select() {} };
struct Ifc_geometric_set_select {virtual ~Ifc_geometric_set_select() {} };
struct Ifc_library_select {virtual ~Ifc_library_select() {} };
struct Ifc_material_select {virtual ~Ifc_material_select() {} };
struct Ifc_measure_value {virtual ~Ifc_measure_value() {} };
struct Ifc_metric_value_select {virtual ~Ifc_metric_value_select() {} };
struct Ifc_object_reference_select {virtual ~Ifc_object_reference_select() {} };
struct Ifc_shell {virtual ~Ifc_shell() {} };
struct Ifc_simple_value {virtual ~Ifc_simple_value() {} };
struct Ifc_styled_item_select {virtual ~Ifc_styled_item_select() {} };
struct Ifc_trimming_select {virtual ~Ifc_trimming_select() {} };
struct Ifc_unit {virtual ~Ifc_unit() {} };
struct Ifc_value {virtual ~Ifc_value() {} };
struct Ifc_vector_or_direction {virtual ~Ifc_vector_or_direction() {} };

// Entities (370)
struct Ifc_action_time_control : Ifc {
	Ifc_label constraint_type;
	Ifc_date_time_select *contraint_time;

	Ifc_action_time_control() {
		entity = "Ifc_action_time_control";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_action_time_control &o) {
		return os << "Ifc_action_time_control(" << o.constraint_type << ", " << o.contraint_time << ")";
	}
};

struct Ifc_actor_role : Ifc {
	Ifc_role_enum role;
	Ifc_label *user_defined_role;
	Ifc_text *description;

	Ifc_actor_role() {
		entity = "Ifc_actor_role";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_actor_role &o) {
		return os << "Ifc_actor_role(" << o.role << ", " << o.user_defined_role << ", " << o.description << ")";
	}
};

struct Ifc_address : Ifc {
	Ifc_address_type_enum purpose;
	Ifc_text *description;
	Ifc_label *user_defined_purpose;

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

struct Ifc_approval : Ifc {
	Ifc_text description;
	Ifc_actor_select *authorizing_agent;
	Ifc_actor_select *request_from;
	Ifc_actor_select *request_to;
	Ifc_date_time_select *requesting_date;
	Ifc_date_time_select *requested_date;
	Ifc_date_time_select *approval_date;
	Ifc_approval_status_enum approval_status;
	Ifc_text approval_constraint;

	Ifc_approval() {
		entity = "Ifc_approval";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_approval &o) {
		return os << "Ifc_approval(" << o.description << ", " << o.authorizing_agent << ", " << o.request_from << ", " << o.request_to << ", " << o.requesting_date << ", " << o.requested_date << ", " << o.approval_date << ", " << o.approval_status << ", " << o.approval_constraint << ")";
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
	Ifc_label *source;
	Ifc_label *edition;
	Ifc_calendar_date *edition_date;
	Ifc_label *name;

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
	Ifc_label *title;

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
	Ifc_label *notation_value;

	Ifc_classification_notation_facet() {
		entity = "Ifc_classification_notation_facet";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_classification_notation_facet &o) {
		return os << "Ifc_classification_notation_facet(" << o.notation_value << ")";
	}
};

struct Ifc_connection_constraint : Ifc {
	int waterproofing_required;
	int ventilation_required;
	Ifc_joint_enum join_type;
	Ifc_positive_length_measure range_of_movement;
	Ifc_time_measure fire_rating;
	Ifc_rel_connects_elements *constraint_of;

	Ifc_connection_constraint() {
		entity = "Ifc_connection_constraint";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_connection_constraint &o) {
		return os << "Ifc_connection_constraint(" << o.waterproofing_required << ", " << o.ventilation_required << ", " << o.join_type << ", " << o.range_of_movement << ", " << o.fire_rating << ", " << o.constraint_of << ")";
	}
};

struct Ifc_connection_geometry : Ifc {
	virtual ~Ifc_connection_geometry() {}
};

struct Ifc_connection_point_geometry : Ifc_connection_geometry {
	Ifc_point *point_on_relating_element;
	Ifc_point *point_on_related_element;

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
	Ifc_surface *surface_on_relating_element;
	Ifc_surface *surface_on_related_element;

	Ifc_connection_surface_geometry() {
		entity = "Ifc_connection_surface_geometry";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_connection_surface_geometry &o) {
		return os << "Ifc_connection_surface_geometry(" << o.surface_on_relating_element << ", " << o.surface_on_related_element << ")";
	}
};

struct Ifc_constraint : Ifc {
	Ifc_constraint_enum constraint_grade;
	Ifc_text description;
	Ifc_label constraint_source;
	Ifc_label name;
	Ifc_actor_select *creating_actor;
	Ifc_date_time_select *creation_time;

	Ifc_constraint() {
		entity = "Ifc_constraint";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_constraint &o) {
		return os << "Ifc_constraint(" << o.constraint_grade << ", " << o.description << ", " << o.constraint_source << ", " << o.name << ", " << o.creating_actor << ", " << o.creation_time << ")";
	}
};

struct Ifc_constraint_aggregation_relationship : Ifc {
	Ifc_aggregator_enum logical_aggregator;
	Ifc_constraint *relating_constraint;
	std::vector<Ifc_constraint *> related_constraints;

	Ifc_constraint_aggregation_relationship() {
		entity = "Ifc_constraint_aggregation_relationship";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_constraint_aggregation_relationship &o) {
		return os << "Ifc_constraint_aggregation_relationship(" << o.logical_aggregator << ", " << o.relating_constraint << ", " << "vector(" << o.related_constraints.size() << ")" << ")";
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

struct Ifc_cost_modifier : Ifc {
	Ifc_text purpose;
	Ifc_cost_modifier_value_select *modifier_value;
	Ifc_calendar_date *modifier_date;
	Ifc_cost_operator_enum cost_operator;
	Ifc_cost_modifier_basis_enum modifier_basis;

	Ifc_cost_modifier() {
		entity = "Ifc_cost_modifier";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cost_modifier &o) {
		return os << "Ifc_cost_modifier(" << o.purpose << ", " << o.modifier_value << ", " << o.modifier_date << ", " << o.cost_operator << ", " << o.modifier_basis << ")";
	}
};

struct Ifc_cost_modifier_value : Ifc {
	Ifc_monetary_measure modifier_amount;
	Ifc_currency_enum currency;

	Ifc_cost_modifier_value() {
		entity = "Ifc_cost_modifier_value";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cost_modifier_value &o) {
		return os << "Ifc_cost_modifier_value(" << o.modifier_amount << ", " << o.currency << ")";
	}
};

struct Ifc_cost_quantity : Ifc {
	Ifc_measure_with_unit *base_quantity;
	Ifc_measure_with_unit *final_quantity;
	Ifc_positive_ratio_measure waste_factor;
	Ifc_real round_off_increment;
	Ifc_quantity_round_off_basis_enum round_off_basis;

	Ifc_cost_quantity() {
		entity = "Ifc_cost_quantity";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cost_quantity &o) {
		return os << "Ifc_cost_quantity(" << o.base_quantity << ", " << o.final_quantity << ", " << o.waste_factor << ", " << o.round_off_increment << ", " << o.round_off_basis << ")";
	}
};

struct Ifc_cost_value : Ifc {
	Ifc_monetary_measure base_cost_value;
	Ifc_monetary_measure final_cost_value;
	Ifc_currency_enum currency;
	Ifc_measure_with_unit *unit_cost_basis;
	Ifc_label cost_type;
	Ifc_calendar_date *cost_date;
	std::vector<Ifc_cost_modifier *> cost_modifiers;

	Ifc_cost_value() {
		entity = "Ifc_cost_value";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cost_value &o) {
		return os << "Ifc_cost_value(" << o.base_cost_value << ", " << o.final_cost_value << ", " << o.currency << ", " << o.unit_cost_basis << ", " << o.cost_type << ", " << o.cost_date << ", " << "vector(" << o.cost_modifiers.size() << ")" << ")";
	}
};

struct Ifc_cost_value_relationship : Ifc {
	Ifc_cost_value *component_of;
	std::vector<Ifc_cost_value *> cost_components;
	Ifc_text description;

	Ifc_cost_value_relationship() {
		entity = "Ifc_cost_value_relationship";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cost_value_relationship &o) {
		return os << "Ifc_cost_value_relationship(" << o.component_of << ", " << "vector(" << o.cost_components.size() << ")" << ", " << o.description << ")";
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
	Ifc_label *file_extension;
	Ifc_label *mime_content_type;
	Ifc_label *mime_subtype;

	Ifc_document_electronic_format() {
		entity = "Ifc_document_electronic_format";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_document_electronic_format &o) {
		return os << "Ifc_document_electronic_format(" << o.file_extension << ", " << o.mime_content_type << ", " << o.mime_subtype << ")";
	}
};

struct Ifc_document_information : Ifc {
	Ifc_identifier *document_id;
	Ifc_label *name;
	Ifc_text *description;
	std::vector<Ifc_document_reference *> document_references;
	Ifc_text *purpose;
	Ifc_text *intended_use;
	Ifc_text *scope;
	Ifc_label *revision;
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
	Ifc_label *relationship_type;

	Ifc_document_information_relationship() {
		entity = "Ifc_document_information_relationship";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_document_information_relationship &o) {
		return os << "Ifc_document_information_relationship(" << o.relating_document << ", " << "vector(" << o.related_documents.size() << ")" << ", " << o.relationship_type << ")";
	}
};

struct Ifc_external_reference : Ifc {
	Ifc_label *location;
	Ifc_identifier *item_reference;
	Ifc_label *name;

	virtual ~Ifc_external_reference() {}
};

struct Ifc_grid_axis : Ifc {
	Ifc_label *axis_tag;
	Ifc_curve *axis_curve;
	Ifc_boolean *same_sense;

	Ifc_grid_axis() {
		entity = "Ifc_grid_axis";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_grid_axis &o) {
		return os << "Ifc_grid_axis(" << o.axis_tag << ", " << o.axis_curve << ", " << o.same_sense << ")";
	}
};

struct Ifc_library_information : Ifc {
	Ifc_label *name;
	Ifc_label *version;
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
	Ifc_label *name;

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
	Ifc_positive_length_measure *layer_thickness;
	Ifc_boolean *is_ventilated;

	Ifc_material_layer() {
		entity = "Ifc_material_layer";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_material_layer &o) {
		return os << "Ifc_material_layer(" << o.material << ", " << o.layer_thickness << ", " << o.is_ventilated << ")";
	}
};

struct Ifc_material_layer_set : Ifc {
	std::vector<Ifc_material_layer *> material_layers;
	Ifc_label *layer_set_name;

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
	Ifc_length_measure *offset_from_reference_line;

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

	Ifc_mechanical_material_properties() {
		entity = "Ifc_mechanical_material_properties";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_mechanical_material_properties &o) {
		return os << "Ifc_mechanical_material_properties(" << o.material << ", " << o.dynamic_viscosity << ")";
	}
};

struct Ifc_metric : Ifc_constraint {
	std::vector<Ifc_metric_value *> values;

	Ifc_metric() {
		entity = "Ifc_metric";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_metric &o) {
		return os << "Ifc_metric(" << o.constraint_grade << ", " << o.description << ", " << o.constraint_source << ", " << o.name << ", " << o.creating_actor << ", " << o.creation_time << ", " << "vector(" << o.values.size() << ")" << ")";
	}
};

struct Ifc_metric_benchmark : Ifc_metric {
	Ifc_benchmark_enum benchmark;

	Ifc_metric_benchmark() {
		entity = "Ifc_metric_benchmark";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_metric_benchmark &o) {
		return os << "Ifc_metric_benchmark(" << o.constraint_grade << ", " << o.description << ", " << o.constraint_source << ", " << o.name << ", " << o.creating_actor << ", " << o.creation_time << ", " << "vector(" << o.values.size() << ")" << ", " << o.benchmark << ")";
	}
};

struct Ifc_metric_value : Ifc {
	Ifc_metric_data_enum data_type;
	Ifc_metric_value_select *data_value;
	Ifc_label value_source;

	Ifc_metric_value() {
		entity = "Ifc_metric_value";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_metric_value &o) {
		return os << "Ifc_metric_value(" << o.data_type << ", " << o.data_value << ", " << o.value_source << ")";
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
	Ifc_objective_enum objective_qualifier;
	std::vector<Ifc_metric *> benchmark_values;
	std::vector<Ifc_metric *> result_values;

	Ifc_objective() {
		entity = "Ifc_objective";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_objective &o) {
		return os << "Ifc_objective(" << o.constraint_grade << ", " << o.description << ", " << o.constraint_source << ", " << o.name << ", " << o.creating_actor << ", " << o.creation_time << ", " << o.objective_qualifier << ", " << "vector(" << o.benchmark_values.size() << ")" << ", " << "vector(" << o.result_values.size() << ")" << ")";
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
	Ifc_identifier *_id;
	Ifc_label *name;
	Ifc_text *description;
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
	Ifc_label *name;
	Ifc_text *description;
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
	Ifc_identifier *_id;
	Ifc_label *family_name;
	Ifc_label *given_name;
	std::vector<Ifc_label *> middle_names;
	std::vector<Ifc_label *> prefix_titles;
	std::vector<Ifc_label *> suffix_titles;
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
	Ifc_named_unit *unit;

	virtual ~Ifc_physical_quantity() {}
};

struct Ifc_postal_address : Ifc_address {
	Ifc_label *internal_location;
	std::vector<Ifc_label *> address_lines;
	Ifc_label *postal_box;
	Ifc_label *town;
	Ifc_label *region;
	Ifc_label *postal_code;
	Ifc_label *country;

	Ifc_postal_address() {
		entity = "Ifc_postal_address";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_postal_address &o) {
		return os << "Ifc_postal_address(" << o.purpose << ", " << o.description << ", " << o.user_defined_purpose << ", " << o.internal_location << ", " << "vector(" << o.address_lines.size() << ")" << ", " << o.postal_box << ", " << o.town << ", " << o.region << ", " << o.postal_code << ", " << o.country << ")";
	}
};

struct Ifc_presentation_light_source : Ifc {
	Ifc_color_r_g_b color;
	Ifc_normalised_ratio_measure ambient_intensity;
	Ifc_normalised_ratio_measure intensity;
	Ifc_geometric_representation_context *in_context;
	Ifc_label name;
	Ifc_text description;

	Ifc_presentation_light_source() {
		entity = "Ifc_presentation_light_source";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_presentation_light_source &o) {
		return os << "Ifc_presentation_light_source(" << "vector(" << o.color.size() << ")" << ", " << o.ambient_intensity << ", " << o.intensity << ", " << o.in_context << ", " << o.name << ", " << o.description << ")";
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

struct Ifc_profile_def : Ifc {
	Ifc_profile_type_enum profile_type;
	Ifc_label profile_name;

	virtual ~Ifc_profile_def() {}
};

struct Ifc_property : Ifc {
	Ifc_identifier name;
	Ifc_text description;

	virtual ~Ifc_property() {}
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

struct Ifc_quantity_area : Ifc_physical_quantity {
	Ifc_area_measure area_value;

	Ifc_quantity_area() {
		entity = "Ifc_quantity_area";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_quantity_area &o) {
		return os << "Ifc_quantity_area(" << o.name << ", " << o.description << ", " << o.unit << ", " << o.area_value << ")";
	}
};

struct Ifc_quantity_count : Ifc_physical_quantity {
	Ifc_count_measure count_value;

	Ifc_quantity_count() {
		entity = "Ifc_quantity_count";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_quantity_count &o) {
		return os << "Ifc_quantity_count(" << o.name << ", " << o.description << ", " << o.unit << ", " << o.count_value << ")";
	}
};

struct Ifc_quantity_length : Ifc_physical_quantity {
	Ifc_length_measure length_value;

	Ifc_quantity_length() {
		entity = "Ifc_quantity_length";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_quantity_length &o) {
		return os << "Ifc_quantity_length(" << o.name << ", " << o.description << ", " << o.unit << ", " << o.length_value << ")";
	}
};

struct Ifc_quantity_volume : Ifc_physical_quantity {
	Ifc_volume_measure volume_value;

	Ifc_quantity_volume() {
		entity = "Ifc_quantity_volume";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_quantity_volume &o) {
		return os << "Ifc_quantity_volume(" << o.name << ", " << o.description << ", " << o.unit << ", " << o.volume_value << ")";
	}
};

struct Ifc_quantity_weight : Ifc_physical_quantity {
	Ifc_mass_measure weight_value;

	Ifc_quantity_weight() {
		entity = "Ifc_quantity_weight";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_quantity_weight &o) {
		return os << "Ifc_quantity_weight(" << o.name << ", " << o.description << ", " << o.unit << ", " << o.weight_value << ")";
	}
};

struct Ifc_rectangle_profile_def : Ifc_profile_def {
	Ifc_axis_2_placement_2_d *position;
	Ifc_positive_length_measure x_dim;
	Ifc_positive_length_measure y_dim;

	Ifc_rectangle_profile_def() {
		entity = "Ifc_rectangle_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rectangle_profile_def &o) {
		return os << "Ifc_rectangle_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.x_dim << ", " << o.y_dim << ")";
	}
};

struct Ifc_reference_geometry : Ifc {
	Ifc_axis_2_placement *placement;

	virtual ~Ifc_reference_geometry() {}
};

struct Ifc_reference_vertex : Ifc_reference_geometry {
	Ifc_vertex *vertex;

	Ifc_reference_vertex() {
		entity = "Ifc_reference_vertex";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_reference_vertex &o) {
		return os << "Ifc_reference_vertex(" << o.placement << ", " << o.vertex << ")";
	}
};

struct Ifc_references_cost_document : Ifc {
	Ifc_document_select *referenced_document;
	std::vector<Ifc_cost_value *> referencing_costs;
	std::vector<Ifc_cost_modifier *> referencing_modifiers;

	Ifc_references_cost_document() {
		entity = "Ifc_references_cost_document";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_references_cost_document &o) {
		return os << "Ifc_references_cost_document(" << o.referenced_document << ", " << "vector(" << o.referencing_costs.size() << ")" << ", " << "vector(" << o.referencing_modifiers.size() << ")" << ")";
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

struct Ifc_root : Ifc {
	Ifc_globally_unique_id global_id;
	Ifc_owner_history *owner_history;
	Ifc_label name;
	Ifc_text description;

	virtual ~Ifc_root() {}
};

struct Ifc_rounded_rectangle_profile_def : Ifc_profile_def {
	Ifc_axis_2_placement_2_d *position;
	Ifc_positive_length_measure x_dim;
	Ifc_positive_length_measure y_dim;
	Ifc_positive_length_measure rounding_radius;

	Ifc_rounded_rectangle_profile_def() {
		entity = "Ifc_rounded_rectangle_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rounded_rectangle_profile_def &o) {
		return os << "Ifc_rounded_rectangle_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.x_dim << ", " << o.y_dim << ", " << o.rounding_radius << ")";
	}
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

struct Ifc_shape_aspect : Ifc {
	std::vector<Ifc_shape_representation *> shape_representations;
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

struct Ifc_shape_representation : Ifc_representation {
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

struct Ifc_surface_style : Ifc {
	Ifc_label name;
	std::vector<Ifc_surface_style_properties *> properties;

	Ifc_surface_style() {
		entity = "Ifc_surface_style";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_style &o) {
		return os << "Ifc_surface_style(" << o.name << ", " << "vector(" << o.properties.size() << ")" << ")";
	}
};

struct Ifc_surface_style_properties : Ifc {
	Ifc_label usage_identifier;

	virtual ~Ifc_surface_style_properties() {}
};

struct Ifc_surface_style_usage : Ifc {
	std::vector<Ifc_styled_item_select *> applied_to;
	Ifc_surface_style *style;
	Ifc_surface_side_enum side;

	Ifc_surface_style_usage() {
		entity = "Ifc_surface_style_usage";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_style_usage &o) {
		return os << "Ifc_surface_style_usage(" << "vector(" << o.applied_to.size() << ")" << ", " << o.style << ", " << o.side << ")";
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
	std::vector<Ifc_measure_value *> row_cells;
	bool is_heading;

	Ifc_table_row() {
		entity = "Ifc_table_row";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_table_row &o) {
		return os << "Ifc_table_row(" << "vector(" << o.row_cells.size() << ")" << ", " << o.is_heading << ")";
	}
};

struct Ifc_telecom_address : Ifc_address {
	std::vector<Ifc_label *> telephone_numbers;
	std::vector<Ifc_label *> facsimile_numbers;
	Ifc_label *pager_number;
	std::vector<Ifc_label *> electronic_mail_addresses;
	Ifc_label *w_w_w_home_page_u_r_l;

	Ifc_telecom_address() {
		entity = "Ifc_telecom_address";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_telecom_address &o) {
		return os << "Ifc_telecom_address(" << o.purpose << ", " << o.description << ", " << o.user_defined_purpose << ", " << "vector(" << o.telephone_numbers.size() << ")" << ", " << "vector(" << o.facsimile_numbers.size() << ")" << ", " << o.pager_number << ", " << "vector(" << o.electronic_mail_addresses.size() << ")" << ", " << o.w_w_w_home_page_u_r_l << ")";
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

struct Ifc_topological_representation_item : Ifc_representation_item {
	virtual ~Ifc_topological_representation_item() {}
};

struct Ifc_trapezium_profile_def : Ifc_profile_def {
	Ifc_axis_2_placement_2_d *position;
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
	std::vector<Ifc_length_measure *> offset_distances;

	Ifc_virtual_grid_intersection() {
		entity = "Ifc_virtual_grid_intersection";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_virtual_grid_intersection &o) {
		return os << "Ifc_virtual_grid_intersection(" << "vector(" << o.intersecting_axes.size() << ")" << ", " << "vector(" << o.offset_distances.size() << ")" << ")";
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

struct Ifc_circle_profile_def : Ifc_profile_def {
	Ifc_axis_2_placement_2_d *position;
	Ifc_positive_length_measure radius;

	Ifc_circle_profile_def() {
		entity = "Ifc_circle_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_circle_profile_def &o) {
		return os << "Ifc_circle_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.radius << ")";
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
	Ifc_bounded_curve *curve_on_relating_element;
	Ifc_bounded_curve *curve_on_related_element;

	Ifc_connection_curve_geometry() {
		entity = "Ifc_connection_curve_geometry";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_connection_curve_geometry &o) {
		return os << "Ifc_connection_curve_geometry(" << o.curve_on_relating_element << ", " << o.curve_on_related_element << ")";
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

struct Ifc_directional_light_source : Ifc_presentation_light_source {
	Ifc_direction *direction;

	Ifc_directional_light_source() {
		entity = "Ifc_directional_light_source";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_directional_light_source &o) {
		return os << "Ifc_directional_light_source(" << "vector(" << o.color.size() << ")" << ", " << o.ambient_intensity << ", " << o.intensity << ", " << o.in_context << ", " << o.name << ", " << o.description << ", " << o.direction << ")";
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

struct Ifc_ellipse_profile_def : Ifc_profile_def {
	Ifc_axis_2_placement_2_d *position;
	Ifc_positive_length_measure semi_axis_1;
	Ifc_positive_length_measure semi_axis_2;

	Ifc_ellipse_profile_def() {
		entity = "Ifc_ellipse_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_ellipse_profile_def &o) {
		return os << "Ifc_ellipse_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.semi_axis_1 << ", " << o.semi_axis_2 << ")";
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

struct Ifc_ishape_profile_def : Ifc_profile_def {
	Ifc_axis_2_placement_2_d *position;
	Ifc_positive_length_measure overall_width;
	Ifc_positive_length_measure overall_depth;
	Ifc_positive_length_measure web_thickness;
	Ifc_positive_length_measure flange_thickness;
	Ifc_positive_length_measure fillet_radius;

	Ifc_ishape_profile_def() {
		entity = "Ifc_ishape_profile_def";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_ishape_profile_def &o) {
		return os << "Ifc_ishape_profile_def(" << o.profile_type << ", " << o.profile_name << ", " << o.position << ", " << o.overall_width << ", " << o.overall_depth << ", " << o.web_thickness << ", " << o.flange_thickness << ", " << o.fillet_radius << ")";
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

struct Ifc_object : Ifc_root {
	Ifc_label object_type;

	virtual ~Ifc_object() {}
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

struct Ifc_path : Ifc_topological_representation_item {
	std::vector<Ifc_oriented_edge *> edge_list;

	Ifc_path() {
		entity = "Ifc_path";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_path &o) {
		return os << "Ifc_path(" << "vector(" << o.edge_list.size() << ")" << ")";
	}
};

struct Ifc_placement : Ifc_geometric_representation_item {
	Ifc_cartesian_point *location;

	virtual ~Ifc_placement() {}
};

struct Ifc_point : Ifc_geometric_representation_item {
	virtual ~Ifc_point() {}
};

struct Ifc_point_light_source : Ifc_presentation_light_source {
	Ifc_cartesian_point *location;
	std::vector<double> attenuation;

	Ifc_point_light_source() {
		entity = "Ifc_point_light_source";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_point_light_source &o) {
		return os << "Ifc_point_light_source(" << "vector(" << o.color.size() << ")" << ", " << o.ambient_intensity << ", " << o.intensity << ", " << o.in_context << ", " << o.name << ", " << o.description << ", " << o.location << ", " << "vector(" << o.attenuation.size() << ")" << ")";
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
	Ifc_polyline *polygonal_boundary;

	Ifc_polygonal_bounded_half_space() {
		entity = "Ifc_polygonal_bounded_half_space";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_polygonal_bounded_half_space &o) {
		return os << "Ifc_polygonal_bounded_half_space(" << o.base_surface << ", " << o.agreement_flag << ", " << o.position << ", " << o.polygonal_boundary << ")";
	}
};

struct Ifc_process : Ifc_object {
	Ifc_measure_with_unit *productivity;

	virtual ~Ifc_process() {}
};

struct Ifc_product : Ifc_object {
	Ifc_object_placement *object_placement;
	Ifc_product_representation *representation;

	virtual ~Ifc_product() {}
};

struct Ifc_product_definition_shape : Ifc_product_representation {
	Ifc_product_definition_shape() {
		entity = "Ifc_product_definition_shape";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_product_definition_shape &o) {
		return os << "Ifc_product_definition_shape(" << o.name << ", " << o.description << ", " << "vector(" << o.representations.size() << ")" << ")";
	}
};

struct Ifc_project : Ifc_object {
	Ifc_identifier long_name;
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

struct Ifc_reference_edge : Ifc_reference_geometry {
	Ifc_edge *edge;

	Ifc_reference_edge() {
		entity = "Ifc_reference_edge";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_reference_edge &o) {
		return os << "Ifc_reference_edge(" << o.placement << ", " << o.edge << ")";
	}
};

struct Ifc_reference_face : Ifc_reference_geometry {
	Ifc_face *face;

	Ifc_reference_face() {
		entity = "Ifc_reference_face";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_reference_face &o) {
		return os << "Ifc_reference_face(" << o.placement << ", " << o.face << ")";
	}
};

struct Ifc_relationship : Ifc_root {
	virtual ~Ifc_relationship() {}
};

struct Ifc_resource : Ifc_object {
	Ifc_resource_consumption_enum resource_consumption;
	Ifc_measure_with_unit *base_unit;

	virtual ~Ifc_resource() {}
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

struct Ifc_shell_based_surface_model : Ifc_geometric_representation_item {
	std::vector<Ifc_shell *> sbsm_boundary;

	Ifc_shell_based_surface_model() {
		entity = "Ifc_shell_based_surface_model";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_shell_based_surface_model &o) {
		return os << "Ifc_shell_based_surface_model(" << "vector(" << o.sbsm_boundary.size() << ")" << ")";
	}
};

struct Ifc_solid_model : Ifc_geometric_representation_item {
	virtual ~Ifc_solid_model() {}
};

struct Ifc_space_thermal_load : Ifc_property_set_definition {
	Ifc_positive_ratio_measure applicable_value_ratio;
	Ifc_thermal_load_type_enum thermal_load_source;
	Ifc_requirement_or_criteria_enum requirement_or_criteria;
	bool constant_load;
	Ifc_loss_or_gain_enum loss_or_gain;
	Ifc_text source_description;
	Ifc_measure_with_unit *maximum_value;
	Ifc_measure_with_unit *minimum_value;

	Ifc_space_thermal_load() {
		entity = "Ifc_space_thermal_load";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_space_thermal_load &o) {
		return os << "Ifc_space_thermal_load(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.applicable_value_ratio << ", " << o.thermal_load_source << ", " << o.requirement_or_criteria << ", " << o.constant_load << ", " << o.loss_or_gain << ", " << o.source_description << ", " << o.maximum_value << ", " << o.minimum_value << ")";
	}
};

struct Ifc_spatial_structure_element : Ifc_product {
	Ifc_identifier long_name;
	Ifc_element_composition_enum composition_type;

	virtual ~Ifc_spatial_structure_element() {}
};

struct Ifc_spot_light_source : Ifc_point_light_source {
	Ifc_positive_plane_angle_measure spread_angle;
	Ifc_positive_plane_angle_measure cut_off_angle;
	Ifc_positive_length_measure radius;
	Ifc_direction *direction;

	Ifc_spot_light_source() {
		entity = "Ifc_spot_light_source";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_spot_light_source &o) {
		return os << "Ifc_spot_light_source(" << "vector(" << o.color.size() << ")" << ", " << o.ambient_intensity << ", " << o.intensity << ", " << o.in_context << ", " << o.name << ", " << o.description << ", " << o.location << ", " << "vector(" << o.attenuation.size() << ")" << ", " << o.spread_angle << ", " << o.cut_off_angle << ", " << o.radius << ", " << o.direction << ")";
	}
};

struct Ifc_sub_contract_resource : Ifc_resource {
	Ifc_identifier sub_contract_resource_i_d;
	Ifc_actor_select *sub_contractor;
	Ifc_text job_description;

	Ifc_sub_contract_resource() {
		entity = "Ifc_sub_contract_resource";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_sub_contract_resource &o) {
		return os << "Ifc_sub_contract_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.resource_consumption << ", " << o.base_unit << ", " << o.sub_contract_resource_i_d << ", " << o.sub_contractor << ", " << o.job_description << ")";
	}
};

struct Ifc_surface : Ifc_geometric_representation_item {
	virtual ~Ifc_surface() {}
};

struct Ifc_surface_extended_properties : Ifc_surface_style_properties {
	std::vector<Ifc_property *> extended_properties;
	Ifc_text description;
	Ifc_label name;

	Ifc_surface_extended_properties() {
		entity = "Ifc_surface_extended_properties";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_extended_properties &o) {
		return os << "Ifc_surface_extended_properties(" << o.usage_identifier << ", " << "vector(" << o.extended_properties.size() << ")" << ", " << o.description << ", " << o.name << ")";
	}
};

struct Ifc_surface_shading_properties : Ifc_surface_style_properties {
	Ifc_color_r_g_b ambient_color;

	Ifc_surface_shading_properties() {
		entity = "Ifc_surface_shading_properties";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_shading_properties &o) {
		return os << "Ifc_surface_shading_properties(" << o.usage_identifier << ", " << "vector(" << o.ambient_color.size() << ")" << ")";
	}
};

struct Ifc_swept_area_solid : Ifc_solid_model {
	Ifc_profile_def *swept_area;
	Ifc_axis_2_placement_3_d *position;

	virtual ~Ifc_swept_area_solid() {}
};

struct Ifc_swept_surface : Ifc_surface {
	Ifc_profile_def *swept_curve;
	Ifc_axis_2_placement_3_d *position;

	virtual ~Ifc_swept_surface() {}
};

struct Ifc_task : Ifc_process {
	Ifc_identifier task_id;
	std::vector<Ifc_label> w_b_s_code;
	std::vector<Ifc_label> w_b_s_source;
	Ifc_task_status_enum status;
	std::vector<Ifc_task_milestone_enum> milestones;
	Ifc_label work_method;
	Ifc_measure_with_unit *in_place_quantity;
	Ifc_measure_with_unit *estimated_quantity;
	Ifc_measure_with_unit *budget_quantity;
	bool is_root_task;

	Ifc_task() {
		entity = "Ifc_task";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_task &o) {
		return os << "Ifc_task(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.productivity << ", " << o.task_id << ", " << "vector(" << o.w_b_s_code.size() << ")" << ", " << "vector(" << o.w_b_s_source.size() << ")" << ", " << o.status << ", " << "vector(" << o.milestones.size() << ")" << ", " << o.work_method << ", " << o.in_place_quantity << ", " << o.estimated_quantity << ", " << o.budget_quantity << ", " << o.is_root_task << ")";
	}
};

struct Ifc_type_object : Ifc_property_definition {
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

struct Ifc_vector : Ifc_geometric_representation_item {
	Ifc_direction *orientation;
	Ifc_length_measure *magnitude;

	Ifc_vector() {
		entity = "Ifc_vector";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_vector &o) {
		return os << "Ifc_vector(" << o.orientation << ", " << o.magnitude << ")";
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

struct Ifc_actor : Ifc_object {
	Ifc_actor_select *the_actor;

	Ifc_actor() {
		entity = "Ifc_actor";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_actor &o) {
		return os << "Ifc_actor(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.the_actor << ")";
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
	Ifc_positive_length_measure *x_dim;
	Ifc_positive_length_measure *y_dim;
	Ifc_positive_length_measure *z_dim;

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

struct Ifc_building_storey : Ifc_spatial_structure_element {
	Ifc_length_measure elevation;

	Ifc_building_storey() {
		entity = "Ifc_building_storey";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_building_storey &o) {
		return os << "Ifc_building_storey(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.long_name << ", " << o.composition_type << ", " << o.elevation << ")";
	}
};

struct Ifc_cartesian_point : Ifc_point {
	std::vector<Ifc_length_measure *> coordinates;

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

struct Ifc_construction_equipment_resource : Ifc_resource {
	Ifc_construction_equipment_resource() {
		entity = "Ifc_construction_equipment_resource";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_construction_equipment_resource &o) {
		return os << "Ifc_construction_equipment_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.resource_consumption << ", " << o.base_unit << ")";
	}
};

struct Ifc_construction_material_resource : Ifc_resource {
	std::vector<Ifc_actor_select *> suppliers;
	Ifc_measure_with_unit *order_quantity;
	std::vector<Ifc_material *> design_material;

	Ifc_construction_material_resource() {
		entity = "Ifc_construction_material_resource";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_construction_material_resource &o) {
		return os << "Ifc_construction_material_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.resource_consumption << ", " << o.base_unit << ", " << "vector(" << o.suppliers.size() << ")" << ", " << o.order_quantity << ", " << "vector(" << o.design_material.size() << ")" << ")";
	}
};

struct Ifc_construction_product_resource : Ifc_resource {
	Ifc_construction_product_resource() {
		entity = "Ifc_construction_product_resource";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_construction_product_resource &o) {
		return os << "Ifc_construction_product_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.resource_consumption << ", " << o.base_unit << ")";
	}
};

struct Ifc_control : Ifc_object {
	virtual ~Ifc_control() {}
};

struct Ifc_cost : Ifc_control {
	Ifc_label context_description;
	Ifc_cost_value *element_cost;
	Ifc_cost_value *extension_cost;
	Ifc_cost_use_enum cost_use;
	Ifc_calendar_date *prepared_on;
	std::vector<Ifc_cost_quantity *> quantities;
	Ifc_label cost_type;

	Ifc_cost() {
		entity = "Ifc_cost";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cost &o) {
		return os << "Ifc_cost(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.context_description << ", " << o.element_cost << ", " << o.extension_cost << ", " << o.cost_use << ", " << o.prepared_on << ", " << "vector(" << o.quantities.size() << ")" << ", " << o.cost_type << ")";
	}
};

struct Ifc_cost_schedule : Ifc_control {
	Ifc_label title;
	Ifc_actor_select *submitted_by;
	std::vector<Ifc_actor_select *> approved_by;
	Ifc_person *prepared_by;
	Ifc_calendar_date *submitted_on;
	Ifc_cost_value *total_cost;
	std::vector<Ifc_cost *> cost_elements;
	Ifc_label status;
	Ifc_text intended_use;
	std::vector<Ifc_text> comments;
	std::vector<Ifc_actor_select *> target_users;
	Ifc_calendar_date *valid_from_date;
	Ifc_calendar_date *valid_to_date;
	Ifc_calendar_date *update_date;
	Ifc_identifier schedule_number;

	Ifc_cost_schedule() {
		entity = "Ifc_cost_schedule";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cost_schedule &o) {
		return os << "Ifc_cost_schedule(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.title << ", " << o.submitted_by << ", " << "vector(" << o.approved_by.size() << ")" << ", " << o.prepared_by << ", " << o.submitted_on << ", " << o.total_cost << ", " << "vector(" << o.cost_elements.size() << ")" << ", " << o.status << ", " << o.intended_use << ", " << "vector(" << o.comments.size() << ")" << ", " << "vector(" << o.target_users.size() << ")" << ", " << o.valid_from_date << ", " << o.valid_to_date << ", " << o.update_date << ", " << o.schedule_number << ")";
	}
};

struct Ifc_crew_resource : Ifc_resource {
	Ifc_crew_resource() {
		entity = "Ifc_crew_resource";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_crew_resource &o) {
		return os << "Ifc_crew_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.resource_consumption << ", " << o.base_unit << ")";
	}
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
	Ifc_2_d_composite_curve *outer_boundary;
	std::vector<Ifc_2_d_composite_curve *> inner_boundaries;

	Ifc_curve_bounded_plane() {
		entity = "Ifc_curve_bounded_plane";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_curve_bounded_plane &o) {
		return os << "Ifc_curve_bounded_plane(" << o.basis_surface << ", " << o.outer_boundary << ", " << "vector(" << o.inner_boundaries.size() << ")" << ")";
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

struct Ifc_electrical_base_properties : Ifc_property_set_definition {
	Ifc_electric_current_enum electric_current_type;
	Ifc_electric_voltage_measure input_voltage;
	Ifc_frequency_measure input_frequency;
	Ifc_electric_current_measure full_load_current;
	Ifc_electric_current_measure minimum_circuit_current;
	Ifc_power_measure maximum_power_input;
	Ifc_power_measure rated_power_input;

	Ifc_electrical_base_properties() {
		entity = "Ifc_electrical_base_properties";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_electrical_base_properties &o) {
		return os << "Ifc_electrical_base_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.electric_current_type << ", " << o.input_voltage << ", " << o.input_frequency << ", " << o.full_load_current << ", " << o.minimum_circuit_current << ", " << o.maximum_power_input << ", " << o.rated_power_input << ")";
	}
};

struct Ifc_electrical_extended_properties : Ifc_electrical_base_properties {
	int input_phase;
	Ifc_electric_current_measure inrush_current;
	Ifc_electric_current_measure locked_rotor_current;
	Ifc_power_measure circuit_size_power_input;
	Ifc_electric_current_measure fuse_size;
	bool grounded;

	Ifc_electrical_extended_properties() {
		entity = "Ifc_electrical_extended_properties";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_electrical_extended_properties &o) {
		return os << "Ifc_electrical_extended_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.electric_current_type << ", " << o.input_voltage << ", " << o.input_frequency << ", " << o.full_load_current << ", " << o.minimum_circuit_current << ", " << o.maximum_power_input << ", " << o.rated_power_input << ", " << o.input_phase << ", " << o.inrush_current << ", " << o.locked_rotor_current << ", " << o.circuit_size_power_input << ", " << o.fuse_size << ", " << o.grounded << ")";
	}
};

struct Ifc_element : Ifc_product {
	Ifc_identifier tag;

	virtual ~Ifc_element() {}
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

struct Ifc_elementary_surface : Ifc_surface {
	Ifc_axis_2_placement_3_d *position;

	virtual ~Ifc_elementary_surface() {}
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

struct Ifc_extruded_area_solid : Ifc_swept_area_solid {
	Ifc_direction *extruded_direction;
	Ifc_positive_length_measure *depth;

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

struct Ifc_fluid_flow_properties : Ifc_property_set_definition {
	Ifc_volumetric_flow_rate_measure maximum_flow_rate;
	Ifc_volumetric_flow_rate_measure design_flowrate;
	Ifc_volumetric_flow_rate_measure minimum_flowrate;
	Ifc_pressure_measure pressure_loss;
	Ifc_pressure_measure working_pressure;
	Ifc_pressure_measure pressure_rating;
	Ifc_material *fluid;
	Ifc_linear_velocity_measure design_velocity;
	std::vector<Ifc_thermodynamic_temperature_measure> design_temperature;
	std::vector<Ifc_thermodynamic_temperature_measure> maximum_temperature;
	std::vector<Ifc_thermodynamic_temperature_measure> minimum_temperature;
	std::vector<Ifc_thermodynamic_temperature_measure> working_temperature;
	Ifc_ratio_measure working_quality;

	Ifc_fluid_flow_properties() {
		entity = "Ifc_fluid_flow_properties";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_fluid_flow_properties &o) {
		return os << "Ifc_fluid_flow_properties(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.maximum_flow_rate << ", " << o.design_flowrate << ", " << o.minimum_flowrate << ", " << o.pressure_loss << ", " << o.working_pressure << ", " << o.pressure_rating << ", " << o.fluid << ", " << o.design_velocity << ", " << "vector(" << o.design_temperature.size() << ")" << ", " << "vector(" << o.maximum_temperature.size() << ")" << ", " << "vector(" << o.minimum_temperature.size() << ")" << ", " << "vector(" << o.working_temperature.size() << ")" << ", " << o.working_quality << ")";
	}
};

struct Ifc_furnishing_element : Ifc_element {
	Ifc_furnishing_element() {
		entity = "Ifc_furnishing_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_furnishing_element &o) {
		return os << "Ifc_furnishing_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
	}
};

struct Ifc_furniture : Ifc_furnishing_element {
	Ifc_furniture() {
		entity = "Ifc_furniture";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_furniture &o) {
		return os << "Ifc_furniture(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
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

struct Ifc_inventory : Ifc_group {
	Ifc_inventory_type_enum defined_type;
	Ifc_actor_select *jurisdiction;
	std::vector<Ifc_person *> responsible_persons;
	Ifc_calendar_date *last_update_date;
	Ifc_cost_value *current_value;
	Ifc_cost_value *original_value;

	Ifc_inventory() {
		entity = "Ifc_inventory";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_inventory &o) {
		return os << "Ifc_inventory(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.defined_type << ", " << o.jurisdiction << ", " << "vector(" << o.responsible_persons.size() << ")" << ", " << o.last_update_date << ", " << o.current_value << ", " << o.original_value << ")";
	}
};

struct Ifc_labor_resource : Ifc_resource {
	Ifc_label title;
	std::vector<Ifc_label> skill_set;

	Ifc_labor_resource() {
		entity = "Ifc_labor_resource";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_labor_resource &o) {
		return os << "Ifc_labor_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.resource_consumption << ", " << o.base_unit << ", " << o.title << ", " << "vector(" << o.skill_set.size() << ")" << ")";
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

struct Ifc_maintenance_record : Ifc_control {
	std::vector<Ifc_rel_maintenance_event *> records;

	Ifc_maintenance_record() {
		entity = "Ifc_maintenance_record";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_maintenance_record &o) {
		return os << "Ifc_maintenance_record(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << "vector(" << o.records.size() << ")" << ")";
	}
};

struct Ifc_manifold_solid_brep : Ifc_solid_model {
	Ifc_closed_shell *outer;

	virtual ~Ifc_manifold_solid_brep() {}
};

struct Ifc_manufacturer_information : Ifc_property_set_definition {
	Ifc_label model_label;
	Ifc_label model_reference;
	Ifc_organization *manufacturer;
	std::vector<Ifc_physical_quantity *> quantity_information;

	Ifc_manufacturer_information() {
		entity = "Ifc_manufacturer_information";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_manufacturer_information &o) {
		return os << "Ifc_manufacturer_information(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.model_label << ", " << o.model_reference << ", " << o.manufacturer << ", " << "vector(" << o.quantity_information.size() << ")" << ")";
	}
};

struct Ifc_move : Ifc_task {
	Ifc_spatial_structure_element *move_from;
	Ifc_spatial_structure_element *move_to;
	std::vector<Ifc_action_time_control *> move_constraints;
	std::vector<Ifc_label> punch_list;

	Ifc_move() {
		entity = "Ifc_move";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_move &o) {
		return os << "Ifc_move(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.productivity << ", " << o.task_id << ", " << "vector(" << o.w_b_s_code.size() << ")" << ", " << "vector(" << o.w_b_s_source.size() << ")" << ", " << o.status << ", " << "vector(" << o.milestones.size() << ")" << ", " << o.work_method << ", " << o.in_place_quantity << ", " << o.estimated_quantity << ", " << o.budget_quantity << ", " << o.is_root_task << ", " << o.move_from << ", " << o.move_to << ", " << "vector(" << o.move_constraints.size() << ")" << ", " << "vector(" << o.punch_list.size() << ")" << ")";
	}
};

struct Ifc_occupant : Ifc_actor {
	Ifc_calendar_date *leese_or_rental_date;
	Ifc_time_measure leese_or_rental_period;
	Ifc_occupant_type_enum occupation_type;
	int unlimited_period;

	Ifc_occupant() {
		entity = "Ifc_occupant";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_occupant &o) {
		return os << "Ifc_occupant(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.the_actor << ", " << o.leese_or_rental_date << ", " << o.leese_or_rental_period << ", " << o.occupation_type << ", " << o.unlimited_period << ")";
	}
};

struct Ifc_offset_curve_2_d : Ifc_curve {
	Ifc_curve *basis_curve;
	Ifc_length_measure *distance;
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
	Ifc_length_measure *distance;
	int self_intersect;
	Ifc_direction *ref_direction;

	Ifc_offset_curve_3_d() {
		entity = "Ifc_offset_curve_3_d";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_offset_curve_3_d &o) {
		return os << "Ifc_offset_curve_3_d(" << o.basis_curve << ", " << o.distance << ", " << o.self_intersect << ", " << o.ref_direction << ")";
	}
};

struct Ifc_opening_element : Ifc_element {
	Ifc_opening_element() {
		entity = "Ifc_opening_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_opening_element &o) {
		return os << "Ifc_opening_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
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

struct Ifc_plane : Ifc_elementary_surface {
	Ifc_plane() {
		entity = "Ifc_plane";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_plane &o) {
		return os << "Ifc_plane(" << o.position << ")";
	}
};

struct Ifc_project_order : Ifc_control {
	Ifc_identifier order_number;
	Ifc_label transaction_code;
	Ifc_calendar_date *issuing_date;
	Ifc_actor_select *issued_by;
	std::vector<Ifc_actor_select *> issued_to;
	std::vector<Ifc_actor_select *> additional_contacts;
	std::vector<Ifc_text> remarks;
	Ifc_person *signoff;
	Ifc_budget *budget_source;

	virtual ~Ifc_project_order() {}
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

struct Ifc_purchase_order : Ifc_project_order {
	Ifc_calendar_date *required_date;
	Ifc_calendar_date *scheduled_date;
	Ifc_calendar_date *actual_date;
	bool is_f_o_b;
	Ifc_label ship_method;
	Ifc_cost_schedule *purchase_items;
	Ifc_cost_value *total_cost;
	Ifc_purchase_order_status_enum status;

	Ifc_purchase_order() {
		entity = "Ifc_purchase_order";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_purchase_order &o) {
		return os << "Ifc_purchase_order(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.order_number << ", " << o.transaction_code << ", " << o.issuing_date << ", " << o.issued_by << ", " << "vector(" << o.issued_to.size() << ")" << ", " << "vector(" << o.additional_contacts.size() << ")" << ", " << "vector(" << o.remarks.size() << ")" << ", " << o.signoff << ", " << o.budget_source << ", " << o.required_date << ", " << o.scheduled_date << ", " << o.actual_date << ", " << o.is_f_o_b << ", " << o.ship_method << ", " << o.purchase_items << ", " << o.total_cost << ", " << o.status << ")";
	}
};

struct Ifc_rectangular_trimmed_surface : Ifc_bounded_surface {
	Ifc_surface *basis_surface;
	Ifc_parameter_value *u_1;
	Ifc_parameter_value *v_1;
	Ifc_parameter_value *u_2;
	Ifc_parameter_value *v_2;
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
	std::vector<Ifc_object *> related_objects;
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

struct Ifc_rel_associates_classification : Ifc_rel_associates {
	Ifc_classification_notation_select *relating_classification;

	Ifc_rel_associates_classification() {
		entity = "Ifc_rel_associates_classification";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_associates_classification &o) {
		return os << "Ifc_rel_associates_classification(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.relating_classification << ")";
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

struct Ifc_rel_connects_ports : Ifc_rel_connects_elements {
	Ifc_flow_direction_enum flow_direction;
	Ifc_port_connection_type_enum port_connection_type;

	Ifc_rel_connects_ports() {
		entity = "Ifc_rel_connects_ports";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_connects_ports &o) {
		return os << "Ifc_rel_connects_ports(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.connection_geometry << ", " << o.relating_element << ", " << o.related_element << ", " << o.flow_direction << ", " << o.port_connection_type << ")";
	}
};

struct Ifc_rel_contained_in_spatial_structure : Ifc_rel_connects {
	std::vector<Ifc_element *> related_elements;
	Ifc_spatial_structure_element *relating_structure;

	Ifc_rel_contained_in_spatial_structure() {
		entity = "Ifc_rel_contained_in_spatial_structure";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_contained_in_spatial_structure &o) {
		return os << "Ifc_rel_contained_in_spatial_structure(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_elements.size() << ")" << ", " << o.relating_structure << ")";
	}
};

struct Ifc_rel_costs_objects : Ifc_rel_assigns_to_control {
	Ifc_rel_costs_objects() {
		entity = "Ifc_rel_costs_objects";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_costs_objects &o) {
		return os << "Ifc_rel_costs_objects(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.related_objects_type << ", " << o.relating_control << ")";
	}
};

struct Ifc_rel_covers_bldg_elements : Ifc_rel_connects {
	Ifc_building_element *relating_building_element;
	std::vector<Ifc_covering *> related_coverings;

	Ifc_rel_covers_bldg_elements() {
		entity = "Ifc_rel_covers_bldg_elements";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_covers_bldg_elements &o) {
		return os << "Ifc_rel_covers_bldg_elements(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_building_element << ", " << "vector(" << o.related_coverings.size() << ")" << ")";
	}
};

struct Ifc_rel_decomposes : Ifc_relationship {
	Ifc_object *relating_object;
	std::vector<Ifc_object *> related_objects;

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
	Ifc_building_element *related_building_element;

	Ifc_rel_fills_element() {
		entity = "Ifc_rel_fills_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_fills_element &o) {
		return os << "Ifc_rel_fills_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_opening_element << ", " << o.related_building_element << ")";
	}
};

struct Ifc_rel_flow_control_elements : Ifc_rel_connects {
	std::vector<Ifc_control_element *> related_control_elements;
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
	Ifc_actor *relating_actor;
	Ifc_actor *related_actor;
	Ifc_space_program *related_space_program;
	Ifc_space_program *relating_space_program;

	Ifc_rel_interaction_requirements() {
		entity = "Ifc_rel_interaction_requirements";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_interaction_requirements &o) {
		return os << "Ifc_rel_interaction_requirements(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.daily_interaction << ", " << o.importance_rating << ", " << o.location_of_interaction << ", " << o.relating_actor << ", " << o.related_actor << ", " << o.related_space_program << ", " << o.relating_space_program << ")";
	}
};

struct Ifc_rel_maintenance_event : Ifc_rel_connects {
	std::vector<Ifc_asset *> related_assets;
	Ifc_maintenance_work_order *relating_work_order;

	Ifc_rel_maintenance_event() {
		entity = "Ifc_rel_maintenance_event";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_maintenance_event &o) {
		return os << "Ifc_rel_maintenance_event(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_assets.size() << ")" << ", " << o.relating_work_order << ")";
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
	std::vector<Ifc_building *> related_buildings;

	Ifc_rel_services_buildings() {
		entity = "Ifc_rel_services_buildings";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_services_buildings &o) {
		return os << "Ifc_rel_services_buildings(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_system << ", " << "vector(" << o.related_buildings.size() << ")" << ")";
	}
};

struct Ifc_rel_space_boundary : Ifc_rel_connects {
	Ifc_space *relating_space;
	Ifc_building_element *related_building_element;
	Ifc_connection_surface_geometry *connection_geometry;
	Ifc_physical_or_virtual_enum physical_or_virtual_boundary;
	Ifc_internal_or_external_enum internal_or_external_boundary;

	Ifc_rel_space_boundary() {
		entity = "Ifc_rel_space_boundary";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_space_boundary &o) {
		return os << "Ifc_rel_space_boundary(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_space << ", " << o.related_building_element << ", " << o.connection_geometry << ", " << o.physical_or_virtual_boundary << ", " << o.internal_or_external_boundary << ")";
	}
};

struct Ifc_rel_uses_resource : Ifc_rel_assigns_to_resource {
	Ifc_time_measure duration;
	Ifc_measure_with_unit *quantity;
	Ifc_measure_with_unit *productivity_conversion_rate;
	Ifc_multiplier_or_divider converter_multiplier_or_divider;
	std::vector<Ifc_cost_value *> resource_use_costs;
	double waste_factor;

	Ifc_rel_uses_resource() {
		entity = "Ifc_rel_uses_resource";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_uses_resource &o) {
		return os << "Ifc_rel_uses_resource(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.related_objects_type << ", " << o.relating_resource << ", " << o.duration << ", " << o.quantity << ", " << o.productivity_conversion_rate << ", " << o.converter_multiplier_or_divider << ", " << "vector(" << o.resource_use_costs.size() << ")" << ", " << o.waste_factor << ")";
	}
};

struct Ifc_rel_voids_element : Ifc_rel_connects {
	Ifc_building_element *relating_building_element;
	Ifc_opening_element *related_opening_element;

	Ifc_rel_voids_element() {
		entity = "Ifc_rel_voids_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_voids_element &o) {
		return os << "Ifc_rel_voids_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_building_element << ", " << o.related_opening_element << ")";
	}
};

struct Ifc_revolved_area_solid : Ifc_swept_area_solid {
	Ifc_axis_1_placement *axis;
	Ifc_plane_angle_measure *angle;

	Ifc_revolved_area_solid() {
		entity = "Ifc_revolved_area_solid";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_revolved_area_solid &o) {
		return os << "Ifc_revolved_area_solid(" << o.swept_area << ", " << o.position << ", " << o.axis << ", " << o.angle << ")";
	}
};

struct Ifc_schedule_time_control : Ifc_control {
	Ifc_calendar_date *actual_start;
	Ifc_calendar_date *early_start;
	Ifc_calendar_date *late_start;
	Ifc_calendar_date *schedule_start;
	Ifc_calendar_date *actual_finish;
	Ifc_calendar_date *early_finish;
	Ifc_calendar_date *late_finish;
	Ifc_calendar_date *schedule_finish;
	Ifc_time_measure schedule_duration;
	Ifc_time_measure actual_duration;
	Ifc_time_measure remaining_time;
	Ifc_time_measure free_float;
	Ifc_time_measure total_float;
	bool is_critical;
	Ifc_calendar_date *status_time;
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

struct Ifc_space_program : Ifc_control {
	Ifc_identifier space_program_identifier;
	Ifc_area_measure max_required_area;
	Ifc_area_measure min_required_area;
	Ifc_spatial_structure_element *requested_location;
	Ifc_cost_value *min_estimated_cost;
	Ifc_cost_value *max_estimated_cost;
	Ifc_area_measure standard_required_area;

	Ifc_space_program() {
		entity = "Ifc_space_program";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_space_program &o) {
		return os << "Ifc_space_program(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.space_program_identifier << ", " << o.max_required_area << ", " << o.min_required_area << ", " << o.requested_location << ", " << o.min_estimated_cost << ", " << o.max_estimated_cost << ", " << o.standard_required_area << ")";
	}
};

struct Ifc_space_program_group : Ifc_group {
	Ifc_area_measure required_group_area;
	Ifc_label group_role;
	Ifc_actor_select *group_assignment;

	Ifc_space_program_group() {
		entity = "Ifc_space_program_group";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_space_program_group &o) {
		return os << "Ifc_space_program_group(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.required_group_area << ", " << o.group_role << ", " << o.group_assignment << ")";
	}
};

struct Ifc_surface_of_linear_extrusion : Ifc_swept_surface {
	Ifc_direction *extruded_direction;
	Ifc_length_measure *depth;

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

struct Ifc_surface_rendering_properties : Ifc_surface_shading_properties {
	Ifc_normalised_ratio_measure ambient_intensity;
	Ifc_color_r_g_b diffuse_color;
	Ifc_normalised_ratio_measure transparency;
	Ifc_color_r_g_b emmisive_color;
	Ifc_normalised_ratio_measure specular_intensity;
	Ifc_color_r_g_b specular_color;

	Ifc_surface_rendering_properties() {
		entity = "Ifc_surface_rendering_properties";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_surface_rendering_properties &o) {
		return os << "Ifc_surface_rendering_properties(" << o.usage_identifier << ", " << "vector(" << o.ambient_color.size() << ")" << ", " << o.ambient_intensity << ", " << "vector(" << o.diffuse_color.size() << ")" << ", " << o.transparency << ", " << "vector(" << o.emmisive_color.size() << ")" << ", " << o.specular_intensity << ", " << "vector(" << o.specular_color.size() << ")" << ")";
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

struct Ifc_system_furniture_element : Ifc_furnishing_element {
	Ifc_system_furniture_element() {
		entity = "Ifc_system_furniture_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_system_furniture_element &o) {
		return os << "Ifc_system_furniture_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
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

struct Ifc_work_control : Ifc_control {
	Ifc_identifier identifier;
	Ifc_calendar_date *creation_date;
	std::vector<Ifc_person *> creators;
	Ifc_label purpose;
	Ifc_time_measure duration;
	Ifc_time_measure total_float;
	Ifc_calendar_date *start_time;
	Ifc_calendar_date *finish_time;
	Ifc_work_control_type_enum work_control_type;

	virtual ~Ifc_work_control() {}
};

struct Ifc_work_order : Ifc_project_order {
	Ifc_label product_description;
	Ifc_label short_job_description;
	Ifc_label long_job_description;
	Ifc_label work_type_requested;
	Ifc_label contractual_type;
	std::vector<Ifc_label> if_not_accomplished;
	Ifc_date_and_time *requested_start_time;
	Ifc_date_and_time *requested_finish_time;
	Ifc_date_and_time *actual_start_time;
	Ifc_date_and_time *actual_finish_time;
	Ifc_cost_schedule *cost_estimate;
	Ifc_work_plan *work_plan;
	Ifc_work_order_status_enum status;
	std::vector<Ifc_work_order_risk_type_enum> work_order_risk_type;
	std::vector<Ifc_person *> performed_by;
	Ifc_cost_value *actual_cost;

	Ifc_work_order() {
		entity = "Ifc_work_order";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_work_order &o) {
		return os << "Ifc_work_order(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.order_number << ", " << o.transaction_code << ", " << o.issuing_date << ", " << o.issued_by << ", " << "vector(" << o.issued_to.size() << ")" << ", " << "vector(" << o.additional_contacts.size() << ")" << ", " << "vector(" << o.remarks.size() << ")" << ", " << o.signoff << ", " << o.budget_source << ", " << o.product_description << ", " << o.short_job_description << ", " << o.long_job_description << ", " << o.work_type_requested << ", " << o.contractual_type << ", " << "vector(" << o.if_not_accomplished.size() << ")" << ", " << o.requested_start_time << ", " << o.requested_finish_time << ", " << o.actual_start_time << ", " << o.actual_finish_time << ", " << o.cost_estimate << ", " << o.work_plan << ", " << o.status << ", " << "vector(" << o.work_order_risk_type.size() << ")" << ", " << "vector(" << o.performed_by.size() << ")" << ", " << o.actual_cost << ")";
	}
};

struct Ifc_work_plan : Ifc_work_control {
	Ifc_work_plan() {
		entity = "Ifc_work_plan";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_work_plan &o) {
		return os << "Ifc_work_plan(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identifier << ", " << o.creation_date << ", " << "vector(" << o.creators.size() << ")" << ", " << o.purpose << ", " << o.duration << ", " << o.total_float << ", " << o.start_time << ", " << o.finish_time << ", " << o.work_control_type << ")";
	}
};

struct Ifc_work_schedule : Ifc_work_control {
	Ifc_work_schedule() {
		entity = "Ifc_work_schedule";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_work_schedule &o) {
		return os << "Ifc_work_schedule(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.identifier << ", " << o.creation_date << ", " << "vector(" << o.creators.size() << ")" << ", " << o.purpose << ", " << o.duration << ", " << o.total_float << ", " << o.start_time << ", " << o.finish_time << ", " << o.work_control_type << ")";
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

struct Ifc_approval_usage : Ifc_control {
	Ifc_approval *approval;

	Ifc_approval_usage() {
		entity = "Ifc_approval_usage";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_approval_usage &o) {
		return os << "Ifc_approval_usage(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.approval << ")";
	}
};

struct Ifc_assessory : Ifc_equipment_element {
	Ifc_label mounting_type;

	Ifc_assessory() {
		entity = "Ifc_assessory";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_assessory &o) {
		return os << "Ifc_assessory(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.mounting_type << ")";
	}
};

struct Ifc_asset : Ifc_group {
	Ifc_spatial_structure_element *asset_location;
	Ifc_label asset_identifier;
	std::vector<Ifc_risk_type_enum> asset_risks;
	Ifc_cost_value *original_value;
	Ifc_cost_value *current_value;
	Ifc_cost_value *total_replacement_cost;
	Ifc_actor_select *owner;
	Ifc_actor_select *user;
	Ifc_actor_select *leased_from;
	Ifc_actor_select *leased_to;
	Ifc_person *responsible_person;
	Ifc_calendar_date *incorporation_date;
	Ifc_calendar_date *commissioning_date;
	Ifc_time_measure warranty_duration;
	Ifc_time_measure expected_life;
	Ifc_classification_notation *operating_function;
	Ifc_cost_value *depreciated_value;

	Ifc_asset() {
		entity = "Ifc_asset";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_asset &o) {
		return os << "Ifc_asset(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.asset_location << ", " << o.asset_identifier << ", " << "vector(" << o.asset_risks.size() << ")" << ", " << o.original_value << ", " << o.current_value << ", " << o.total_replacement_cost << ", " << o.owner << ", " << o.user << ", " << o.leased_from << ", " << o.leased_to << ", " << o.responsible_person << ", " << o.incorporation_date << ", " << o.commissioning_date << ", " << o.warranty_duration << ", " << o.expected_life << ", " << o.operating_function << ", " << o.depreciated_value << ")";
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

struct Ifc_budget : Ifc_cost_schedule {
	Ifc_label budget_source;
	Ifc_cost_value *balance;

	Ifc_budget() {
		entity = "Ifc_budget";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_budget &o) {
		return os << "Ifc_budget(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.title << ", " << o.submitted_by << ", " << "vector(" << o.approved_by.size() << ")" << ", " << o.prepared_by << ", " << o.submitted_on << ", " << o.total_cost << ", " << "vector(" << o.cost_elements.size() << ")" << ", " << o.status << ", " << o.intended_use << ", " << "vector(" << o.comments.size() << ")" << ", " << "vector(" << o.target_users.size() << ")" << ", " << o.valid_from_date << ", " << o.valid_to_date << ", " << o.update_date << ", " << o.schedule_number << ", " << o.budget_source << ", " << o.balance << ")";
	}
};

struct Ifc_building_element : Ifc_element {
	virtual ~Ifc_building_element() {}
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

struct Ifc_built_in : Ifc_furnishing_element {
	Ifc_built_in_type_enum predefined_type;

	Ifc_built_in() {
		entity = "Ifc_built_in";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_built_in &o) {
		return os << "Ifc_built_in(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
};

struct Ifc_c_m_doc_package : Ifc_group {
	Ifc_identifier doc_package_i_d;
	Ifc_label doc_package_name;
	Ifc_date_time_select *creation_date;
	std::vector<Ifc_actor_select *> authors;

	Ifc_c_m_doc_package() {
		entity = "Ifc_c_m_doc_package";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_c_m_doc_package &o) {
		return os << "Ifc_c_m_doc_package(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.doc_package_i_d << ", " << o.doc_package_name << ", " << o.creation_date << ", " << "vector(" << o.authors.size() << ")" << ")";
	}
};

struct Ifc_change_order : Ifc_project_order {
	Ifc_text change_description;
	Ifc_text reason_for_change;
	Ifc_date_and_time *requested_start_time;
	Ifc_date_and_time *requested_finish_time;
	Ifc_cost_schedule *cost_estimate;
	Ifc_work_plan *work_plan;
	Ifc_change_order_status_enum status;
	Ifc_date_and_time *actual_start_time;
	Ifc_date_and_time *actual_finish_time;

	Ifc_change_order() {
		entity = "Ifc_change_order";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_change_order &o) {
		return os << "Ifc_change_order(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.order_number << ", " << o.transaction_code << ", " << o.issuing_date << ", " << o.issued_by << ", " << "vector(" << o.issued_to.size() << ")" << ", " << "vector(" << o.additional_contacts.size() << ")" << ", " << "vector(" << o.remarks.size() << ")" << ", " << o.signoff << ", " << o.budget_source << ", " << o.change_description << ", " << o.reason_for_change << ", " << o.requested_start_time << ", " << o.requested_finish_time << ", " << o.cost_estimate << ", " << o.work_plan << ", " << o.status << ", " << o.actual_start_time << ", " << o.actual_finish_time << ")";
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

struct Ifc_compartment : Ifc_zone {
	int has_natural_ventilation;
	int has_sprinkler_protection;
	int fire_risk_factor;

	Ifc_compartment() {
		entity = "Ifc_compartment";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_compartment &o) {
		return os << "Ifc_compartment(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.has_natural_ventilation << ", " << o.has_sprinkler_protection << ", " << o.fire_risk_factor << ")";
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

struct Ifc_constraint_usage : Ifc_control {
	Ifc_constraint_intent_enum intent;
	Ifc_constraint *constraint;

	Ifc_constraint_usage() {
		entity = "Ifc_constraint_usage";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_constraint_usage &o) {
		return os << "Ifc_constraint_usage(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.intent << ", " << o.constraint << ")";
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

struct Ifc_discrete_element : Ifc_equipment_element {
	Ifc_discrete_element_type_enum predefined_type;

	Ifc_discrete_element() {
		entity = "Ifc_discrete_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_discrete_element &o) {
		return os << "Ifc_discrete_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.predefined_type << ")";
	}
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
	Ifc_distribution_flow_element_type_enum flow_element_type;

	Ifc_distribution_flow_element() {
		entity = "Ifc_distribution_flow_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_distribution_flow_element &o) {
		return os << "Ifc_distribution_flow_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ")";
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

struct Ifc_electrical_element : Ifc_element {
	Ifc_electrical_element() {
		entity = "Ifc_electrical_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_electrical_element &o) {
		return os << "Ifc_electrical_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ")";
	}
};

struct Ifc_ellipse : Ifc_conic {
	Ifc_positive_length_measure *semi_axis_1;
	Ifc_positive_length_measure *semi_axis_2;

	Ifc_ellipse() {
		entity = "Ifc_ellipse";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_ellipse &o) {
		return os << "Ifc_ellipse(" << o.position << ", " << o.semi_axis_1 << ", " << o.semi_axis_2 << ")";
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

struct Ifc_flow_controller : Ifc_distribution_flow_element {
	Ifc_flow_controller() {
		entity = "Ifc_flow_controller";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_controller &o) {
		return os << "Ifc_flow_controller(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ")";
	}
};

struct Ifc_flow_fitting : Ifc_distribution_flow_element {
	Ifc_flow_fitting_type_enum predefined_type;
	Ifc_primary_fitting_enum primary_fitting_type;

	Ifc_flow_fitting() {
		entity = "Ifc_flow_fitting";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_fitting &o) {
		return os << "Ifc_flow_fitting(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.predefined_type << ", " << o.primary_fitting_type << ")";
	}
};

struct Ifc_flow_segment : Ifc_distribution_flow_element {
	Ifc_flow_segment_type_enum predefined_type;

	Ifc_flow_segment() {
		entity = "Ifc_flow_segment";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_segment &o) {
		return os << "Ifc_flow_segment(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.predefined_type << ")";
	}
};

struct Ifc_flow_terminal : Ifc_distribution_flow_element {
	Ifc_flow_terminal() {
		entity = "Ifc_flow_terminal";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_flow_terminal &o) {
		return os << "Ifc_flow_terminal(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ")";
	}
};

struct Ifc_fluid_moving_device : Ifc_distribution_flow_element {
	Ifc_energy_source_enum primary_energy_source;
	Ifc_length_measure impeller_diameter;

	Ifc_fluid_moving_device() {
		entity = "Ifc_fluid_moving_device";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_fluid_moving_device &o) {
		return os << "Ifc_fluid_moving_device(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.primary_energy_source << ", " << o.impeller_diameter << ")";
	}
};

struct Ifc_heat_transfer_device : Ifc_distribution_flow_element {
	Ifc_power_measure heat_transfer_rate;
	Ifc_positive_ratio_measure thermal_efficiency;
	Ifc_energy_source_enum primary_energy_source;

	Ifc_heat_transfer_device() {
		entity = "Ifc_heat_transfer_device";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_heat_transfer_device &o) {
		return os << "Ifc_heat_transfer_device(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.heat_transfer_rate << ", " << o.thermal_efficiency << ", " << o.primary_energy_source << ")";
	}
};

struct Ifc_hydronic_heater : Ifc_flow_terminal {
	Ifc_hydronic_heater_type_enum hydronic_heater_type;
	Ifc_power_measure heat_output;
	Ifc_label enclosure;
	Ifc_mass_measure body_mass;
	Ifc_integer number_of_panels;
	Ifc_integer number_of_sections;

	Ifc_hydronic_heater() {
		entity = "Ifc_hydronic_heater";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_hydronic_heater &o) {
		return os << "Ifc_hydronic_heater(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.hydronic_heater_type << ", " << o.heat_output << ", " << o.enclosure << ", " << o.body_mass << ", " << o.number_of_panels << ", " << o.number_of_sections << ")";
	}
};

struct Ifc_light_fixture : Ifc_electrical_element {
	Ifc_power_measure maximum_space_sensible_load;
	Ifc_power_measure maximum_plenum_sensible_load__;
	Ifc_positive_ratio_measure sensible_load_to_radiant;

	Ifc_light_fixture() {
		entity = "Ifc_light_fixture";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_light_fixture &o) {
		return os << "Ifc_light_fixture(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.maximum_space_sensible_load << ", " << o.maximum_plenum_sensible_load__ << ", " << o.sensible_load_to_radiant << ")";
	}
};

struct Ifc_maintenance_work_order : Ifc_work_order {
	std::vector<Ifc_label> spares_tools_equipment_consumables;
	Ifc_maintenance_type_enum maintenance_type;
	Ifc_priority_enum fault_priority;
	Ifc_priority_enum location_priority;
	Ifc_time_measure asset_downtime;
	Ifc_time_measure scheduled_frequency;
	Ifc_time_measure required_response_time;
	Ifc_label lead_craft;

	Ifc_maintenance_work_order() {
		entity = "Ifc_maintenance_work_order";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_maintenance_work_order &o) {
		return os << "Ifc_maintenance_work_order(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.order_number << ", " << o.transaction_code << ", " << o.issuing_date << ", " << o.issued_by << ", " << "vector(" << o.issued_to.size() << ")" << ", " << "vector(" << o.additional_contacts.size() << ")" << ", " << "vector(" << o.remarks.size() << ")" << ", " << o.signoff << ", " << o.budget_source << ", " << o.product_description << ", " << o.short_job_description << ", " << o.long_job_description << ", " << o.work_type_requested << ", " << o.contractual_type << ", " << "vector(" << o.if_not_accomplished.size() << ")" << ", " << o.requested_start_time << ", " << o.requested_finish_time << ", " << o.actual_start_time << ", " << o.actual_finish_time << ", " << o.cost_estimate << ", " << o.work_plan << ", " << o.status << ", " << "vector(" << o.work_order_risk_type.size() << ")" << ", " << "vector(" << o.performed_by.size() << ")" << ", " << o.actual_cost << ", " << "vector(" << o.spares_tools_equipment_consumables.size() << ")" << ", " << o.maintenance_type << ", " << o.fault_priority << ", " << o.location_priority << ", " << o.asset_downtime << ", " << o.scheduled_frequency << ", " << o.required_response_time << ", " << o.lead_craft << ")";
	}
};

struct Ifc_outlet : Ifc_electrical_element {
	Ifc_outlet_type_enum outlet_type;

	Ifc_outlet() {
		entity = "Ifc_outlet";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_outlet &o) {
		return os << "Ifc_outlet(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.outlet_type << ")";
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

struct Ifc_pump : Ifc_fluid_moving_device {
	Ifc_pump_type_enum pump_type;
	Ifc_pressure_measure net_positive_suction_head;
	Ifc_material_select *impeller_seal_material;
	Ifc_pump_base_type_enum pump_base_type;
	Ifc_moter_connection_type_enum motor_drive_type;

	Ifc_pump() {
		entity = "Ifc_pump";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_pump &o) {
		return os << "Ifc_pump(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.primary_energy_source << ", " << o.impeller_diameter << ", " << o.pump_type << ", " << o.net_positive_suction_head << ", " << o.impeller_seal_material << ", " << o.pump_base_type << ", " << o.motor_drive_type << ")";
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

struct Ifc_rel_aggregates : Ifc_rel_decomposes {
	Ifc_rel_aggregates() {
		entity = "Ifc_rel_aggregates";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_aggregates &o) {
		return os << "Ifc_rel_aggregates(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_object << ", " << "vector(" << o.related_objects.size() << ")" << ")";
	}
};

struct Ifc_rel_aggregates_resources : Ifc_rel_aggregates {
	Ifc_physical_quantity *required_quantity;
	Ifc_measure_with_unit *conversion_rate;

	Ifc_rel_aggregates_resources() {
		entity = "Ifc_rel_aggregates_resources";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_aggregates_resources &o) {
		return os << "Ifc_rel_aggregates_resources(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.relating_object << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.required_quantity << ", " << o.conversion_rate << ")";
	}
};

struct Ifc_rel_assigns_f_m_standard : Ifc_rel_connects {
	Ifc_label job_function;
	Ifc_f_m_standard_select *relating_standard;
	std::vector<Ifc_actor *> related_persons;

	Ifc_rel_assigns_f_m_standard() {
		entity = "Ifc_rel_assigns_f_m_standard";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_assigns_f_m_standard &o) {
		return os << "Ifc_rel_assigns_f_m_standard(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.job_function << ", " << o.relating_standard << ", " << "vector(" << o.related_persons.size() << ")" << ")";
	}
};

struct Ifc_rel_assigns_tasks : Ifc_rel_assigns_to_control {
	Ifc_schedule_time_control *time_for_task;
	Ifc_task_milestone_enum milestone;

	Ifc_rel_assigns_tasks() {
		entity = "Ifc_rel_assigns_tasks";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_rel_assigns_tasks &o) {
		return os << "Ifc_rel_assigns_tasks(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << "vector(" << o.related_objects.size() << ")" << ", " << o.related_objects_type << ", " << o.relating_control << ", " << o.time_for_task << ", " << o.milestone << ")";
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

struct Ifc_sanitary_terminal : Ifc_flow_terminal {
	Ifc_sanitary_terminal_type_enum predefined_type;

	Ifc_sanitary_terminal() {
		entity = "Ifc_sanitary_terminal";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_sanitary_terminal &o) {
		return os << "Ifc_sanitary_terminal(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.predefined_type << ")";
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

struct Ifc_storage_device : Ifc_distribution_flow_element {
	Ifc_storage_device() {
		entity = "Ifc_storage_device";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_storage_device &o) {
		return os << "Ifc_storage_device(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ")";
	}
};

struct Ifc_tank : Ifc_storage_device {
	Ifc_volume_measure volume;
	Ifc_pressure_measure relief_valve_setting;
	Ifc_pressure_measure charge_pressure;
	Ifc_pressure_measure pressure_regulator_setting;

	Ifc_tank() {
		entity = "Ifc_tank";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_tank &o) {
		return os << "Ifc_tank(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.volume << ", " << o.relief_valve_setting << ", " << o.charge_pressure << ", " << o.pressure_regulator_setting << ")";
	}
};

struct Ifc_treatment_device : Ifc_distribution_flow_element {
	Ifc_treatment_device() {
		entity = "Ifc_treatment_device";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_treatment_device &o) {
		return os << "Ifc_treatment_device(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ")";
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

struct Ifc_tube_bundle : Ifc_heat_transfer_device {
	Ifc_positive_length_measure tube_size;
	Ifc_material_select *tube_material;
	Ifc_positive_length_measure tube_length;
	Ifc_positive_length_measure tube_spacing;
	std::vector<Ifc_thermodynamic_temperature_measure> tube_fluid_entering_temperature;
	std::vector<Ifc_thermodynamic_temperature_measure> tube_fluid_leaving_temperature;
	Ifc_material_select *fin_material;
	Ifc_material_select *shell_material;
	Ifc_positive_length_measure fin_spacing;
	Ifc_thermal_resistance_measure tube_fouling_factor;
	Ifc_integer number_of_tube_circuits;
	Ifc_integer number_of_tube_rows;
	std::vector<Ifc_thermodynamic_temperature_measure> shell_fluid_leaving_temperature;
	std::vector<Ifc_thermodynamic_temperature_measure> shell_fluid_entering_temperature;

	Ifc_tube_bundle() {
		entity = "Ifc_tube_bundle";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_tube_bundle &o) {
		return os << "Ifc_tube_bundle(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.heat_transfer_rate << ", " << o.thermal_efficiency << ", " << o.primary_energy_source << ", " << o.tube_size << ", " << o.tube_material << ", " << o.tube_length << ", " << o.tube_spacing << ", " << "vector(" << o.tube_fluid_entering_temperature.size() << ")" << ", " << "vector(" << o.tube_fluid_leaving_temperature.size() << ")" << ", " << o.fin_material << ", " << o.shell_material << ", " << o.fin_spacing << ", " << o.tube_fouling_factor << ", " << o.number_of_tube_circuits << ", " << o.number_of_tube_rows << ", " << "vector(" << o.shell_fluid_leaving_temperature.size() << ")" << ", " << "vector(" << o.shell_fluid_entering_temperature.size() << ")" << ")";
	}
};

struct Ifc_unit_heater : Ifc_heat_transfer_device {
	Ifc_unit_heater() {
		entity = "Ifc_unit_heater";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_unit_heater &o) {
		return os << "Ifc_unit_heater(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.heat_transfer_rate << ", " << o.thermal_efficiency << ", " << o.primary_energy_source << ")";
	}
};

struct Ifc_valve : Ifc_flow_controller {
	Ifc_pressure_measure close_off_rating;
	Ifc_measure_with_unit *valve_flow_coefficient;
	Ifc_valve_enum valve_type;

	Ifc_valve() {
		entity = "Ifc_valve";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_valve &o) {
		return os << "Ifc_valve(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.close_off_rating << ", " << o.valve_flow_coefficient << ", " << o.valve_type << ")";
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

struct Ifc_2_d_composite_curve : Ifc_composite_curve {
	Ifc_2_d_composite_curve() {
		entity = "Ifc_2_d_composite_curve";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_2_d_composite_curve &o) {
		return os << "Ifc_2_d_composite_curve(" << "vector(" << o.segments.size() << ")" << ", " << o.self_intersect << ")";
	}
};

struct Ifc_air_filter : Ifc_treatment_device {
	Ifc_pressure_measure dirty_pressure_drop;
	Ifc_pressure_measure clean_pressure_drop;
	Ifc_ratio_measure efficiency;

	Ifc_air_filter() {
		entity = "Ifc_air_filter";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_air_filter &o) {
		return os << "Ifc_air_filter(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.dirty_pressure_drop << ", " << o.clean_pressure_drop << ", " << o.efficiency << ")";
	}
};

struct Ifc_air_terminal : Ifc_flow_terminal {
	Ifc_air_flow_type_enum air_flow_type;
	Ifc_length_measure _throw;
	Ifc_real air_diffusion_performance_index;
	Ifc_air_terminal_finish_type_enum finish_type;
	Ifc_label finish_color;
	Ifc_air_terminal_mounting_type_enum mounting_type;
	Ifc_air_terminal_face_type_enum face_type;
	Ifc_air_terminal_core_type_enum core_type;
	Ifc_plane_angle_measure core_set_vertical;
	Ifc_plane_angle_measure core_set_horizontal;
	Ifc_boolean integral_control;

	Ifc_air_terminal() {
		entity = "Ifc_air_terminal";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_air_terminal &o) {
		return os << "Ifc_air_terminal(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.air_flow_type << ", " << o._throw << ", " << o.air_diffusion_performance_index << ", " << o.finish_type << ", " << o.finish_color << ", " << o.mounting_type << ", " << o.face_type << ", " << o.core_type << ", " << o.core_set_vertical << ", " << o.core_set_horizontal << ", " << o.integral_control << ")";
	}
};

struct Ifc_air_terminal_box : Ifc_flow_controller {
	Ifc_air_terminal_box_enum terminal_box_type;
	Ifc_measure_with_unit *sound_level;

	Ifc_air_terminal_box() {
		entity = "Ifc_air_terminal_box";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_air_terminal_box &o) {
		return os << "Ifc_air_terminal_box(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.terminal_box_type << ", " << o.sound_level << ")";
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

struct Ifc_boiler : Ifc_heat_transfer_device {
	Ifc_boiler_type_enum boiler_type;
	Ifc_power_measure heat_output;
	Ifc_pressure_measure pressure_rating;
	Ifc_volumetric_flow_rate_measure energy_input_rate;

	Ifc_boiler() {
		entity = "Ifc_boiler";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_boiler &o) {
		return os << "Ifc_boiler(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.heat_transfer_rate << ", " << o.thermal_efficiency << ", " << o.primary_energy_source << ", " << o.boiler_type << ", " << o.heat_output << ", " << o.pressure_rating << ", " << o.energy_input_rate << ")";
	}
};

struct Ifc_chiller : Ifc_heat_transfer_device {
	Ifc_chiller_type_enum chiller_type;
	Ifc_power_measure nominal_cooling_capacity__;

	Ifc_chiller() {
		entity = "Ifc_chiller";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_chiller &o) {
		return os << "Ifc_chiller(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.heat_transfer_rate << ", " << o.thermal_efficiency << ", " << o.primary_energy_source << ", " << o.chiller_type << ", " << o.nominal_cooling_capacity__ << ")";
	}
};

struct Ifc_circle : Ifc_conic {
	Ifc_positive_length_measure *radius;

	Ifc_circle() {
		entity = "Ifc_circle";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_circle &o) {
		return os << "Ifc_circle(" << o.position << ", " << o.radius << ")";
	}
};

struct Ifc_coil : Ifc_flow_terminal {
	Ifc_coil_type_enum coil_type;
	Ifc_ratio_measure bypass_factor;
	Ifc_linear_velocity_measure face_velocity;
	Ifc_coil_flow_arrangement_enum flow_arrangement;

	Ifc_coil() {
		entity = "Ifc_coil";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_coil &o) {
		return os << "Ifc_coil(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.coil_type << ", " << o.bypass_factor << ", " << o.face_velocity << ", " << o.flow_arrangement << ")";
	}
};

struct Ifc_compressor : Ifc_fluid_moving_device {
	Ifc_compressor_type_enum compressor_type;
	Ifc_boolean hot_gas_bypass;

	Ifc_compressor() {
		entity = "Ifc_compressor";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_compressor &o) {
		return os << "Ifc_compressor(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.primary_energy_source << ", " << o.impeller_diameter << ", " << o.compressor_type << ", " << o.hot_gas_bypass << ")";
	}
};

struct Ifc_control_element : Ifc_distribution_element {
	Ifc_label control_element_id;

	Ifc_control_element() {
		entity = "Ifc_control_element";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_control_element &o) {
		return os << "Ifc_control_element(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.control_element_id << ")";
	}
};

struct Ifc_controller : Ifc_control_element {
	Ifc_controller() {
		entity = "Ifc_controller";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_controller &o) {
		return os << "Ifc_controller(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.control_element_id << ")";
	}
};

struct Ifc_cooling_tower : Ifc_heat_transfer_device {
	Ifc_cooling_tower_type_enum cooling_tower_type;
	std::vector<Ifc_thermodynamic_temperature_measure> ambient_design_temperature;

	Ifc_cooling_tower() {
		entity = "Ifc_cooling_tower";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_cooling_tower &o) {
		return os << "Ifc_cooling_tower(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.heat_transfer_rate << ", " << o.thermal_efficiency << ", " << o.primary_energy_source << ", " << o.cooling_tower_type << ", " << "vector(" << o.ambient_design_temperature.size() << ")" << ")";
	}
};

struct Ifc_damper : Ifc_flow_controller {
	Ifc_damper_type_enum predefined_type;
	Ifc_length_measure frame_depth;
	Ifc_damper_sizing_method_enum sizing_method;
	Ifc_pressure_measure close_off_rating;
	Ifc_volumetric_flow_rate_measure leakage_air_flow_rate;
	Ifc_positive_ratio_measure percent_open;

	Ifc_damper() {
		entity = "Ifc_damper";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_damper &o) {
		return os << "Ifc_damper(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.predefined_type << ", " << o.frame_depth << ", " << o.sizing_method << ", " << o.close_off_rating << ", " << o.leakage_air_flow_rate << ", " << o.percent_open << ")";
	}
};

struct Ifc_electric_motor : Ifc_electrical_element {
	Ifc_motor_winding_enum motor_winding_type;
	Ifc_positive_ratio_measure efficiency;
	Ifc_power_measure power_output;
	Ifc_text frame_configuration;
	Ifc_text insulation_rating__;
	Ifc_motor_housing_enum motor_housing;

	Ifc_electric_motor() {
		entity = "Ifc_electric_motor";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_electric_motor &o) {
		return os << "Ifc_electric_motor(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.motor_winding_type << ", " << o.efficiency << ", " << o.power_output << ", " << o.frame_configuration << ", " << o.insulation_rating__ << ", " << o.motor_housing << ")";
	}
};

struct Ifc_electrical_appliance : Ifc_electrical_element {
	Ifc_electrical_appliance_type_enum appliance_type;

	Ifc_electrical_appliance() {
		entity = "Ifc_electrical_appliance";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_electrical_appliance &o) {
		return os << "Ifc_electrical_appliance(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.appliance_type << ")";
	}
};

struct Ifc_fan : Ifc_fluid_moving_device {
	Ifc_air_flow_type_enum air_flow_type;
	Ifc_pressure_measure static_pressure;
	Ifc_fan_pressure_class_enum fan_pressure_class;
	Ifc_fan_wheel_type_enum fan_wheel_type;
	Ifc_material_select *wheel_material;
	Ifc_linear_velocity_measure wheel_tip_speed;
	Ifc_linear_velocity_measure discharge_velocity;
	Ifc_material_select *housing_material;
	Ifc_pressure_measure discharge_pressure_loss;
	Ifc_fan_discharge_type_enum fan_discharge_type;
	Ifc_fan_arrangement_enum fan_arrangement;
	Ifc_fan_rotation_enum fan_rotation;
	Ifc_fan_drive_arrangement_enum fan_drive_arrangement;
	Ifc_power_measure drive_power_loss__;
	Ifc_moter_connection_type_enum motor_drive_type;
	Ifc_boolean motor_in_airstream__;
	Ifc_fan_mounting_type_enum fan_mounting_type;

	Ifc_fan() {
		entity = "Ifc_fan";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_fan &o) {
		return os << "Ifc_fan(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.primary_energy_source << ", " << o.impeller_diameter << ", " << o.air_flow_type << ", " << o.static_pressure << ", " << o.fan_pressure_class << ", " << o.fan_wheel_type << ", " << o.wheel_material << ", " << o.wheel_tip_speed << ", " << o.discharge_velocity << ", " << o.housing_material << ", " << o.discharge_pressure_loss << ", " << o.fan_discharge_type << ", " << o.fan_arrangement << ", " << o.fan_rotation << ", " << o.fan_drive_arrangement << ", " << o.drive_power_loss__ << ", " << o.motor_drive_type << ", " << o.motor_in_airstream__ << ", " << o.fan_mounting_type << ")";
	}
};

struct Ifc_heat_exchanger : Ifc_heat_transfer_device {
	Ifc_heat_exchanger_type_enum heat_exchanger_type;
	Ifc_heat_exchanger_arrangement_enum heat_exchanger_arrangement;
	Ifc_integer number_of_plates;

	Ifc_heat_exchanger() {
		entity = "Ifc_heat_exchanger";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_heat_exchanger &o) {
		return os << "Ifc_heat_exchanger(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.flow_element_type << ", " << o.heat_transfer_rate << ", " << o.thermal_efficiency << ", " << o.primary_energy_source << ", " << o.heat_exchanger_type << ", " << o.heat_exchanger_arrangement << ", " << o.number_of_plates << ")";
	}
};

struct Ifc_sensor : Ifc_control_element {
	Ifc_sensor_type_enum predefined_type;

	Ifc_sensor() {
		entity = "Ifc_sensor";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_sensor &o) {
		return os << "Ifc_sensor(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.control_element_id << ", " << o.predefined_type << ")";
	}
};

struct Ifc_actuator : Ifc_control_element {
	Ifc_actuator_type_enum predefined_type;
	Ifc_actuator_fail_position_enum fail_position;

	Ifc_actuator() {
		entity = "Ifc_actuator";
	}
	friend std::ostream &operator<<(std::ostream &os, const Ifc_actuator &o) {
		return os << "Ifc_actuator(" << o.global_id << ", " << o.owner_history << ", " << o.name << ", " << o.description << ", " << o.object_type << ", " << o.object_placement << ", " << o.representation << ", " << o.tag << ", " << o.control_element_id << ", " << o.predefined_type << ", " << o.fail_position << ")";
	}
};

class Ifc_2x_schema {
private:
	Step_parser step_parser;

public:
	std::list<Ifc **> links_to_resolve;
	std::list<std::vector<Ifc *> *> lists_of_links_to_resolve;

	Ifc *parse_ifc_object_definition(std::string &object_class, std::vector<std::string> &object_attributes);
	void print_object_info(Ifc *object);
};

#endif /* Ifc_2x_schema_hpp */
