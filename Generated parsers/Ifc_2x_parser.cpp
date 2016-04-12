#include "Ifc_2x_parser.hpp"

Ifc *Ifc_2x_parser::parse_ifc_object_definition(std::string &object_class, std::vector<std::string> &object_attributes) {

	if (boost::iequals(object_class, "Ifc2DCompositeCurve")) {
		Ifc_2_d_composite_curve *o = new Ifc_2_d_composite_curve();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->segments.push_back((Ifc_composite_curve_segment *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->segments);
		//o->step_parser.parse_logical(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcActionTimeControl")) {
		Ifc_action_time_control *o = new Ifc_action_time_control();
		o->constraint_type = step_parser.parse_string(object_attributes[0]);
		o->contraint_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->contraint_time);
		return o;
	}

	else if (boost::iequals(object_class, "IfcActor")) {
		Ifc_actor *o = new Ifc_actor();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->the_actor = (Ifc_actor_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->the_actor);
		return o;
	}

	else if (boost::iequals(object_class, "IfcActorRole")) {
		Ifc_actor_role *o = new Ifc_actor_role();
		o->role = step_parser.parse_constant(object_attributes[0]);
		o->user_defined_role = (Ifc_label *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->user_defined_role);
		o->description = (Ifc_text *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->description);
		return o;
	}

	else if (boost::iequals(object_class, "IfcActuator")) {
		Ifc_actuator *o = new Ifc_actuator();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->control_element_id = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		o->fail_position = step_parser.parse_constant(object_attributes[10]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAddress")) {
		Ifc_address *o = new Ifc_address();
		o->purpose = step_parser.parse_constant(object_attributes[0]);
		o->description = (Ifc_text *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->description);
		o->user_defined_purpose = (Ifc_label *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->user_defined_purpose);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAirFilter")) {
		Ifc_air_filter *o = new Ifc_air_filter();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->dirty_pressure_drop = step_parser.parse_double(object_attributes[9]);
		o->clean_pressure_drop = step_parser.parse_double(object_attributes[10]);
		o->efficiency = step_parser.parse_double(object_attributes[11]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAirTerminal")) {
		Ifc_air_terminal *o = new Ifc_air_terminal();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->air_flow_type = step_parser.parse_constant(object_attributes[9]);
		o->throw = step_parser.parse_double(object_attributes[10]);
		o->air_diffusion_performance_index = step_parser.parse_double(object_attributes[11]);
		o->finish_type = step_parser.parse_constant(object_attributes[12]);
		o->finish_color = step_parser.parse_string(object_attributes[13]);
		o->mounting_type = step_parser.parse_constant(object_attributes[14]);
		o->face_type = step_parser.parse_constant(object_attributes[15]);
		o->core_type = step_parser.parse_constant(object_attributes[16]);
		o->core_set_vertical = step_parser.parse_double(object_attributes[17]);
		o->core_set_horizontal = step_parser.parse_double(object_attributes[18]);
		o->integral_control = step_parser.parse_boolean(object_attributes[19]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAirTerminalBox")) {
		Ifc_air_terminal_box *o = new Ifc_air_terminal_box();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->terminal_box_type = step_parser.parse_constant(object_attributes[9]);
		o->sound_level = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->sound_level);
		return o;
	}

	else if (boost::iequals(object_class, "IfcApplication")) {
		Ifc_application *o = new Ifc_application();
		o->application_developer = (Ifc_organization *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->application_developer);
		o->version = step_parser.parse_string(object_attributes[1]);
		o->application_full_name = step_parser.parse_string(object_attributes[2]);
		o->application_identifier = step_parser.parse_string(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcApproval")) {
		Ifc_approval *o = new Ifc_approval();
		o->description = step_parser.parse_string(object_attributes[0]);
		o->authorizing_agent = (Ifc_actor_select *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->authorizing_agent);
		o->request_from = (Ifc_actor_select *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->request_from);
		o->request_to = (Ifc_actor_select *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->request_to);
		o->requesting_date = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->requesting_date);
		o->requested_date = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->requested_date);
		o->approval_date = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->approval_date);
		o->approval_status = step_parser.parse_constant(object_attributes[7]);
		o->approval_constraint = step_parser.parse_string(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcApprovalUsage")) {
		Ifc_approval_usage *o = new Ifc_approval_usage();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->approval = (Ifc_approval *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->approval);
		return o;
	}

	else if (boost::iequals(object_class, "IfcArbitraryClosedProfileDef")) {
		Ifc_arbitrary_closed_profile_def *o = new Ifc_arbitrary_closed_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->outer_curve = (Ifc_curve *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->outer_curve);
		return o;
	}

	else if (boost::iequals(object_class, "IfcArbitraryOpenProfileDef")) {
		Ifc_arbitrary_open_profile_def *o = new Ifc_arbitrary_open_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->curve = (Ifc_bounded_curve *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->curve);
		return o;
	}

	else if (boost::iequals(object_class, "IfcArbitraryProfileDefWithVoids")) {
		Ifc_arbitrary_profile_def_with_voids *o = new Ifc_arbitrary_profile_def_with_voids();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->outer_curve = (Ifc_curve *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->outer_curve);
		for (auto i : step_parser.parse_list_of_links(object_attributes[3])) o->inner_curves.push_back((Ifc_curve *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->inner_curves);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAssessory")) {
		Ifc_assessory *o = new Ifc_assessory();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->mounting_type = step_parser.parse_string(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAsset")) {
		Ifc_asset *o = new Ifc_asset();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->asset_location = (Ifc_spatial_structure_element *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->asset_location);
		o->asset_identifier = step_parser.parse_string(object_attributes[6]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->asset_risks.push_back((Ifc_risk_type_enum *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->asset_risks);
		o->original_value = (Ifc_cost_value *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->original_value);
		o->current_value = (Ifc_cost_value *)step_parser.parse_link(object_attributes[9]);
		links_to_resolve.push_back((Ifc **)&o->current_value);
		o->total_replacement_cost = (Ifc_cost_value *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->total_replacement_cost);
		o->owner = (Ifc_actor_select *)step_parser.parse_link(object_attributes[11]);
		links_to_resolve.push_back((Ifc **)&o->owner);
		o->user = (Ifc_actor_select *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->user);
		o->leased_from = (Ifc_actor_select *)step_parser.parse_link(object_attributes[13]);
		links_to_resolve.push_back((Ifc **)&o->leased_from);
		o->leased_to = (Ifc_actor_select *)step_parser.parse_link(object_attributes[14]);
		links_to_resolve.push_back((Ifc **)&o->leased_to);
		o->responsible_person = (Ifc_person *)step_parser.parse_link(object_attributes[15]);
		links_to_resolve.push_back((Ifc **)&o->responsible_person);
		o->incorporation_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[16]);
		links_to_resolve.push_back((Ifc **)&o->incorporation_date);
		o->commissioning_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[17]);
		links_to_resolve.push_back((Ifc **)&o->commissioning_date);
		o->warranty_duration = step_parser.parse_double(object_attributes[18]);
		o->expected_life = step_parser.parse_double(object_attributes[19]);
		o->operating_function = (Ifc_classification_notation *)step_parser.parse_link(object_attributes[20]);
		links_to_resolve.push_back((Ifc **)&o->operating_function);
		o->depreciated_value = (Ifc_cost_value *)step_parser.parse_link(object_attributes[21]);
		links_to_resolve.push_back((Ifc **)&o->depreciated_value);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAxis1Placement")) {
		Ifc_axis_1_placement *o = new Ifc_axis_1_placement();
		o->location = (Ifc_cartesian_point *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->location);
		o->axis = (Ifc_direction *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->axis);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAxis2Placement2D")) {
		Ifc_axis_2_placement_2_d *o = new Ifc_axis_2_placement_2_d();
		o->location = (Ifc_cartesian_point *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->location);
		o->ref_direction = (Ifc_direction *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->ref_direction);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAxis2Placement3D")) {
		Ifc_axis_2_placement_3_d *o = new Ifc_axis_2_placement_3_d();
		o->location = (Ifc_cartesian_point *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->location);
		o->axis = (Ifc_direction *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->axis);
		o->ref_direction = (Ifc_direction *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->ref_direction);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBeam")) {
		Ifc_beam *o = new Ifc_beam();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBoiler")) {
		Ifc_boiler *o = new Ifc_boiler();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->heat_transfer_rate = step_parser.parse_double(object_attributes[9]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->primary_energy_source = step_parser.parse_constant(object_attributes[11]);
		o->boiler_type = step_parser.parse_constant(object_attributes[12]);
		o->heat_output = step_parser.parse_double(object_attributes[13]);
		o->pressure_rating = step_parser.parse_double(object_attributes[14]);
		o->energy_input_rate = step_parser.parse_double(object_attributes[15]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBooleanClippingResult")) {
		Ifc_boolean_clipping_result *o = new Ifc_boolean_clipping_result();
		o->operator = step_parser.parse_constant(object_attributes[0]);
		o->first_operand = (Ifc_boolean_operand *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->first_operand);
		o->second_operand = (Ifc_boolean_operand *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->second_operand);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBooleanResult")) {
		Ifc_boolean_result *o = new Ifc_boolean_result();
		o->operator = step_parser.parse_constant(object_attributes[0]);
		o->first_operand = (Ifc_boolean_operand *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->first_operand);
		o->second_operand = (Ifc_boolean_operand *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->second_operand);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBoundedCurve")) {
		Ifc_bounded_curve *o = new Ifc_bounded_curve();
		return o;
	}

	else if (boost::iequals(object_class, "IfcBoundedSurface")) {
		Ifc_bounded_surface *o = new Ifc_bounded_surface();
		return o;
	}

	else if (boost::iequals(object_class, "IfcBoundingBox")) {
		Ifc_bounding_box *o = new Ifc_bounding_box();
		o->corner = (Ifc_cartesian_point *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->corner);
		o->x_dim = (Ifc_positive_length_measure *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->x_dim);
		o->y_dim = (Ifc_positive_length_measure *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->y_dim);
		o->z_dim = (Ifc_positive_length_measure *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->z_dim);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBoxedHalfSpace")) {
		Ifc_boxed_half_space *o = new Ifc_boxed_half_space();
		o->base_surface = (Ifc_surface *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->base_surface);
		o->step_parser.parse_boolean(object_attributes[1]);
		o->enclosure = (Ifc_bounding_box *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->enclosure);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBudget")) {
		Ifc_budget *o = new Ifc_budget();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->title = step_parser.parse_string(object_attributes[5]);
		o->submitted_by = (Ifc_actor_select *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->submitted_by);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->approved_by.push_back((Ifc_actor_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->approved_by);
		o->prepared_by = (Ifc_person *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->prepared_by);
		o->submitted_on = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[9]);
		links_to_resolve.push_back((Ifc **)&o->submitted_on);
		o->total_cost = (Ifc_cost_value *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->total_cost);
		for (auto i : step_parser.parse_list_of_links(object_attributes[11])) o->cost_elements.push_back((Ifc_cost *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->cost_elements);
		o->status = step_parser.parse_string(object_attributes[12]);
		o->intended_use = step_parser.parse_string(object_attributes[13]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[14])) o->comments.push_back((Ifc_text *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->comments);
		for (auto i : step_parser.parse_list_of_links(object_attributes[15])) o->target_users.push_back((Ifc_actor_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->target_users);
		o->valid_from_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[16]);
		links_to_resolve.push_back((Ifc **)&o->valid_from_date);
		o->valid_to_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[17]);
		links_to_resolve.push_back((Ifc **)&o->valid_to_date);
		o->update_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[18]);
		links_to_resolve.push_back((Ifc **)&o->update_date);
		o->schedule_number = step_parser.parse_string(object_attributes[19]);
		o->budget_source = step_parser.parse_string(object_attributes[20]);
		o->balance = (Ifc_cost_value *)step_parser.parse_link(object_attributes[21]);
		links_to_resolve.push_back((Ifc **)&o->balance);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBuilding")) {
		Ifc_building *o = new Ifc_building();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->long_name = step_parser.parse_string(object_attributes[7]);
		o->composition_type = step_parser.parse_constant(object_attributes[8]);
		o->elevation_of_ref_height = step_parser.parse_double(object_attributes[9]);
		o->elevation_of_terrain = step_parser.parse_double(object_attributes[10]);
		o->building_address = (Ifc_postal_address *)step_parser.parse_link(object_attributes[11]);
		links_to_resolve.push_back((Ifc **)&o->building_address);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBuildingElement")) {
		Ifc_building_element *o = new Ifc_building_element();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBuildingElementProxy")) {
		Ifc_building_element_proxy *o = new Ifc_building_element_proxy();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->composition_type = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBuildingStorey")) {
		Ifc_building_storey *o = new Ifc_building_storey();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->long_name = step_parser.parse_string(object_attributes[7]);
		o->composition_type = step_parser.parse_constant(object_attributes[8]);
		o->elevation = step_parser.parse_double(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBuiltIn")) {
		Ifc_built_in *o = new Ifc_built_in();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->predefined_type = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCMDocPackage")) {
		Ifc_c_m_doc_package *o = new Ifc_c_m_doc_package();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->doc_package_i_d = step_parser.parse_string(object_attributes[5]);
		o->doc_package_name = step_parser.parse_string(object_attributes[6]);
		o->creation_date = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->creation_date);
		for (auto i : step_parser.parse_list_of_links(object_attributes[8])) o->authors.push_back((Ifc_actor_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->authors);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCalendarDate")) {
		Ifc_calendar_date *o = new Ifc_calendar_date();
		o->day_component = step_parser.parse_integer(object_attributes[0]);
		o->month_component = step_parser.parse_integer(object_attributes[1]);
		o->year_component = step_parser.parse_integer(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCartesianPoint")) {
		Ifc_cartesian_point *o = new Ifc_cartesian_point();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->coordinates.push_back((Ifc_length_measure *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->coordinates);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCartesianTransformationOperator")) {
		Ifc_cartesian_transformation_operator *o = new Ifc_cartesian_transformation_operator();
		o->axis_1 = (Ifc_direction *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->axis_1);
		o->axis_2 = (Ifc_direction *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->axis_2);
		o->local_origin = (Ifc_cartesian_point *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->local_origin);
		o->step_parser.parse_double(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCartesianTransformationOperator2D")) {
		Ifc_cartesian_transformation_operator_2_d *o = new Ifc_cartesian_transformation_operator_2_d();
		o->axis_1 = (Ifc_direction *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->axis_1);
		o->axis_2 = (Ifc_direction *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->axis_2);
		o->local_origin = (Ifc_cartesian_point *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->local_origin);
		o->step_parser.parse_double(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCartesianTransformationOperator2DnonUniform")) {
		Ifc_cartesian_transformation_operator_2_dnon_uniform *o = new Ifc_cartesian_transformation_operator_2_dnon_uniform();
		o->axis_1 = (Ifc_direction *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->axis_1);
		o->axis_2 = (Ifc_direction *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->axis_2);
		o->local_origin = (Ifc_cartesian_point *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->local_origin);
		o->step_parser.parse_double(object_attributes[3]);
		o->step_parser.parse_double(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCartesianTransformationOperator3D")) {
		Ifc_cartesian_transformation_operator_3_d *o = new Ifc_cartesian_transformation_operator_3_d();
		o->axis_1 = (Ifc_direction *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->axis_1);
		o->axis_2 = (Ifc_direction *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->axis_2);
		o->local_origin = (Ifc_cartesian_point *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->local_origin);
		o->step_parser.parse_double(object_attributes[3]);
		o->axis_3 = (Ifc_direction *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->axis_3);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCartesianTransformationOperator3DnonUniform")) {
		Ifc_cartesian_transformation_operator_3_dnon_uniform *o = new Ifc_cartesian_transformation_operator_3_dnon_uniform();
		o->axis_1 = (Ifc_direction *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->axis_1);
		o->axis_2 = (Ifc_direction *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->axis_2);
		o->local_origin = (Ifc_cartesian_point *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->local_origin);
		o->step_parser.parse_double(object_attributes[3]);
		o->axis_3 = (Ifc_direction *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->axis_3);
		o->step_parser.parse_double(object_attributes[5]);
		o->step_parser.parse_double(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcChangeOrder")) {
		Ifc_change_order *o = new Ifc_change_order();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->order_number = step_parser.parse_string(object_attributes[5]);
		o->transaction_code = step_parser.parse_string(object_attributes[6]);
		o->issuing_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->issuing_date);
		o->issued_by = (Ifc_actor_select *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->issued_by);
		for (auto i : step_parser.parse_list_of_links(object_attributes[9])) o->issued_to.push_back((Ifc_actor_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->issued_to);
		for (auto i : step_parser.parse_list_of_links(object_attributes[10])) o->additional_contacts.push_back((Ifc_actor_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->additional_contacts);
		for (auto i : step_parser.parse_list_of_links(object_attributes[11])) o->remarks.push_back((Ifc_text *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->remarks);
		o->signoff = (Ifc_person *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->signoff);
		o->budget_source = (Ifc_budget *)step_parser.parse_link(object_attributes[13]);
		links_to_resolve.push_back((Ifc **)&o->budget_source);
		o->change_description = step_parser.parse_string(object_attributes[14]);
		o->reason_for_change = step_parser.parse_string(object_attributes[15]);
		o->requested_start_time = (Ifc_date_and_time *)step_parser.parse_link(object_attributes[16]);
		links_to_resolve.push_back((Ifc **)&o->requested_start_time);
		o->requested_finish_time = (Ifc_date_and_time *)step_parser.parse_link(object_attributes[17]);
		links_to_resolve.push_back((Ifc **)&o->requested_finish_time);
		o->cost_estimate = (Ifc_cost_schedule *)step_parser.parse_link(object_attributes[18]);
		links_to_resolve.push_back((Ifc **)&o->cost_estimate);
		o->work_plan = (Ifc_work_plan *)step_parser.parse_link(object_attributes[19]);
		links_to_resolve.push_back((Ifc **)&o->work_plan);
		o->status = step_parser.parse_constant(object_attributes[20]);
		o->actual_start_time = (Ifc_date_and_time *)step_parser.parse_link(object_attributes[21]);
		links_to_resolve.push_back((Ifc **)&o->actual_start_time);
		o->actual_finish_time = (Ifc_date_and_time *)step_parser.parse_link(object_attributes[22]);
		links_to_resolve.push_back((Ifc **)&o->actual_finish_time);
		return o;
	}

	else if (boost::iequals(object_class, "IfcChiller")) {
		Ifc_chiller *o = new Ifc_chiller();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->heat_transfer_rate = step_parser.parse_double(object_attributes[9]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->primary_energy_source = step_parser.parse_constant(object_attributes[11]);
		o->chiller_type = step_parser.parse_constant(object_attributes[12]);
		o->nominal_cooling_capacity__ = step_parser.parse_double(object_attributes[13]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCircle")) {
		Ifc_circle *o = new Ifc_circle();
		o->position = (Ifc_axis_2_placement *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->position);
		o->radius = (Ifc_positive_length_measure *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->radius);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCircleProfileDef")) {
		Ifc_circle_profile_def *o = new Ifc_circle_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->position = (Ifc_axis_2_placement_2_d *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcClassification")) {
		Ifc_classification *o = new Ifc_classification();
		o->source = (Ifc_label *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->source);
		o->edition = (Ifc_label *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->edition);
		o->edition_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->edition_date);
		o->name = (Ifc_label *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->name);
		return o;
	}

	else if (boost::iequals(object_class, "IfcClassificationItem")) {
		Ifc_classification_item *o = new Ifc_classification_item();
		o->notation = (Ifc_classification_notation_facet *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->notation);
		o->item_of = (Ifc_classification *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->item_of);
		o->title = (Ifc_label *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->title);
		return o;
	}

	else if (boost::iequals(object_class, "IfcClassificationItemRelationship")) {
		Ifc_classification_item_relationship *o = new Ifc_classification_item_relationship();
		o->relating_item = (Ifc_classification_item *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->relating_item);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->related_items.push_back((Ifc_classification_item *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_items);
		return o;
	}

	else if (boost::iequals(object_class, "IfcClassificationNotation")) {
		Ifc_classification_notation *o = new Ifc_classification_notation();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->notation_facets.push_back((Ifc_classification_notation_facet *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->notation_facets);
		return o;
	}

	else if (boost::iequals(object_class, "IfcClassificationNotationFacet")) {
		Ifc_classification_notation_facet *o = new Ifc_classification_notation_facet();
		o->notation_value = (Ifc_label *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->notation_value);
		return o;
	}

	else if (boost::iequals(object_class, "IfcClassificationReference")) {
		Ifc_classification_reference *o = new Ifc_classification_reference();
		o->location = (Ifc_label *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->location);
		o->item_reference = (Ifc_identifier *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->item_reference);
		o->name = (Ifc_label *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->name);
		o->referenced_source = (Ifc_classification *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->referenced_source);
		return o;
	}

	else if (boost::iequals(object_class, "IfcClosedShell")) {
		Ifc_closed_shell *o = new Ifc_closed_shell();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->cfs_faces.push_back((Ifc_face *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->cfs_faces);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCoil")) {
		Ifc_coil *o = new Ifc_coil();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->coil_type = step_parser.parse_constant(object_attributes[9]);
		o->bypass_factor = step_parser.parse_double(object_attributes[10]);
		o->face_velocity = step_parser.parse_double(object_attributes[11]);
		o->flow_arrangement = step_parser.parse_constant(object_attributes[12]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcColumn")) {
		Ifc_column *o = new Ifc_column();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCompartment")) {
		Ifc_compartment *o = new Ifc_compartment();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		//o->step_parser.parse_logical(object_attributes[5]);
		//o->step_parser.parse_logical(object_attributes[6]);
		o->step_parser.parse_integer(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcComplexProperty")) {
		Ifc_complex_property *o = new Ifc_complex_property();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->usage_name = step_parser.parse_string(object_attributes[2]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[3])) o->has_properties.push_back((Ifc_property *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->has_properties);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCompositeCurve")) {
		Ifc_composite_curve *o = new Ifc_composite_curve();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->segments.push_back((Ifc_composite_curve_segment *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->segments);
		//o->step_parser.parse_logical(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCompositeCurveSegment")) {
		Ifc_composite_curve_segment *o = new Ifc_composite_curve_segment();
		o->transition = step_parser.parse_constant(object_attributes[0]);
		o->step_parser.parse_boolean(object_attributes[1]);
		o->parent_curve = (Ifc_curve *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->parent_curve);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCompositeProfileDef")) {
		Ifc_composite_profile_def *o = new Ifc_composite_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[2])) o->profiles.push_back((Ifc_profile_def *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->profiles);
		o->label = step_parser.parse_string(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCompressor")) {
		Ifc_compressor *o = new Ifc_compressor();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->primary_energy_source = step_parser.parse_constant(object_attributes[9]);
		o->impeller_diameter = step_parser.parse_double(object_attributes[10]);
		o->compressor_type = step_parser.parse_constant(object_attributes[11]);
		o->hot_gas_bypass = step_parser.parse_boolean(object_attributes[12]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConic")) {
		Ifc_conic *o = new Ifc_conic();
		o->position = (Ifc_axis_2_placement *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->position);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConnectedFaceSet")) {
		Ifc_connected_face_set *o = new Ifc_connected_face_set();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->cfs_faces.push_back((Ifc_face *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->cfs_faces);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConnectionConstraint")) {
		Ifc_connection_constraint *o = new Ifc_connection_constraint();
		//o->step_parser.parse_logical(object_attributes[0]);
		//o->step_parser.parse_logical(object_attributes[1]);
		o->join_type = step_parser.parse_constant(object_attributes[2]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->fire_rating = step_parser.parse_double(object_attributes[4]);
		o->constraint_of = (Ifc_rel_connects_elements *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->constraint_of);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConnectionCurveGeometry")) {
		Ifc_connection_curve_geometry *o = new Ifc_connection_curve_geometry();
		o->curve_on_relating_element = (Ifc_bounded_curve *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->curve_on_relating_element);
		o->curve_on_related_element = (Ifc_bounded_curve *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->curve_on_related_element);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConnectionGeometry")) {
		Ifc_connection_geometry *o = new Ifc_connection_geometry();
		return o;
	}

	else if (boost::iequals(object_class, "IfcConnectionPointGeometry")) {
		Ifc_connection_point_geometry *o = new Ifc_connection_point_geometry();
		o->point_on_relating_element = (Ifc_point *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->point_on_relating_element);
		o->point_on_related_element = (Ifc_point *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->point_on_related_element);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConnectionPortGeometry")) {
		Ifc_connection_port_geometry *o = new Ifc_connection_port_geometry();
		o->location_at_relating_element = (Ifc_axis_2_placement *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->location_at_relating_element);
		o->location_at_related_element = (Ifc_axis_2_placement *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->location_at_related_element);
		o->profile_of_port = (Ifc_profile_def *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->profile_of_port);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConnectionSurfaceGeometry")) {
		Ifc_connection_surface_geometry *o = new Ifc_connection_surface_geometry();
		o->surface_on_relating_element = (Ifc_surface *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->surface_on_relating_element);
		o->surface_on_related_element = (Ifc_surface *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->surface_on_related_element);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConstraint")) {
		Ifc_constraint *o = new Ifc_constraint();
		o->constraint_grade = step_parser.parse_constant(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->constraint_source = step_parser.parse_string(object_attributes[2]);
		o->name = step_parser.parse_string(object_attributes[3]);
		o->creating_actor = (Ifc_actor_select *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->creating_actor);
		o->creation_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->creation_time);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConstraintAggregationRelationship")) {
		Ifc_constraint_aggregation_relationship *o = new Ifc_constraint_aggregation_relationship();
		o->logical_aggregator = step_parser.parse_constant(object_attributes[0]);
		o->relating_constraint = (Ifc_constraint *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->relating_constraint);
		for (auto i : step_parser.parse_list_of_links(object_attributes[2])) o->related_constraints.push_back((Ifc_constraint *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_constraints);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConstraintUsage")) {
		Ifc_constraint_usage *o = new Ifc_constraint_usage();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->intent = step_parser.parse_constant(object_attributes[5]);
		o->constraint = (Ifc_constraint *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->constraint);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConstructionEquipmentResource")) {
		Ifc_construction_equipment_resource *o = new Ifc_construction_equipment_resource();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->resource_consumption = step_parser.parse_constant(object_attributes[5]);
		o->base_unit = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->base_unit);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConstructionMaterialResource")) {
		Ifc_construction_material_resource *o = new Ifc_construction_material_resource();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->resource_consumption = step_parser.parse_constant(object_attributes[5]);
		o->base_unit = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->base_unit);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->suppliers.push_back((Ifc_actor_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->suppliers);
		o->order_quantity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->order_quantity);
		for (auto i : step_parser.parse_list_of_links(object_attributes[9])) o->design_material.push_back((Ifc_material *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->design_material);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConstructionProductResource")) {
		Ifc_construction_product_resource *o = new Ifc_construction_product_resource();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->resource_consumption = step_parser.parse_constant(object_attributes[5]);
		o->base_unit = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->base_unit);
		return o;
	}

	else if (boost::iequals(object_class, "IfcContextDependentUnit")) {
		Ifc_context_dependent_unit *o = new Ifc_context_dependent_unit();
		o->dimensions = (Ifc_dimensional_exponents *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->dimensions);
		o->unit_type = step_parser.parse_constant(object_attributes[1]);
		o->name = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcControl")) {
		Ifc_control *o = new Ifc_control();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcControlElement")) {
		Ifc_control_element *o = new Ifc_control_element();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->control_element_id = step_parser.parse_string(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcController")) {
		Ifc_controller *o = new Ifc_controller();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->control_element_id = step_parser.parse_string(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConversionBasedUnit")) {
		Ifc_conversion_based_unit *o = new Ifc_conversion_based_unit();
		o->dimensions = (Ifc_dimensional_exponents *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->dimensions);
		o->unit_type = step_parser.parse_constant(object_attributes[1]);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->conversion_factor = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->conversion_factor);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCoolingTower")) {
		Ifc_cooling_tower *o = new Ifc_cooling_tower();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->heat_transfer_rate = step_parser.parse_double(object_attributes[9]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->primary_energy_source = step_parser.parse_constant(object_attributes[11]);
		o->cooling_tower_type = step_parser.parse_constant(object_attributes[12]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[13])) o->ambient_design_temperature.push_back((Ifc_thermodynamic_temperature_measure *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->ambient_design_temperature);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCoordinatedUniversalTimeOffset")) {
		Ifc_coordinated_universal_time_offset *o = new Ifc_coordinated_universal_time_offset();
		o->hour_offset = step_parser.parse_integer(object_attributes[0]);
		o->minute_offset = step_parser.parse_integer(object_attributes[1]);
		o->sense = step_parser.parse_constant(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCost")) {
		Ifc_cost *o = new Ifc_cost();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->context_description = step_parser.parse_string(object_attributes[5]);
		o->element_cost = (Ifc_cost_value *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->element_cost);
		o->extension_cost = (Ifc_cost_value *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->extension_cost);
		o->cost_use = step_parser.parse_constant(object_attributes[8]);
		o->prepared_on = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[9]);
		links_to_resolve.push_back((Ifc **)&o->prepared_on);
		for (auto i : step_parser.parse_list_of_links(object_attributes[10])) o->quantities.push_back((Ifc_cost_quantity *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->quantities);
		o->cost_type = step_parser.parse_string(object_attributes[11]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCostModifier")) {
		Ifc_cost_modifier *o = new Ifc_cost_modifier();
		o->purpose = step_parser.parse_string(object_attributes[0]);
		o->modifier_value = (Ifc_cost_modifier_value_select *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->modifier_value);
		o->modifier_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->modifier_date);
		o->cost_operator = step_parser.parse_constant(object_attributes[3]);
		o->modifier_basis = step_parser.parse_constant(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCostModifierValue")) {
		Ifc_cost_modifier_value *o = new Ifc_cost_modifier_value();
		o->modifier_amount = step_parser.parse_double(object_attributes[0]);
		o->currency = step_parser.parse_constant(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCostQuantity")) {
		Ifc_cost_quantity *o = new Ifc_cost_quantity();
		o->base_quantity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->base_quantity);
		o->final_quantity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->final_quantity);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->round_off_increment = step_parser.parse_double(object_attributes[3]);
		o->round_off_basis = step_parser.parse_constant(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCostSchedule")) {
		Ifc_cost_schedule *o = new Ifc_cost_schedule();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->title = step_parser.parse_string(object_attributes[5]);
		o->submitted_by = (Ifc_actor_select *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->submitted_by);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->approved_by.push_back((Ifc_actor_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->approved_by);
		o->prepared_by = (Ifc_person *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->prepared_by);
		o->submitted_on = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[9]);
		links_to_resolve.push_back((Ifc **)&o->submitted_on);
		o->total_cost = (Ifc_cost_value *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->total_cost);
		for (auto i : step_parser.parse_list_of_links(object_attributes[11])) o->cost_elements.push_back((Ifc_cost *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->cost_elements);
		o->status = step_parser.parse_string(object_attributes[12]);
		o->intended_use = step_parser.parse_string(object_attributes[13]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[14])) o->comments.push_back((Ifc_text *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->comments);
		for (auto i : step_parser.parse_list_of_links(object_attributes[15])) o->target_users.push_back((Ifc_actor_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->target_users);
		o->valid_from_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[16]);
		links_to_resolve.push_back((Ifc **)&o->valid_from_date);
		o->valid_to_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[17]);
		links_to_resolve.push_back((Ifc **)&o->valid_to_date);
		o->update_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[18]);
		links_to_resolve.push_back((Ifc **)&o->update_date);
		o->schedule_number = step_parser.parse_string(object_attributes[19]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCostValue")) {
		Ifc_cost_value *o = new Ifc_cost_value();
		o->base_cost_value = step_parser.parse_double(object_attributes[0]);
		o->final_cost_value = step_parser.parse_double(object_attributes[1]);
		o->currency = step_parser.parse_constant(object_attributes[2]);
		o->unit_cost_basis = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->unit_cost_basis);
		o->cost_type = step_parser.parse_string(object_attributes[4]);
		o->cost_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->cost_date);
		for (auto i : step_parser.parse_list_of_links(object_attributes[6])) o->cost_modifiers.push_back((Ifc_cost_modifier *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->cost_modifiers);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCostValueRelationship")) {
		Ifc_cost_value_relationship *o = new Ifc_cost_value_relationship();
		o->component_of = (Ifc_cost_value *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->component_of);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->cost_components.push_back((Ifc_cost_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->cost_components);
		o->description = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCovering")) {
		Ifc_covering *o = new Ifc_covering();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->predefined_type = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCrewResource")) {
		Ifc_crew_resource *o = new Ifc_crew_resource();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->resource_consumption = step_parser.parse_constant(object_attributes[5]);
		o->base_unit = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->base_unit);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCsgSolid")) {
		Ifc_csg_solid *o = new Ifc_csg_solid();
		o->tree_root_expression = (Ifc_csg_select *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->tree_root_expression);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCurtainWall")) {
		Ifc_curtain_wall *o = new Ifc_curtain_wall();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCurve")) {
		Ifc_curve *o = new Ifc_curve();
		return o;
	}

	else if (boost::iequals(object_class, "IfcCurveBoundedPlane")) {
		Ifc_curve_bounded_plane *o = new Ifc_curve_bounded_plane();
		o->basis_surface = (Ifc_plane *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->basis_surface);
		o->outer_boundary = (Ifc_2_d_composite_curve *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->outer_boundary);
		for (auto i : step_parser.parse_list_of_links(object_attributes[2])) o->inner_boundaries.push_back((Ifc_2_d_composite_curve *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->inner_boundaries);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDamper")) {
		Ifc_damper *o = new Ifc_damper();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		o->frame_depth = step_parser.parse_double(object_attributes[10]);
		o->sizing_method = step_parser.parse_constant(object_attributes[11]);
		o->close_off_rating = step_parser.parse_double(object_attributes[12]);
		o->leakage_air_flow_rate = step_parser.parse_double(object_attributes[13]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcDateAndTime")) {
		Ifc_date_and_time *o = new Ifc_date_and_time();
		o->date_component = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->date_component);
		o->time_component = (Ifc_local_time *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->time_component);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDerivedProfileDef")) {
		Ifc_derived_profile_def *o = new Ifc_derived_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->parent_profile = (Ifc_profile_def *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->parent_profile);
		o->operator = (Ifc_cartesian_transformation_operator_2_d *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->operator);
		o->label = step_parser.parse_string(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDerivedUnit")) {
		Ifc_derived_unit *o = new Ifc_derived_unit();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->elements.push_back((Ifc_derived_unit_element *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->elements);
		o->unit_type = step_parser.parse_constant(object_attributes[1]);
		o->user_defined_type = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDerivedUnitElement")) {
		Ifc_derived_unit_element *o = new Ifc_derived_unit_element();
		o->unit = (Ifc_named_unit *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->unit);
		o->step_parser.parse_integer(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDimensionalExponents")) {
		Ifc_dimensional_exponents *o = new Ifc_dimensional_exponents();
		o->step_parser.parse_integer(object_attributes[0]);
		o->step_parser.parse_integer(object_attributes[1]);
		o->step_parser.parse_integer(object_attributes[2]);
		o->step_parser.parse_integer(object_attributes[3]);
		o->step_parser.parse_integer(object_attributes[4]);
		o->step_parser.parse_integer(object_attributes[5]);
		o->step_parser.parse_integer(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDirection")) {
		Ifc_direction *o = new Ifc_direction();
		o->direction_ratios = step_parser.parse_list_of_doubles(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDirectionalLightSource")) {
		Ifc_directional_light_source *o = new Ifc_directional_light_source();
		//TODO: parse non-pointer type: typedef std::vector<Ifc_normalised_ratio_measure> Ifc_color_r_g_b;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		o->in_context = (Ifc_geometric_representation_context *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->in_context);
		o->name = step_parser.parse_string(object_attributes[4]);
		o->description = step_parser.parse_string(object_attributes[5]);
		o->direction = (Ifc_direction *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->direction);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDiscreteElement")) {
		Ifc_discrete_element *o = new Ifc_discrete_element();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->predefined_type = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDistributionElement")) {
		Ifc_distribution_element *o = new Ifc_distribution_element();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDistributionFlowElement")) {
		Ifc_distribution_flow_element *o = new Ifc_distribution_flow_element();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDocumentElectronicFormat")) {
		Ifc_document_electronic_format *o = new Ifc_document_electronic_format();
		o->file_extension = (Ifc_label *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->file_extension);
		o->mime_content_type = (Ifc_label *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->mime_content_type);
		o->mime_subtype = (Ifc_label *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->mime_subtype);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDocumentInformation")) {
		Ifc_document_information *o = new Ifc_document_information();
		o->document_id = (Ifc_identifier *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->document_id);
		o->name = (Ifc_label *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->name);
		o->description = (Ifc_text *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->description);
		for (auto i : step_parser.parse_list_of_links(object_attributes[3])) o->document_references.push_back((Ifc_document_reference *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->document_references);
		o->purpose = (Ifc_text *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->purpose);
		o->intended_use = (Ifc_text *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->intended_use);
		o->scope = (Ifc_text *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->scope);
		o->revision = (Ifc_label *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->revision);
		o->document_owner = (Ifc_actor_select *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->document_owner);
		for (auto i : step_parser.parse_list_of_links(object_attributes[9])) o->editors.push_back((Ifc_actor_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->editors);
		o->creation_time = (Ifc_date_and_time *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->creation_time);
		o->last_revision_time = (Ifc_date_and_time *)step_parser.parse_link(object_attributes[11]);
		links_to_resolve.push_back((Ifc **)&o->last_revision_time);
		o->electronic_format = (Ifc_document_electronic_format *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->electronic_format);
		o->valid_from = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[13]);
		links_to_resolve.push_back((Ifc **)&o->valid_from);
		o->valid_until = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[14]);
		links_to_resolve.push_back((Ifc **)&o->valid_until);
		o->confidentiality = step_parser.parse_constant(object_attributes[15]);
		o->status = step_parser.parse_constant(object_attributes[16]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDocumentInformationRelationship")) {
		Ifc_document_information_relationship *o = new Ifc_document_information_relationship();
		o->relating_document = (Ifc_document_information *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->relating_document);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->related_documents.push_back((Ifc_document_information *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_documents);
		o->relationship_type = (Ifc_label *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->relationship_type);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDocumentReference")) {
		Ifc_document_reference *o = new Ifc_document_reference();
		o->location = (Ifc_label *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->location);
		o->item_reference = (Ifc_identifier *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->item_reference);
		o->name = (Ifc_label *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->name);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDoor")) {
		Ifc_door *o = new Ifc_door();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcDoorLiningProperties")) {
		Ifc_door_lining_properties *o = new Ifc_door_lining_properties();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->transom_offset = step_parser.parse_double(object_attributes[9]);
		o->lining_offset = step_parser.parse_double(object_attributes[10]);
		o->threshold_offset = step_parser.parse_double(object_attributes[11]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->shape_aspect_style = (Ifc_shape_aspect *)step_parser.parse_link(object_attributes[14]);
		links_to_resolve.push_back((Ifc **)&o->shape_aspect_style);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDoorPanelProperties")) {
		Ifc_door_panel_properties *o = new Ifc_door_panel_properties();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->panel_operation = step_parser.parse_constant(object_attributes[5]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		o->panel_position = step_parser.parse_constant(object_attributes[7]);
		o->shape_aspect_style = (Ifc_shape_aspect *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->shape_aspect_style);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDoorStyle")) {
		Ifc_door_style *o = new Ifc_door_style();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->applicable_occurrence = step_parser.parse_string(object_attributes[4]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->has_property_sets.push_back((Ifc_property_set_definition *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->has_property_sets);
		for (auto i : step_parser.parse_list_of_links(object_attributes[6])) o->representation_maps.push_back((Ifc_representation_map *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->representation_maps);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->operation_type = step_parser.parse_constant(object_attributes[8]);
		o->construction_type = step_parser.parse_constant(object_attributes[9]);
		o->step_parser.parse_boolean(object_attributes[10]);
		o->step_parser.parse_boolean(object_attributes[11]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcEdge")) {
		Ifc_edge *o = new Ifc_edge();
		o->edge_start = (Ifc_vertex *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->edge_start);
		o->edge_end = (Ifc_vertex *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->edge_end);
		return o;
	}

	else if (boost::iequals(object_class, "IfcEdgeCurve")) {
		Ifc_edge_curve *o = new Ifc_edge_curve();
		o->edge_start = (Ifc_vertex *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->edge_start);
		o->edge_end = (Ifc_vertex *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->edge_end);
		o->edge_geometry = (Ifc_curve *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->edge_geometry);
		o->step_parser.parse_boolean(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcElectricMotor")) {
		Ifc_electric_motor *o = new Ifc_electric_motor();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->motor_winding_type = step_parser.parse_constant(object_attributes[8]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->power_output = step_parser.parse_double(object_attributes[10]);
		o->frame_configuration = step_parser.parse_string(object_attributes[11]);
		o->insulation_rating__ = step_parser.parse_string(object_attributes[12]);
		o->motor_housing = step_parser.parse_constant(object_attributes[13]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcElectricalAppliance")) {
		Ifc_electrical_appliance *o = new Ifc_electrical_appliance();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->appliance_type = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcElectricalBaseProperties")) {
		Ifc_electrical_base_properties *o = new Ifc_electrical_base_properties();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->electric_current_type = step_parser.parse_constant(object_attributes[4]);
		o->input_voltage = step_parser.parse_double(object_attributes[5]);
		o->input_frequency = step_parser.parse_double(object_attributes[6]);
		o->full_load_current = step_parser.parse_double(object_attributes[7]);
		o->minimum_circuit_current = step_parser.parse_double(object_attributes[8]);
		o->maximum_power_input = step_parser.parse_double(object_attributes[9]);
		o->rated_power_input = step_parser.parse_double(object_attributes[10]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcElectricalElement")) {
		Ifc_electrical_element *o = new Ifc_electrical_element();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcElectricalExtendedProperties")) {
		Ifc_electrical_extended_properties *o = new Ifc_electrical_extended_properties();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->electric_current_type = step_parser.parse_constant(object_attributes[4]);
		o->input_voltage = step_parser.parse_double(object_attributes[5]);
		o->input_frequency = step_parser.parse_double(object_attributes[6]);
		o->full_load_current = step_parser.parse_double(object_attributes[7]);
		o->minimum_circuit_current = step_parser.parse_double(object_attributes[8]);
		o->maximum_power_input = step_parser.parse_double(object_attributes[9]);
		o->rated_power_input = step_parser.parse_double(object_attributes[10]);
		o->step_parser.parse_integer(object_attributes[11]);
		o->inrush_current = step_parser.parse_double(object_attributes[12]);
		o->locked_rotor_current = step_parser.parse_double(object_attributes[13]);
		o->circuit_size_power_input = step_parser.parse_double(object_attributes[14]);
		o->fuse_size = step_parser.parse_double(object_attributes[15]);
		o->step_parser.parse_boolean(object_attributes[16]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcElement")) {
		Ifc_element *o = new Ifc_element();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcElementQuantity")) {
		Ifc_element_quantity *o = new Ifc_element_quantity();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->method_of_measurement = step_parser.parse_string(object_attributes[4]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->quantities.push_back((Ifc_physical_quantity *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->quantities);
		return o;
	}

	else if (boost::iequals(object_class, "IfcElementarySurface")) {
		Ifc_elementary_surface *o = new Ifc_elementary_surface();
		o->position = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->position);
		return o;
	}

	else if (boost::iequals(object_class, "IfcEllipse")) {
		Ifc_ellipse *o = new Ifc_ellipse();
		o->position = (Ifc_axis_2_placement *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->position);
		o->semi_axis_1 = (Ifc_positive_length_measure *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->semi_axis_1);
		o->semi_axis_2 = (Ifc_positive_length_measure *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->semi_axis_2);
		return o;
	}

	else if (boost::iequals(object_class, "IfcEllipseProfileDef")) {
		Ifc_ellipse_profile_def *o = new Ifc_ellipse_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->position = (Ifc_axis_2_placement_2_d *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcEquipmentElement")) {
		Ifc_equipment_element *o = new Ifc_equipment_element();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcEquipmentStandard")) {
		Ifc_equipment_standard *o = new Ifc_equipment_standard();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcExtendedMaterialProperties")) {
		Ifc_extended_material_properties *o = new Ifc_extended_material_properties();
		o->material = (Ifc_material *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->material);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->extended_properties.push_back((Ifc_property *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->extended_properties);
		o->description = step_parser.parse_string(object_attributes[2]);
		o->name = step_parser.parse_string(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcExternalReference")) {
		Ifc_external_reference *o = new Ifc_external_reference();
		o->location = (Ifc_label *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->location);
		o->item_reference = (Ifc_identifier *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->item_reference);
		o->name = (Ifc_label *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->name);
		return o;
	}

	else if (boost::iequals(object_class, "IfcExtrudedAreaSolid")) {
		Ifc_extruded_area_solid *o = new Ifc_extruded_area_solid();
		o->swept_area = (Ifc_profile_def *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->swept_area);
		o->position = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->position);
		o->extruded_direction = (Ifc_direction *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->extruded_direction);
		o->depth = (Ifc_positive_length_measure *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->depth);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFace")) {
		Ifc_face *o = new Ifc_face();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->bounds.push_back((Ifc_face_bound *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->bounds);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFaceBasedSurfaceModel")) {
		Ifc_face_based_surface_model *o = new Ifc_face_based_surface_model();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->fbsm_faces.push_back((Ifc_connected_face_set *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->fbsm_faces);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFaceBound")) {
		Ifc_face_bound *o = new Ifc_face_bound();
		o->bound = (Ifc_loop *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->bound);
		o->step_parser.parse_boolean(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFaceOuterBound")) {
		Ifc_face_outer_bound *o = new Ifc_face_outer_bound();
		o->bound = (Ifc_loop *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->bound);
		o->step_parser.parse_boolean(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFaceSurface")) {
		Ifc_face_surface *o = new Ifc_face_surface();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->bounds.push_back((Ifc_face_bound *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->bounds);
		o->face_surface = (Ifc_surface *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->face_surface);
		o->step_parser.parse_boolean(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFacetedBrep")) {
		Ifc_faceted_brep *o = new Ifc_faceted_brep();
		o->outer = (Ifc_closed_shell *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->outer);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFacetedBrepWithVoids")) {
		Ifc_faceted_brep_with_voids *o = new Ifc_faceted_brep_with_voids();
		o->outer = (Ifc_closed_shell *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->outer);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->voids.push_back((Ifc_closed_shell *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->voids);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFan")) {
		Ifc_fan *o = new Ifc_fan();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->primary_energy_source = step_parser.parse_constant(object_attributes[9]);
		o->impeller_diameter = step_parser.parse_double(object_attributes[10]);
		o->air_flow_type = step_parser.parse_constant(object_attributes[11]);
		o->static_pressure = step_parser.parse_double(object_attributes[12]);
		o->fan_pressure_class = step_parser.parse_constant(object_attributes[13]);
		o->fan_wheel_type = step_parser.parse_constant(object_attributes[14]);
		o->wheel_material = (Ifc_material_select *)step_parser.parse_link(object_attributes[15]);
		links_to_resolve.push_back((Ifc **)&o->wheel_material);
		o->wheel_tip_speed = step_parser.parse_double(object_attributes[16]);
		o->discharge_velocity = step_parser.parse_double(object_attributes[17]);
		o->housing_material = (Ifc_material_select *)step_parser.parse_link(object_attributes[18]);
		links_to_resolve.push_back((Ifc **)&o->housing_material);
		o->discharge_pressure_loss = step_parser.parse_double(object_attributes[19]);
		o->fan_discharge_type = step_parser.parse_constant(object_attributes[20]);
		o->fan_arrangement = step_parser.parse_constant(object_attributes[21]);
		o->fan_rotation = step_parser.parse_constant(object_attributes[22]);
		o->fan_drive_arrangement = step_parser.parse_constant(object_attributes[23]);
		o->drive_power_loss__ = step_parser.parse_double(object_attributes[24]);
		o->motor_drive_type = step_parser.parse_constant(object_attributes[25]);
		o->motor_in_airstream__ = step_parser.parse_boolean(object_attributes[26]);
		o->fan_mounting_type = step_parser.parse_constant(object_attributes[27]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFlowController")) {
		Ifc_flow_controller *o = new Ifc_flow_controller();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFlowFitting")) {
		Ifc_flow_fitting *o = new Ifc_flow_fitting();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		o->primary_fitting_type = step_parser.parse_constant(object_attributes[10]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFlowSegment")) {
		Ifc_flow_segment *o = new Ifc_flow_segment();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFlowTerminal")) {
		Ifc_flow_terminal *o = new Ifc_flow_terminal();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFluidFlowProperties")) {
		Ifc_fluid_flow_properties *o = new Ifc_fluid_flow_properties();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->maximum_flow_rate = step_parser.parse_double(object_attributes[4]);
		o->design_flowrate = step_parser.parse_double(object_attributes[5]);
		o->minimum_flowrate = step_parser.parse_double(object_attributes[6]);
		o->pressure_loss = step_parser.parse_double(object_attributes[7]);
		o->working_pressure = step_parser.parse_double(object_attributes[8]);
		o->pressure_rating = step_parser.parse_double(object_attributes[9]);
		o->fluid = (Ifc_material *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->fluid);
		o->design_velocity = step_parser.parse_double(object_attributes[11]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[12])) o->design_temperature.push_back((Ifc_thermodynamic_temperature_measure *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->design_temperature);
		for (auto i : step_parser.parse_list_of_links(object_attributes[13])) o->maximum_temperature.push_back((Ifc_thermodynamic_temperature_measure *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->maximum_temperature);
		for (auto i : step_parser.parse_list_of_links(object_attributes[14])) o->minimum_temperature.push_back((Ifc_thermodynamic_temperature_measure *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->minimum_temperature);
		for (auto i : step_parser.parse_list_of_links(object_attributes[15])) o->working_temperature.push_back((Ifc_thermodynamic_temperature_measure *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->working_temperature);
		o->working_quality = step_parser.parse_double(object_attributes[16]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFluidMovingDevice")) {
		Ifc_fluid_moving_device *o = new Ifc_fluid_moving_device();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->primary_energy_source = step_parser.parse_constant(object_attributes[9]);
		o->impeller_diameter = step_parser.parse_double(object_attributes[10]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFurnishingElement")) {
		Ifc_furnishing_element *o = new Ifc_furnishing_element();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFurniture")) {
		Ifc_furniture *o = new Ifc_furniture();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFurnitureStandard")) {
		Ifc_furniture_standard *o = new Ifc_furniture_standard();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcGeneralMaterialProperties")) {
		Ifc_general_material_properties *o = new Ifc_general_material_properties();
		o->material = (Ifc_material *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->material);
		o->molecular_weight = step_parser.parse_double(object_attributes[1]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		o->mass_density = step_parser.parse_double(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcGeometricRepresentationContext")) {
		Ifc_geometric_representation_context *o = new Ifc_geometric_representation_context();
		o->context_identifier = step_parser.parse_string(object_attributes[0]);
		o->context_type = step_parser.parse_string(object_attributes[1]);
		o->coordinate_space_dimension = step_parser.parse_integer(object_attributes[2]);
		o->step_parser.parse_double(object_attributes[3]);
		o->world_coordinate_system = (Ifc_axis_2_placement *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->world_coordinate_system);
		o->true_north = (Ifc_direction *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->true_north);
		return o;
	}

	else if (boost::iequals(object_class, "IfcGeometricRepresentationItem")) {
		Ifc_geometric_representation_item *o = new Ifc_geometric_representation_item();
		return o;
	}

	else if (boost::iequals(object_class, "IfcGeometricSet")) {
		Ifc_geometric_set *o = new Ifc_geometric_set();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->elements.push_back((Ifc_geometric_set_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->elements);
		return o;
	}

	else if (boost::iequals(object_class, "IfcGrid")) {
		Ifc_grid *o = new Ifc_grid();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->u_axes.push_back((Ifc_grid_axis *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->u_axes);
		for (auto i : step_parser.parse_list_of_links(object_attributes[8])) o->v_axes.push_back((Ifc_grid_axis *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->v_axes);
		for (auto i : step_parser.parse_list_of_links(object_attributes[9])) o->w_axes.push_back((Ifc_grid_axis *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->w_axes);
		return o;
	}

	else if (boost::iequals(object_class, "IfcGridAxis")) {
		Ifc_grid_axis *o = new Ifc_grid_axis();
		o->axis_tag = (Ifc_label *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->axis_tag);
		o->axis_curve = (Ifc_curve *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->axis_curve);
		o->same_sense = (Ifc_boolean *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->same_sense);
		return o;
	}

	else if (boost::iequals(object_class, "IfcGridPlacement")) {
		Ifc_grid_placement *o = new Ifc_grid_placement();
		o->placement_location = (Ifc_virtual_grid_intersection *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->placement_location);
		o->placement_ref_direction = (Ifc_virtual_grid_intersection *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->placement_ref_direction);
		return o;
	}

	else if (boost::iequals(object_class, "IfcGroup")) {
		Ifc_group *o = new Ifc_group();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcHalfSpaceSolid")) {
		Ifc_half_space_solid *o = new Ifc_half_space_solid();
		o->base_surface = (Ifc_surface *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->base_surface);
		o->step_parser.parse_boolean(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcHeatExchanger")) {
		Ifc_heat_exchanger *o = new Ifc_heat_exchanger();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->heat_transfer_rate = step_parser.parse_double(object_attributes[9]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->primary_energy_source = step_parser.parse_constant(object_attributes[11]);
		o->heat_exchanger_type = step_parser.parse_constant(object_attributes[12]);
		o->heat_exchanger_arrangement = step_parser.parse_constant(object_attributes[13]);
		o->number_of_plates = step_parser.parse_integer(object_attributes[14]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcHeatTransferDevice")) {
		Ifc_heat_transfer_device *o = new Ifc_heat_transfer_device();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->heat_transfer_rate = step_parser.parse_double(object_attributes[9]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->primary_energy_source = step_parser.parse_constant(object_attributes[11]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcHydronicHeater")) {
		Ifc_hydronic_heater *o = new Ifc_hydronic_heater();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->hydronic_heater_type = step_parser.parse_constant(object_attributes[9]);
		o->heat_output = step_parser.parse_double(object_attributes[10]);
		o->enclosure = step_parser.parse_string(object_attributes[11]);
		o->body_mass = step_parser.parse_double(object_attributes[12]);
		o->number_of_panels = step_parser.parse_integer(object_attributes[13]);
		o->number_of_sections = step_parser.parse_integer(object_attributes[14]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcHygroscopicMaterialProperties")) {
		Ifc_hygroscopic_material_properties *o = new Ifc_hygroscopic_material_properties();
		o->material = (Ifc_material *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->material);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->isothermal_moisture_capacity = step_parser.parse_double(object_attributes[3]);
		o->vapor_permeability = step_parser.parse_double(object_attributes[4]);
		o->moisture_diffusivity = step_parser.parse_double(object_attributes[5]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcInventory")) {
		Ifc_inventory *o = new Ifc_inventory();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->defined_type = step_parser.parse_constant(object_attributes[5]);
		o->jurisdiction = (Ifc_actor_select *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->jurisdiction);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->responsible_persons.push_back((Ifc_person *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->responsible_persons);
		o->last_update_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->last_update_date);
		o->current_value = (Ifc_cost_value *)step_parser.parse_link(object_attributes[9]);
		links_to_resolve.push_back((Ifc **)&o->current_value);
		o->original_value = (Ifc_cost_value *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->original_value);
		return o;
	}

	else if (boost::iequals(object_class, "IfcIshapeProfileDef")) {
		Ifc_ishape_profile_def *o = new Ifc_ishape_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->position = (Ifc_axis_2_placement_2_d *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcLaborResource")) {
		Ifc_labor_resource *o = new Ifc_labor_resource();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->resource_consumption = step_parser.parse_constant(object_attributes[5]);
		o->base_unit = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->base_unit);
		o->title = step_parser.parse_string(object_attributes[7]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[8])) o->skill_set.push_back((Ifc_label *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->skill_set);
		return o;
	}

	else if (boost::iequals(object_class, "IfcLibraryInformation")) {
		Ifc_library_information *o = new Ifc_library_information();
		o->name = (Ifc_label *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->name);
		o->version = (Ifc_label *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->version);
		o->publisher = (Ifc_organization *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->publisher);
		o->version_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->version_date);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->library_reference.push_back((Ifc_library_reference *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->library_reference);
		return o;
	}

	else if (boost::iequals(object_class, "IfcLibraryReference")) {
		Ifc_library_reference *o = new Ifc_library_reference();
		o->location = (Ifc_label *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->location);
		o->item_reference = (Ifc_identifier *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->item_reference);
		o->name = (Ifc_label *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->name);
		return o;
	}

	else if (boost::iequals(object_class, "IfcLightFixture")) {
		Ifc_light_fixture *o = new Ifc_light_fixture();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->maximum_space_sensible_load = step_parser.parse_double(object_attributes[8]);
		o->maximum_plenum_sensible_load__ = step_parser.parse_double(object_attributes[9]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcLine")) {
		Ifc_line *o = new Ifc_line();
		o->pnt = (Ifc_cartesian_point *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->pnt);
		o->dir = (Ifc_vector *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->dir);
		return o;
	}

	else if (boost::iequals(object_class, "IfcLocalPlacement")) {
		Ifc_local_placement *o = new Ifc_local_placement();
		o->placement_rel_to = (Ifc_object_placement *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->placement_rel_to);
		o->relative_placement = (Ifc_axis_2_placement *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->relative_placement);
		return o;
	}

	else if (boost::iequals(object_class, "IfcLocalTime")) {
		Ifc_local_time *o = new Ifc_local_time();
		o->hour_component = step_parser.parse_integer(object_attributes[0]);
		o->minute_component = step_parser.parse_integer(object_attributes[1]);
		o->second_component = step_parser.parse_double(object_attributes[2]);
		o->zone = (Ifc_coordinated_universal_time_offset *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->zone);
		o->daylight_saving_offset = step_parser.parse_integer(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcLoop")) {
		Ifc_loop *o = new Ifc_loop();
		return o;
	}

	else if (boost::iequals(object_class, "IfcMaintenanceRecord")) {
		Ifc_maintenance_record *o = new Ifc_maintenance_record();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->records.push_back((Ifc_rel_maintenance_event *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->records);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMaintenanceWorkOrder")) {
		Ifc_maintenance_work_order *o = new Ifc_maintenance_work_order();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->order_number = step_parser.parse_string(object_attributes[5]);
		o->transaction_code = step_parser.parse_string(object_attributes[6]);
		o->issuing_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->issuing_date);
		o->issued_by = (Ifc_actor_select *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->issued_by);
		for (auto i : step_parser.parse_list_of_links(object_attributes[9])) o->issued_to.push_back((Ifc_actor_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->issued_to);
		for (auto i : step_parser.parse_list_of_links(object_attributes[10])) o->additional_contacts.push_back((Ifc_actor_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->additional_contacts);
		for (auto i : step_parser.parse_list_of_links(object_attributes[11])) o->remarks.push_back((Ifc_text *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->remarks);
		o->signoff = (Ifc_person *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->signoff);
		o->budget_source = (Ifc_budget *)step_parser.parse_link(object_attributes[13]);
		links_to_resolve.push_back((Ifc **)&o->budget_source);
		o->product_description = step_parser.parse_string(object_attributes[14]);
		o->short_job_description = step_parser.parse_string(object_attributes[15]);
		o->long_job_description = step_parser.parse_string(object_attributes[16]);
		o->work_type_requested = step_parser.parse_string(object_attributes[17]);
		o->contractual_type = step_parser.parse_string(object_attributes[18]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[19])) o->if_not_accomplished.push_back((Ifc_label *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->if_not_accomplished);
		o->requested_start_time = (Ifc_date_and_time *)step_parser.parse_link(object_attributes[20]);
		links_to_resolve.push_back((Ifc **)&o->requested_start_time);
		o->requested_finish_time = (Ifc_date_and_time *)step_parser.parse_link(object_attributes[21]);
		links_to_resolve.push_back((Ifc **)&o->requested_finish_time);
		o->actual_start_time = (Ifc_date_and_time *)step_parser.parse_link(object_attributes[22]);
		links_to_resolve.push_back((Ifc **)&o->actual_start_time);
		o->actual_finish_time = (Ifc_date_and_time *)step_parser.parse_link(object_attributes[23]);
		links_to_resolve.push_back((Ifc **)&o->actual_finish_time);
		o->cost_estimate = (Ifc_cost_schedule *)step_parser.parse_link(object_attributes[24]);
		links_to_resolve.push_back((Ifc **)&o->cost_estimate);
		o->work_plan = (Ifc_work_plan *)step_parser.parse_link(object_attributes[25]);
		links_to_resolve.push_back((Ifc **)&o->work_plan);
		o->status = step_parser.parse_constant(object_attributes[26]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[27])) o->work_order_risk_type.push_back((Ifc_work_order_risk_type_enum *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->work_order_risk_type);
		for (auto i : step_parser.parse_list_of_links(object_attributes[28])) o->performed_by.push_back((Ifc_person *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->performed_by);
		o->actual_cost = (Ifc_cost_value *)step_parser.parse_link(object_attributes[29]);
		links_to_resolve.push_back((Ifc **)&o->actual_cost);
		for (auto i : step_parser.parse_list_of_links(object_attributes[30])) o->spares_tools_equipment_consumables.push_back((Ifc_label *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->spares_tools_equipment_consumables);
		o->maintenance_type = step_parser.parse_constant(object_attributes[31]);
		o->fault_priority = step_parser.parse_constant(object_attributes[32]);
		o->location_priority = step_parser.parse_constant(object_attributes[33]);
		o->asset_downtime = step_parser.parse_double(object_attributes[34]);
		o->scheduled_frequency = step_parser.parse_double(object_attributes[35]);
		o->required_response_time = step_parser.parse_double(object_attributes[36]);
		o->lead_craft = step_parser.parse_string(object_attributes[37]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcManifoldSolidBrep")) {
		Ifc_manifold_solid_brep *o = new Ifc_manifold_solid_brep();
		o->outer = (Ifc_closed_shell *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->outer);
		return o;
	}

	else if (boost::iequals(object_class, "IfcManufacturerInformation")) {
		Ifc_manufacturer_information *o = new Ifc_manufacturer_information();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->model_label = step_parser.parse_string(object_attributes[4]);
		o->model_reference = step_parser.parse_string(object_attributes[5]);
		o->manufacturer = (Ifc_organization *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->manufacturer);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->quantity_information.push_back((Ifc_physical_quantity *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->quantity_information);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMappedItem")) {
		Ifc_mapped_item *o = new Ifc_mapped_item();
		o->mapping_source = (Ifc_representation_map *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->mapping_source);
		o->mapping_target = (Ifc_cartesian_transformation_operator *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->mapping_target);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMaterial")) {
		Ifc_material *o = new Ifc_material();
		o->name = (Ifc_label *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->name);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMaterialClassificationRelationship")) {
		Ifc_material_classification_relationship *o = new Ifc_material_classification_relationship();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->material_classifications.push_back((Ifc_classification_notation_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->material_classifications);
		o->classified_material = (Ifc_material *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->classified_material);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMaterialLayer")) {
		Ifc_material_layer *o = new Ifc_material_layer();
		o->material = (Ifc_material *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->material);
		o->layer_thickness = (Ifc_positive_length_measure *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->layer_thickness);
		o->is_ventilated = (Ifc_boolean *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->is_ventilated);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMaterialLayerSet")) {
		Ifc_material_layer_set *o = new Ifc_material_layer_set();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->material_layers.push_back((Ifc_material_layer *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->material_layers);
		o->layer_set_name = (Ifc_label *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->layer_set_name);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMaterialLayerSetUsage")) {
		Ifc_material_layer_set_usage *o = new Ifc_material_layer_set_usage();
		o->for_layer_set = (Ifc_material_layer_set *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->for_layer_set);
		o->layer_set_direction = step_parser.parse_constant(object_attributes[1]);
		o->direction_sense = step_parser.parse_constant(object_attributes[2]);
		o->offset_from_reference_line = (Ifc_length_measure *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->offset_from_reference_line);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMaterialList")) {
		Ifc_material_list *o = new Ifc_material_list();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->materials.push_back((Ifc_material *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->materials);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMaterialProperties")) {
		Ifc_material_properties *o = new Ifc_material_properties();
		o->material = (Ifc_material *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->material);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMeasureWithUnit")) {
		Ifc_measure_with_unit *o = new Ifc_measure_with_unit();
		o->value_component = (Ifc_value *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->value_component);
		o->unit_component = (Ifc_unit *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->unit_component);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMechanicalMaterialProperties")) {
		Ifc_mechanical_material_properties *o = new Ifc_mechanical_material_properties();
		o->material = (Ifc_material *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->material);
		o->dynamic_viscosity = step_parser.parse_double(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMetric")) {
		Ifc_metric *o = new Ifc_metric();
		o->constraint_grade = step_parser.parse_constant(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->constraint_source = step_parser.parse_string(object_attributes[2]);
		o->name = step_parser.parse_string(object_attributes[3]);
		o->creating_actor = (Ifc_actor_select *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->creating_actor);
		o->creation_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->creation_time);
		for (auto i : step_parser.parse_list_of_links(object_attributes[6])) o->values.push_back((Ifc_metric_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->values);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMetricBenchmark")) {
		Ifc_metric_benchmark *o = new Ifc_metric_benchmark();
		o->constraint_grade = step_parser.parse_constant(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->constraint_source = step_parser.parse_string(object_attributes[2]);
		o->name = step_parser.parse_string(object_attributes[3]);
		o->creating_actor = (Ifc_actor_select *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->creating_actor);
		o->creation_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->creation_time);
		for (auto i : step_parser.parse_list_of_links(object_attributes[6])) o->values.push_back((Ifc_metric_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->values);
		o->benchmark = step_parser.parse_constant(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMetricValue")) {
		Ifc_metric_value *o = new Ifc_metric_value();
		o->data_type = step_parser.parse_constant(object_attributes[0]);
		o->data_value = (Ifc_metric_value_select *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->data_value);
		o->value_source = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMonetaryUnit")) {
		Ifc_monetary_unit *o = new Ifc_monetary_unit();
		o->currency = step_parser.parse_constant(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMove")) {
		Ifc_move *o = new Ifc_move();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->productivity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->productivity);
		o->task_id = step_parser.parse_string(object_attributes[6]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->w_b_s_code.push_back((Ifc_label *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->w_b_s_code);
		for (auto i : step_parser.parse_list_of_links(object_attributes[8])) o->w_b_s_source.push_back((Ifc_label *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->w_b_s_source);
		o->status = step_parser.parse_constant(object_attributes[9]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[10])) o->milestones.push_back((Ifc_task_milestone_enum *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->milestones);
		o->work_method = step_parser.parse_string(object_attributes[11]);
		o->in_place_quantity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->in_place_quantity);
		o->estimated_quantity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[13]);
		links_to_resolve.push_back((Ifc **)&o->estimated_quantity);
		o->budget_quantity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[14]);
		links_to_resolve.push_back((Ifc **)&o->budget_quantity);
		o->step_parser.parse_boolean(object_attributes[15]);
		o->move_from = (Ifc_spatial_structure_element *)step_parser.parse_link(object_attributes[16]);
		links_to_resolve.push_back((Ifc **)&o->move_from);
		o->move_to = (Ifc_spatial_structure_element *)step_parser.parse_link(object_attributes[17]);
		links_to_resolve.push_back((Ifc **)&o->move_to);
		for (auto i : step_parser.parse_list_of_links(object_attributes[18])) o->move_constraints.push_back((Ifc_action_time_control *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->move_constraints);
		for (auto i : step_parser.parse_list_of_links(object_attributes[19])) o->punch_list.push_back((Ifc_label *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->punch_list);
		return o;
	}

	else if (boost::iequals(object_class, "IfcNamedUnit")) {
		Ifc_named_unit *o = new Ifc_named_unit();
		o->dimensions = (Ifc_dimensional_exponents *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->dimensions);
		o->unit_type = step_parser.parse_constant(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcObject")) {
		Ifc_object *o = new Ifc_object();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcObjectPlacement")) {
		Ifc_object_placement *o = new Ifc_object_placement();
		return o;
	}

	else if (boost::iequals(object_class, "IfcObjective")) {
		Ifc_objective *o = new Ifc_objective();
		o->constraint_grade = step_parser.parse_constant(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->constraint_source = step_parser.parse_string(object_attributes[2]);
		o->name = step_parser.parse_string(object_attributes[3]);
		o->creating_actor = (Ifc_actor_select *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->creating_actor);
		o->creation_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->creation_time);
		o->objective_qualifier = step_parser.parse_constant(object_attributes[6]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->benchmark_values.push_back((Ifc_metric *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->benchmark_values);
		for (auto i : step_parser.parse_list_of_links(object_attributes[8])) o->result_values.push_back((Ifc_metric *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->result_values);
		return o;
	}

	else if (boost::iequals(object_class, "IfcOccupant")) {
		Ifc_occupant *o = new Ifc_occupant();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->the_actor = (Ifc_actor_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->the_actor);
		o->leese_or_rental_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->leese_or_rental_date);
		o->leese_or_rental_period = step_parser.parse_double(object_attributes[7]);
		o->occupation_type = step_parser.parse_constant(object_attributes[8]);
		//o->step_parser.parse_logical(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcOffsetCurve2D")) {
		Ifc_offset_curve_2_d *o = new Ifc_offset_curve_2_d();
		o->basis_curve = (Ifc_curve *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->basis_curve);
		o->distance = (Ifc_length_measure *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->distance);
		//o->step_parser.parse_logical(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcOffsetCurve3D")) {
		Ifc_offset_curve_3_d *o = new Ifc_offset_curve_3_d();
		o->basis_curve = (Ifc_curve *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->basis_curve);
		o->distance = (Ifc_length_measure *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->distance);
		//o->step_parser.parse_logical(object_attributes[2]);
		o->ref_direction = (Ifc_direction *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->ref_direction);
		return o;
	}

	else if (boost::iequals(object_class, "IfcOpenShell")) {
		Ifc_open_shell *o = new Ifc_open_shell();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->cfs_faces.push_back((Ifc_face *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->cfs_faces);
		return o;
	}

	else if (boost::iequals(object_class, "IfcOpeningElement")) {
		Ifc_opening_element *o = new Ifc_opening_element();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcOpticalMaterialProperties")) {
		Ifc_optical_material_properties *o = new Ifc_optical_material_properties();
		o->material = (Ifc_material *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->material);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcOrganization")) {
		Ifc_organization *o = new Ifc_organization();
		o->_id = (Ifc_identifier *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->_id);
		o->name = (Ifc_label *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->name);
		o->description = (Ifc_text *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->description);
		for (auto i : step_parser.parse_list_of_links(object_attributes[3])) o->roles.push_back((Ifc_actor_role *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->roles);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->addresses.push_back((Ifc_address *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->addresses);
		return o;
	}

	else if (boost::iequals(object_class, "IfcOrganizationRelationship")) {
		Ifc_organization_relationship *o = new Ifc_organization_relationship();
		o->name = (Ifc_label *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->name);
		o->description = (Ifc_text *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->description);
		o->relating_organization = (Ifc_organization *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->relating_organization);
		for (auto i : step_parser.parse_list_of_links(object_attributes[3])) o->related_organizations.push_back((Ifc_organization *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_organizations);
		return o;
	}

	else if (boost::iequals(object_class, "IfcOrientedEdge")) {
		Ifc_oriented_edge *o = new Ifc_oriented_edge();
		o->edge_start = (Ifc_vertex *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->edge_start);
		o->edge_end = (Ifc_vertex *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->edge_end);
		o->edge_element = (Ifc_edge *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->edge_element);
		o->step_parser.parse_boolean(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcOutlet")) {
		Ifc_outlet *o = new Ifc_outlet();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->outlet_type = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcOwnerHistory")) {
		Ifc_owner_history *o = new Ifc_owner_history();
		o->owning_user = (Ifc_person_and_organization *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->owning_user);
		o->owning_application = (Ifc_application *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owning_application);
		o->state = step_parser.parse_constant(object_attributes[2]);
		o->change_action = step_parser.parse_constant(object_attributes[3]);
		o->last_modified_date = step_parser.parse_integer(object_attributes[4]);
		o->last_modifying_user = (Ifc_person_and_organization *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->last_modifying_user);
		o->last_modifying_application = (Ifc_application *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->last_modifying_application);
		o->creation_date = step_parser.parse_integer(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPath")) {
		Ifc_path *o = new Ifc_path();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->edge_list.push_back((Ifc_oriented_edge *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->edge_list);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPermeableCoveringProperties")) {
		Ifc_permeable_covering_properties *o = new Ifc_permeable_covering_properties();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->operation_type = step_parser.parse_constant(object_attributes[4]);
		o->panel_position = step_parser.parse_constant(object_attributes[5]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->shape_aspect_style = (Ifc_shape_aspect *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->shape_aspect_style);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPerson")) {
		Ifc_person *o = new Ifc_person();
		o->_id = (Ifc_identifier *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->_id);
		o->family_name = (Ifc_label *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->family_name);
		o->given_name = (Ifc_label *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->given_name);
		for (auto i : step_parser.parse_list_of_links(object_attributes[3])) o->middle_names.push_back((Ifc_label *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->middle_names);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->prefix_titles.push_back((Ifc_label *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->prefix_titles);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->suffix_titles.push_back((Ifc_label *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->suffix_titles);
		for (auto i : step_parser.parse_list_of_links(object_attributes[6])) o->roles.push_back((Ifc_actor_role *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->roles);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->addresses.push_back((Ifc_address *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->addresses);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPersonAndOrganization")) {
		Ifc_person_and_organization *o = new Ifc_person_and_organization();
		o->the_person = (Ifc_person *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->the_person);
		o->the_organization = (Ifc_organization *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->the_organization);
		for (auto i : step_parser.parse_list_of_links(object_attributes[2])) o->roles.push_back((Ifc_actor_role *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->roles);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPhysicalQuantity")) {
		Ifc_physical_quantity *o = new Ifc_physical_quantity();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->unit = (Ifc_named_unit *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->unit);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPlacement")) {
		Ifc_placement *o = new Ifc_placement();
		o->location = (Ifc_cartesian_point *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->location);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPlane")) {
		Ifc_plane *o = new Ifc_plane();
		o->position = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->position);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPoint")) {
		Ifc_point *o = new Ifc_point();
		return o;
	}

	else if (boost::iequals(object_class, "IfcPointLightSource")) {
		Ifc_point_light_source *o = new Ifc_point_light_source();
		//TODO: parse non-pointer type: typedef std::vector<Ifc_normalised_ratio_measure> Ifc_color_r_g_b;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		o->in_context = (Ifc_geometric_representation_context *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->in_context);
		o->name = step_parser.parse_string(object_attributes[4]);
		o->description = step_parser.parse_string(object_attributes[5]);
		o->location = (Ifc_cartesian_point *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->location);
		o->attenuation = step_parser.parse_list_of_doubles(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPolyLoop")) {
		Ifc_poly_loop *o = new Ifc_poly_loop();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->polygon.push_back((Ifc_cartesian_point *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->polygon);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPolygonalBoundedHalfSpace")) {
		Ifc_polygonal_bounded_half_space *o = new Ifc_polygonal_bounded_half_space();
		o->base_surface = (Ifc_surface *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->base_surface);
		o->step_parser.parse_boolean(object_attributes[1]);
		o->position = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->position);
		o->polygonal_boundary = (Ifc_polyline *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->polygonal_boundary);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPolyline")) {
		Ifc_polyline *o = new Ifc_polyline();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->points.push_back((Ifc_cartesian_point *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->points);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPostalAddress")) {
		Ifc_postal_address *o = new Ifc_postal_address();
		o->purpose = step_parser.parse_constant(object_attributes[0]);
		o->description = (Ifc_text *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->description);
		o->user_defined_purpose = (Ifc_label *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->user_defined_purpose);
		o->internal_location = (Ifc_label *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->internal_location);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->address_lines.push_back((Ifc_label *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->address_lines);
		o->postal_box = (Ifc_label *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->postal_box);
		o->town = (Ifc_label *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->town);
		o->region = (Ifc_label *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->region);
		o->postal_code = (Ifc_label *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->postal_code);
		o->country = (Ifc_label *)step_parser.parse_link(object_attributes[9]);
		links_to_resolve.push_back((Ifc **)&o->country);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPresentationLightSource")) {
		Ifc_presentation_light_source *o = new Ifc_presentation_light_source();
		//TODO: parse non-pointer type: typedef std::vector<Ifc_normalised_ratio_measure> Ifc_color_r_g_b;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		o->in_context = (Ifc_geometric_representation_context *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->in_context);
		o->name = step_parser.parse_string(object_attributes[4]);
		o->description = step_parser.parse_string(object_attributes[5]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcProcess")) {
		Ifc_process *o = new Ifc_process();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->productivity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->productivity);
		return o;
	}

	else if (boost::iequals(object_class, "IfcProduct")) {
		Ifc_product *o = new Ifc_product();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		return o;
	}

	else if (boost::iequals(object_class, "IfcProductDefinitionShape")) {
		Ifc_product_definition_shape *o = new Ifc_product_definition_shape();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[2])) o->representations.push_back((Ifc_representation *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->representations);
		return o;
	}

	else if (boost::iequals(object_class, "IfcProductRepresentation")) {
		Ifc_product_representation *o = new Ifc_product_representation();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[2])) o->representations.push_back((Ifc_representation *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->representations);
		return o;
	}

	else if (boost::iequals(object_class, "IfcProfileDef")) {
		Ifc_profile_def *o = new Ifc_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcProject")) {
		Ifc_project *o = new Ifc_project();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->long_name = step_parser.parse_string(object_attributes[5]);
		o->phase = step_parser.parse_string(object_attributes[6]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->representation_contexts.push_back((Ifc_representation_context *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->representation_contexts);
		o->units_in_context = (Ifc_unit_assignment *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->units_in_context);
		return o;
	}

	else if (boost::iequals(object_class, "IfcProjectOrder")) {
		Ifc_project_order *o = new Ifc_project_order();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->order_number = step_parser.parse_string(object_attributes[5]);
		o->transaction_code = step_parser.parse_string(object_attributes[6]);
		o->issuing_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->issuing_date);
		o->issued_by = (Ifc_actor_select *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->issued_by);
		for (auto i : step_parser.parse_list_of_links(object_attributes[9])) o->issued_to.push_back((Ifc_actor_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->issued_to);
		for (auto i : step_parser.parse_list_of_links(object_attributes[10])) o->additional_contacts.push_back((Ifc_actor_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->additional_contacts);
		for (auto i : step_parser.parse_list_of_links(object_attributes[11])) o->remarks.push_back((Ifc_text *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->remarks);
		o->signoff = (Ifc_person *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->signoff);
		o->budget_source = (Ifc_budget *)step_parser.parse_link(object_attributes[13]);
		links_to_resolve.push_back((Ifc **)&o->budget_source);
		return o;
	}

	else if (boost::iequals(object_class, "IfcProperty")) {
		Ifc_property *o = new Ifc_property();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPropertyBoundedValue")) {
		Ifc_property_bounded_value *o = new Ifc_property_bounded_value();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->upper_bound_value = (Ifc_value *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->upper_bound_value);
		o->lower_bound_value = (Ifc_value *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->lower_bound_value);
		o->unit = (Ifc_unit *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->unit);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPropertyDefinition")) {
		Ifc_property_definition *o = new Ifc_property_definition();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPropertyEnumeratedValue")) {
		Ifc_property_enumerated_value *o = new Ifc_property_enumerated_value();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[2])) o->enumeration_values.push_back((Ifc_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->enumeration_values);
		o->enumeration_reference = (Ifc_property_enumeration *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->enumeration_reference);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPropertyEnumeration")) {
		Ifc_property_enumeration *o = new Ifc_property_enumeration();
		o->name = step_parser.parse_string(object_attributes[0]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->enumeration_values.push_back((Ifc_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->enumeration_values);
		o->unit = (Ifc_unit *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->unit);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPropertyReferenceValue")) {
		Ifc_property_reference_value *o = new Ifc_property_reference_value();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->usage_name = step_parser.parse_string(object_attributes[2]);
		o->property_reference = (Ifc_object_reference_select *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->property_reference);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPropertySet")) {
		Ifc_property_set *o = new Ifc_property_set();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->has_properties.push_back((Ifc_property *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->has_properties);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPropertySetDefinition")) {
		Ifc_property_set_definition *o = new Ifc_property_set_definition();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPropertySingleValue")) {
		Ifc_property_single_value *o = new Ifc_property_single_value();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->nominal_value = (Ifc_value *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->nominal_value);
		o->unit = (Ifc_unit *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->unit);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPropertyTableValue")) {
		Ifc_property_table_value *o = new Ifc_property_table_value();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[2])) o->defining_values.push_back((Ifc_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->defining_values);
		for (auto i : step_parser.parse_list_of_links(object_attributes[3])) o->defined_values.push_back((Ifc_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->defined_values);
		o->expression = step_parser.parse_string(object_attributes[4]);
		o->defining_unit = (Ifc_unit *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->defining_unit);
		o->defined_unit = (Ifc_unit *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->defined_unit);
		return o;
	}

	else if (boost::iequals(object_class, "IfcProxy")) {
		Ifc_proxy *o = new Ifc_proxy();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->proxy_type = step_parser.parse_constant(object_attributes[7]);
		o->tag = step_parser.parse_string(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPump")) {
		Ifc_pump *o = new Ifc_pump();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->primary_energy_source = step_parser.parse_constant(object_attributes[9]);
		o->impeller_diameter = step_parser.parse_double(object_attributes[10]);
		o->pump_type = step_parser.parse_constant(object_attributes[11]);
		o->net_positive_suction_head = step_parser.parse_double(object_attributes[12]);
		o->impeller_seal_material = (Ifc_material_select *)step_parser.parse_link(object_attributes[13]);
		links_to_resolve.push_back((Ifc **)&o->impeller_seal_material);
		o->pump_base_type = step_parser.parse_constant(object_attributes[14]);
		o->motor_drive_type = step_parser.parse_constant(object_attributes[15]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPurchaseOrder")) {
		Ifc_purchase_order *o = new Ifc_purchase_order();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->order_number = step_parser.parse_string(object_attributes[5]);
		o->transaction_code = step_parser.parse_string(object_attributes[6]);
		o->issuing_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->issuing_date);
		o->issued_by = (Ifc_actor_select *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->issued_by);
		for (auto i : step_parser.parse_list_of_links(object_attributes[9])) o->issued_to.push_back((Ifc_actor_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->issued_to);
		for (auto i : step_parser.parse_list_of_links(object_attributes[10])) o->additional_contacts.push_back((Ifc_actor_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->additional_contacts);
		for (auto i : step_parser.parse_list_of_links(object_attributes[11])) o->remarks.push_back((Ifc_text *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->remarks);
		o->signoff = (Ifc_person *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->signoff);
		o->budget_source = (Ifc_budget *)step_parser.parse_link(object_attributes[13]);
		links_to_resolve.push_back((Ifc **)&o->budget_source);
		o->required_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[14]);
		links_to_resolve.push_back((Ifc **)&o->required_date);
		o->scheduled_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[15]);
		links_to_resolve.push_back((Ifc **)&o->scheduled_date);
		o->actual_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[16]);
		links_to_resolve.push_back((Ifc **)&o->actual_date);
		o->step_parser.parse_boolean(object_attributes[17]);
		o->ship_method = step_parser.parse_string(object_attributes[18]);
		o->purchase_items = (Ifc_cost_schedule *)step_parser.parse_link(object_attributes[19]);
		links_to_resolve.push_back((Ifc **)&o->purchase_items);
		o->total_cost = (Ifc_cost_value *)step_parser.parse_link(object_attributes[20]);
		links_to_resolve.push_back((Ifc **)&o->total_cost);
		o->status = step_parser.parse_constant(object_attributes[21]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcQuantityArea")) {
		Ifc_quantity_area *o = new Ifc_quantity_area();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->unit = (Ifc_named_unit *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->unit);
		o->area_value = step_parser.parse_double(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcQuantityCount")) {
		Ifc_quantity_count *o = new Ifc_quantity_count();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->unit = (Ifc_named_unit *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->unit);
		//TODO: parse non-pointer type: typedef unsigned int Ifc_count_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcQuantityLength")) {
		Ifc_quantity_length *o = new Ifc_quantity_length();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->unit = (Ifc_named_unit *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->unit);
		o->length_value = step_parser.parse_double(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcQuantityVolume")) {
		Ifc_quantity_volume *o = new Ifc_quantity_volume();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->unit = (Ifc_named_unit *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->unit);
		o->volume_value = step_parser.parse_double(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcQuantityWeight")) {
		Ifc_quantity_weight *o = new Ifc_quantity_weight();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->unit = (Ifc_named_unit *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->unit);
		o->weight_value = step_parser.parse_double(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRailing")) {
		Ifc_railing *o = new Ifc_railing();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->predefined_type = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRamp")) {
		Ifc_ramp *o = new Ifc_ramp();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->shape_type = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRampFlight")) {
		Ifc_ramp_flight *o = new Ifc_ramp_flight();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRectangleProfileDef")) {
		Ifc_rectangle_profile_def *o = new Ifc_rectangle_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->position = (Ifc_axis_2_placement_2_d *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcRectangularTrimmedSurface")) {
		Ifc_rectangular_trimmed_surface *o = new Ifc_rectangular_trimmed_surface();
		o->basis_surface = (Ifc_surface *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->basis_surface);
		o->u_1 = (Ifc_parameter_value *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->u_1);
		o->v_1 = (Ifc_parameter_value *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->v_1);
		o->u_2 = (Ifc_parameter_value *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->u_2);
		o->v_2 = (Ifc_parameter_value *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->v_2);
		o->step_parser.parse_boolean(object_attributes[5]);
		o->step_parser.parse_boolean(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcReferenceEdge")) {
		Ifc_reference_edge *o = new Ifc_reference_edge();
		o->placement = (Ifc_axis_2_placement *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->placement);
		o->edge = (Ifc_edge *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->edge);
		return o;
	}

	else if (boost::iequals(object_class, "IfcReferenceFace")) {
		Ifc_reference_face *o = new Ifc_reference_face();
		o->placement = (Ifc_axis_2_placement *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->placement);
		o->face = (Ifc_face *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->face);
		return o;
	}

	else if (boost::iequals(object_class, "IfcReferenceGeometry")) {
		Ifc_reference_geometry *o = new Ifc_reference_geometry();
		o->placement = (Ifc_axis_2_placement *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->placement);
		return o;
	}

	else if (boost::iequals(object_class, "IfcReferenceVertex")) {
		Ifc_reference_vertex *o = new Ifc_reference_vertex();
		o->placement = (Ifc_axis_2_placement *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->placement);
		o->vertex = (Ifc_vertex *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->vertex);
		return o;
	}

	else if (boost::iequals(object_class, "IfcReferencesCostDocument")) {
		Ifc_references_cost_document *o = new Ifc_references_cost_document();
		o->referenced_document = (Ifc_document_select *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->referenced_document);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->referencing_costs.push_back((Ifc_cost_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->referencing_costs);
		for (auto i : step_parser.parse_list_of_links(object_attributes[2])) o->referencing_modifiers.push_back((Ifc_cost_modifier *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->referencing_modifiers);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAggregates")) {
		Ifc_rel_aggregates *o = new Ifc_rel_aggregates();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_object = (Ifc_object *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_object);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->related_objects.push_back((Ifc_object *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAggregatesResources")) {
		Ifc_rel_aggregates_resources *o = new Ifc_rel_aggregates_resources();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_object = (Ifc_object *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_object);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->related_objects.push_back((Ifc_object *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->required_quantity = (Ifc_physical_quantity *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->required_quantity);
		o->conversion_rate = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->conversion_rate);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssigns")) {
		Ifc_rel_assigns *o = new Ifc_rel_assigns();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->related_objects_type = step_parser.parse_constant(object_attributes[5]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssignsFMStandard")) {
		Ifc_rel_assigns_f_m_standard *o = new Ifc_rel_assigns_f_m_standard();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->job_function = step_parser.parse_string(object_attributes[4]);
		o->relating_standard = (Ifc_f_m_standard_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->relating_standard);
		for (auto i : step_parser.parse_list_of_links(object_attributes[6])) o->related_persons.push_back((Ifc_actor *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_persons);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssignsTasks")) {
		Ifc_rel_assigns_tasks *o = new Ifc_rel_assigns_tasks();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->related_objects_type = step_parser.parse_constant(object_attributes[5]);
		o->relating_control = (Ifc_control *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->relating_control);
		o->time_for_task = (Ifc_schedule_time_control *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->time_for_task);
		o->milestone = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssignsToActor")) {
		Ifc_rel_assigns_to_actor *o = new Ifc_rel_assigns_to_actor();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->related_objects_type = step_parser.parse_constant(object_attributes[5]);
		o->relating_actor = (Ifc_actor *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->relating_actor);
		o->acting_role = (Ifc_actor_role *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->acting_role);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssignsToControl")) {
		Ifc_rel_assigns_to_control *o = new Ifc_rel_assigns_to_control();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->related_objects_type = step_parser.parse_constant(object_attributes[5]);
		o->relating_control = (Ifc_control *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->relating_control);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssignsToGroup")) {
		Ifc_rel_assigns_to_group *o = new Ifc_rel_assigns_to_group();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->related_objects_type = step_parser.parse_constant(object_attributes[5]);
		o->relating_group = (Ifc_group *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->relating_group);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssignsToProcess")) {
		Ifc_rel_assigns_to_process *o = new Ifc_rel_assigns_to_process();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->related_objects_type = step_parser.parse_constant(object_attributes[5]);
		o->relating_process = (Ifc_process *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->relating_process);
		o->quantity_in_process = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->quantity_in_process);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssignsToProduct")) {
		Ifc_rel_assigns_to_product *o = new Ifc_rel_assigns_to_product();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->related_objects_type = step_parser.parse_constant(object_attributes[5]);
		o->relating_product = (Ifc_product *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->relating_product);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssignsToResource")) {
		Ifc_rel_assigns_to_resource *o = new Ifc_rel_assigns_to_resource();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->related_objects_type = step_parser.parse_constant(object_attributes[5]);
		o->relating_resource = (Ifc_resource *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->relating_resource);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssociates")) {
		Ifc_rel_associates *o = new Ifc_rel_associates();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_root *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssociatesClassification")) {
		Ifc_rel_associates_classification *o = new Ifc_rel_associates_classification();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_root *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->relating_classification = (Ifc_classification_notation_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->relating_classification);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssociatesDocument")) {
		Ifc_rel_associates_document *o = new Ifc_rel_associates_document();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_root *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->relating_document = (Ifc_document_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->relating_document);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssociatesLibrary")) {
		Ifc_rel_associates_library *o = new Ifc_rel_associates_library();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_root *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->relating_library = (Ifc_library_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->relating_library);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssociatesMaterial")) {
		Ifc_rel_associates_material *o = new Ifc_rel_associates_material();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_root *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->relating_material = (Ifc_material_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->relating_material);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelConnects")) {
		Ifc_rel_connects *o = new Ifc_rel_connects();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelConnectsElements")) {
		Ifc_rel_connects_elements *o = new Ifc_rel_connects_elements();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->connection_geometry = (Ifc_connection_geometry *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->connection_geometry);
		o->relating_element = (Ifc_element *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->relating_element);
		o->related_element = (Ifc_element *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->related_element);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelConnectsPathElements")) {
		Ifc_rel_connects_path_elements *o = new Ifc_rel_connects_path_elements();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->connection_geometry = (Ifc_connection_geometry *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->connection_geometry);
		o->relating_element = (Ifc_element *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->relating_element);
		o->related_element = (Ifc_element *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->related_element);
		o->relating_priorities = step_parser.parse_integer(object_attributes[7]);
		o->related_priorities = step_parser.parse_integer(object_attributes[8]);
		o->related_connection_type = step_parser.parse_constant(object_attributes[9]);
		o->relating_connection_type = step_parser.parse_constant(object_attributes[10]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelConnectsPorts")) {
		Ifc_rel_connects_ports *o = new Ifc_rel_connects_ports();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->connection_geometry = (Ifc_connection_geometry *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->connection_geometry);
		o->relating_element = (Ifc_element *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->relating_element);
		o->related_element = (Ifc_element *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->related_element);
		o->flow_direction = step_parser.parse_constant(object_attributes[7]);
		o->port_connection_type = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelContainedInSpatialStructure")) {
		Ifc_rel_contained_in_spatial_structure *o = new Ifc_rel_contained_in_spatial_structure();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_elements.push_back((Ifc_element *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_elements);
		o->relating_structure = (Ifc_spatial_structure_element *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->relating_structure);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelCostsObjects")) {
		Ifc_rel_costs_objects *o = new Ifc_rel_costs_objects();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->related_objects_type = step_parser.parse_constant(object_attributes[5]);
		o->relating_control = (Ifc_control *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->relating_control);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelCoversBldgElements")) {
		Ifc_rel_covers_bldg_elements *o = new Ifc_rel_covers_bldg_elements();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_building_element = (Ifc_building_element *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_building_element);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->related_coverings.push_back((Ifc_covering *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_coverings);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelDecomposes")) {
		Ifc_rel_decomposes *o = new Ifc_rel_decomposes();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_object = (Ifc_object *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_object);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->related_objects.push_back((Ifc_object *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelDefines")) {
		Ifc_rel_defines *o = new Ifc_rel_defines();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelDefinesByProperties")) {
		Ifc_rel_defines_by_properties *o = new Ifc_rel_defines_by_properties();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->relating_property_definition = (Ifc_property_set_definition *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->relating_property_definition);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelDefinesByType")) {
		Ifc_rel_defines_by_type *o = new Ifc_rel_defines_by_type();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->relating_type = (Ifc_type_object *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->relating_type);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelFillsElement")) {
		Ifc_rel_fills_element *o = new Ifc_rel_fills_element();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_opening_element = (Ifc_opening_element *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_opening_element);
		o->related_building_element = (Ifc_building_element *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->related_building_element);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelFlowControlElements")) {
		Ifc_rel_flow_control_elements *o = new Ifc_rel_flow_control_elements();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_control_elements.push_back((Ifc_control_element *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_control_elements);
		o->relating_flow_element = (Ifc_distribution_flow_element *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->relating_flow_element);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelInteractionRequirements")) {
		Ifc_rel_interaction_requirements *o = new Ifc_rel_interaction_requirements();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		//TODO: parse non-pointer type: typedef unsigned int Ifc_count_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		o->location_of_interaction = (Ifc_spatial_structure_element *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->location_of_interaction);
		o->relating_actor = (Ifc_actor *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->relating_actor);
		o->related_actor = (Ifc_actor *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->related_actor);
		o->related_space_program = (Ifc_space_program *)step_parser.parse_link(object_attributes[9]);
		links_to_resolve.push_back((Ifc **)&o->related_space_program);
		o->relating_space_program = (Ifc_space_program *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->relating_space_program);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelMaintenanceEvent")) {
		Ifc_rel_maintenance_event *o = new Ifc_rel_maintenance_event();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_assets.push_back((Ifc_asset *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_assets);
		o->relating_work_order = (Ifc_maintenance_work_order *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->relating_work_order);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelNests")) {
		Ifc_rel_nests *o = new Ifc_rel_nests();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_object = (Ifc_object *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_object);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->related_objects.push_back((Ifc_object *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelOccupiesSpaces")) {
		Ifc_rel_occupies_spaces *o = new Ifc_rel_occupies_spaces();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->related_objects_type = step_parser.parse_constant(object_attributes[5]);
		o->relating_actor = (Ifc_actor *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->relating_actor);
		o->acting_role = (Ifc_actor_role *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->acting_role);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelOverridesProperties")) {
		Ifc_rel_overrides_properties *o = new Ifc_rel_overrides_properties();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->relating_property_definition = (Ifc_property_set_definition *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->relating_property_definition);
		for (auto i : step_parser.parse_list_of_links(object_attributes[6])) o->overriding_properties.push_back((Ifc_property *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->overriding_properties);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelSequence")) {
		Ifc_rel_sequence *o = new Ifc_rel_sequence();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_process = (Ifc_process *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_process);
		o->related_process = (Ifc_process *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->related_process);
		o->time_lag = step_parser.parse_double(object_attributes[6]);
		o->sequence_type = step_parser.parse_constant(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelServicesBuildings")) {
		Ifc_rel_services_buildings *o = new Ifc_rel_services_buildings();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_system = (Ifc_system *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_system);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->related_buildings.push_back((Ifc_building *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_buildings);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelSpaceBoundary")) {
		Ifc_rel_space_boundary *o = new Ifc_rel_space_boundary();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_space = (Ifc_space *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_space);
		o->related_building_element = (Ifc_building_element *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->related_building_element);
		o->connection_geometry = (Ifc_connection_surface_geometry *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->connection_geometry);
		o->physical_or_virtual_boundary = step_parser.parse_constant(object_attributes[7]);
		o->internal_or_external_boundary = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelUsesResource")) {
		Ifc_rel_uses_resource *o = new Ifc_rel_uses_resource();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->related_objects_type = step_parser.parse_constant(object_attributes[5]);
		o->relating_resource = (Ifc_resource *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->relating_resource);
		o->duration = step_parser.parse_double(object_attributes[7]);
		o->quantity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->quantity);
		o->productivity_conversion_rate = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[9]);
		links_to_resolve.push_back((Ifc **)&o->productivity_conversion_rate);
		o->converter_multiplier_or_divider = step_parser.parse_constant(object_attributes[10]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[11])) o->resource_use_costs.push_back((Ifc_cost_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->resource_use_costs);
		o->step_parser.parse_double(object_attributes[12]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelVoidsElement")) {
		Ifc_rel_voids_element *o = new Ifc_rel_voids_element();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_building_element = (Ifc_building_element *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_building_element);
		o->related_opening_element = (Ifc_opening_element *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->related_opening_element);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelationship")) {
		Ifc_relationship *o = new Ifc_relationship();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRepresentation")) {
		Ifc_representation *o = new Ifc_representation();
		o->context_of_items = (Ifc_representation_context *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->context_of_items);
		o->representation_identifier = step_parser.parse_string(object_attributes[1]);
		o->representation_type = step_parser.parse_string(object_attributes[2]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[3])) o->items.push_back((Ifc_representation_item *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->items);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRepresentationContext")) {
		Ifc_representation_context *o = new Ifc_representation_context();
		o->context_identifier = step_parser.parse_string(object_attributes[0]);
		o->context_type = step_parser.parse_string(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRepresentationItem")) {
		Ifc_representation_item *o = new Ifc_representation_item();
		return o;
	}

	else if (boost::iequals(object_class, "IfcRepresentationMap")) {
		Ifc_representation_map *o = new Ifc_representation_map();
		o->mapping_origin = (Ifc_axis_2_placement *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->mapping_origin);
		o->mapped_representation = (Ifc_representation *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->mapped_representation);
		return o;
	}

	else if (boost::iequals(object_class, "IfcResource")) {
		Ifc_resource *o = new Ifc_resource();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->resource_consumption = step_parser.parse_constant(object_attributes[5]);
		o->base_unit = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->base_unit);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRevolvedAreaSolid")) {
		Ifc_revolved_area_solid *o = new Ifc_revolved_area_solid();
		o->swept_area = (Ifc_profile_def *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->swept_area);
		o->position = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->position);
		o->axis = (Ifc_axis_1_placement *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->axis);
		o->angle = (Ifc_plane_angle_measure *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->angle);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRoof")) {
		Ifc_roof *o = new Ifc_roof();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->shape_type = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRoot")) {
		Ifc_root *o = new Ifc_root();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRoundedRectangleProfileDef")) {
		Ifc_rounded_rectangle_profile_def *o = new Ifc_rounded_rectangle_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->position = (Ifc_axis_2_placement_2_d *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcSIUnit")) {
		Ifc_s_i_unit *o = new Ifc_s_i_unit();
		o->dimensions = (Ifc_dimensional_exponents *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->dimensions);
		o->unit_type = step_parser.parse_constant(object_attributes[1]);
		o->prefix = step_parser.parse_constant(object_attributes[2]);
		o->name = step_parser.parse_constant(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSanitaryTerminal")) {
		Ifc_sanitary_terminal *o = new Ifc_sanitary_terminal();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcScheduleTimeControl")) {
		Ifc_schedule_time_control *o = new Ifc_schedule_time_control();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->actual_start = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->actual_start);
		o->early_start = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->early_start);
		o->late_start = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->late_start);
		o->schedule_start = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->schedule_start);
		o->actual_finish = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[9]);
		links_to_resolve.push_back((Ifc **)&o->actual_finish);
		o->early_finish = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->early_finish);
		o->late_finish = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[11]);
		links_to_resolve.push_back((Ifc **)&o->late_finish);
		o->schedule_finish = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->schedule_finish);
		o->schedule_duration = step_parser.parse_double(object_attributes[13]);
		o->actual_duration = step_parser.parse_double(object_attributes[14]);
		o->remaining_time = step_parser.parse_double(object_attributes[15]);
		o->free_float = step_parser.parse_double(object_attributes[16]);
		o->total_float = step_parser.parse_double(object_attributes[17]);
		o->step_parser.parse_boolean(object_attributes[18]);
		o->status_time = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[19]);
		links_to_resolve.push_back((Ifc **)&o->status_time);
		o->start_float = step_parser.parse_double(object_attributes[20]);
		o->finish_float = step_parser.parse_double(object_attributes[21]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcSectionedSpine")) {
		Ifc_sectioned_spine *o = new Ifc_sectioned_spine();
		o->spine_curve = (Ifc_composite_curve *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->spine_curve);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->cross_sections.push_back((Ifc_profile_def *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->cross_sections);
		for (auto i : step_parser.parse_list_of_links(object_attributes[2])) o->cross_section_positions.push_back((Ifc_axis_2_placement_3_d *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->cross_section_positions);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSensor")) {
		Ifc_sensor *o = new Ifc_sensor();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->control_element_id = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcShapeAspect")) {
		Ifc_shape_aspect *o = new Ifc_shape_aspect();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->shape_representations.push_back((Ifc_shape_representation *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->shape_representations);
		o->name = step_parser.parse_string(object_attributes[1]);
		o->description = step_parser.parse_string(object_attributes[2]);
		//o->step_parser.parse_logical(object_attributes[3]);
		o->part_of_product_definition_shape = (Ifc_product_definition_shape *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->part_of_product_definition_shape);
		return o;
	}

	else if (boost::iequals(object_class, "IfcShapeRepresentation")) {
		Ifc_shape_representation *o = new Ifc_shape_representation();
		o->context_of_items = (Ifc_representation_context *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->context_of_items);
		o->representation_identifier = step_parser.parse_string(object_attributes[1]);
		o->representation_type = step_parser.parse_string(object_attributes[2]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[3])) o->items.push_back((Ifc_representation_item *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->items);
		return o;
	}

	else if (boost::iequals(object_class, "IfcShellBasedSurfaceModel")) {
		Ifc_shell_based_surface_model *o = new Ifc_shell_based_surface_model();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->sbsm_boundary.push_back((Ifc_shell *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->sbsm_boundary);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSimpleProperty")) {
		Ifc_simple_property *o = new Ifc_simple_property();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSite")) {
		Ifc_site *o = new Ifc_site();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->long_name = step_parser.parse_string(object_attributes[7]);
		o->composition_type = step_parser.parse_constant(object_attributes[8]);
		//TODO: parse non-pointer type: typedef std::vector<int> Ifc_compound_plane_angle_measure;
		//TODO: parse non-pointer type: typedef std::vector<int> Ifc_compound_plane_angle_measure;
		o->ref_elevation = step_parser.parse_double(object_attributes[11]);
		o->land_title_number = step_parser.parse_string(object_attributes[12]);
		o->site_address = (Ifc_postal_address *)step_parser.parse_link(object_attributes[13]);
		links_to_resolve.push_back((Ifc **)&o->site_address);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSlab")) {
		Ifc_slab *o = new Ifc_slab();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->predefined_type = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSolidModel")) {
		Ifc_solid_model *o = new Ifc_solid_model();
		return o;
	}

	else if (boost::iequals(object_class, "IfcSpace")) {
		Ifc_space *o = new Ifc_space();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->long_name = step_parser.parse_string(object_attributes[7]);
		o->composition_type = step_parser.parse_constant(object_attributes[8]);
		o->interior_or_exterior_space = step_parser.parse_constant(object_attributes[9]);
		o->elevation_with_flooring = step_parser.parse_double(object_attributes[10]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSpaceProgram")) {
		Ifc_space_program *o = new Ifc_space_program();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->space_program_identifier = step_parser.parse_string(object_attributes[5]);
		o->max_required_area = step_parser.parse_double(object_attributes[6]);
		o->min_required_area = step_parser.parse_double(object_attributes[7]);
		o->requested_location = (Ifc_spatial_structure_element *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->requested_location);
		o->min_estimated_cost = (Ifc_cost_value *)step_parser.parse_link(object_attributes[9]);
		links_to_resolve.push_back((Ifc **)&o->min_estimated_cost);
		o->max_estimated_cost = (Ifc_cost_value *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->max_estimated_cost);
		o->standard_required_area = step_parser.parse_double(object_attributes[11]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSpaceProgramGroup")) {
		Ifc_space_program_group *o = new Ifc_space_program_group();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->required_group_area = step_parser.parse_double(object_attributes[5]);
		o->group_role = step_parser.parse_string(object_attributes[6]);
		o->group_assignment = (Ifc_actor_select *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->group_assignment);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSpaceThermalLoad")) {
		Ifc_space_thermal_load *o = new Ifc_space_thermal_load();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->thermal_load_source = step_parser.parse_constant(object_attributes[5]);
		o->requirement_or_criteria = step_parser.parse_constant(object_attributes[6]);
		o->step_parser.parse_boolean(object_attributes[7]);
		o->loss_or_gain = step_parser.parse_constant(object_attributes[8]);
		o->source_description = step_parser.parse_string(object_attributes[9]);
		o->maximum_value = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->maximum_value);
		o->minimum_value = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[11]);
		links_to_resolve.push_back((Ifc **)&o->minimum_value);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSpatialStructureElement")) {
		Ifc_spatial_structure_element *o = new Ifc_spatial_structure_element();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->long_name = step_parser.parse_string(object_attributes[7]);
		o->composition_type = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSpotLightSource")) {
		Ifc_spot_light_source *o = new Ifc_spot_light_source();
		//TODO: parse non-pointer type: typedef std::vector<Ifc_normalised_ratio_measure> Ifc_color_r_g_b;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		o->in_context = (Ifc_geometric_representation_context *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->in_context);
		o->name = step_parser.parse_string(object_attributes[4]);
		o->description = step_parser.parse_string(object_attributes[5]);
		o->location = (Ifc_cartesian_point *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->location);
		o->attenuation = step_parser.parse_list_of_doubles(object_attributes[7]);
		//TODO: parse non-pointer type: typedef Ifc_plane_angle_measure Ifc_positive_plane_angle_measure;
		//TODO: parse non-pointer type: typedef Ifc_plane_angle_measure Ifc_positive_plane_angle_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->direction = (Ifc_direction *)step_parser.parse_link(object_attributes[11]);
		links_to_resolve.push_back((Ifc **)&o->direction);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStair")) {
		Ifc_stair *o = new Ifc_stair();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->shape_type = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStairFlight")) {
		Ifc_stair_flight *o = new Ifc_stair_flight();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->step_parser.parse_integer(object_attributes[8]);
		o->step_parser.parse_integer(object_attributes[9]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcStorageDevice")) {
		Ifc_storage_device *o = new Ifc_storage_device();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSubContractResource")) {
		Ifc_sub_contract_resource *o = new Ifc_sub_contract_resource();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->resource_consumption = step_parser.parse_constant(object_attributes[5]);
		o->base_unit = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->base_unit);
		o->sub_contract_resource_i_d = step_parser.parse_string(object_attributes[7]);
		o->sub_contractor = (Ifc_actor_select *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->sub_contractor);
		o->job_description = step_parser.parse_string(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSurface")) {
		Ifc_surface *o = new Ifc_surface();
		return o;
	}

	else if (boost::iequals(object_class, "IfcSurfaceExtendedProperties")) {
		Ifc_surface_extended_properties *o = new Ifc_surface_extended_properties();
		o->usage_identifier = step_parser.parse_string(object_attributes[0]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->extended_properties.push_back((Ifc_property *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->extended_properties);
		o->description = step_parser.parse_string(object_attributes[2]);
		o->name = step_parser.parse_string(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSurfaceOfLinearExtrusion")) {
		Ifc_surface_of_linear_extrusion *o = new Ifc_surface_of_linear_extrusion();
		o->swept_curve = (Ifc_profile_def *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->swept_curve);
		o->position = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->position);
		o->extruded_direction = (Ifc_direction *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->extruded_direction);
		o->depth = (Ifc_length_measure *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->depth);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSurfaceOfRevolution")) {
		Ifc_surface_of_revolution *o = new Ifc_surface_of_revolution();
		o->swept_curve = (Ifc_profile_def *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->swept_curve);
		o->position = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->position);
		o->axis_position = (Ifc_axis_1_placement *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->axis_position);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSurfaceRenderingProperties")) {
		Ifc_surface_rendering_properties *o = new Ifc_surface_rendering_properties();
		o->usage_identifier = step_parser.parse_string(object_attributes[0]);
		//TODO: parse non-pointer type: typedef std::vector<Ifc_normalised_ratio_measure> Ifc_color_r_g_b;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef std::vector<Ifc_normalised_ratio_measure> Ifc_color_r_g_b;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef std::vector<Ifc_normalised_ratio_measure> Ifc_color_r_g_b;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef std::vector<Ifc_normalised_ratio_measure> Ifc_color_r_g_b;
		return o;
	}

	else if (boost::iequals(object_class, "IfcSurfaceShadingProperties")) {
		Ifc_surface_shading_properties *o = new Ifc_surface_shading_properties();
		o->usage_identifier = step_parser.parse_string(object_attributes[0]);
		//TODO: parse non-pointer type: typedef std::vector<Ifc_normalised_ratio_measure> Ifc_color_r_g_b;
		return o;
	}

	else if (boost::iequals(object_class, "IfcSurfaceStyle")) {
		Ifc_surface_style *o = new Ifc_surface_style();
		o->name = step_parser.parse_string(object_attributes[0]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->properties.push_back((Ifc_surface_style_properties *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->properties);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSurfaceStyleProperties")) {
		Ifc_surface_style_properties *o = new Ifc_surface_style_properties();
		o->usage_identifier = step_parser.parse_string(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSurfaceStyleUsage")) {
		Ifc_surface_style_usage *o = new Ifc_surface_style_usage();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->applied_to.push_back((Ifc_styled_item_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->applied_to);
		o->style = (Ifc_surface_style *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->style);
		o->side = step_parser.parse_constant(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSweptAreaSolid")) {
		Ifc_swept_area_solid *o = new Ifc_swept_area_solid();
		o->swept_area = (Ifc_profile_def *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->swept_area);
		o->position = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->position);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSweptSurface")) {
		Ifc_swept_surface *o = new Ifc_swept_surface();
		o->swept_curve = (Ifc_profile_def *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->swept_curve);
		o->position = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->position);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSystem")) {
		Ifc_system *o = new Ifc_system();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSystemFurnitureElement")) {
		Ifc_system_furniture_element *o = new Ifc_system_furniture_element();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTable")) {
		Ifc_table *o = new Ifc_table();
		o->step_parser.parse_string(object_attributes[0]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->rows.push_back((Ifc_table_row *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->rows);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTableRow")) {
		Ifc_table_row *o = new Ifc_table_row();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->row_cells.push_back((Ifc_measure_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->row_cells);
		o->step_parser.parse_boolean(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTank")) {
		Ifc_tank *o = new Ifc_tank();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->volume = step_parser.parse_double(object_attributes[9]);
		o->relief_valve_setting = step_parser.parse_double(object_attributes[10]);
		o->charge_pressure = step_parser.parse_double(object_attributes[11]);
		o->pressure_regulator_setting = step_parser.parse_double(object_attributes[12]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTask")) {
		Ifc_task *o = new Ifc_task();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->productivity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->productivity);
		o->task_id = step_parser.parse_string(object_attributes[6]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->w_b_s_code.push_back((Ifc_label *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->w_b_s_code);
		for (auto i : step_parser.parse_list_of_links(object_attributes[8])) o->w_b_s_source.push_back((Ifc_label *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->w_b_s_source);
		o->status = step_parser.parse_constant(object_attributes[9]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[10])) o->milestones.push_back((Ifc_task_milestone_enum *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->milestones);
		o->work_method = step_parser.parse_string(object_attributes[11]);
		o->in_place_quantity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->in_place_quantity);
		o->estimated_quantity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[13]);
		links_to_resolve.push_back((Ifc **)&o->estimated_quantity);
		o->budget_quantity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[14]);
		links_to_resolve.push_back((Ifc **)&o->budget_quantity);
		o->step_parser.parse_boolean(object_attributes[15]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTelecomAddress")) {
		Ifc_telecom_address *o = new Ifc_telecom_address();
		o->purpose = step_parser.parse_constant(object_attributes[0]);
		o->description = (Ifc_text *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->description);
		o->user_defined_purpose = (Ifc_label *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->user_defined_purpose);
		for (auto i : step_parser.parse_list_of_links(object_attributes[3])) o->telephone_numbers.push_back((Ifc_label *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->telephone_numbers);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->facsimile_numbers.push_back((Ifc_label *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->facsimile_numbers);
		o->pager_number = (Ifc_label *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->pager_number);
		for (auto i : step_parser.parse_list_of_links(object_attributes[6])) o->electronic_mail_addresses.push_back((Ifc_label *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->electronic_mail_addresses);
		o->w_w_w_home_page_u_r_l = (Ifc_label *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->w_w_w_home_page_u_r_l);
		return o;
	}

	else if (boost::iequals(object_class, "IfcThermalMaterialProperties")) {
		Ifc_thermal_material_properties *o = new Ifc_thermal_material_properties();
		o->material = (Ifc_material *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->material);
		o->specific_heat_capacity = step_parser.parse_double(object_attributes[1]);
		o->boiling_point = step_parser.parse_double(object_attributes[2]);
		o->freezing_point = step_parser.parse_double(object_attributes[3]);
		o->thermal_conductivity = step_parser.parse_double(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTopologicalRepresentationItem")) {
		Ifc_topological_representation_item *o = new Ifc_topological_representation_item();
		return o;
	}

	else if (boost::iequals(object_class, "IfcTransportElement")) {
		Ifc_transport_element *o = new Ifc_transport_element();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->operation_type = step_parser.parse_constant(object_attributes[8]);
		o->capacity_by_weight = step_parser.parse_double(object_attributes[9]);
		//TODO: parse non-pointer type: typedef unsigned int Ifc_count_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcTrapeziumProfileDef")) {
		Ifc_trapezium_profile_def *o = new Ifc_trapezium_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->position = (Ifc_axis_2_placement_2_d *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->top_x_offset = step_parser.parse_double(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTreatmentDevice")) {
		Ifc_treatment_device *o = new Ifc_treatment_device();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTrimmedCurve")) {
		Ifc_trimmed_curve *o = new Ifc_trimmed_curve();
		o->basis_curve = (Ifc_curve *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->basis_curve);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->trim_1.push_back((Ifc_trimming_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->trim_1);
		for (auto i : step_parser.parse_list_of_links(object_attributes[2])) o->trim_2.push_back((Ifc_trimming_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->trim_2);
		o->step_parser.parse_boolean(object_attributes[3]);
		o->master_representation = step_parser.parse_constant(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTubeBundle")) {
		Ifc_tube_bundle *o = new Ifc_tube_bundle();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->heat_transfer_rate = step_parser.parse_double(object_attributes[9]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->primary_energy_source = step_parser.parse_constant(object_attributes[11]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->tube_material = (Ifc_material_select *)step_parser.parse_link(object_attributes[13]);
		links_to_resolve.push_back((Ifc **)&o->tube_material);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		for (auto i : step_parser.parse_list_of_links(object_attributes[16])) o->tube_fluid_entering_temperature.push_back((Ifc_thermodynamic_temperature_measure *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->tube_fluid_entering_temperature);
		for (auto i : step_parser.parse_list_of_links(object_attributes[17])) o->tube_fluid_leaving_temperature.push_back((Ifc_thermodynamic_temperature_measure *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->tube_fluid_leaving_temperature);
		o->fin_material = (Ifc_material_select *)step_parser.parse_link(object_attributes[18]);
		links_to_resolve.push_back((Ifc **)&o->fin_material);
		o->shell_material = (Ifc_material_select *)step_parser.parse_link(object_attributes[19]);
		links_to_resolve.push_back((Ifc **)&o->shell_material);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->tube_fouling_factor = step_parser.parse_double(object_attributes[21]);
		o->number_of_tube_circuits = step_parser.parse_integer(object_attributes[22]);
		o->number_of_tube_rows = step_parser.parse_integer(object_attributes[23]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[24])) o->shell_fluid_leaving_temperature.push_back((Ifc_thermodynamic_temperature_measure *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->shell_fluid_leaving_temperature);
		for (auto i : step_parser.parse_list_of_links(object_attributes[25])) o->shell_fluid_entering_temperature.push_back((Ifc_thermodynamic_temperature_measure *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->shell_fluid_entering_temperature);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTypeObject")) {
		Ifc_type_object *o = new Ifc_type_object();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->applicable_occurrence = step_parser.parse_string(object_attributes[4]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->has_property_sets.push_back((Ifc_property_set_definition *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->has_property_sets);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTypeProduct")) {
		Ifc_type_product *o = new Ifc_type_product();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->applicable_occurrence = step_parser.parse_string(object_attributes[4]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->has_property_sets.push_back((Ifc_property_set_definition *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->has_property_sets);
		for (auto i : step_parser.parse_list_of_links(object_attributes[6])) o->representation_maps.push_back((Ifc_representation_map *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->representation_maps);
		o->tag = step_parser.parse_string(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcUnitAssignment")) {
		Ifc_unit_assignment *o = new Ifc_unit_assignment();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->units.push_back((Ifc_unit *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->units);
		return o;
	}

	else if (boost::iequals(object_class, "IfcUnitHeater")) {
		Ifc_unit_heater *o = new Ifc_unit_heater();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->heat_transfer_rate = step_parser.parse_double(object_attributes[9]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->primary_energy_source = step_parser.parse_constant(object_attributes[11]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcValve")) {
		Ifc_valve *o = new Ifc_valve();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->flow_element_type = step_parser.parse_constant(object_attributes[8]);
		o->close_off_rating = step_parser.parse_double(object_attributes[9]);
		o->valve_flow_coefficient = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->valve_flow_coefficient);
		o->valve_type = step_parser.parse_constant(object_attributes[11]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcVector")) {
		Ifc_vector *o = new Ifc_vector();
		o->orientation = (Ifc_direction *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->orientation);
		o->magnitude = (Ifc_length_measure *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->magnitude);
		return o;
	}

	else if (boost::iequals(object_class, "IfcVertex")) {
		Ifc_vertex *o = new Ifc_vertex();
		return o;
	}

	else if (boost::iequals(object_class, "IfcVertexPoint")) {
		Ifc_vertex_point *o = new Ifc_vertex_point();
		o->vertex_geometry = (Ifc_point *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->vertex_geometry);
		return o;
	}

	else if (boost::iequals(object_class, "IfcVirtualGridIntersection")) {
		Ifc_virtual_grid_intersection *o = new Ifc_virtual_grid_intersection();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->intersecting_axes.push_back((Ifc_grid_axis *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->intersecting_axes);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->offset_distances.push_back((Ifc_length_measure *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->offset_distances);
		return o;
	}

	else if (boost::iequals(object_class, "IfcWall")) {
		Ifc_wall *o = new Ifc_wall();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcWallStandardCase")) {
		Ifc_wall_standard_case *o = new Ifc_wall_standard_case();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcWindow")) {
		Ifc_window *o = new Ifc_window();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->object_placement = (Ifc_object_placement *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->object_placement);
		o->representation = (Ifc_product_representation *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->representation);
		o->tag = step_parser.parse_string(object_attributes[7]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcWindowLiningProperties")) {
		Ifc_window_lining_properties *o = new Ifc_window_lining_properties();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		o->shape_aspect_style = (Ifc_shape_aspect *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->shape_aspect_style);
		return o;
	}

	else if (boost::iequals(object_class, "IfcWindowPanelProperties")) {
		Ifc_window_panel_properties *o = new Ifc_window_panel_properties();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->operation_type = step_parser.parse_constant(object_attributes[4]);
		o->panel_position = step_parser.parse_constant(object_attributes[5]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->shape_aspect_style = (Ifc_shape_aspect *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->shape_aspect_style);
		return o;
	}

	else if (boost::iequals(object_class, "IfcWindowStyle")) {
		Ifc_window_style *o = new Ifc_window_style();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->applicable_occurrence = step_parser.parse_string(object_attributes[4]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->has_property_sets.push_back((Ifc_property_set_definition *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->has_property_sets);
		for (auto i : step_parser.parse_list_of_links(object_attributes[6])) o->representation_maps.push_back((Ifc_representation_map *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->representation_maps);
		o->tag = step_parser.parse_string(object_attributes[7]);
		o->construction_type = step_parser.parse_constant(object_attributes[8]);
		o->operation_type = step_parser.parse_constant(object_attributes[9]);
		o->step_parser.parse_boolean(object_attributes[10]);
		o->step_parser.parse_boolean(object_attributes[11]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcWorkControl")) {
		Ifc_work_control *o = new Ifc_work_control();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->identifier = step_parser.parse_string(object_attributes[5]);
		o->creation_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->creation_date);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->creators.push_back((Ifc_person *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->creators);
		o->purpose = step_parser.parse_string(object_attributes[8]);
		o->duration = step_parser.parse_double(object_attributes[9]);
		o->total_float = step_parser.parse_double(object_attributes[10]);
		o->start_time = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[11]);
		links_to_resolve.push_back((Ifc **)&o->start_time);
		o->finish_time = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->finish_time);
		o->work_control_type = step_parser.parse_constant(object_attributes[13]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcWorkOrder")) {
		Ifc_work_order *o = new Ifc_work_order();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->order_number = step_parser.parse_string(object_attributes[5]);
		o->transaction_code = step_parser.parse_string(object_attributes[6]);
		o->issuing_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->issuing_date);
		o->issued_by = (Ifc_actor_select *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->issued_by);
		for (auto i : step_parser.parse_list_of_links(object_attributes[9])) o->issued_to.push_back((Ifc_actor_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->issued_to);
		for (auto i : step_parser.parse_list_of_links(object_attributes[10])) o->additional_contacts.push_back((Ifc_actor_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->additional_contacts);
		for (auto i : step_parser.parse_list_of_links(object_attributes[11])) o->remarks.push_back((Ifc_text *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->remarks);
		o->signoff = (Ifc_person *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->signoff);
		o->budget_source = (Ifc_budget *)step_parser.parse_link(object_attributes[13]);
		links_to_resolve.push_back((Ifc **)&o->budget_source);
		o->product_description = step_parser.parse_string(object_attributes[14]);
		o->short_job_description = step_parser.parse_string(object_attributes[15]);
		o->long_job_description = step_parser.parse_string(object_attributes[16]);
		o->work_type_requested = step_parser.parse_string(object_attributes[17]);
		o->contractual_type = step_parser.parse_string(object_attributes[18]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[19])) o->if_not_accomplished.push_back((Ifc_label *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->if_not_accomplished);
		o->requested_start_time = (Ifc_date_and_time *)step_parser.parse_link(object_attributes[20]);
		links_to_resolve.push_back((Ifc **)&o->requested_start_time);
		o->requested_finish_time = (Ifc_date_and_time *)step_parser.parse_link(object_attributes[21]);
		links_to_resolve.push_back((Ifc **)&o->requested_finish_time);
		o->actual_start_time = (Ifc_date_and_time *)step_parser.parse_link(object_attributes[22]);
		links_to_resolve.push_back((Ifc **)&o->actual_start_time);
		o->actual_finish_time = (Ifc_date_and_time *)step_parser.parse_link(object_attributes[23]);
		links_to_resolve.push_back((Ifc **)&o->actual_finish_time);
		o->cost_estimate = (Ifc_cost_schedule *)step_parser.parse_link(object_attributes[24]);
		links_to_resolve.push_back((Ifc **)&o->cost_estimate);
		o->work_plan = (Ifc_work_plan *)step_parser.parse_link(object_attributes[25]);
		links_to_resolve.push_back((Ifc **)&o->work_plan);
		o->status = step_parser.parse_constant(object_attributes[26]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[27])) o->work_order_risk_type.push_back((Ifc_work_order_risk_type_enum *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->work_order_risk_type);
		for (auto i : step_parser.parse_list_of_links(object_attributes[28])) o->performed_by.push_back((Ifc_person *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->performed_by);
		o->actual_cost = (Ifc_cost_value *)step_parser.parse_link(object_attributes[29]);
		links_to_resolve.push_back((Ifc **)&o->actual_cost);
		return o;
	}

	else if (boost::iequals(object_class, "IfcWorkPlan")) {
		Ifc_work_plan *o = new Ifc_work_plan();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->identifier = step_parser.parse_string(object_attributes[5]);
		o->creation_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->creation_date);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->creators.push_back((Ifc_person *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->creators);
		o->purpose = step_parser.parse_string(object_attributes[8]);
		o->duration = step_parser.parse_double(object_attributes[9]);
		o->total_float = step_parser.parse_double(object_attributes[10]);
		o->start_time = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[11]);
		links_to_resolve.push_back((Ifc **)&o->start_time);
		o->finish_time = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->finish_time);
		o->work_control_type = step_parser.parse_constant(object_attributes[13]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcWorkSchedule")) {
		Ifc_work_schedule *o = new Ifc_work_schedule();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->identifier = step_parser.parse_string(object_attributes[5]);
		o->creation_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->creation_date);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->creators.push_back((Ifc_person *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->creators);
		o->purpose = step_parser.parse_string(object_attributes[8]);
		o->duration = step_parser.parse_double(object_attributes[9]);
		o->total_float = step_parser.parse_double(object_attributes[10]);
		o->start_time = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[11]);
		links_to_resolve.push_back((Ifc **)&o->start_time);
		o->finish_time = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->finish_time);
		o->work_control_type = step_parser.parse_constant(object_attributes[13]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcZone")) {
		Ifc_zone *o = new Ifc_zone();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		return o;
	}

}

void Ifc_2x_parser::print_object_info(Ifc *object) {	if (object->entity == "Ifc_2_d_composite_curve") {
		Ifc_2_d_composite_curve *o = reinterpret_cast<Ifc_2_d_composite_curve *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_action_time_control") {
		Ifc_action_time_control *o = reinterpret_cast<Ifc_action_time_control *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_actor") {
		Ifc_actor *o = reinterpret_cast<Ifc_actor *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_actor_role") {
		Ifc_actor_role *o = reinterpret_cast<Ifc_actor_role *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_actuator") {
		Ifc_actuator *o = reinterpret_cast<Ifc_actuator *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_address") {
		Ifc_address *o = reinterpret_cast<Ifc_address *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_air_filter") {
		Ifc_air_filter *o = reinterpret_cast<Ifc_air_filter *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_air_terminal") {
		Ifc_air_terminal *o = reinterpret_cast<Ifc_air_terminal *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_air_terminal_box") {
		Ifc_air_terminal_box *o = reinterpret_cast<Ifc_air_terminal_box *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_application") {
		Ifc_application *o = reinterpret_cast<Ifc_application *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_approval") {
		Ifc_approval *o = reinterpret_cast<Ifc_approval *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_approval_usage") {
		Ifc_approval_usage *o = reinterpret_cast<Ifc_approval_usage *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_arbitrary_closed_profile_def") {
		Ifc_arbitrary_closed_profile_def *o = reinterpret_cast<Ifc_arbitrary_closed_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_arbitrary_open_profile_def") {
		Ifc_arbitrary_open_profile_def *o = reinterpret_cast<Ifc_arbitrary_open_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_arbitrary_profile_def_with_voids") {
		Ifc_arbitrary_profile_def_with_voids *o = reinterpret_cast<Ifc_arbitrary_profile_def_with_voids *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_assessory") {
		Ifc_assessory *o = reinterpret_cast<Ifc_assessory *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_asset") {
		Ifc_asset *o = reinterpret_cast<Ifc_asset *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_axis_1_placement") {
		Ifc_axis_1_placement *o = reinterpret_cast<Ifc_axis_1_placement *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_axis_2_placement_2_d") {
		Ifc_axis_2_placement_2_d *o = reinterpret_cast<Ifc_axis_2_placement_2_d *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_axis_2_placement_3_d") {
		Ifc_axis_2_placement_3_d *o = reinterpret_cast<Ifc_axis_2_placement_3_d *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_beam") {
		Ifc_beam *o = reinterpret_cast<Ifc_beam *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_boiler") {
		Ifc_boiler *o = reinterpret_cast<Ifc_boiler *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_boolean_clipping_result") {
		Ifc_boolean_clipping_result *o = reinterpret_cast<Ifc_boolean_clipping_result *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_boolean_result") {
		Ifc_boolean_result *o = reinterpret_cast<Ifc_boolean_result *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_bounded_curve") {
		Ifc_bounded_curve *o = reinterpret_cast<Ifc_bounded_curve *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_bounded_surface") {
		Ifc_bounded_surface *o = reinterpret_cast<Ifc_bounded_surface *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_bounding_box") {
		Ifc_bounding_box *o = reinterpret_cast<Ifc_bounding_box *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_boxed_half_space") {
		Ifc_boxed_half_space *o = reinterpret_cast<Ifc_boxed_half_space *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_budget") {
		Ifc_budget *o = reinterpret_cast<Ifc_budget *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_building") {
		Ifc_building *o = reinterpret_cast<Ifc_building *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_building_element") {
		Ifc_building_element *o = reinterpret_cast<Ifc_building_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_building_element_proxy") {
		Ifc_building_element_proxy *o = reinterpret_cast<Ifc_building_element_proxy *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_building_storey") {
		Ifc_building_storey *o = reinterpret_cast<Ifc_building_storey *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_built_in") {
		Ifc_built_in *o = reinterpret_cast<Ifc_built_in *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_c_m_doc_package") {
		Ifc_c_m_doc_package *o = reinterpret_cast<Ifc_c_m_doc_package *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_calendar_date") {
		Ifc_calendar_date *o = reinterpret_cast<Ifc_calendar_date *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cartesian_point") {
		Ifc_cartesian_point *o = reinterpret_cast<Ifc_cartesian_point *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cartesian_transformation_operator") {
		Ifc_cartesian_transformation_operator *o = reinterpret_cast<Ifc_cartesian_transformation_operator *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cartesian_transformation_operator_2_d") {
		Ifc_cartesian_transformation_operator_2_d *o = reinterpret_cast<Ifc_cartesian_transformation_operator_2_d *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cartesian_transformation_operator_2_dnon_uniform") {
		Ifc_cartesian_transformation_operator_2_dnon_uniform *o = reinterpret_cast<Ifc_cartesian_transformation_operator_2_dnon_uniform *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cartesian_transformation_operator_3_d") {
		Ifc_cartesian_transformation_operator_3_d *o = reinterpret_cast<Ifc_cartesian_transformation_operator_3_d *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cartesian_transformation_operator_3_dnon_uniform") {
		Ifc_cartesian_transformation_operator_3_dnon_uniform *o = reinterpret_cast<Ifc_cartesian_transformation_operator_3_dnon_uniform *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_change_order") {
		Ifc_change_order *o = reinterpret_cast<Ifc_change_order *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_chiller") {
		Ifc_chiller *o = reinterpret_cast<Ifc_chiller *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_circle") {
		Ifc_circle *o = reinterpret_cast<Ifc_circle *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_circle_profile_def") {
		Ifc_circle_profile_def *o = reinterpret_cast<Ifc_circle_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_classification") {
		Ifc_classification *o = reinterpret_cast<Ifc_classification *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_classification_item") {
		Ifc_classification_item *o = reinterpret_cast<Ifc_classification_item *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_classification_item_relationship") {
		Ifc_classification_item_relationship *o = reinterpret_cast<Ifc_classification_item_relationship *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_classification_notation") {
		Ifc_classification_notation *o = reinterpret_cast<Ifc_classification_notation *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_classification_notation_facet") {
		Ifc_classification_notation_facet *o = reinterpret_cast<Ifc_classification_notation_facet *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_classification_reference") {
		Ifc_classification_reference *o = reinterpret_cast<Ifc_classification_reference *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_closed_shell") {
		Ifc_closed_shell *o = reinterpret_cast<Ifc_closed_shell *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_coil") {
		Ifc_coil *o = reinterpret_cast<Ifc_coil *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_column") {
		Ifc_column *o = reinterpret_cast<Ifc_column *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_compartment") {
		Ifc_compartment *o = reinterpret_cast<Ifc_compartment *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_complex_property") {
		Ifc_complex_property *o = reinterpret_cast<Ifc_complex_property *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_composite_curve") {
		Ifc_composite_curve *o = reinterpret_cast<Ifc_composite_curve *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_composite_curve_segment") {
		Ifc_composite_curve_segment *o = reinterpret_cast<Ifc_composite_curve_segment *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_composite_profile_def") {
		Ifc_composite_profile_def *o = reinterpret_cast<Ifc_composite_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_compressor") {
		Ifc_compressor *o = reinterpret_cast<Ifc_compressor *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_conic") {
		Ifc_conic *o = reinterpret_cast<Ifc_conic *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_connected_face_set") {
		Ifc_connected_face_set *o = reinterpret_cast<Ifc_connected_face_set *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_connection_constraint") {
		Ifc_connection_constraint *o = reinterpret_cast<Ifc_connection_constraint *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_connection_curve_geometry") {
		Ifc_connection_curve_geometry *o = reinterpret_cast<Ifc_connection_curve_geometry *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_connection_geometry") {
		Ifc_connection_geometry *o = reinterpret_cast<Ifc_connection_geometry *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_connection_point_geometry") {
		Ifc_connection_point_geometry *o = reinterpret_cast<Ifc_connection_point_geometry *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_connection_port_geometry") {
		Ifc_connection_port_geometry *o = reinterpret_cast<Ifc_connection_port_geometry *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_connection_surface_geometry") {
		Ifc_connection_surface_geometry *o = reinterpret_cast<Ifc_connection_surface_geometry *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_constraint") {
		Ifc_constraint *o = reinterpret_cast<Ifc_constraint *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_constraint_aggregation_relationship") {
		Ifc_constraint_aggregation_relationship *o = reinterpret_cast<Ifc_constraint_aggregation_relationship *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_constraint_usage") {
		Ifc_constraint_usage *o = reinterpret_cast<Ifc_constraint_usage *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_construction_equipment_resource") {
		Ifc_construction_equipment_resource *o = reinterpret_cast<Ifc_construction_equipment_resource *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_construction_material_resource") {
		Ifc_construction_material_resource *o = reinterpret_cast<Ifc_construction_material_resource *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_construction_product_resource") {
		Ifc_construction_product_resource *o = reinterpret_cast<Ifc_construction_product_resource *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_context_dependent_unit") {
		Ifc_context_dependent_unit *o = reinterpret_cast<Ifc_context_dependent_unit *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_control") {
		Ifc_control *o = reinterpret_cast<Ifc_control *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_control_element") {
		Ifc_control_element *o = reinterpret_cast<Ifc_control_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_controller") {
		Ifc_controller *o = reinterpret_cast<Ifc_controller *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_conversion_based_unit") {
		Ifc_conversion_based_unit *o = reinterpret_cast<Ifc_conversion_based_unit *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cooling_tower") {
		Ifc_cooling_tower *o = reinterpret_cast<Ifc_cooling_tower *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_coordinated_universal_time_offset") {
		Ifc_coordinated_universal_time_offset *o = reinterpret_cast<Ifc_coordinated_universal_time_offset *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cost") {
		Ifc_cost *o = reinterpret_cast<Ifc_cost *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cost_modifier") {
		Ifc_cost_modifier *o = reinterpret_cast<Ifc_cost_modifier *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cost_modifier_value") {
		Ifc_cost_modifier_value *o = reinterpret_cast<Ifc_cost_modifier_value *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cost_quantity") {
		Ifc_cost_quantity *o = reinterpret_cast<Ifc_cost_quantity *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cost_schedule") {
		Ifc_cost_schedule *o = reinterpret_cast<Ifc_cost_schedule *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cost_value") {
		Ifc_cost_value *o = reinterpret_cast<Ifc_cost_value *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cost_value_relationship") {
		Ifc_cost_value_relationship *o = reinterpret_cast<Ifc_cost_value_relationship *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_covering") {
		Ifc_covering *o = reinterpret_cast<Ifc_covering *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_crew_resource") {
		Ifc_crew_resource *o = reinterpret_cast<Ifc_crew_resource *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_csg_solid") {
		Ifc_csg_solid *o = reinterpret_cast<Ifc_csg_solid *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_curtain_wall") {
		Ifc_curtain_wall *o = reinterpret_cast<Ifc_curtain_wall *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_curve") {
		Ifc_curve *o = reinterpret_cast<Ifc_curve *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_curve_bounded_plane") {
		Ifc_curve_bounded_plane *o = reinterpret_cast<Ifc_curve_bounded_plane *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_damper") {
		Ifc_damper *o = reinterpret_cast<Ifc_damper *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_date_and_time") {
		Ifc_date_and_time *o = reinterpret_cast<Ifc_date_and_time *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_derived_profile_def") {
		Ifc_derived_profile_def *o = reinterpret_cast<Ifc_derived_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_derived_unit") {
		Ifc_derived_unit *o = reinterpret_cast<Ifc_derived_unit *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_derived_unit_element") {
		Ifc_derived_unit_element *o = reinterpret_cast<Ifc_derived_unit_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_dimensional_exponents") {
		Ifc_dimensional_exponents *o = reinterpret_cast<Ifc_dimensional_exponents *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_direction") {
		Ifc_direction *o = reinterpret_cast<Ifc_direction *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_directional_light_source") {
		Ifc_directional_light_source *o = reinterpret_cast<Ifc_directional_light_source *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_discrete_element") {
		Ifc_discrete_element *o = reinterpret_cast<Ifc_discrete_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_distribution_element") {
		Ifc_distribution_element *o = reinterpret_cast<Ifc_distribution_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_distribution_flow_element") {
		Ifc_distribution_flow_element *o = reinterpret_cast<Ifc_distribution_flow_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_document_electronic_format") {
		Ifc_document_electronic_format *o = reinterpret_cast<Ifc_document_electronic_format *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_document_information") {
		Ifc_document_information *o = reinterpret_cast<Ifc_document_information *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_document_information_relationship") {
		Ifc_document_information_relationship *o = reinterpret_cast<Ifc_document_information_relationship *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_document_reference") {
		Ifc_document_reference *o = reinterpret_cast<Ifc_document_reference *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_door") {
		Ifc_door *o = reinterpret_cast<Ifc_door *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_door_lining_properties") {
		Ifc_door_lining_properties *o = reinterpret_cast<Ifc_door_lining_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_door_panel_properties") {
		Ifc_door_panel_properties *o = reinterpret_cast<Ifc_door_panel_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_door_style") {
		Ifc_door_style *o = reinterpret_cast<Ifc_door_style *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_edge") {
		Ifc_edge *o = reinterpret_cast<Ifc_edge *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_edge_curve") {
		Ifc_edge_curve *o = reinterpret_cast<Ifc_edge_curve *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_electric_motor") {
		Ifc_electric_motor *o = reinterpret_cast<Ifc_electric_motor *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_electrical_appliance") {
		Ifc_electrical_appliance *o = reinterpret_cast<Ifc_electrical_appliance *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_electrical_base_properties") {
		Ifc_electrical_base_properties *o = reinterpret_cast<Ifc_electrical_base_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_electrical_element") {
		Ifc_electrical_element *o = reinterpret_cast<Ifc_electrical_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_electrical_extended_properties") {
		Ifc_electrical_extended_properties *o = reinterpret_cast<Ifc_electrical_extended_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_element") {
		Ifc_element *o = reinterpret_cast<Ifc_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_element_quantity") {
		Ifc_element_quantity *o = reinterpret_cast<Ifc_element_quantity *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_elementary_surface") {
		Ifc_elementary_surface *o = reinterpret_cast<Ifc_elementary_surface *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_ellipse") {
		Ifc_ellipse *o = reinterpret_cast<Ifc_ellipse *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_ellipse_profile_def") {
		Ifc_ellipse_profile_def *o = reinterpret_cast<Ifc_ellipse_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_equipment_element") {
		Ifc_equipment_element *o = reinterpret_cast<Ifc_equipment_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_equipment_standard") {
		Ifc_equipment_standard *o = reinterpret_cast<Ifc_equipment_standard *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_extended_material_properties") {
		Ifc_extended_material_properties *o = reinterpret_cast<Ifc_extended_material_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_external_reference") {
		Ifc_external_reference *o = reinterpret_cast<Ifc_external_reference *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_extruded_area_solid") {
		Ifc_extruded_area_solid *o = reinterpret_cast<Ifc_extruded_area_solid *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_face") {
		Ifc_face *o = reinterpret_cast<Ifc_face *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_face_based_surface_model") {
		Ifc_face_based_surface_model *o = reinterpret_cast<Ifc_face_based_surface_model *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_face_bound") {
		Ifc_face_bound *o = reinterpret_cast<Ifc_face_bound *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_face_outer_bound") {
		Ifc_face_outer_bound *o = reinterpret_cast<Ifc_face_outer_bound *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_face_surface") {
		Ifc_face_surface *o = reinterpret_cast<Ifc_face_surface *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_faceted_brep") {
		Ifc_faceted_brep *o = reinterpret_cast<Ifc_faceted_brep *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_faceted_brep_with_voids") {
		Ifc_faceted_brep_with_voids *o = reinterpret_cast<Ifc_faceted_brep_with_voids *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_fan") {
		Ifc_fan *o = reinterpret_cast<Ifc_fan *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_flow_controller") {
		Ifc_flow_controller *o = reinterpret_cast<Ifc_flow_controller *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_flow_fitting") {
		Ifc_flow_fitting *o = reinterpret_cast<Ifc_flow_fitting *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_flow_segment") {
		Ifc_flow_segment *o = reinterpret_cast<Ifc_flow_segment *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_flow_terminal") {
		Ifc_flow_terminal *o = reinterpret_cast<Ifc_flow_terminal *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_fluid_flow_properties") {
		Ifc_fluid_flow_properties *o = reinterpret_cast<Ifc_fluid_flow_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_fluid_moving_device") {
		Ifc_fluid_moving_device *o = reinterpret_cast<Ifc_fluid_moving_device *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_furnishing_element") {
		Ifc_furnishing_element *o = reinterpret_cast<Ifc_furnishing_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_furniture") {
		Ifc_furniture *o = reinterpret_cast<Ifc_furniture *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_furniture_standard") {
		Ifc_furniture_standard *o = reinterpret_cast<Ifc_furniture_standard *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_general_material_properties") {
		Ifc_general_material_properties *o = reinterpret_cast<Ifc_general_material_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_geometric_representation_context") {
		Ifc_geometric_representation_context *o = reinterpret_cast<Ifc_geometric_representation_context *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_geometric_representation_item") {
		Ifc_geometric_representation_item *o = reinterpret_cast<Ifc_geometric_representation_item *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_geometric_set") {
		Ifc_geometric_set *o = reinterpret_cast<Ifc_geometric_set *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_grid") {
		Ifc_grid *o = reinterpret_cast<Ifc_grid *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_grid_axis") {
		Ifc_grid_axis *o = reinterpret_cast<Ifc_grid_axis *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_grid_placement") {
		Ifc_grid_placement *o = reinterpret_cast<Ifc_grid_placement *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_group") {
		Ifc_group *o = reinterpret_cast<Ifc_group *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_half_space_solid") {
		Ifc_half_space_solid *o = reinterpret_cast<Ifc_half_space_solid *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_heat_exchanger") {
		Ifc_heat_exchanger *o = reinterpret_cast<Ifc_heat_exchanger *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_heat_transfer_device") {
		Ifc_heat_transfer_device *o = reinterpret_cast<Ifc_heat_transfer_device *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_hydronic_heater") {
		Ifc_hydronic_heater *o = reinterpret_cast<Ifc_hydronic_heater *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_hygroscopic_material_properties") {
		Ifc_hygroscopic_material_properties *o = reinterpret_cast<Ifc_hygroscopic_material_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_inventory") {
		Ifc_inventory *o = reinterpret_cast<Ifc_inventory *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_ishape_profile_def") {
		Ifc_ishape_profile_def *o = reinterpret_cast<Ifc_ishape_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_labor_resource") {
		Ifc_labor_resource *o = reinterpret_cast<Ifc_labor_resource *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_library_information") {
		Ifc_library_information *o = reinterpret_cast<Ifc_library_information *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_library_reference") {
		Ifc_library_reference *o = reinterpret_cast<Ifc_library_reference *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_light_fixture") {
		Ifc_light_fixture *o = reinterpret_cast<Ifc_light_fixture *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_line") {
		Ifc_line *o = reinterpret_cast<Ifc_line *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_local_placement") {
		Ifc_local_placement *o = reinterpret_cast<Ifc_local_placement *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_local_time") {
		Ifc_local_time *o = reinterpret_cast<Ifc_local_time *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_loop") {
		Ifc_loop *o = reinterpret_cast<Ifc_loop *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_maintenance_record") {
		Ifc_maintenance_record *o = reinterpret_cast<Ifc_maintenance_record *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_maintenance_work_order") {
		Ifc_maintenance_work_order *o = reinterpret_cast<Ifc_maintenance_work_order *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_manifold_solid_brep") {
		Ifc_manifold_solid_brep *o = reinterpret_cast<Ifc_manifold_solid_brep *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_manufacturer_information") {
		Ifc_manufacturer_information *o = reinterpret_cast<Ifc_manufacturer_information *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_mapped_item") {
		Ifc_mapped_item *o = reinterpret_cast<Ifc_mapped_item *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_material") {
		Ifc_material *o = reinterpret_cast<Ifc_material *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_material_classification_relationship") {
		Ifc_material_classification_relationship *o = reinterpret_cast<Ifc_material_classification_relationship *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_material_layer") {
		Ifc_material_layer *o = reinterpret_cast<Ifc_material_layer *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_material_layer_set") {
		Ifc_material_layer_set *o = reinterpret_cast<Ifc_material_layer_set *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_material_layer_set_usage") {
		Ifc_material_layer_set_usage *o = reinterpret_cast<Ifc_material_layer_set_usage *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_material_list") {
		Ifc_material_list *o = reinterpret_cast<Ifc_material_list *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_material_properties") {
		Ifc_material_properties *o = reinterpret_cast<Ifc_material_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_measure_with_unit") {
		Ifc_measure_with_unit *o = reinterpret_cast<Ifc_measure_with_unit *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_mechanical_material_properties") {
		Ifc_mechanical_material_properties *o = reinterpret_cast<Ifc_mechanical_material_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_metric") {
		Ifc_metric *o = reinterpret_cast<Ifc_metric *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_metric_benchmark") {
		Ifc_metric_benchmark *o = reinterpret_cast<Ifc_metric_benchmark *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_metric_value") {
		Ifc_metric_value *o = reinterpret_cast<Ifc_metric_value *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_monetary_unit") {
		Ifc_monetary_unit *o = reinterpret_cast<Ifc_monetary_unit *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_move") {
		Ifc_move *o = reinterpret_cast<Ifc_move *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_named_unit") {
		Ifc_named_unit *o = reinterpret_cast<Ifc_named_unit *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_object") {
		Ifc_object *o = reinterpret_cast<Ifc_object *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_object_placement") {
		Ifc_object_placement *o = reinterpret_cast<Ifc_object_placement *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_objective") {
		Ifc_objective *o = reinterpret_cast<Ifc_objective *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_occupant") {
		Ifc_occupant *o = reinterpret_cast<Ifc_occupant *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_offset_curve_2_d") {
		Ifc_offset_curve_2_d *o = reinterpret_cast<Ifc_offset_curve_2_d *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_offset_curve_3_d") {
		Ifc_offset_curve_3_d *o = reinterpret_cast<Ifc_offset_curve_3_d *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_open_shell") {
		Ifc_open_shell *o = reinterpret_cast<Ifc_open_shell *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_opening_element") {
		Ifc_opening_element *o = reinterpret_cast<Ifc_opening_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_optical_material_properties") {
		Ifc_optical_material_properties *o = reinterpret_cast<Ifc_optical_material_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_organization") {
		Ifc_organization *o = reinterpret_cast<Ifc_organization *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_organization_relationship") {
		Ifc_organization_relationship *o = reinterpret_cast<Ifc_organization_relationship *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_oriented_edge") {
		Ifc_oriented_edge *o = reinterpret_cast<Ifc_oriented_edge *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_outlet") {
		Ifc_outlet *o = reinterpret_cast<Ifc_outlet *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_owner_history") {
		Ifc_owner_history *o = reinterpret_cast<Ifc_owner_history *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_path") {
		Ifc_path *o = reinterpret_cast<Ifc_path *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_permeable_covering_properties") {
		Ifc_permeable_covering_properties *o = reinterpret_cast<Ifc_permeable_covering_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_person") {
		Ifc_person *o = reinterpret_cast<Ifc_person *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_person_and_organization") {
		Ifc_person_and_organization *o = reinterpret_cast<Ifc_person_and_organization *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_physical_quantity") {
		Ifc_physical_quantity *o = reinterpret_cast<Ifc_physical_quantity *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_placement") {
		Ifc_placement *o = reinterpret_cast<Ifc_placement *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_plane") {
		Ifc_plane *o = reinterpret_cast<Ifc_plane *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_point") {
		Ifc_point *o = reinterpret_cast<Ifc_point *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_point_light_source") {
		Ifc_point_light_source *o = reinterpret_cast<Ifc_point_light_source *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_poly_loop") {
		Ifc_poly_loop *o = reinterpret_cast<Ifc_poly_loop *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_polygonal_bounded_half_space") {
		Ifc_polygonal_bounded_half_space *o = reinterpret_cast<Ifc_polygonal_bounded_half_space *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_polyline") {
		Ifc_polyline *o = reinterpret_cast<Ifc_polyline *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_postal_address") {
		Ifc_postal_address *o = reinterpret_cast<Ifc_postal_address *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_presentation_light_source") {
		Ifc_presentation_light_source *o = reinterpret_cast<Ifc_presentation_light_source *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_process") {
		Ifc_process *o = reinterpret_cast<Ifc_process *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_product") {
		Ifc_product *o = reinterpret_cast<Ifc_product *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_product_definition_shape") {
		Ifc_product_definition_shape *o = reinterpret_cast<Ifc_product_definition_shape *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_product_representation") {
		Ifc_product_representation *o = reinterpret_cast<Ifc_product_representation *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_profile_def") {
		Ifc_profile_def *o = reinterpret_cast<Ifc_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_project") {
		Ifc_project *o = reinterpret_cast<Ifc_project *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_project_order") {
		Ifc_project_order *o = reinterpret_cast<Ifc_project_order *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_property") {
		Ifc_property *o = reinterpret_cast<Ifc_property *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_property_bounded_value") {
		Ifc_property_bounded_value *o = reinterpret_cast<Ifc_property_bounded_value *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_property_definition") {
		Ifc_property_definition *o = reinterpret_cast<Ifc_property_definition *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_property_enumerated_value") {
		Ifc_property_enumerated_value *o = reinterpret_cast<Ifc_property_enumerated_value *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_property_enumeration") {
		Ifc_property_enumeration *o = reinterpret_cast<Ifc_property_enumeration *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_property_reference_value") {
		Ifc_property_reference_value *o = reinterpret_cast<Ifc_property_reference_value *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_property_set") {
		Ifc_property_set *o = reinterpret_cast<Ifc_property_set *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_property_set_definition") {
		Ifc_property_set_definition *o = reinterpret_cast<Ifc_property_set_definition *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_property_single_value") {
		Ifc_property_single_value *o = reinterpret_cast<Ifc_property_single_value *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_property_table_value") {
		Ifc_property_table_value *o = reinterpret_cast<Ifc_property_table_value *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_proxy") {
		Ifc_proxy *o = reinterpret_cast<Ifc_proxy *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_pump") {
		Ifc_pump *o = reinterpret_cast<Ifc_pump *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_purchase_order") {
		Ifc_purchase_order *o = reinterpret_cast<Ifc_purchase_order *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_quantity_area") {
		Ifc_quantity_area *o = reinterpret_cast<Ifc_quantity_area *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_quantity_count") {
		Ifc_quantity_count *o = reinterpret_cast<Ifc_quantity_count *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_quantity_length") {
		Ifc_quantity_length *o = reinterpret_cast<Ifc_quantity_length *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_quantity_volume") {
		Ifc_quantity_volume *o = reinterpret_cast<Ifc_quantity_volume *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_quantity_weight") {
		Ifc_quantity_weight *o = reinterpret_cast<Ifc_quantity_weight *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_railing") {
		Ifc_railing *o = reinterpret_cast<Ifc_railing *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_ramp") {
		Ifc_ramp *o = reinterpret_cast<Ifc_ramp *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_ramp_flight") {
		Ifc_ramp_flight *o = reinterpret_cast<Ifc_ramp_flight *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rectangle_profile_def") {
		Ifc_rectangle_profile_def *o = reinterpret_cast<Ifc_rectangle_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rectangular_trimmed_surface") {
		Ifc_rectangular_trimmed_surface *o = reinterpret_cast<Ifc_rectangular_trimmed_surface *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_reference_edge") {
		Ifc_reference_edge *o = reinterpret_cast<Ifc_reference_edge *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_reference_face") {
		Ifc_reference_face *o = reinterpret_cast<Ifc_reference_face *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_reference_geometry") {
		Ifc_reference_geometry *o = reinterpret_cast<Ifc_reference_geometry *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_reference_vertex") {
		Ifc_reference_vertex *o = reinterpret_cast<Ifc_reference_vertex *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_references_cost_document") {
		Ifc_references_cost_document *o = reinterpret_cast<Ifc_references_cost_document *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_aggregates") {
		Ifc_rel_aggregates *o = reinterpret_cast<Ifc_rel_aggregates *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_aggregates_resources") {
		Ifc_rel_aggregates_resources *o = reinterpret_cast<Ifc_rel_aggregates_resources *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_assigns") {
		Ifc_rel_assigns *o = reinterpret_cast<Ifc_rel_assigns *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_assigns_f_m_standard") {
		Ifc_rel_assigns_f_m_standard *o = reinterpret_cast<Ifc_rel_assigns_f_m_standard *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_assigns_tasks") {
		Ifc_rel_assigns_tasks *o = reinterpret_cast<Ifc_rel_assigns_tasks *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_assigns_to_actor") {
		Ifc_rel_assigns_to_actor *o = reinterpret_cast<Ifc_rel_assigns_to_actor *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_assigns_to_control") {
		Ifc_rel_assigns_to_control *o = reinterpret_cast<Ifc_rel_assigns_to_control *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_assigns_to_group") {
		Ifc_rel_assigns_to_group *o = reinterpret_cast<Ifc_rel_assigns_to_group *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_assigns_to_process") {
		Ifc_rel_assigns_to_process *o = reinterpret_cast<Ifc_rel_assigns_to_process *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_assigns_to_product") {
		Ifc_rel_assigns_to_product *o = reinterpret_cast<Ifc_rel_assigns_to_product *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_assigns_to_resource") {
		Ifc_rel_assigns_to_resource *o = reinterpret_cast<Ifc_rel_assigns_to_resource *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_associates") {
		Ifc_rel_associates *o = reinterpret_cast<Ifc_rel_associates *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_associates_classification") {
		Ifc_rel_associates_classification *o = reinterpret_cast<Ifc_rel_associates_classification *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_associates_document") {
		Ifc_rel_associates_document *o = reinterpret_cast<Ifc_rel_associates_document *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_associates_library") {
		Ifc_rel_associates_library *o = reinterpret_cast<Ifc_rel_associates_library *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_associates_material") {
		Ifc_rel_associates_material *o = reinterpret_cast<Ifc_rel_associates_material *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_connects") {
		Ifc_rel_connects *o = reinterpret_cast<Ifc_rel_connects *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_connects_elements") {
		Ifc_rel_connects_elements *o = reinterpret_cast<Ifc_rel_connects_elements *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_connects_path_elements") {
		Ifc_rel_connects_path_elements *o = reinterpret_cast<Ifc_rel_connects_path_elements *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_connects_ports") {
		Ifc_rel_connects_ports *o = reinterpret_cast<Ifc_rel_connects_ports *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_contained_in_spatial_structure") {
		Ifc_rel_contained_in_spatial_structure *o = reinterpret_cast<Ifc_rel_contained_in_spatial_structure *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_costs_objects") {
		Ifc_rel_costs_objects *o = reinterpret_cast<Ifc_rel_costs_objects *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_covers_bldg_elements") {
		Ifc_rel_covers_bldg_elements *o = reinterpret_cast<Ifc_rel_covers_bldg_elements *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_decomposes") {
		Ifc_rel_decomposes *o = reinterpret_cast<Ifc_rel_decomposes *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_defines") {
		Ifc_rel_defines *o = reinterpret_cast<Ifc_rel_defines *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_defines_by_properties") {
		Ifc_rel_defines_by_properties *o = reinterpret_cast<Ifc_rel_defines_by_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_defines_by_type") {
		Ifc_rel_defines_by_type *o = reinterpret_cast<Ifc_rel_defines_by_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_fills_element") {
		Ifc_rel_fills_element *o = reinterpret_cast<Ifc_rel_fills_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_flow_control_elements") {
		Ifc_rel_flow_control_elements *o = reinterpret_cast<Ifc_rel_flow_control_elements *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_interaction_requirements") {
		Ifc_rel_interaction_requirements *o = reinterpret_cast<Ifc_rel_interaction_requirements *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_maintenance_event") {
		Ifc_rel_maintenance_event *o = reinterpret_cast<Ifc_rel_maintenance_event *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_nests") {
		Ifc_rel_nests *o = reinterpret_cast<Ifc_rel_nests *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_occupies_spaces") {
		Ifc_rel_occupies_spaces *o = reinterpret_cast<Ifc_rel_occupies_spaces *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_overrides_properties") {
		Ifc_rel_overrides_properties *o = reinterpret_cast<Ifc_rel_overrides_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_sequence") {
		Ifc_rel_sequence *o = reinterpret_cast<Ifc_rel_sequence *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_services_buildings") {
		Ifc_rel_services_buildings *o = reinterpret_cast<Ifc_rel_services_buildings *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_space_boundary") {
		Ifc_rel_space_boundary *o = reinterpret_cast<Ifc_rel_space_boundary *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_uses_resource") {
		Ifc_rel_uses_resource *o = reinterpret_cast<Ifc_rel_uses_resource *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_voids_element") {
		Ifc_rel_voids_element *o = reinterpret_cast<Ifc_rel_voids_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_relationship") {
		Ifc_relationship *o = reinterpret_cast<Ifc_relationship *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_representation") {
		Ifc_representation *o = reinterpret_cast<Ifc_representation *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_representation_context") {
		Ifc_representation_context *o = reinterpret_cast<Ifc_representation_context *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_representation_item") {
		Ifc_representation_item *o = reinterpret_cast<Ifc_representation_item *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_representation_map") {
		Ifc_representation_map *o = reinterpret_cast<Ifc_representation_map *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_resource") {
		Ifc_resource *o = reinterpret_cast<Ifc_resource *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_revolved_area_solid") {
		Ifc_revolved_area_solid *o = reinterpret_cast<Ifc_revolved_area_solid *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_roof") {
		Ifc_roof *o = reinterpret_cast<Ifc_roof *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_root") {
		Ifc_root *o = reinterpret_cast<Ifc_root *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rounded_rectangle_profile_def") {
		Ifc_rounded_rectangle_profile_def *o = reinterpret_cast<Ifc_rounded_rectangle_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_s_i_unit") {
		Ifc_s_i_unit *o = reinterpret_cast<Ifc_s_i_unit *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_sanitary_terminal") {
		Ifc_sanitary_terminal *o = reinterpret_cast<Ifc_sanitary_terminal *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_schedule_time_control") {
		Ifc_schedule_time_control *o = reinterpret_cast<Ifc_schedule_time_control *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_sectioned_spine") {
		Ifc_sectioned_spine *o = reinterpret_cast<Ifc_sectioned_spine *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_sensor") {
		Ifc_sensor *o = reinterpret_cast<Ifc_sensor *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_shape_aspect") {
		Ifc_shape_aspect *o = reinterpret_cast<Ifc_shape_aspect *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_shape_representation") {
		Ifc_shape_representation *o = reinterpret_cast<Ifc_shape_representation *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_shell_based_surface_model") {
		Ifc_shell_based_surface_model *o = reinterpret_cast<Ifc_shell_based_surface_model *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_simple_property") {
		Ifc_simple_property *o = reinterpret_cast<Ifc_simple_property *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_site") {
		Ifc_site *o = reinterpret_cast<Ifc_site *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_slab") {
		Ifc_slab *o = reinterpret_cast<Ifc_slab *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_solid_model") {
		Ifc_solid_model *o = reinterpret_cast<Ifc_solid_model *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_space") {
		Ifc_space *o = reinterpret_cast<Ifc_space *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_space_program") {
		Ifc_space_program *o = reinterpret_cast<Ifc_space_program *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_space_program_group") {
		Ifc_space_program_group *o = reinterpret_cast<Ifc_space_program_group *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_space_thermal_load") {
		Ifc_space_thermal_load *o = reinterpret_cast<Ifc_space_thermal_load *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_spatial_structure_element") {
		Ifc_spatial_structure_element *o = reinterpret_cast<Ifc_spatial_structure_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_spot_light_source") {
		Ifc_spot_light_source *o = reinterpret_cast<Ifc_spot_light_source *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_stair") {
		Ifc_stair *o = reinterpret_cast<Ifc_stair *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_stair_flight") {
		Ifc_stair_flight *o = reinterpret_cast<Ifc_stair_flight *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_storage_device") {
		Ifc_storage_device *o = reinterpret_cast<Ifc_storage_device *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_sub_contract_resource") {
		Ifc_sub_contract_resource *o = reinterpret_cast<Ifc_sub_contract_resource *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_surface") {
		Ifc_surface *o = reinterpret_cast<Ifc_surface *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_surface_extended_properties") {
		Ifc_surface_extended_properties *o = reinterpret_cast<Ifc_surface_extended_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_surface_of_linear_extrusion") {
		Ifc_surface_of_linear_extrusion *o = reinterpret_cast<Ifc_surface_of_linear_extrusion *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_surface_of_revolution") {
		Ifc_surface_of_revolution *o = reinterpret_cast<Ifc_surface_of_revolution *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_surface_rendering_properties") {
		Ifc_surface_rendering_properties *o = reinterpret_cast<Ifc_surface_rendering_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_surface_shading_properties") {
		Ifc_surface_shading_properties *o = reinterpret_cast<Ifc_surface_shading_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_surface_style") {
		Ifc_surface_style *o = reinterpret_cast<Ifc_surface_style *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_surface_style_properties") {
		Ifc_surface_style_properties *o = reinterpret_cast<Ifc_surface_style_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_surface_style_usage") {
		Ifc_surface_style_usage *o = reinterpret_cast<Ifc_surface_style_usage *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_swept_area_solid") {
		Ifc_swept_area_solid *o = reinterpret_cast<Ifc_swept_area_solid *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_swept_surface") {
		Ifc_swept_surface *o = reinterpret_cast<Ifc_swept_surface *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_system") {
		Ifc_system *o = reinterpret_cast<Ifc_system *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_system_furniture_element") {
		Ifc_system_furniture_element *o = reinterpret_cast<Ifc_system_furniture_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_table") {
		Ifc_table *o = reinterpret_cast<Ifc_table *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_table_row") {
		Ifc_table_row *o = reinterpret_cast<Ifc_table_row *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_tank") {
		Ifc_tank *o = reinterpret_cast<Ifc_tank *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_task") {
		Ifc_task *o = reinterpret_cast<Ifc_task *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_telecom_address") {
		Ifc_telecom_address *o = reinterpret_cast<Ifc_telecom_address *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_thermal_material_properties") {
		Ifc_thermal_material_properties *o = reinterpret_cast<Ifc_thermal_material_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_topological_representation_item") {
		Ifc_topological_representation_item *o = reinterpret_cast<Ifc_topological_representation_item *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_transport_element") {
		Ifc_transport_element *o = reinterpret_cast<Ifc_transport_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_trapezium_profile_def") {
		Ifc_trapezium_profile_def *o = reinterpret_cast<Ifc_trapezium_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_treatment_device") {
		Ifc_treatment_device *o = reinterpret_cast<Ifc_treatment_device *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_trimmed_curve") {
		Ifc_trimmed_curve *o = reinterpret_cast<Ifc_trimmed_curve *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_tube_bundle") {
		Ifc_tube_bundle *o = reinterpret_cast<Ifc_tube_bundle *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_type_object") {
		Ifc_type_object *o = reinterpret_cast<Ifc_type_object *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_type_product") {
		Ifc_type_product *o = reinterpret_cast<Ifc_type_product *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_unit_assignment") {
		Ifc_unit_assignment *o = reinterpret_cast<Ifc_unit_assignment *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_unit_heater") {
		Ifc_unit_heater *o = reinterpret_cast<Ifc_unit_heater *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_valve") {
		Ifc_valve *o = reinterpret_cast<Ifc_valve *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_vector") {
		Ifc_vector *o = reinterpret_cast<Ifc_vector *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_vertex") {
		Ifc_vertex *o = reinterpret_cast<Ifc_vertex *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_vertex_point") {
		Ifc_vertex_point *o = reinterpret_cast<Ifc_vertex_point *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_virtual_grid_intersection") {
		Ifc_virtual_grid_intersection *o = reinterpret_cast<Ifc_virtual_grid_intersection *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_wall") {
		Ifc_wall *o = reinterpret_cast<Ifc_wall *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_wall_standard_case") {
		Ifc_wall_standard_case *o = reinterpret_cast<Ifc_wall_standard_case *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_window") {
		Ifc_window *o = reinterpret_cast<Ifc_window *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_window_lining_properties") {
		Ifc_window_lining_properties *o = reinterpret_cast<Ifc_window_lining_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_window_panel_properties") {
		Ifc_window_panel_properties *o = reinterpret_cast<Ifc_window_panel_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_window_style") {
		Ifc_window_style *o = reinterpret_cast<Ifc_window_style *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_work_control") {
		Ifc_work_control *o = reinterpret_cast<Ifc_work_control *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_work_order") {
		Ifc_work_order *o = reinterpret_cast<Ifc_work_order *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_work_plan") {
		Ifc_work_plan *o = reinterpret_cast<Ifc_work_plan *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_work_schedule") {
		Ifc_work_schedule *o = reinterpret_cast<Ifc_work_schedule *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_zone") {
		Ifc_zone *o = reinterpret_cast<Ifc_zone *>(object);
		std::cout << *o;
	}
 	else {
		std::cout << "MISSING ENTITY " << object->entity << "!!!" << std::endl;
	}
}