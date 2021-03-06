#include "Ifc_2x3_schema.hpp"

using namespace Ifc_2x3_schema;

Ifc *Schema::parse_ifc_object_definition(std::string &object_class, std::vector<std::string> &object_attributes) {

	if (boost::iequals(object_class, "Ifc2DCompositeCurve")) {
		Ifc_2_d_composite_curve *o = new Ifc_2_d_composite_curve();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->segments.push_back((Ifc_composite_curve_segment *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->segments);
		//o->self_intersect = step_parser.parse_logical(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcActionRequest")) {
		Ifc_action_request *o = new Ifc_action_request();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->request_i_d = step_parser.parse_string(object_attributes[5]);
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
		o->user_defined_role = step_parser.parse_string(object_attributes[1]);
		o->description = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcActuatorType")) {
		Ifc_actuator_type *o = new Ifc_actuator_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAddress")) {
		Ifc_address *o = new Ifc_address();
		o->purpose = step_parser.parse_constant(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->user_defined_purpose = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAirTerminalBoxType")) {
		Ifc_air_terminal_box_type *o = new Ifc_air_terminal_box_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAirTerminalType")) {
		Ifc_air_terminal_type *o = new Ifc_air_terminal_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAirToAirHeatRecoveryType")) {
		Ifc_air_to_air_heat_recovery_type *o = new Ifc_air_to_air_heat_recovery_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAlarmType")) {
		Ifc_alarm_type *o = new Ifc_alarm_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAngularDimension")) {
		Ifc_angular_dimension *o = new Ifc_angular_dimension();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->contents.push_back((Ifc_draughting_callout_element *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->contents);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAnnotation")) {
		Ifc_annotation *o = new Ifc_annotation();
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

	else if (boost::iequals(object_class, "IfcAnnotationCurveOccurrence")) {
		Ifc_annotation_curve_occurrence *o = new Ifc_annotation_curve_occurrence();
		o->item = (Ifc_representation_item *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->item);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->styles.push_back((Ifc_presentation_style_assignment *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->styles);
		o->name = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAnnotationFillArea")) {
		Ifc_annotation_fill_area *o = new Ifc_annotation_fill_area();
		o->outer_boundary = (Ifc_curve *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->outer_boundary);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->inner_boundaries.push_back((Ifc_curve *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->inner_boundaries);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAnnotationFillAreaOccurrence")) {
		Ifc_annotation_fill_area_occurrence *o = new Ifc_annotation_fill_area_occurrence();
		o->item = (Ifc_representation_item *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->item);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->styles.push_back((Ifc_presentation_style_assignment *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->styles);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->fill_style_target = (Ifc_point *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->fill_style_target);
		o->global_or_local = step_parser.parse_constant(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAnnotationOccurrence")) {
		Ifc_annotation_occurrence *o = new Ifc_annotation_occurrence();
		o->item = (Ifc_representation_item *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->item);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->styles.push_back((Ifc_presentation_style_assignment *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->styles);
		o->name = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAnnotationSurface")) {
		Ifc_annotation_surface *o = new Ifc_annotation_surface();
		o->item = (Ifc_geometric_representation_item *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->item);
		o->texture_coordinates = (Ifc_texture_coordinate *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->texture_coordinates);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAnnotationSurfaceOccurrence")) {
		Ifc_annotation_surface_occurrence *o = new Ifc_annotation_surface_occurrence();
		o->item = (Ifc_representation_item *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->item);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->styles.push_back((Ifc_presentation_style_assignment *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->styles);
		o->name = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAnnotationSymbolOccurrence")) {
		Ifc_annotation_symbol_occurrence *o = new Ifc_annotation_symbol_occurrence();
		o->item = (Ifc_representation_item *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->item);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->styles.push_back((Ifc_presentation_style_assignment *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->styles);
		o->name = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAnnotationTextOccurrence")) {
		Ifc_annotation_text_occurrence *o = new Ifc_annotation_text_occurrence();
		o->item = (Ifc_representation_item *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->item);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->styles.push_back((Ifc_presentation_style_assignment *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->styles);
		o->name = step_parser.parse_string(object_attributes[2]);
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

	else if (boost::iequals(object_class, "IfcAppliedValue")) {
		Ifc_applied_value *o = new Ifc_applied_value();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->applied_value = (Ifc_applied_value_select *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->applied_value);
		o->unit_basis = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->unit_basis);
		o->applicable_date = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->applicable_date);
		o->fixed_until_date = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->fixed_until_date);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAppliedValueRelationship")) {
		Ifc_applied_value_relationship *o = new Ifc_applied_value_relationship();
		o->component_of_total = (Ifc_applied_value *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->component_of_total);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->components.push_back((Ifc_applied_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->components);
		o->arithmetic_operator = step_parser.parse_constant(object_attributes[2]);
		o->name = step_parser.parse_string(object_attributes[3]);
		o->description = step_parser.parse_string(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcApproval")) {
		Ifc_approval *o = new Ifc_approval();
		o->description = step_parser.parse_string(object_attributes[0]);
		o->approval_date_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->approval_date_time);
		o->approval_status = step_parser.parse_string(object_attributes[2]);
		o->approval_level = step_parser.parse_string(object_attributes[3]);
		o->approval_qualifier = step_parser.parse_string(object_attributes[4]);
		o->name = step_parser.parse_string(object_attributes[5]);
		o->identifier = step_parser.parse_string(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcApprovalActorRelationship")) {
		Ifc_approval_actor_relationship *o = new Ifc_approval_actor_relationship();
		o->actor = (Ifc_actor_select *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->actor);
		o->approval = (Ifc_approval *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->approval);
		o->role = (Ifc_actor_role *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->role);
		return o;
	}

	else if (boost::iequals(object_class, "IfcApprovalPropertyRelationship")) {
		Ifc_approval_property_relationship *o = new Ifc_approval_property_relationship();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->approved_properties.push_back((Ifc_property *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->approved_properties);
		o->approval = (Ifc_approval *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->approval);
		return o;
	}

	else if (boost::iequals(object_class, "IfcApprovalRelationship")) {
		Ifc_approval_relationship *o = new Ifc_approval_relationship();
		o->related_approval = (Ifc_approval *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->related_approval);
		o->relating_approval = (Ifc_approval *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->relating_approval);
		o->description = step_parser.parse_string(object_attributes[2]);
		o->name = step_parser.parse_string(object_attributes[3]);
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

	else if (boost::iequals(object_class, "IfcAsset")) {
		Ifc_asset *o = new Ifc_asset();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->asset_i_d = step_parser.parse_string(object_attributes[5]);
		o->original_value = (Ifc_cost_value *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->original_value);
		o->current_value = (Ifc_cost_value *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->current_value);
		o->total_replacement_cost = (Ifc_cost_value *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->total_replacement_cost);
		o->owner = (Ifc_actor_select *)step_parser.parse_link(object_attributes[9]);
		links_to_resolve.push_back((Ifc **)&o->owner);
		o->user = (Ifc_actor_select *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->user);
		o->responsible_person = (Ifc_person *)step_parser.parse_link(object_attributes[11]);
		links_to_resolve.push_back((Ifc **)&o->responsible_person);
		o->incorporation_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->incorporation_date);
		o->depreciated_value = (Ifc_cost_value *)step_parser.parse_link(object_attributes[13]);
		links_to_resolve.push_back((Ifc **)&o->depreciated_value);
		return o;
	}

	else if (boost::iequals(object_class, "IfcAsymmetricIShapeProfileDef")) {
		Ifc_asymmetric_i_shape_profile_def *o = new Ifc_asymmetric_i_shape_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->position = (Ifc_axis_2_placement_2_d *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
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

	else if (boost::iequals(object_class, "IfcBSplineCurve")) {
		Ifc_b_spline_curve *o = new Ifc_b_spline_curve();
		o->degree = step_parser.parse_integer(object_attributes[0]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->control_points_list.push_back((Ifc_cartesian_point *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->control_points_list);
		o->curve_form = step_parser.parse_constant(object_attributes[2]);
		//o->closed_curve = step_parser.parse_logical(object_attributes[3]);
		//o->self_intersect = step_parser.parse_logical(object_attributes[4]);
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

	else if (boost::iequals(object_class, "IfcBeamType")) {
		Ifc_beam_type *o = new Ifc_beam_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBezierCurve")) {
		Ifc_bezier_curve *o = new Ifc_bezier_curve();
		o->degree = step_parser.parse_integer(object_attributes[0]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->control_points_list.push_back((Ifc_cartesian_point *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->control_points_list);
		o->curve_form = step_parser.parse_constant(object_attributes[2]);
		//o->closed_curve = step_parser.parse_logical(object_attributes[3]);
		//o->self_intersect = step_parser.parse_logical(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBlobTexture")) {
		Ifc_blob_texture *o = new Ifc_blob_texture();
		o->repeat_s = step_parser.parse_boolean(object_attributes[0]);
		o->repeat_t = step_parser.parse_boolean(object_attributes[1]);
		o->texture_type = step_parser.parse_constant(object_attributes[2]);
		o->texture_transform = (Ifc_cartesian_transformation_operator_2_d *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->texture_transform);
		o->raster_format = step_parser.parse_string(object_attributes[4]);
		o->raster_code = step_parser.parse_boolean(object_attributes[5]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBlock")) {
		Ifc_block *o = new Ifc_block();
		o->position = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcBoilerType")) {
		Ifc_boiler_type *o = new Ifc_boiler_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBooleanClippingResult")) {
		Ifc_boolean_clipping_result *o = new Ifc_boolean_clipping_result();
		o->_operator = step_parser.parse_constant(object_attributes[0]);
		o->first_operand = (Ifc_boolean_operand *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->first_operand);
		o->second_operand = (Ifc_boolean_operand *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->second_operand);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBooleanResult")) {
		Ifc_boolean_result *o = new Ifc_boolean_result();
		o->_operator = step_parser.parse_constant(object_attributes[0]);
		o->first_operand = (Ifc_boolean_operand *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->first_operand);
		o->second_operand = (Ifc_boolean_operand *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->second_operand);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBoundaryCondition")) {
		Ifc_boundary_condition *o = new Ifc_boundary_condition();
		o->name = step_parser.parse_string(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBoundaryEdgeCondition")) {
		Ifc_boundary_edge_condition *o = new Ifc_boundary_edge_condition();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->linear_stiffness_by_length_x = step_parser.parse_double(object_attributes[1]);
		o->linear_stiffness_by_length_y = step_parser.parse_double(object_attributes[2]);
		o->linear_stiffness_by_length_z = step_parser.parse_double(object_attributes[3]);
		o->rotational_stiffness_by_length_x = step_parser.parse_double(object_attributes[4]);
		o->rotational_stiffness_by_length_y = step_parser.parse_double(object_attributes[5]);
		o->rotational_stiffness_by_length_z = step_parser.parse_double(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBoundaryFaceCondition")) {
		Ifc_boundary_face_condition *o = new Ifc_boundary_face_condition();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->linear_stiffness_by_area_x = step_parser.parse_double(object_attributes[1]);
		o->linear_stiffness_by_area_y = step_parser.parse_double(object_attributes[2]);
		o->linear_stiffness_by_area_z = step_parser.parse_double(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBoundaryNodeCondition")) {
		Ifc_boundary_node_condition *o = new Ifc_boundary_node_condition();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->linear_stiffness_x = step_parser.parse_double(object_attributes[1]);
		o->linear_stiffness_y = step_parser.parse_double(object_attributes[2]);
		o->linear_stiffness_z = step_parser.parse_double(object_attributes[3]);
		o->rotational_stiffness_x = step_parser.parse_double(object_attributes[4]);
		o->rotational_stiffness_y = step_parser.parse_double(object_attributes[5]);
		o->rotational_stiffness_z = step_parser.parse_double(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBoundaryNodeConditionWarping")) {
		Ifc_boundary_node_condition_warping *o = new Ifc_boundary_node_condition_warping();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->linear_stiffness_x = step_parser.parse_double(object_attributes[1]);
		o->linear_stiffness_y = step_parser.parse_double(object_attributes[2]);
		o->linear_stiffness_z = step_parser.parse_double(object_attributes[3]);
		o->rotational_stiffness_x = step_parser.parse_double(object_attributes[4]);
		o->rotational_stiffness_y = step_parser.parse_double(object_attributes[5]);
		o->rotational_stiffness_z = step_parser.parse_double(object_attributes[6]);
		o->warping_stiffness = step_parser.parse_double(object_attributes[7]);
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
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcBoxedHalfSpace")) {
		Ifc_boxed_half_space *o = new Ifc_boxed_half_space();
		o->base_surface = (Ifc_surface *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->base_surface);
		o->agreement_flag = step_parser.parse_boolean(object_attributes[1]);
		o->enclosure = (Ifc_bounding_box *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->enclosure);
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

	else if (boost::iequals(object_class, "IfcBuildingElementComponent")) {
		Ifc_building_element_component *o = new Ifc_building_element_component();
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

	else if (boost::iequals(object_class, "IfcBuildingElementPart")) {
		Ifc_building_element_part *o = new Ifc_building_element_part();
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

	else if (boost::iequals(object_class, "IfcBuildingElementProxyType")) {
		Ifc_building_element_proxy_type *o = new Ifc_building_element_proxy_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcBuildingElementType")) {
		Ifc_building_element_type *o = new Ifc_building_element_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
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

	else if (boost::iequals(object_class, "IfcCShapeProfileDef")) {
		Ifc_c_shape_profile_def *o = new Ifc_c_shape_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->position = (Ifc_axis_2_placement_2_d *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcCableCarrierFittingType")) {
		Ifc_cable_carrier_fitting_type *o = new Ifc_cable_carrier_fitting_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCableCarrierSegmentType")) {
		Ifc_cable_carrier_segment_type *o = new Ifc_cable_carrier_segment_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCableSegmentType")) {
		Ifc_cable_segment_type *o = new Ifc_cable_segment_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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
		o->coordinates = step_parser.parse_list_of_doubles(object_attributes[0]);
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
		o->scale = step_parser.parse_double(object_attributes[3]);
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
		o->scale = step_parser.parse_double(object_attributes[3]);
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
		o->scale = step_parser.parse_double(object_attributes[3]);
		o->scale_2 = step_parser.parse_double(object_attributes[4]);
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
		o->scale = step_parser.parse_double(object_attributes[3]);
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
		o->scale = step_parser.parse_double(object_attributes[3]);
		o->axis_3 = (Ifc_direction *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->axis_3);
		o->scale_2 = step_parser.parse_double(object_attributes[5]);
		o->scale_3 = step_parser.parse_double(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCenterLineProfileDef")) {
		Ifc_center_line_profile_def *o = new Ifc_center_line_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->curve = (Ifc_bounded_curve *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->curve);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcChamferEdgeFeature")) {
		Ifc_chamfer_edge_feature *o = new Ifc_chamfer_edge_feature();
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
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcChillerType")) {
		Ifc_chiller_type *o = new Ifc_chiller_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCircle")) {
		Ifc_circle *o = new Ifc_circle();
		o->position = (Ifc_axis_2_placement *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcCircleHollowProfileDef")) {
		Ifc_circle_hollow_profile_def *o = new Ifc_circle_hollow_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->position = (Ifc_axis_2_placement_2_d *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
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
		o->source = step_parser.parse_string(object_attributes[0]);
		o->edition = step_parser.parse_string(object_attributes[1]);
		o->edition_date = (Ifc_calendar_date *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->edition_date);
		o->name = step_parser.parse_string(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcClassificationItem")) {
		Ifc_classification_item *o = new Ifc_classification_item();
		o->notation = (Ifc_classification_notation_facet *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->notation);
		o->item_of = (Ifc_classification *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->item_of);
		o->title = step_parser.parse_string(object_attributes[2]);
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
		o->notation_value = step_parser.parse_string(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcClassificationReference")) {
		Ifc_classification_reference *o = new Ifc_classification_reference();
		o->location = step_parser.parse_string(object_attributes[0]);
		o->item_reference = step_parser.parse_string(object_attributes[1]);
		o->name = step_parser.parse_string(object_attributes[2]);
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

	else if (boost::iequals(object_class, "IfcCoilType")) {
		Ifc_coil_type *o = new Ifc_coil_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcColourRgb")) {
		Ifc_colour_rgb *o = new Ifc_colour_rgb();
		o->name = step_parser.parse_string(object_attributes[0]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcColourSpecification")) {
		Ifc_colour_specification *o = new Ifc_colour_specification();
		o->name = step_parser.parse_string(object_attributes[0]);
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

	else if (boost::iequals(object_class, "IfcColumnType")) {
		Ifc_column_type *o = new Ifc_column_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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
		//o->self_intersect = step_parser.parse_logical(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCompositeCurveSegment")) {
		Ifc_composite_curve_segment *o = new Ifc_composite_curve_segment();
		o->transition = step_parser.parse_constant(object_attributes[0]);
		o->same_sense = step_parser.parse_boolean(object_attributes[1]);
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

	else if (boost::iequals(object_class, "IfcCompressorType")) {
		Ifc_compressor_type *o = new Ifc_compressor_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCondenserType")) {
		Ifc_condenser_type *o = new Ifc_condenser_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCondition")) {
		Ifc_condition *o = new Ifc_condition();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConditionCriterion")) {
		Ifc_condition_criterion *o = new Ifc_condition_criterion();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->criterion = (Ifc_condition_criterion_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->criterion);
		o->criterion_date_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->criterion_date_time);
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

	else if (boost::iequals(object_class, "IfcConnectionCurveGeometry")) {
		Ifc_connection_curve_geometry *o = new Ifc_connection_curve_geometry();
		o->curve_on_relating_element = (Ifc_curve_or_edge_curve *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->curve_on_relating_element);
		o->curve_on_related_element = (Ifc_curve_or_edge_curve *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->curve_on_related_element);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConnectionGeometry")) {
		Ifc_connection_geometry *o = new Ifc_connection_geometry();
		return o;
	}

	else if (boost::iequals(object_class, "IfcConnectionPointEccentricity")) {
		Ifc_connection_point_eccentricity *o = new Ifc_connection_point_eccentricity();
		o->point_on_relating_element = (Ifc_point_or_vertex_point *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->point_on_relating_element);
		o->point_on_related_element = (Ifc_point_or_vertex_point *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->point_on_related_element);
		o->eccentricity_in_x = step_parser.parse_double(object_attributes[2]);
		o->eccentricity_in_y = step_parser.parse_double(object_attributes[3]);
		o->eccentricity_in_z = step_parser.parse_double(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConnectionPointGeometry")) {
		Ifc_connection_point_geometry *o = new Ifc_connection_point_geometry();
		o->point_on_relating_element = (Ifc_point_or_vertex_point *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->point_on_relating_element);
		o->point_on_related_element = (Ifc_point_or_vertex_point *)step_parser.parse_link(object_attributes[1]);
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
		o->surface_on_relating_element = (Ifc_surface_or_face_surface *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->surface_on_relating_element);
		o->surface_on_related_element = (Ifc_surface_or_face_surface *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->surface_on_related_element);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConstraint")) {
		Ifc_constraint *o = new Ifc_constraint();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->constraint_grade = step_parser.parse_constant(object_attributes[2]);
		o->constraint_source = step_parser.parse_string(object_attributes[3]);
		o->creating_actor = (Ifc_actor_select *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->creating_actor);
		o->creation_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->creation_time);
		o->user_defined_grade = step_parser.parse_string(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConstraintAggregationRelationship")) {
		Ifc_constraint_aggregation_relationship *o = new Ifc_constraint_aggregation_relationship();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->relating_constraint = (Ifc_constraint *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->relating_constraint);
		for (auto i : step_parser.parse_list_of_links(object_attributes[3])) o->related_constraints.push_back((Ifc_constraint *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_constraints);
		o->logical_aggregator = step_parser.parse_constant(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConstraintClassificationRelationship")) {
		Ifc_constraint_classification_relationship *o = new Ifc_constraint_classification_relationship();
		o->classified_constraint = (Ifc_constraint *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->classified_constraint);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->related_classifications.push_back((Ifc_classification_notation_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_classifications);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConstraintRelationship")) {
		Ifc_constraint_relationship *o = new Ifc_constraint_relationship();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->relating_constraint = (Ifc_constraint *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->relating_constraint);
		for (auto i : step_parser.parse_list_of_links(object_attributes[3])) o->related_constraints.push_back((Ifc_constraint *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_constraints);
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
		o->resource_identifier = step_parser.parse_string(object_attributes[5]);
		o->resource_group = step_parser.parse_string(object_attributes[6]);
		o->resource_consumption = step_parser.parse_constant(object_attributes[7]);
		o->base_quantity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->base_quantity);
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
		o->resource_identifier = step_parser.parse_string(object_attributes[5]);
		o->resource_group = step_parser.parse_string(object_attributes[6]);
		o->resource_consumption = step_parser.parse_constant(object_attributes[7]);
		o->base_quantity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->base_quantity);
		for (auto i : step_parser.parse_list_of_links(object_attributes[9])) o->suppliers.push_back((Ifc_actor_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->suppliers);
		o->usage_ratio = step_parser.parse_double(object_attributes[10]);
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
		o->resource_identifier = step_parser.parse_string(object_attributes[5]);
		o->resource_group = step_parser.parse_string(object_attributes[6]);
		o->resource_consumption = step_parser.parse_constant(object_attributes[7]);
		o->base_quantity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->base_quantity);
		return o;
	}

	else if (boost::iequals(object_class, "IfcConstructionResource")) {
		Ifc_construction_resource *o = new Ifc_construction_resource();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->resource_identifier = step_parser.parse_string(object_attributes[5]);
		o->resource_group = step_parser.parse_string(object_attributes[6]);
		o->resource_consumption = step_parser.parse_constant(object_attributes[7]);
		o->base_quantity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->base_quantity);
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

	else if (boost::iequals(object_class, "IfcControllerType")) {
		Ifc_controller_type *o = new Ifc_controller_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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

	else if (boost::iequals(object_class, "IfcCooledBeamType")) {
		Ifc_cooled_beam_type *o = new Ifc_cooled_beam_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCoolingTowerType")) {
		Ifc_cooling_tower_type *o = new Ifc_cooling_tower_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCoordinatedUniversalTimeOffset")) {
		Ifc_coordinated_universal_time_offset *o = new Ifc_coordinated_universal_time_offset();
		o->hour_offset = step_parser.parse_integer(object_attributes[0]);
		o->minute_offset = step_parser.parse_integer(object_attributes[1]);
		o->sense = step_parser.parse_constant(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCostItem")) {
		Ifc_cost_item *o = new Ifc_cost_item();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
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
		o->submitted_by = (Ifc_actor_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->submitted_by);
		o->prepared_by = (Ifc_actor_select *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->prepared_by);
		o->submitted_on = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->submitted_on);
		o->status = step_parser.parse_string(object_attributes[8]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[9])) o->target_users.push_back((Ifc_actor_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->target_users);
		o->update_date = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->update_date);
		o->i_d = step_parser.parse_string(object_attributes[11]);
		o->predefined_type = step_parser.parse_constant(object_attributes[12]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCostValue")) {
		Ifc_cost_value *o = new Ifc_cost_value();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->applied_value = (Ifc_applied_value_select *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->applied_value);
		o->unit_basis = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->unit_basis);
		o->applicable_date = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->applicable_date);
		o->fixed_until_date = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->fixed_until_date);
		o->cost_type = step_parser.parse_string(object_attributes[6]);
		o->condition = step_parser.parse_string(object_attributes[7]);
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

	else if (boost::iequals(object_class, "IfcCoveringType")) {
		Ifc_covering_type *o = new Ifc_covering_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCraneRailAShapeProfileDef")) {
		Ifc_crane_rail_a_shape_profile_def *o = new Ifc_crane_rail_a_shape_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->position = (Ifc_axis_2_placement_2_d *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcCraneRailFShapeProfileDef")) {
		Ifc_crane_rail_f_shape_profile_def *o = new Ifc_crane_rail_f_shape_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->position = (Ifc_axis_2_placement_2_d *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
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
		o->resource_identifier = step_parser.parse_string(object_attributes[5]);
		o->resource_group = step_parser.parse_string(object_attributes[6]);
		o->resource_consumption = step_parser.parse_constant(object_attributes[7]);
		o->base_quantity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->base_quantity);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCsgPrimitive3D")) {
		Ifc_csg_primitive_3_d *o = new Ifc_csg_primitive_3_d();
		o->position = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->position);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCsgSolid")) {
		Ifc_csg_solid *o = new Ifc_csg_solid();
		o->tree_root_expression = (Ifc_csg_select *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->tree_root_expression);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCurrencyRelationship")) {
		Ifc_currency_relationship *o = new Ifc_currency_relationship();
		o->relating_monetary_unit = (Ifc_monetary_unit *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->relating_monetary_unit);
		o->related_monetary_unit = (Ifc_monetary_unit *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->related_monetary_unit);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->rate_date_time = (Ifc_date_and_time *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->rate_date_time);
		o->rate_source = (Ifc_library_information *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->rate_source);
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

	else if (boost::iequals(object_class, "IfcCurtainWallType")) {
		Ifc_curtain_wall_type *o = new Ifc_curtain_wall_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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
		o->outer_boundary = (Ifc_curve *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->outer_boundary);
		for (auto i : step_parser.parse_list_of_links(object_attributes[2])) o->inner_boundaries.push_back((Ifc_curve *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->inner_boundaries);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCurveStyle")) {
		Ifc_curve_style *o = new Ifc_curve_style();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->curve_font = (Ifc_curve_font_or_scaled_curve_font_select *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->curve_font);
		o->curve_width = (Ifc_size_select *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->curve_width);
		o->curve_colour = (Ifc_colour *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->curve_colour);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCurveStyleFont")) {
		Ifc_curve_style_font *o = new Ifc_curve_style_font();
		o->name = step_parser.parse_string(object_attributes[0]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->pattern_list.push_back((Ifc_curve_style_font_pattern *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->pattern_list);
		return o;
	}

	else if (boost::iequals(object_class, "IfcCurveStyleFontAndScaling")) {
		Ifc_curve_style_font_and_scaling *o = new Ifc_curve_style_font_and_scaling();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->curve_font = (Ifc_curve_style_font_select *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->curve_font);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcCurveStyleFontPattern")) {
		Ifc_curve_style_font_pattern *o = new Ifc_curve_style_font_pattern();
		o->visible_segment_length = step_parser.parse_double(object_attributes[0]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcDamperType")) {
		Ifc_damper_type *o = new Ifc_damper_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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

	else if (boost::iequals(object_class, "IfcDefinedSymbol")) {
		Ifc_defined_symbol *o = new Ifc_defined_symbol();
		o->definition = (Ifc_defined_symbol_select *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->definition);
		o->target = (Ifc_cartesian_transformation_operator_2_d *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->target);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDerivedProfileDef")) {
		Ifc_derived_profile_def *o = new Ifc_derived_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->parent_profile = (Ifc_profile_def *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->parent_profile);
		o->_operator = (Ifc_cartesian_transformation_operator_2_d *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->_operator);
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
		o->exponent = step_parser.parse_integer(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDiameterDimension")) {
		Ifc_diameter_dimension *o = new Ifc_diameter_dimension();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->contents.push_back((Ifc_draughting_callout_element *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->contents);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDimensionCalloutRelationship")) {
		Ifc_dimension_callout_relationship *o = new Ifc_dimension_callout_relationship();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->relating_draughting_callout = (Ifc_draughting_callout *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->relating_draughting_callout);
		o->related_draughting_callout = (Ifc_draughting_callout *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->related_draughting_callout);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDimensionCurve")) {
		Ifc_dimension_curve *o = new Ifc_dimension_curve();
		o->item = (Ifc_representation_item *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->item);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->styles.push_back((Ifc_presentation_style_assignment *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->styles);
		o->name = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDimensionCurveDirectedCallout")) {
		Ifc_dimension_curve_directed_callout *o = new Ifc_dimension_curve_directed_callout();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->contents.push_back((Ifc_draughting_callout_element *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->contents);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDimensionCurveTerminator")) {
		Ifc_dimension_curve_terminator *o = new Ifc_dimension_curve_terminator();
		o->item = (Ifc_representation_item *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->item);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->styles.push_back((Ifc_presentation_style_assignment *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->styles);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->annotated_curve = (Ifc_annotation_curve_occurrence *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->annotated_curve);
		o->role = step_parser.parse_constant(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDimensionPair")) {
		Ifc_dimension_pair *o = new Ifc_dimension_pair();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->relating_draughting_callout = (Ifc_draughting_callout *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->relating_draughting_callout);
		o->related_draughting_callout = (Ifc_draughting_callout *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->related_draughting_callout);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDimensionalExponents")) {
		Ifc_dimensional_exponents *o = new Ifc_dimensional_exponents();
		o->length_exponent = step_parser.parse_integer(object_attributes[0]);
		o->mass_exponent = step_parser.parse_integer(object_attributes[1]);
		o->time_exponent = step_parser.parse_integer(object_attributes[2]);
		o->electric_current_exponent = step_parser.parse_integer(object_attributes[3]);
		o->thermodynamic_temperature_exponent = step_parser.parse_integer(object_attributes[4]);
		o->amount_of_substance_exponent = step_parser.parse_integer(object_attributes[5]);
		o->luminous_intensity_exponent = step_parser.parse_integer(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDirection")) {
		Ifc_direction *o = new Ifc_direction();
		o->direction_ratios = step_parser.parse_list_of_doubles(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDiscreteAccessory")) {
		Ifc_discrete_accessory *o = new Ifc_discrete_accessory();
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

	else if (boost::iequals(object_class, "IfcDiscreteAccessoryType")) {
		Ifc_discrete_accessory_type *o = new Ifc_discrete_accessory_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDistributionChamberElement")) {
		Ifc_distribution_chamber_element *o = new Ifc_distribution_chamber_element();
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

	else if (boost::iequals(object_class, "IfcDistributionChamberElementType")) {
		Ifc_distribution_chamber_element_type *o = new Ifc_distribution_chamber_element_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDistributionControlElement")) {
		Ifc_distribution_control_element *o = new Ifc_distribution_control_element();
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

	else if (boost::iequals(object_class, "IfcDistributionControlElementType")) {
		Ifc_distribution_control_element_type *o = new Ifc_distribution_control_element_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
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

	else if (boost::iequals(object_class, "IfcDistributionElementType")) {
		Ifc_distribution_element_type *o = new Ifc_distribution_element_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
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
		return o;
	}

	else if (boost::iequals(object_class, "IfcDistributionFlowElementType")) {
		Ifc_distribution_flow_element_type *o = new Ifc_distribution_flow_element_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDistributionPort")) {
		Ifc_distribution_port *o = new Ifc_distribution_port();
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
		o->flow_direction = step_parser.parse_constant(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDocumentElectronicFormat")) {
		Ifc_document_electronic_format *o = new Ifc_document_electronic_format();
		o->file_extension = step_parser.parse_string(object_attributes[0]);
		o->mime_content_type = step_parser.parse_string(object_attributes[1]);
		o->mime_subtype = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDocumentInformation")) {
		Ifc_document_information *o = new Ifc_document_information();
		o->document_id = step_parser.parse_string(object_attributes[0]);
		o->name = step_parser.parse_string(object_attributes[1]);
		o->description = step_parser.parse_string(object_attributes[2]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[3])) o->document_references.push_back((Ifc_document_reference *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->document_references);
		o->purpose = step_parser.parse_string(object_attributes[4]);
		o->intended_use = step_parser.parse_string(object_attributes[5]);
		o->scope = step_parser.parse_string(object_attributes[6]);
		o->revision = step_parser.parse_string(object_attributes[7]);
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
		o->relationship_type = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDocumentReference")) {
		Ifc_document_reference *o = new Ifc_document_reference();
		o->location = step_parser.parse_string(object_attributes[0]);
		o->item_reference = step_parser.parse_string(object_attributes[1]);
		o->name = step_parser.parse_string(object_attributes[2]);
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
		o->parameter_takes_precedence = step_parser.parse_boolean(object_attributes[10]);
		o->sizeable = step_parser.parse_boolean(object_attributes[11]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDraughtingCallout")) {
		Ifc_draughting_callout *o = new Ifc_draughting_callout();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->contents.push_back((Ifc_draughting_callout_element *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->contents);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDraughtingCalloutRelationship")) {
		Ifc_draughting_callout_relationship *o = new Ifc_draughting_callout_relationship();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->relating_draughting_callout = (Ifc_draughting_callout *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->relating_draughting_callout);
		o->related_draughting_callout = (Ifc_draughting_callout *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->related_draughting_callout);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDraughtingPreDefinedColour")) {
		Ifc_draughting_pre_defined_colour *o = new Ifc_draughting_pre_defined_colour();
		o->name = step_parser.parse_string(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDraughtingPreDefinedCurveFont")) {
		Ifc_draughting_pre_defined_curve_font *o = new Ifc_draughting_pre_defined_curve_font();
		o->name = step_parser.parse_string(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDraughtingPreDefinedTextFont")) {
		Ifc_draughting_pre_defined_text_font *o = new Ifc_draughting_pre_defined_text_font();
		o->name = step_parser.parse_string(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDuctFittingType")) {
		Ifc_duct_fitting_type *o = new Ifc_duct_fitting_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDuctSegmentType")) {
		Ifc_duct_segment_type *o = new Ifc_duct_segment_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcDuctSilencerType")) {
		Ifc_duct_silencer_type *o = new Ifc_duct_silencer_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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
		o->same_sense = step_parser.parse_boolean(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcEdgeFeature")) {
		Ifc_edge_feature *o = new Ifc_edge_feature();
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
		return o;
	}

	else if (boost::iequals(object_class, "IfcEdgeLoop")) {
		Ifc_edge_loop *o = new Ifc_edge_loop();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->edge_list.push_back((Ifc_oriented_edge *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->edge_list);
		return o;
	}

	else if (boost::iequals(object_class, "IfcElectricApplianceType")) {
		Ifc_electric_appliance_type *o = new Ifc_electric_appliance_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcElectricDistributionPoint")) {
		Ifc_electric_distribution_point *o = new Ifc_electric_distribution_point();
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
		o->distribution_point_function = step_parser.parse_constant(object_attributes[8]);
		o->user_defined_function = step_parser.parse_string(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcElectricFlowStorageDeviceType")) {
		Ifc_electric_flow_storage_device_type *o = new Ifc_electric_flow_storage_device_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcElectricGeneratorType")) {
		Ifc_electric_generator_type *o = new Ifc_electric_generator_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcElectricHeaterType")) {
		Ifc_electric_heater_type *o = new Ifc_electric_heater_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcElectricMotorType")) {
		Ifc_electric_motor_type *o = new Ifc_electric_motor_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcElectricTimeControlType")) {
		Ifc_electric_time_control_type *o = new Ifc_electric_time_control_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcElectricalBaseProperties")) {
		Ifc_electrical_base_properties *o = new Ifc_electrical_base_properties();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->energy_sequence = step_parser.parse_constant(object_attributes[4]);
		o->user_defined_energy_sequence = step_parser.parse_string(object_attributes[5]);
		o->electric_current_type = step_parser.parse_constant(object_attributes[6]);
		o->input_voltage = step_parser.parse_double(object_attributes[7]);
		o->input_frequency = step_parser.parse_double(object_attributes[8]);
		o->full_load_current = step_parser.parse_double(object_attributes[9]);
		o->minimum_circuit_current = step_parser.parse_double(object_attributes[10]);
		o->maximum_power_input = step_parser.parse_double(object_attributes[11]);
		o->rated_power_input = step_parser.parse_double(object_attributes[12]);
		o->input_phase = step_parser.parse_integer(object_attributes[13]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcElectricalCircuit")) {
		Ifc_electrical_circuit *o = new Ifc_electrical_circuit();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
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

	else if (boost::iequals(object_class, "IfcElementAssembly")) {
		Ifc_element_assembly *o = new Ifc_element_assembly();
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
		o->assembly_place = step_parser.parse_constant(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcElementComponent")) {
		Ifc_element_component *o = new Ifc_element_component();
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

	else if (boost::iequals(object_class, "IfcElementComponentType")) {
		Ifc_element_component_type *o = new Ifc_element_component_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
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

	else if (boost::iequals(object_class, "IfcElementType")) {
		Ifc_element_type *o = new Ifc_element_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
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
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
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

	else if (boost::iequals(object_class, "IfcEnergyConversionDevice")) {
		Ifc_energy_conversion_device *o = new Ifc_energy_conversion_device();
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

	else if (boost::iequals(object_class, "IfcEnergyConversionDeviceType")) {
		Ifc_energy_conversion_device_type *o = new Ifc_energy_conversion_device_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcEnergyProperties")) {
		Ifc_energy_properties *o = new Ifc_energy_properties();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->energy_sequence = step_parser.parse_constant(object_attributes[4]);
		o->user_defined_energy_sequence = step_parser.parse_string(object_attributes[5]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcEnvironmentalImpactValue")) {
		Ifc_environmental_impact_value *o = new Ifc_environmental_impact_value();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->applied_value = (Ifc_applied_value_select *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->applied_value);
		o->unit_basis = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->unit_basis);
		o->applicable_date = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->applicable_date);
		o->fixed_until_date = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->fixed_until_date);
		o->impact_type = step_parser.parse_string(object_attributes[6]);
		o->category = step_parser.parse_constant(object_attributes[7]);
		o->user_defined_category = step_parser.parse_string(object_attributes[8]);
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

	else if (boost::iequals(object_class, "IfcEvaporativeCoolerType")) {
		Ifc_evaporative_cooler_type *o = new Ifc_evaporative_cooler_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcEvaporatorType")) {
		Ifc_evaporator_type *o = new Ifc_evaporator_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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
		o->location = step_parser.parse_string(object_attributes[0]);
		o->item_reference = step_parser.parse_string(object_attributes[1]);
		o->name = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcExternallyDefinedHatchStyle")) {
		Ifc_externally_defined_hatch_style *o = new Ifc_externally_defined_hatch_style();
		o->location = step_parser.parse_string(object_attributes[0]);
		o->item_reference = step_parser.parse_string(object_attributes[1]);
		o->name = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcExternallyDefinedSurfaceStyle")) {
		Ifc_externally_defined_surface_style *o = new Ifc_externally_defined_surface_style();
		o->location = step_parser.parse_string(object_attributes[0]);
		o->item_reference = step_parser.parse_string(object_attributes[1]);
		o->name = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcExternallyDefinedSymbol")) {
		Ifc_externally_defined_symbol *o = new Ifc_externally_defined_symbol();
		o->location = step_parser.parse_string(object_attributes[0]);
		o->item_reference = step_parser.parse_string(object_attributes[1]);
		o->name = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcExternallyDefinedTextFont")) {
		Ifc_externally_defined_text_font *o = new Ifc_externally_defined_text_font();
		o->location = step_parser.parse_string(object_attributes[0]);
		o->item_reference = step_parser.parse_string(object_attributes[1]);
		o->name = step_parser.parse_string(object_attributes[2]);
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
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
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
		o->orientation = step_parser.parse_boolean(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFaceOuterBound")) {
		Ifc_face_outer_bound *o = new Ifc_face_outer_bound();
		o->bound = (Ifc_loop *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->bound);
		o->orientation = step_parser.parse_boolean(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFaceSurface")) {
		Ifc_face_surface *o = new Ifc_face_surface();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->bounds.push_back((Ifc_face_bound *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->bounds);
		o->face_surface = (Ifc_surface *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->face_surface);
		o->same_sense = step_parser.parse_boolean(object_attributes[2]);
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

	else if (boost::iequals(object_class, "IfcFailureConnectionCondition")) {
		Ifc_failure_connection_condition *o = new Ifc_failure_connection_condition();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->tension_failure_x = step_parser.parse_double(object_attributes[1]);
		o->tension_failure_y = step_parser.parse_double(object_attributes[2]);
		o->tension_failure_z = step_parser.parse_double(object_attributes[3]);
		o->compression_failure_x = step_parser.parse_double(object_attributes[4]);
		o->compression_failure_y = step_parser.parse_double(object_attributes[5]);
		o->compression_failure_z = step_parser.parse_double(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFanType")) {
		Ifc_fan_type *o = new Ifc_fan_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFastener")) {
		Ifc_fastener *o = new Ifc_fastener();
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

	else if (boost::iequals(object_class, "IfcFastenerType")) {
		Ifc_fastener_type *o = new Ifc_fastener_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFeatureElement")) {
		Ifc_feature_element *o = new Ifc_feature_element();
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

	else if (boost::iequals(object_class, "IfcFeatureElementAddition")) {
		Ifc_feature_element_addition *o = new Ifc_feature_element_addition();
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

	else if (boost::iequals(object_class, "IfcFeatureElementSubtraction")) {
		Ifc_feature_element_subtraction *o = new Ifc_feature_element_subtraction();
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

	else if (boost::iequals(object_class, "IfcFillAreaStyle")) {
		Ifc_fill_area_style *o = new Ifc_fill_area_style();
		o->name = step_parser.parse_string(object_attributes[0]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->fill_styles.push_back((Ifc_fill_style_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->fill_styles);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFillAreaStyleHatching")) {
		Ifc_fill_area_style_hatching *o = new Ifc_fill_area_style_hatching();
		o->hatch_line_appearance = (Ifc_curve_style *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->hatch_line_appearance);
		o->start_of_next_hatch_line = (Ifc_hatch_line_distance_select *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->start_of_next_hatch_line);
		o->point_of_reference_hatch_line = (Ifc_cartesian_point *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->point_of_reference_hatch_line);
		o->pattern_start = (Ifc_cartesian_point *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->pattern_start);
		o->hatch_line_angle = step_parser.parse_double(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFillAreaStyleTileSymbolWithStyle")) {
		Ifc_fill_area_style_tile_symbol_with_style *o = new Ifc_fill_area_style_tile_symbol_with_style();
		o->symbol = (Ifc_annotation_symbol_occurrence *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->symbol);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFillAreaStyleTiles")) {
		Ifc_fill_area_style_tiles *o = new Ifc_fill_area_style_tiles();
		o->tiling_pattern = (Ifc_one_direction_repeat_factor *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->tiling_pattern);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->tiles.push_back((Ifc_fill_area_style_tile_shape_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->tiles);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcFilterType")) {
		Ifc_filter_type *o = new Ifc_filter_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFireSuppressionTerminalType")) {
		Ifc_fire_suppression_terminal_type *o = new Ifc_fire_suppression_terminal_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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
		return o;
	}

	else if (boost::iequals(object_class, "IfcFlowControllerType")) {
		Ifc_flow_controller_type *o = new Ifc_flow_controller_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
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
		return o;
	}

	else if (boost::iequals(object_class, "IfcFlowFittingType")) {
		Ifc_flow_fitting_type *o = new Ifc_flow_fitting_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFlowInstrumentType")) {
		Ifc_flow_instrument_type *o = new Ifc_flow_instrument_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFlowMeterType")) {
		Ifc_flow_meter_type *o = new Ifc_flow_meter_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFlowMovingDevice")) {
		Ifc_flow_moving_device *o = new Ifc_flow_moving_device();
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

	else if (boost::iequals(object_class, "IfcFlowMovingDeviceType")) {
		Ifc_flow_moving_device_type *o = new Ifc_flow_moving_device_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
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
		return o;
	}

	else if (boost::iequals(object_class, "IfcFlowSegmentType")) {
		Ifc_flow_segment_type *o = new Ifc_flow_segment_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFlowStorageDevice")) {
		Ifc_flow_storage_device *o = new Ifc_flow_storage_device();
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

	else if (boost::iequals(object_class, "IfcFlowStorageDeviceType")) {
		Ifc_flow_storage_device_type *o = new Ifc_flow_storage_device_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
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
		return o;
	}

	else if (boost::iequals(object_class, "IfcFlowTerminalType")) {
		Ifc_flow_terminal_type *o = new Ifc_flow_terminal_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFlowTreatmentDevice")) {
		Ifc_flow_treatment_device *o = new Ifc_flow_treatment_device();
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

	else if (boost::iequals(object_class, "IfcFlowTreatmentDeviceType")) {
		Ifc_flow_treatment_device_type *o = new Ifc_flow_treatment_device_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFluidFlowProperties")) {
		Ifc_fluid_flow_properties *o = new Ifc_fluid_flow_properties();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->property_source = step_parser.parse_constant(object_attributes[4]);
		o->flow_condition_time_series = (Ifc_time_series *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->flow_condition_time_series);
		o->velocity_time_series = (Ifc_time_series *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->velocity_time_series);
		o->flowrate_time_series = (Ifc_time_series *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->flowrate_time_series);
		o->fluid = (Ifc_material *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->fluid);
		o->pressure_time_series = (Ifc_time_series *)step_parser.parse_link(object_attributes[9]);
		links_to_resolve.push_back((Ifc **)&o->pressure_time_series);
		o->user_defined_property_source = step_parser.parse_string(object_attributes[10]);
		o->temperature_single_value = step_parser.parse_double(object_attributes[11]);
		o->wet_bulb_temperature_single_value = step_parser.parse_double(object_attributes[12]);
		o->wet_bulb_temperature_time_series = (Ifc_time_series *)step_parser.parse_link(object_attributes[13]);
		links_to_resolve.push_back((Ifc **)&o->wet_bulb_temperature_time_series);
		o->temperature_time_series = (Ifc_time_series *)step_parser.parse_link(object_attributes[14]);
		links_to_resolve.push_back((Ifc **)&o->temperature_time_series);
		o->flowrate_single_value = (Ifc_derived_measure_value *)step_parser.parse_link(object_attributes[15]);
		links_to_resolve.push_back((Ifc **)&o->flowrate_single_value);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->velocity_single_value = step_parser.parse_double(object_attributes[17]);
		o->pressure_single_value = step_parser.parse_double(object_attributes[18]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcFooting")) {
		Ifc_footing *o = new Ifc_footing();
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

	else if (boost::iequals(object_class, "IfcFuelProperties")) {
		Ifc_fuel_properties *o = new Ifc_fuel_properties();
		o->material = (Ifc_material *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->material);
		o->combustion_temperature = step_parser.parse_double(object_attributes[1]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->lower_heating_value = step_parser.parse_double(object_attributes[3]);
		o->higher_heating_value = step_parser.parse_double(object_attributes[4]);
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

	else if (boost::iequals(object_class, "IfcFurnishingElementType")) {
		Ifc_furnishing_element_type *o = new Ifc_furnishing_element_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
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

	else if (boost::iequals(object_class, "IfcFurnitureType")) {
		Ifc_furniture_type *o = new Ifc_furniture_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->assembly_place = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcGasTerminalType")) {
		Ifc_gas_terminal_type *o = new Ifc_gas_terminal_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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

	else if (boost::iequals(object_class, "IfcGeneralProfileProperties")) {
		Ifc_general_profile_properties *o = new Ifc_general_profile_properties();
		o->profile_name = step_parser.parse_string(object_attributes[0]);
		o->profile_definition = (Ifc_profile_def *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->profile_definition);
		o->physical_weight = step_parser.parse_double(object_attributes[2]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->cross_section_area = step_parser.parse_double(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcGeometricCurveSet")) {
		Ifc_geometric_curve_set *o = new Ifc_geometric_curve_set();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->elements.push_back((Ifc_geometric_set_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->elements);
		return o;
	}

	else if (boost::iequals(object_class, "IfcGeometricRepresentationContext")) {
		Ifc_geometric_representation_context *o = new Ifc_geometric_representation_context();
		o->context_identifier = step_parser.parse_string(object_attributes[0]);
		o->context_type = step_parser.parse_string(object_attributes[1]);
		o->coordinate_space_dimension = step_parser.parse_integer(object_attributes[2]);
		o->precision = step_parser.parse_double(object_attributes[3]);
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

	else if (boost::iequals(object_class, "IfcGeometricRepresentationSubContext")) {
		Ifc_geometric_representation_sub_context *o = new Ifc_geometric_representation_sub_context();
		o->context_identifier = step_parser.parse_string(object_attributes[0]);
		o->context_type = step_parser.parse_string(object_attributes[1]);
		o->coordinate_space_dimension = step_parser.parse_integer(object_attributes[2]);
		o->precision = step_parser.parse_double(object_attributes[3]);
		o->world_coordinate_system = (Ifc_axis_2_placement *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->world_coordinate_system);
		o->true_north = (Ifc_direction *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->true_north);
		o->parent_context = (Ifc_geometric_representation_context *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->parent_context);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->target_view = step_parser.parse_constant(object_attributes[8]);
		o->user_defined_target_view = step_parser.parse_string(object_attributes[9]);
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
		o->axis_tag = step_parser.parse_string(object_attributes[0]);
		o->axis_curve = (Ifc_curve *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->axis_curve);
		o->same_sense = step_parser.parse_boolean(object_attributes[2]);
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
		o->agreement_flag = step_parser.parse_boolean(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcHeatExchangerType")) {
		Ifc_heat_exchanger_type *o = new Ifc_heat_exchanger_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcHumidifierType")) {
		Ifc_humidifier_type *o = new Ifc_humidifier_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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

	else if (boost::iequals(object_class, "IfcIShapeProfileDef")) {
		Ifc_i_shape_profile_def *o = new Ifc_i_shape_profile_def();
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

	else if (boost::iequals(object_class, "IfcImageTexture")) {
		Ifc_image_texture *o = new Ifc_image_texture();
		o->repeat_s = step_parser.parse_boolean(object_attributes[0]);
		o->repeat_t = step_parser.parse_boolean(object_attributes[1]);
		o->texture_type = step_parser.parse_constant(object_attributes[2]);
		o->texture_transform = (Ifc_cartesian_transformation_operator_2_d *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->texture_transform);
		o->url_reference = step_parser.parse_string(object_attributes[4]);
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
		o->inventory_type = step_parser.parse_constant(object_attributes[5]);
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

	else if (boost::iequals(object_class, "IfcIrregularTimeSeries")) {
		Ifc_irregular_time_series *o = new Ifc_irregular_time_series();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->start_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->start_time);
		o->end_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->end_time);
		o->time_series_data_type = step_parser.parse_constant(object_attributes[4]);
		o->data_origin = step_parser.parse_constant(object_attributes[5]);
		o->user_defined_data_origin = step_parser.parse_string(object_attributes[6]);
		o->unit = (Ifc_unit *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->unit);
		for (auto i : step_parser.parse_list_of_links(object_attributes[8])) o->values.push_back((Ifc_irregular_time_series_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->values);
		return o;
	}

	else if (boost::iequals(object_class, "IfcIrregularTimeSeriesValue")) {
		Ifc_irregular_time_series_value *o = new Ifc_irregular_time_series_value();
		o->time_stamp = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->time_stamp);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->list_values.push_back((Ifc_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->list_values);
		return o;
	}

	else if (boost::iequals(object_class, "IfcJunctionBoxType")) {
		Ifc_junction_box_type *o = new Ifc_junction_box_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcLShapeProfileDef")) {
		Ifc_l_shape_profile_def *o = new Ifc_l_shape_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->position = (Ifc_axis_2_placement_2_d *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->leg_slope = step_parser.parse_double(object_attributes[8]);
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
		o->resource_identifier = step_parser.parse_string(object_attributes[5]);
		o->resource_group = step_parser.parse_string(object_attributes[6]);
		o->resource_consumption = step_parser.parse_constant(object_attributes[7]);
		o->base_quantity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->base_quantity);
		o->skill_set = step_parser.parse_string(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcLampType")) {
		Ifc_lamp_type *o = new Ifc_lamp_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcLibraryInformation")) {
		Ifc_library_information *o = new Ifc_library_information();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->version = step_parser.parse_string(object_attributes[1]);
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
		o->location = step_parser.parse_string(object_attributes[0]);
		o->item_reference = step_parser.parse_string(object_attributes[1]);
		o->name = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcLightDistributionData")) {
		Ifc_light_distribution_data *o = new Ifc_light_distribution_data();
		o->main_plane_angle = step_parser.parse_double(object_attributes[0]);
		o->secondary_plane_angle = step_parser.parse_list_of_doubles(object_attributes[1]);
		o->luminous_intensity = step_parser.parse_list_of_doubles(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcLightFixtureType")) {
		Ifc_light_fixture_type *o = new Ifc_light_fixture_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcLightIntensityDistribution")) {
		Ifc_light_intensity_distribution *o = new Ifc_light_intensity_distribution();
		o->light_distribution_curve = step_parser.parse_constant(object_attributes[0]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->distribution_data.push_back((Ifc_light_distribution_data *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->distribution_data);
		return o;
	}

	else if (boost::iequals(object_class, "IfcLightSource")) {
		Ifc_light_source *o = new Ifc_light_source();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->light_colour = (Ifc_colour_rgb *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->light_colour);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcLightSourceAmbient")) {
		Ifc_light_source_ambient *o = new Ifc_light_source_ambient();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->light_colour = (Ifc_colour_rgb *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->light_colour);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcLightSourceDirectional")) {
		Ifc_light_source_directional *o = new Ifc_light_source_directional();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->light_colour = (Ifc_colour_rgb *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->light_colour);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		o->orientation = (Ifc_direction *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->orientation);
		return o;
	}

	else if (boost::iequals(object_class, "IfcLightSourceGoniometric")) {
		Ifc_light_source_goniometric *o = new Ifc_light_source_goniometric();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->light_colour = (Ifc_colour_rgb *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->light_colour);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		o->position = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->position);
		o->colour_appearance = (Ifc_colour_rgb *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->colour_appearance);
		o->colour_temperature = step_parser.parse_double(object_attributes[6]);
		o->luminous_flux = step_parser.parse_double(object_attributes[7]);
		o->light_emission_source = step_parser.parse_constant(object_attributes[8]);
		o->light_distribution_data_source = (Ifc_light_distribution_data_source_select *)step_parser.parse_link(object_attributes[9]);
		links_to_resolve.push_back((Ifc **)&o->light_distribution_data_source);
		return o;
	}

	else if (boost::iequals(object_class, "IfcLightSourcePositional")) {
		Ifc_light_source_positional *o = new Ifc_light_source_positional();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->light_colour = (Ifc_colour_rgb *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->light_colour);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		o->position = (Ifc_cartesian_point *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->constant_attenuation = step_parser.parse_double(object_attributes[6]);
		o->distance_attenuation = step_parser.parse_double(object_attributes[7]);
		o->quadric_attenuation = step_parser.parse_double(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcLightSourceSpot")) {
		Ifc_light_source_spot *o = new Ifc_light_source_spot();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->light_colour = (Ifc_colour_rgb *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->light_colour);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		o->position = (Ifc_cartesian_point *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->constant_attenuation = step_parser.parse_double(object_attributes[6]);
		o->distance_attenuation = step_parser.parse_double(object_attributes[7]);
		o->quadric_attenuation = step_parser.parse_double(object_attributes[8]);
		o->orientation = (Ifc_direction *)step_parser.parse_link(object_attributes[9]);
		links_to_resolve.push_back((Ifc **)&o->orientation);
		o->concentration_exponent = step_parser.parse_double(object_attributes[10]);
		//TODO: parse non-pointer type: typedef Ifc_plane_angle_measure Ifc_positive_plane_angle_measure;
		//TODO: parse non-pointer type: typedef Ifc_plane_angle_measure Ifc_positive_plane_angle_measure;
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

	else if (boost::iequals(object_class, "IfcLinearDimension")) {
		Ifc_linear_dimension *o = new Ifc_linear_dimension();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->contents.push_back((Ifc_draughting_callout_element *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->contents);
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

	else if (boost::iequals(object_class, "IfcManifoldSolidBrep")) {
		Ifc_manifold_solid_brep *o = new Ifc_manifold_solid_brep();
		o->outer = (Ifc_closed_shell *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->outer);
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
		o->name = step_parser.parse_string(object_attributes[0]);
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

	else if (boost::iequals(object_class, "IfcMaterialDefinitionRepresentation")) {
		Ifc_material_definition_representation *o = new Ifc_material_definition_representation();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[2])) o->representations.push_back((Ifc_representation *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->representations);
		o->represented_material = (Ifc_material *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->represented_material);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMaterialLayer")) {
		Ifc_material_layer *o = new Ifc_material_layer();
		o->material = (Ifc_material *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->material);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->is_ventilated = step_parser.parse_integer(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMaterialLayerSet")) {
		Ifc_material_layer_set *o = new Ifc_material_layer_set();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->material_layers.push_back((Ifc_material_layer *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->material_layers);
		o->layer_set_name = step_parser.parse_string(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMaterialLayerSetUsage")) {
		Ifc_material_layer_set_usage *o = new Ifc_material_layer_set_usage();
		o->for_layer_set = (Ifc_material_layer_set *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->for_layer_set);
		o->layer_set_direction = step_parser.parse_constant(object_attributes[1]);
		o->direction_sense = step_parser.parse_constant(object_attributes[2]);
		o->offset_from_reference_line = step_parser.parse_double(object_attributes[3]);
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

	else if (boost::iequals(object_class, "IfcMechanicalConcreteMaterialProperties")) {
		Ifc_mechanical_concrete_material_properties *o = new Ifc_mechanical_concrete_material_properties();
		o->material = (Ifc_material *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->material);
		o->dynamic_viscosity = step_parser.parse_double(object_attributes[1]);
		o->young_modulus = step_parser.parse_double(object_attributes[2]);
		o->shear_modulus = step_parser.parse_double(object_attributes[3]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->thermal_expansion_coefficient = step_parser.parse_double(object_attributes[5]);
		o->compressive_strength = step_parser.parse_double(object_attributes[6]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->admixtures_description = step_parser.parse_string(object_attributes[8]);
		o->workability = step_parser.parse_string(object_attributes[9]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		o->water_impermeability = step_parser.parse_string(object_attributes[11]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMechanicalFastener")) {
		Ifc_mechanical_fastener *o = new Ifc_mechanical_fastener();
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

	else if (boost::iequals(object_class, "IfcMechanicalFastenerType")) {
		Ifc_mechanical_fastener_type *o = new Ifc_mechanical_fastener_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMechanicalMaterialProperties")) {
		Ifc_mechanical_material_properties *o = new Ifc_mechanical_material_properties();
		o->material = (Ifc_material *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->material);
		o->dynamic_viscosity = step_parser.parse_double(object_attributes[1]);
		o->young_modulus = step_parser.parse_double(object_attributes[2]);
		o->shear_modulus = step_parser.parse_double(object_attributes[3]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->thermal_expansion_coefficient = step_parser.parse_double(object_attributes[5]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMechanicalSteelMaterialProperties")) {
		Ifc_mechanical_steel_material_properties *o = new Ifc_mechanical_steel_material_properties();
		o->material = (Ifc_material *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->material);
		o->dynamic_viscosity = step_parser.parse_double(object_attributes[1]);
		o->young_modulus = step_parser.parse_double(object_attributes[2]);
		o->shear_modulus = step_parser.parse_double(object_attributes[3]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->thermal_expansion_coefficient = step_parser.parse_double(object_attributes[5]);
		o->yield_stress = step_parser.parse_double(object_attributes[6]);
		o->ultimate_stress = step_parser.parse_double(object_attributes[7]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->hardening_module = step_parser.parse_double(object_attributes[9]);
		o->proportional_stress = step_parser.parse_double(object_attributes[10]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		for (auto i : step_parser.parse_list_of_links(object_attributes[12])) o->relaxations.push_back((Ifc_relaxation *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->relaxations);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMember")) {
		Ifc_member *o = new Ifc_member();
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

	else if (boost::iequals(object_class, "IfcMemberType")) {
		Ifc_member_type *o = new Ifc_member_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMetric")) {
		Ifc_metric *o = new Ifc_metric();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->constraint_grade = step_parser.parse_constant(object_attributes[2]);
		o->constraint_source = step_parser.parse_string(object_attributes[3]);
		o->creating_actor = (Ifc_actor_select *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->creating_actor);
		o->creation_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->creation_time);
		o->user_defined_grade = step_parser.parse_string(object_attributes[6]);
		o->benchmark = step_parser.parse_constant(object_attributes[7]);
		o->value_source = step_parser.parse_string(object_attributes[8]);
		o->data_value = (Ifc_metric_value_select *)step_parser.parse_link(object_attributes[9]);
		links_to_resolve.push_back((Ifc **)&o->data_value);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMonetaryUnit")) {
		Ifc_monetary_unit *o = new Ifc_monetary_unit();
		o->currency = step_parser.parse_constant(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcMotorConnectionType")) {
		Ifc_motor_connection_type *o = new Ifc_motor_connection_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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
		o->task_id = step_parser.parse_string(object_attributes[5]);
		o->status = step_parser.parse_string(object_attributes[6]);
		o->work_method = step_parser.parse_string(object_attributes[7]);
		o->is_milestone = step_parser.parse_boolean(object_attributes[8]);
		o->priority = step_parser.parse_integer(object_attributes[9]);
		o->move_from = (Ifc_spatial_structure_element *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->move_from);
		o->move_to = (Ifc_spatial_structure_element *)step_parser.parse_link(object_attributes[11]);
		links_to_resolve.push_back((Ifc **)&o->move_to);
		o->punch_list = step_parser.parse_list_of_strings(object_attributes[12]);
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

	else if (boost::iequals(object_class, "IfcObjectDefinition")) {
		Ifc_object_definition *o = new Ifc_object_definition();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcObjectPlacement")) {
		Ifc_object_placement *o = new Ifc_object_placement();
		return o;
	}

	else if (boost::iequals(object_class, "IfcObjective")) {
		Ifc_objective *o = new Ifc_objective();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->constraint_grade = step_parser.parse_constant(object_attributes[2]);
		o->constraint_source = step_parser.parse_string(object_attributes[3]);
		o->creating_actor = (Ifc_actor_select *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->creating_actor);
		o->creation_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->creation_time);
		o->user_defined_grade = step_parser.parse_string(object_attributes[6]);
		o->benchmark_values = (Ifc_metric *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->benchmark_values);
		o->result_values = (Ifc_metric *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->result_values);
		o->objective_qualifier = step_parser.parse_constant(object_attributes[9]);
		o->user_defined_qualifier = step_parser.parse_string(object_attributes[10]);
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
		o->predefined_type = step_parser.parse_constant(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcOffsetCurve2D")) {
		Ifc_offset_curve_2_d *o = new Ifc_offset_curve_2_d();
		o->basis_curve = (Ifc_curve *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->basis_curve);
		o->distance = step_parser.parse_double(object_attributes[1]);
		//o->self_intersect = step_parser.parse_logical(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcOffsetCurve3D")) {
		Ifc_offset_curve_3_d *o = new Ifc_offset_curve_3_d();
		o->basis_curve = (Ifc_curve *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->basis_curve);
		o->distance = step_parser.parse_double(object_attributes[1]);
		//o->self_intersect = step_parser.parse_logical(object_attributes[2]);
		o->ref_direction = (Ifc_direction *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->ref_direction);
		return o;
	}

	else if (boost::iequals(object_class, "IfcOneDirectionRepeatFactor")) {
		Ifc_one_direction_repeat_factor *o = new Ifc_one_direction_repeat_factor();
		o->repeat_factor = (Ifc_vector *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->repeat_factor);
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

	else if (boost::iequals(object_class, "IfcOrderAction")) {
		Ifc_order_action *o = new Ifc_order_action();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->task_id = step_parser.parse_string(object_attributes[5]);
		o->status = step_parser.parse_string(object_attributes[6]);
		o->work_method = step_parser.parse_string(object_attributes[7]);
		o->is_milestone = step_parser.parse_boolean(object_attributes[8]);
		o->priority = step_parser.parse_integer(object_attributes[9]);
		o->action_i_d = step_parser.parse_string(object_attributes[10]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcOrganization")) {
		Ifc_organization *o = new Ifc_organization();
		o->_id = step_parser.parse_string(object_attributes[0]);
		o->name = step_parser.parse_string(object_attributes[1]);
		o->description = step_parser.parse_string(object_attributes[2]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[3])) o->roles.push_back((Ifc_actor_role *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->roles);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->addresses.push_back((Ifc_address *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->addresses);
		return o;
	}

	else if (boost::iequals(object_class, "IfcOrganizationRelationship")) {
		Ifc_organization_relationship *o = new Ifc_organization_relationship();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
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
		o->orientation = step_parser.parse_boolean(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcOutletType")) {
		Ifc_outlet_type *o = new Ifc_outlet_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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

	else if (boost::iequals(object_class, "IfcParameterizedProfileDef")) {
		Ifc_parameterized_profile_def *o = new Ifc_parameterized_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->position = (Ifc_axis_2_placement_2_d *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->position);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPath")) {
		Ifc_path *o = new Ifc_path();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->edge_list.push_back((Ifc_oriented_edge *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->edge_list);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPerformanceHistory")) {
		Ifc_performance_history *o = new Ifc_performance_history();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->life_cycle_phase = step_parser.parse_string(object_attributes[5]);
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

	else if (boost::iequals(object_class, "IfcPermit")) {
		Ifc_permit *o = new Ifc_permit();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->permit_i_d = step_parser.parse_string(object_attributes[5]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPerson")) {
		Ifc_person *o = new Ifc_person();
		o->_id = step_parser.parse_string(object_attributes[0]);
		o->family_name = step_parser.parse_string(object_attributes[1]);
		o->given_name = step_parser.parse_string(object_attributes[2]);
		o->middle_names = step_parser.parse_list_of_strings(object_attributes[3]);
		o->prefix_titles = step_parser.parse_list_of_strings(object_attributes[4]);
		o->suffix_titles = step_parser.parse_list_of_strings(object_attributes[5]);
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

	else if (boost::iequals(object_class, "IfcPhysicalComplexQuantity")) {
		Ifc_physical_complex_quantity *o = new Ifc_physical_complex_quantity();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[2])) o->has_quantities.push_back((Ifc_physical_quantity *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->has_quantities);
		o->discrimination = step_parser.parse_string(object_attributes[3]);
		o->quality = step_parser.parse_string(object_attributes[4]);
		o->usage = step_parser.parse_string(object_attributes[5]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPhysicalQuantity")) {
		Ifc_physical_quantity *o = new Ifc_physical_quantity();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPhysicalSimpleQuantity")) {
		Ifc_physical_simple_quantity *o = new Ifc_physical_simple_quantity();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->unit = (Ifc_named_unit *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->unit);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPile")) {
		Ifc_pile *o = new Ifc_pile();
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
		o->construction_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPipeFittingType")) {
		Ifc_pipe_fitting_type *o = new Ifc_pipe_fitting_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPipeSegmentType")) {
		Ifc_pipe_segment_type *o = new Ifc_pipe_segment_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPixelTexture")) {
		Ifc_pixel_texture *o = new Ifc_pixel_texture();
		o->repeat_s = step_parser.parse_boolean(object_attributes[0]);
		o->repeat_t = step_parser.parse_boolean(object_attributes[1]);
		o->texture_type = step_parser.parse_constant(object_attributes[2]);
		o->texture_transform = (Ifc_cartesian_transformation_operator_2_d *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->texture_transform);
		o->width = step_parser.parse_integer(object_attributes[4]);
		o->height = step_parser.parse_integer(object_attributes[5]);
		o->colour_components = step_parser.parse_integer(object_attributes[6]);
		//TODO: parse other container of pod
		return o;
	}

	else if (boost::iequals(object_class, "IfcPlacement")) {
		Ifc_placement *o = new Ifc_placement();
		o->location = (Ifc_cartesian_point *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->location);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPlanarBox")) {
		Ifc_planar_box *o = new Ifc_planar_box();
		o->size_in_x = step_parser.parse_double(object_attributes[0]);
		o->size_in_y = step_parser.parse_double(object_attributes[1]);
		o->placement = (Ifc_axis_2_placement *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->placement);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPlanarExtent")) {
		Ifc_planar_extent *o = new Ifc_planar_extent();
		o->size_in_x = step_parser.parse_double(object_attributes[0]);
		o->size_in_y = step_parser.parse_double(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPlane")) {
		Ifc_plane *o = new Ifc_plane();
		o->position = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->position);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPlate")) {
		Ifc_plate *o = new Ifc_plate();
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

	else if (boost::iequals(object_class, "IfcPlateType")) {
		Ifc_plate_type *o = new Ifc_plate_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPoint")) {
		Ifc_point *o = new Ifc_point();
		return o;
	}

	else if (boost::iequals(object_class, "IfcPointOnCurve")) {
		Ifc_point_on_curve *o = new Ifc_point_on_curve();
		o->basis_curve = (Ifc_curve *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->basis_curve);
		o->point_parameter = step_parser.parse_double(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPointOnSurface")) {
		Ifc_point_on_surface *o = new Ifc_point_on_surface();
		o->basis_surface = (Ifc_surface *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->basis_surface);
		o->point_parameter_u = step_parser.parse_double(object_attributes[1]);
		o->point_parameter_v = step_parser.parse_double(object_attributes[2]);
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
		o->agreement_flag = step_parser.parse_boolean(object_attributes[1]);
		o->position = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->position);
		o->polygonal_boundary = (Ifc_bounded_curve *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->polygonal_boundary);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPolyline")) {
		Ifc_polyline *o = new Ifc_polyline();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->points.push_back((Ifc_cartesian_point *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->points);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPort")) {
		Ifc_port *o = new Ifc_port();
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

	else if (boost::iequals(object_class, "IfcPostalAddress")) {
		Ifc_postal_address *o = new Ifc_postal_address();
		o->purpose = step_parser.parse_constant(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->user_defined_purpose = step_parser.parse_string(object_attributes[2]);
		o->internal_location = step_parser.parse_string(object_attributes[3]);
		o->address_lines = step_parser.parse_list_of_strings(object_attributes[4]);
		o->postal_box = step_parser.parse_string(object_attributes[5]);
		o->town = step_parser.parse_string(object_attributes[6]);
		o->region = step_parser.parse_string(object_attributes[7]);
		o->postal_code = step_parser.parse_string(object_attributes[8]);
		o->country = step_parser.parse_string(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPreDefinedColour")) {
		Ifc_pre_defined_colour *o = new Ifc_pre_defined_colour();
		o->name = step_parser.parse_string(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPreDefinedCurveFont")) {
		Ifc_pre_defined_curve_font *o = new Ifc_pre_defined_curve_font();
		o->name = step_parser.parse_string(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPreDefinedDimensionSymbol")) {
		Ifc_pre_defined_dimension_symbol *o = new Ifc_pre_defined_dimension_symbol();
		o->name = step_parser.parse_string(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPreDefinedItem")) {
		Ifc_pre_defined_item *o = new Ifc_pre_defined_item();
		o->name = step_parser.parse_string(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPreDefinedPointMarkerSymbol")) {
		Ifc_pre_defined_point_marker_symbol *o = new Ifc_pre_defined_point_marker_symbol();
		o->name = step_parser.parse_string(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPreDefinedSymbol")) {
		Ifc_pre_defined_symbol *o = new Ifc_pre_defined_symbol();
		o->name = step_parser.parse_string(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPreDefinedTerminatorSymbol")) {
		Ifc_pre_defined_terminator_symbol *o = new Ifc_pre_defined_terminator_symbol();
		o->name = step_parser.parse_string(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPreDefinedTextFont")) {
		Ifc_pre_defined_text_font *o = new Ifc_pre_defined_text_font();
		o->name = step_parser.parse_string(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPresentationLayerAssignment")) {
		Ifc_presentation_layer_assignment *o = new Ifc_presentation_layer_assignment();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[2])) o->assigned_items.push_back((Ifc_layered_item *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->assigned_items);
		o->identifier = step_parser.parse_string(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPresentationLayerWithStyle")) {
		Ifc_presentation_layer_with_style *o = new Ifc_presentation_layer_with_style();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[2])) o->assigned_items.push_back((Ifc_layered_item *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->assigned_items);
		o->identifier = step_parser.parse_string(object_attributes[3]);
		//o->layer_on = step_parser.parse_logical(object_attributes[4]);
		//o->layer_frozen = step_parser.parse_logical(object_attributes[5]);
		//o->layer_blocked = step_parser.parse_logical(object_attributes[6]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->layer_styles.push_back((Ifc_presentation_style_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->layer_styles);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPresentationStyle")) {
		Ifc_presentation_style *o = new Ifc_presentation_style();
		o->name = step_parser.parse_string(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcPresentationStyleAssignment")) {
		Ifc_presentation_style_assignment *o = new Ifc_presentation_style_assignment();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->styles.push_back((Ifc_presentation_style_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->styles);
		return o;
	}

	else if (boost::iequals(object_class, "IfcProcedure")) {
		Ifc_procedure *o = new Ifc_procedure();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->procedure_i_d = step_parser.parse_string(object_attributes[5]);
		o->procedure_type = step_parser.parse_constant(object_attributes[6]);
		o->user_defined_procedure_type = step_parser.parse_string(object_attributes[7]);
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

	else if (boost::iequals(object_class, "IfcProductsOfCombustionProperties")) {
		Ifc_products_of_combustion_properties *o = new Ifc_products_of_combustion_properties();
		o->material = (Ifc_material *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->material);
		o->specific_heat_capacity = step_parser.parse_double(object_attributes[1]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcProfileDef")) {
		Ifc_profile_def *o = new Ifc_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcProfileProperties")) {
		Ifc_profile_properties *o = new Ifc_profile_properties();
		o->profile_name = step_parser.parse_string(object_attributes[0]);
		o->profile_definition = (Ifc_profile_def *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->profile_definition);
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
		o->i_d = step_parser.parse_string(object_attributes[5]);
		o->predefined_type = step_parser.parse_constant(object_attributes[6]);
		o->status = step_parser.parse_string(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcProjectOrderRecord")) {
		Ifc_project_order_record *o = new Ifc_project_order_record();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->records.push_back((Ifc_rel_assigns_to_project_order *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->records);
		o->predefined_type = step_parser.parse_constant(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcProjectionCurve")) {
		Ifc_projection_curve *o = new Ifc_projection_curve();
		o->item = (Ifc_representation_item *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->item);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->styles.push_back((Ifc_presentation_style_assignment *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->styles);
		o->name = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcProjectionElement")) {
		Ifc_projection_element *o = new Ifc_projection_element();
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

	else if (boost::iequals(object_class, "IfcPropertyConstraintRelationship")) {
		Ifc_property_constraint_relationship *o = new Ifc_property_constraint_relationship();
		o->relating_constraint = (Ifc_constraint *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->relating_constraint);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->related_properties.push_back((Ifc_property *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_properties);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
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

	else if (boost::iequals(object_class, "IfcPropertyDependencyRelationship")) {
		Ifc_property_dependency_relationship *o = new Ifc_property_dependency_relationship();
		o->depending_property = (Ifc_property *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->depending_property);
		o->dependant_property = (Ifc_property *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->dependant_property);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->expression = step_parser.parse_string(object_attributes[4]);
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

	else if (boost::iequals(object_class, "IfcPropertyListValue")) {
		Ifc_property_list_value *o = new Ifc_property_list_value();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[2])) o->list_values.push_back((Ifc_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->list_values);
		o->unit = (Ifc_unit *)step_parser.parse_link(object_attributes[3]);
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

	else if (boost::iequals(object_class, "IfcProtectiveDeviceType")) {
		Ifc_protective_device_type *o = new Ifc_protective_device_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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

	else if (boost::iequals(object_class, "IfcPumpType")) {
		Ifc_pump_type *o = new Ifc_pump_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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

	else if (boost::iequals(object_class, "IfcQuantityTime")) {
		Ifc_quantity_time *o = new Ifc_quantity_time();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->unit = (Ifc_named_unit *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->unit);
		o->time_value = step_parser.parse_double(object_attributes[3]);
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

	else if (boost::iequals(object_class, "IfcRadiusDimension")) {
		Ifc_radius_dimension *o = new Ifc_radius_dimension();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->contents.push_back((Ifc_draughting_callout_element *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->contents);
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

	else if (boost::iequals(object_class, "IfcRailingType")) {
		Ifc_railing_type *o = new Ifc_railing_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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

	else if (boost::iequals(object_class, "IfcRampFlightType")) {
		Ifc_ramp_flight_type *o = new Ifc_ramp_flight_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRationalBezierCurve")) {
		Ifc_rational_bezier_curve *o = new Ifc_rational_bezier_curve();
		o->degree = step_parser.parse_integer(object_attributes[0]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->control_points_list.push_back((Ifc_cartesian_point *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->control_points_list);
		o->curve_form = step_parser.parse_constant(object_attributes[2]);
		//o->closed_curve = step_parser.parse_logical(object_attributes[3]);
		//o->self_intersect = step_parser.parse_logical(object_attributes[4]);
		o->weights_data = step_parser.parse_list_of_doubles(object_attributes[5]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRectangleHollowProfileDef")) {
		Ifc_rectangle_hollow_profile_def *o = new Ifc_rectangle_hollow_profile_def();
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

	else if (boost::iequals(object_class, "IfcRectangularPyramid")) {
		Ifc_rectangular_pyramid *o = new Ifc_rectangular_pyramid();
		o->position = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcRectangularTrimmedSurface")) {
		Ifc_rectangular_trimmed_surface *o = new Ifc_rectangular_trimmed_surface();
		o->basis_surface = (Ifc_surface *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->basis_surface);
		o->u_1 = step_parser.parse_double(object_attributes[1]);
		o->v_1 = step_parser.parse_double(object_attributes[2]);
		o->u_2 = step_parser.parse_double(object_attributes[3]);
		o->v_2 = step_parser.parse_double(object_attributes[4]);
		o->usense = step_parser.parse_boolean(object_attributes[5]);
		o->vsense = step_parser.parse_boolean(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcReferencesValueDocument")) {
		Ifc_references_value_document *o = new Ifc_references_value_document();
		o->referenced_document = (Ifc_document_select *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->referenced_document);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->referencing_values.push_back((Ifc_applied_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->referencing_values);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRegularTimeSeries")) {
		Ifc_regular_time_series *o = new Ifc_regular_time_series();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->start_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->start_time);
		o->end_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->end_time);
		o->time_series_data_type = step_parser.parse_constant(object_attributes[4]);
		o->data_origin = step_parser.parse_constant(object_attributes[5]);
		o->user_defined_data_origin = step_parser.parse_string(object_attributes[6]);
		o->unit = (Ifc_unit *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->unit);
		o->time_step = step_parser.parse_double(object_attributes[8]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[9])) o->values.push_back((Ifc_time_series_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->values);
		return o;
	}

	else if (boost::iequals(object_class, "IfcReinforcementBarProperties")) {
		Ifc_reinforcement_bar_properties *o = new Ifc_reinforcement_bar_properties();
		o->total_cross_section_area = step_parser.parse_double(object_attributes[0]);
		o->steel_grade = step_parser.parse_string(object_attributes[1]);
		o->bar_surface = step_parser.parse_constant(object_attributes[2]);
		o->effective_depth = step_parser.parse_double(object_attributes[3]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef unsigned int Ifc_count_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcReinforcementDefinitionProperties")) {
		Ifc_reinforcement_definition_properties *o = new Ifc_reinforcement_definition_properties();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->definition_type = step_parser.parse_string(object_attributes[4]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->reinforcement_section_definitions.push_back((Ifc_section_reinforcement_properties *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->reinforcement_section_definitions);
		return o;
	}

	else if (boost::iequals(object_class, "IfcReinforcingBar")) {
		Ifc_reinforcing_bar *o = new Ifc_reinforcing_bar();
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
		o->steel_grade = step_parser.parse_string(object_attributes[8]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->cross_section_area = step_parser.parse_double(object_attributes[10]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->bar_role = step_parser.parse_constant(object_attributes[12]);
		o->bar_surface = step_parser.parse_constant(object_attributes[13]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcReinforcingElement")) {
		Ifc_reinforcing_element *o = new Ifc_reinforcing_element();
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
		o->steel_grade = step_parser.parse_string(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcReinforcingMesh")) {
		Ifc_reinforcing_mesh *o = new Ifc_reinforcing_mesh();
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
		o->steel_grade = step_parser.parse_string(object_attributes[8]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->longitudinal_bar_cross_section_area = step_parser.parse_double(object_attributes[13]);
		o->transverse_bar_cross_section_area = step_parser.parse_double(object_attributes[14]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAggregates")) {
		Ifc_rel_aggregates *o = new Ifc_rel_aggregates();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_object = (Ifc_object_definition *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_object);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->related_objects.push_back((Ifc_object_definition *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssigns")) {
		Ifc_rel_assigns *o = new Ifc_rel_assigns();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object_definition *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->related_objects_type = step_parser.parse_constant(object_attributes[5]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssignsTasks")) {
		Ifc_rel_assigns_tasks *o = new Ifc_rel_assigns_tasks();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object_definition *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->related_objects_type = step_parser.parse_constant(object_attributes[5]);
		o->relating_control = (Ifc_control *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->relating_control);
		o->time_for_task = (Ifc_schedule_time_control *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->time_for_task);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssignsToActor")) {
		Ifc_rel_assigns_to_actor *o = new Ifc_rel_assigns_to_actor();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object_definition *)i);
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
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object_definition *)i);
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
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object_definition *)i);
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
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object_definition *)i);
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
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object_definition *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->related_objects_type = step_parser.parse_constant(object_attributes[5]);
		o->relating_product = (Ifc_product *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->relating_product);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssignsToProjectOrder")) {
		Ifc_rel_assigns_to_project_order *o = new Ifc_rel_assigns_to_project_order();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object_definition *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->related_objects_type = step_parser.parse_constant(object_attributes[5]);
		o->relating_control = (Ifc_control *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->relating_control);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssignsToResource")) {
		Ifc_rel_assigns_to_resource *o = new Ifc_rel_assigns_to_resource();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object_definition *)i);
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

	else if (boost::iequals(object_class, "IfcRelAssociatesAppliedValue")) {
		Ifc_rel_associates_applied_value *o = new Ifc_rel_associates_applied_value();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_root *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->relating_applied_value = (Ifc_applied_value *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->relating_applied_value);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelAssociatesApproval")) {
		Ifc_rel_associates_approval *o = new Ifc_rel_associates_approval();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_root *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->relating_approval = (Ifc_approval *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->relating_approval);
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

	else if (boost::iequals(object_class, "IfcRelAssociatesConstraint")) {
		Ifc_rel_associates_constraint *o = new Ifc_rel_associates_constraint();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_root *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->intent = step_parser.parse_string(object_attributes[5]);
		o->relating_constraint = (Ifc_constraint *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->relating_constraint);
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

	else if (boost::iequals(object_class, "IfcRelAssociatesProfileProperties")) {
		Ifc_rel_associates_profile_properties *o = new Ifc_rel_associates_profile_properties();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_root *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->relating_profile_properties = (Ifc_profile_properties *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->relating_profile_properties);
		o->profile_section_location = (Ifc_shape_aspect *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->profile_section_location);
		o->profile_orientation = (Ifc_orientation_select *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->profile_orientation);
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
		//o->relating_priorities = step_parser.parse_list_of_integers(object_attributes[7]);
		//o->related_priorities = step_parser.parse_list_of_integers(object_attributes[8]);
		o->related_connection_type = step_parser.parse_constant(object_attributes[9]);
		o->relating_connection_type = step_parser.parse_constant(object_attributes[10]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelConnectsPortToElement")) {
		Ifc_rel_connects_port_to_element *o = new Ifc_rel_connects_port_to_element();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_port = (Ifc_port *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_port);
		o->related_element = (Ifc_element *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->related_element);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelConnectsPorts")) {
		Ifc_rel_connects_ports *o = new Ifc_rel_connects_ports();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_port = (Ifc_port *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_port);
		o->related_port = (Ifc_port *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->related_port);
		o->realizing_element = (Ifc_element *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->realizing_element);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelConnectsStructuralActivity")) {
		Ifc_rel_connects_structural_activity *o = new Ifc_rel_connects_structural_activity();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_element = (Ifc_structural_activity_assignment_select *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_element);
		o->related_structural_activity = (Ifc_structural_activity *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->related_structural_activity);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelConnectsStructuralElement")) {
		Ifc_rel_connects_structural_element *o = new Ifc_rel_connects_structural_element();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_element = (Ifc_element *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_element);
		o->related_structural_member = (Ifc_structural_member *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->related_structural_member);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelConnectsStructuralMember")) {
		Ifc_rel_connects_structural_member *o = new Ifc_rel_connects_structural_member();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_structural_member = (Ifc_structural_member *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_structural_member);
		o->related_structural_connection = (Ifc_structural_connection *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->related_structural_connection);
		o->applied_condition = (Ifc_boundary_condition *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->applied_condition);
		o->additional_conditions = (Ifc_structural_connection_condition *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->additional_conditions);
		o->supported_length = step_parser.parse_double(object_attributes[8]);
		o->condition_coordinate_system = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[9]);
		links_to_resolve.push_back((Ifc **)&o->condition_coordinate_system);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelConnectsWithEccentricity")) {
		Ifc_rel_connects_with_eccentricity *o = new Ifc_rel_connects_with_eccentricity();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_structural_member = (Ifc_structural_member *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_structural_member);
		o->related_structural_connection = (Ifc_structural_connection *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->related_structural_connection);
		o->applied_condition = (Ifc_boundary_condition *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->applied_condition);
		o->additional_conditions = (Ifc_structural_connection_condition *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->additional_conditions);
		o->supported_length = step_parser.parse_double(object_attributes[8]);
		o->condition_coordinate_system = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[9]);
		links_to_resolve.push_back((Ifc **)&o->condition_coordinate_system);
		o->connection_constraint = (Ifc_connection_geometry *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->connection_constraint);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelConnectsWithRealizingElements")) {
		Ifc_rel_connects_with_realizing_elements *o = new Ifc_rel_connects_with_realizing_elements();
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
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->realizing_elements.push_back((Ifc_element *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->realizing_elements);
		o->connection_type = step_parser.parse_string(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelContainedInSpatialStructure")) {
		Ifc_rel_contained_in_spatial_structure *o = new Ifc_rel_contained_in_spatial_structure();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_elements.push_back((Ifc_product *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_elements);
		o->relating_structure = (Ifc_spatial_structure_element *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->relating_structure);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelCoversBldgElements")) {
		Ifc_rel_covers_bldg_elements *o = new Ifc_rel_covers_bldg_elements();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_building_element = (Ifc_element *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_building_element);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->related_coverings.push_back((Ifc_covering *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_coverings);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelCoversSpaces")) {
		Ifc_rel_covers_spaces *o = new Ifc_rel_covers_spaces();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->related_space = (Ifc_space *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->related_space);
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
		o->relating_object = (Ifc_object_definition *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_object);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->related_objects.push_back((Ifc_object_definition *)i);
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
		o->related_building_element = (Ifc_element *)step_parser.parse_link(object_attributes[5]);
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
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_control_elements.push_back((Ifc_distribution_control_element *)i);
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
		o->related_space_program = (Ifc_space_program *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->related_space_program);
		o->relating_space_program = (Ifc_space_program *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->relating_space_program);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelNests")) {
		Ifc_rel_nests *o = new Ifc_rel_nests();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_object = (Ifc_object_definition *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_object);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->related_objects.push_back((Ifc_object_definition *)i);
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
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object_definition *)i);
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

	else if (boost::iequals(object_class, "IfcRelProjectsElement")) {
		Ifc_rel_projects_element *o = new Ifc_rel_projects_element();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_element = (Ifc_element *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_element);
		o->related_feature_element = (Ifc_feature_element_addition *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->related_feature_element);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelReferencedInSpatialStructure")) {
		Ifc_rel_referenced_in_spatial_structure *o = new Ifc_rel_referenced_in_spatial_structure();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_elements.push_back((Ifc_product *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_elements);
		o->relating_structure = (Ifc_spatial_structure_element *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->relating_structure);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelSchedulesCostItems")) {
		Ifc_rel_schedules_cost_items *o = new Ifc_rel_schedules_cost_items();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[4])) o->related_objects.push_back((Ifc_object_definition *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->related_objects);
		o->related_objects_type = step_parser.parse_constant(object_attributes[5]);
		o->relating_control = (Ifc_control *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->relating_control);
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
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->related_buildings.push_back((Ifc_spatial_structure_element *)i);
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
		o->related_building_element = (Ifc_element *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->related_building_element);
		o->connection_geometry = (Ifc_connection_geometry *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->connection_geometry);
		o->physical_or_virtual_boundary = step_parser.parse_constant(object_attributes[7]);
		o->internal_or_external_boundary = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRelVoidsElement")) {
		Ifc_rel_voids_element *o = new Ifc_rel_voids_element();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->relating_building_element = (Ifc_element *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->relating_building_element);
		o->related_opening_element = (Ifc_feature_element_subtraction *)step_parser.parse_link(object_attributes[5]);
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

	else if (boost::iequals(object_class, "IfcRelaxation")) {
		Ifc_relaxation *o = new Ifc_relaxation();
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
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
		o->angle = step_parser.parse_double(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRibPlateProfileProperties")) {
		Ifc_rib_plate_profile_properties *o = new Ifc_rib_plate_profile_properties();
		o->profile_name = step_parser.parse_string(object_attributes[0]);
		o->profile_definition = (Ifc_profile_def *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->profile_definition);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->direction = step_parser.parse_constant(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcRightCircularCone")) {
		Ifc_right_circular_cone *o = new Ifc_right_circular_cone();
		o->position = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcRightCircularCylinder")) {
		Ifc_right_circular_cylinder *o = new Ifc_right_circular_cylinder();
		o->position = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
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

	else if (boost::iequals(object_class, "IfcRoundedEdgeFeature")) {
		Ifc_rounded_edge_feature *o = new Ifc_rounded_edge_feature();
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

	else if (boost::iequals(object_class, "IfcSanitaryTerminalType")) {
		Ifc_sanitary_terminal_type *o = new Ifc_sanitary_terminal_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
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
		o->actual_start = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->actual_start);
		o->early_start = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->early_start);
		o->late_start = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->late_start);
		o->schedule_start = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->schedule_start);
		o->actual_finish = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[9]);
		links_to_resolve.push_back((Ifc **)&o->actual_finish);
		o->early_finish = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->early_finish);
		o->late_finish = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[11]);
		links_to_resolve.push_back((Ifc **)&o->late_finish);
		o->schedule_finish = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->schedule_finish);
		o->schedule_duration = step_parser.parse_double(object_attributes[13]);
		o->actual_duration = step_parser.parse_double(object_attributes[14]);
		o->remaining_time = step_parser.parse_double(object_attributes[15]);
		o->free_float = step_parser.parse_double(object_attributes[16]);
		o->total_float = step_parser.parse_double(object_attributes[17]);
		o->is_critical = step_parser.parse_boolean(object_attributes[18]);
		o->status_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[19]);
		links_to_resolve.push_back((Ifc **)&o->status_time);
		o->start_float = step_parser.parse_double(object_attributes[20]);
		o->finish_float = step_parser.parse_double(object_attributes[21]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcSectionProperties")) {
		Ifc_section_properties *o = new Ifc_section_properties();
		o->section_type = step_parser.parse_constant(object_attributes[0]);
		o->start_profile = (Ifc_profile_def *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->start_profile);
		o->end_profile = (Ifc_profile_def *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->end_profile);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSectionReinforcementProperties")) {
		Ifc_section_reinforcement_properties *o = new Ifc_section_reinforcement_properties();
		o->longitudinal_start_position = step_parser.parse_double(object_attributes[0]);
		o->longitudinal_end_position = step_parser.parse_double(object_attributes[1]);
		o->transverse_position = step_parser.parse_double(object_attributes[2]);
		o->reinforcement_role = step_parser.parse_constant(object_attributes[3]);
		o->section_definition = (Ifc_section_properties *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->section_definition);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->cross_section_reinforcement_definitions.push_back((Ifc_reinforcement_bar_properties *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->cross_section_reinforcement_definitions);
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

	else if (boost::iequals(object_class, "IfcSensorType")) {
		Ifc_sensor_type *o = new Ifc_sensor_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcServiceLife")) {
		Ifc_service_life *o = new Ifc_service_life();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->service_life_type = step_parser.parse_constant(object_attributes[5]);
		o->service_life_duration = step_parser.parse_double(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcServiceLifeFactor")) {
		Ifc_service_life_factor *o = new Ifc_service_life_factor();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->predefined_type = step_parser.parse_constant(object_attributes[4]);
		o->upper_value = (Ifc_measure_value *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->upper_value);
		o->most_used_value = (Ifc_measure_value *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->most_used_value);
		o->lower_value = (Ifc_measure_value *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->lower_value);
		return o;
	}

	else if (boost::iequals(object_class, "IfcShapeAspect")) {
		Ifc_shape_aspect *o = new Ifc_shape_aspect();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->shape_representations.push_back((Ifc_shape_model *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->shape_representations);
		o->name = step_parser.parse_string(object_attributes[1]);
		o->description = step_parser.parse_string(object_attributes[2]);
		//o->product_definitional = step_parser.parse_logical(object_attributes[3]);
		o->part_of_product_definition_shape = (Ifc_product_definition_shape *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->part_of_product_definition_shape);
		return o;
	}

	else if (boost::iequals(object_class, "IfcShapeModel")) {
		Ifc_shape_model *o = new Ifc_shape_model();
		o->context_of_items = (Ifc_representation_context *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->context_of_items);
		o->representation_identifier = step_parser.parse_string(object_attributes[1]);
		o->representation_type = step_parser.parse_string(object_attributes[2]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[3])) o->items.push_back((Ifc_representation_item *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->items);
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

	else if (boost::iequals(object_class, "IfcSlabType")) {
		Ifc_slab_type *o = new Ifc_slab_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSlippageConnectionCondition")) {
		Ifc_slippage_connection_condition *o = new Ifc_slippage_connection_condition();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->slippage_x = step_parser.parse_double(object_attributes[1]);
		o->slippage_y = step_parser.parse_double(object_attributes[2]);
		o->slippage_z = step_parser.parse_double(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSolidModel")) {
		Ifc_solid_model *o = new Ifc_solid_model();
		return o;
	}

	else if (boost::iequals(object_class, "IfcSoundProperties")) {
		Ifc_sound_properties *o = new Ifc_sound_properties();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->is_attenuating = step_parser.parse_boolean(object_attributes[4]);
		o->sound_scale = step_parser.parse_constant(object_attributes[5]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[6])) o->sound_values.push_back((Ifc_sound_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->sound_values);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSoundValue")) {
		Ifc_sound_value *o = new Ifc_sound_value();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->sound_level_time_series = (Ifc_time_series *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->sound_level_time_series);
		o->frequency = step_parser.parse_double(object_attributes[5]);
		o->sound_level_single_value = (Ifc_derived_measure_value *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->sound_level_single_value);
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

	else if (boost::iequals(object_class, "IfcSpaceHeaterType")) {
		Ifc_space_heater_type *o = new Ifc_space_heater_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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
		o->standard_required_area = step_parser.parse_double(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSpaceThermalLoadProperties")) {
		Ifc_space_thermal_load_properties *o = new Ifc_space_thermal_load_properties();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		o->thermal_load_source = step_parser.parse_constant(object_attributes[5]);
		o->property_source = step_parser.parse_constant(object_attributes[6]);
		o->source_description = step_parser.parse_string(object_attributes[7]);
		o->maximum_value = step_parser.parse_double(object_attributes[8]);
		o->minimum_value = step_parser.parse_double(object_attributes[9]);
		o->thermal_load_time_series_values = (Ifc_time_series *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->thermal_load_time_series_values);
		o->user_defined_thermal_load_source = step_parser.parse_string(object_attributes[11]);
		o->user_defined_property_source = step_parser.parse_string(object_attributes[12]);
		o->thermal_load_type = step_parser.parse_constant(object_attributes[13]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSpaceType")) {
		Ifc_space_type *o = new Ifc_space_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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

	else if (boost::iequals(object_class, "IfcSpatialStructureElementType")) {
		Ifc_spatial_structure_element_type *o = new Ifc_spatial_structure_element_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSphere")) {
		Ifc_sphere *o = new Ifc_sphere();
		o->position = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcStackTerminalType")) {
		Ifc_stack_terminal_type *o = new Ifc_stack_terminal_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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
		o->number_of_riser = step_parser.parse_integer(object_attributes[8]);
		o->number_of_treads = step_parser.parse_integer(object_attributes[9]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcStairFlightType")) {
		Ifc_stair_flight_type *o = new Ifc_stair_flight_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralAction")) {
		Ifc_structural_action *o = new Ifc_structural_action();
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
		o->applied_load = (Ifc_structural_load *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->applied_load);
		o->global_or_local = step_parser.parse_constant(object_attributes[8]);
		o->destabilizing_load = step_parser.parse_boolean(object_attributes[9]);
		o->caused_by = (Ifc_structural_reaction *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->caused_by);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralActivity")) {
		Ifc_structural_activity *o = new Ifc_structural_activity();
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
		o->applied_load = (Ifc_structural_load *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->applied_load);
		o->global_or_local = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralAnalysisModel")) {
		Ifc_structural_analysis_model *o = new Ifc_structural_analysis_model();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->predefined_type = step_parser.parse_constant(object_attributes[5]);
		o->orientation_of_2_d_plane = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->orientation_of_2_d_plane);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->loaded_by.push_back((Ifc_structural_load_group *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->loaded_by);
		for (auto i : step_parser.parse_list_of_links(object_attributes[8])) o->has_results.push_back((Ifc_structural_result_group *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->has_results);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralConnection")) {
		Ifc_structural_connection *o = new Ifc_structural_connection();
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
		o->applied_condition = (Ifc_boundary_condition *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->applied_condition);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralConnectionCondition")) {
		Ifc_structural_connection_condition *o = new Ifc_structural_connection_condition();
		o->name = step_parser.parse_string(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralCurveConnection")) {
		Ifc_structural_curve_connection *o = new Ifc_structural_curve_connection();
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
		o->applied_condition = (Ifc_boundary_condition *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->applied_condition);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralCurveMember")) {
		Ifc_structural_curve_member *o = new Ifc_structural_curve_member();
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
		o->predefined_type = step_parser.parse_constant(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralCurveMemberVarying")) {
		Ifc_structural_curve_member_varying *o = new Ifc_structural_curve_member_varying();
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
		o->predefined_type = step_parser.parse_constant(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralItem")) {
		Ifc_structural_item *o = new Ifc_structural_item();
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

	else if (boost::iequals(object_class, "IfcStructuralLinearAction")) {
		Ifc_structural_linear_action *o = new Ifc_structural_linear_action();
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
		o->applied_load = (Ifc_structural_load *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->applied_load);
		o->global_or_local = step_parser.parse_constant(object_attributes[8]);
		o->destabilizing_load = step_parser.parse_boolean(object_attributes[9]);
		o->caused_by = (Ifc_structural_reaction *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->caused_by);
		o->projected_or_true = step_parser.parse_constant(object_attributes[11]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralLinearActionVarying")) {
		Ifc_structural_linear_action_varying *o = new Ifc_structural_linear_action_varying();
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
		o->applied_load = (Ifc_structural_load *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->applied_load);
		o->global_or_local = step_parser.parse_constant(object_attributes[8]);
		o->destabilizing_load = step_parser.parse_boolean(object_attributes[9]);
		o->caused_by = (Ifc_structural_reaction *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->caused_by);
		o->projected_or_true = step_parser.parse_constant(object_attributes[11]);
		o->varying_applied_load_location = (Ifc_shape_aspect *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->varying_applied_load_location);
		for (auto i : step_parser.parse_list_of_links(object_attributes[13])) o->subsequent_applied_loads.push_back((Ifc_structural_load *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->subsequent_applied_loads);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralLoad")) {
		Ifc_structural_load *o = new Ifc_structural_load();
		o->name = step_parser.parse_string(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralLoadGroup")) {
		Ifc_structural_load_group *o = new Ifc_structural_load_group();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->predefined_type = step_parser.parse_constant(object_attributes[5]);
		o->action_type = step_parser.parse_constant(object_attributes[6]);
		o->action_source = step_parser.parse_constant(object_attributes[7]);
		o->coefficient = step_parser.parse_double(object_attributes[8]);
		o->purpose = step_parser.parse_string(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralLoadLinearForce")) {
		Ifc_structural_load_linear_force *o = new Ifc_structural_load_linear_force();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->linear_force_x = step_parser.parse_double(object_attributes[1]);
		o->linear_force_y = step_parser.parse_double(object_attributes[2]);
		o->linear_force_z = step_parser.parse_double(object_attributes[3]);
		o->linear_moment_x = step_parser.parse_double(object_attributes[4]);
		o->linear_moment_y = step_parser.parse_double(object_attributes[5]);
		o->linear_moment_z = step_parser.parse_double(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralLoadPlanarForce")) {
		Ifc_structural_load_planar_force *o = new Ifc_structural_load_planar_force();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->planar_force_x = step_parser.parse_double(object_attributes[1]);
		o->planar_force_y = step_parser.parse_double(object_attributes[2]);
		o->planar_force_z = step_parser.parse_double(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralLoadSingleDisplacement")) {
		Ifc_structural_load_single_displacement *o = new Ifc_structural_load_single_displacement();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->displacement_x = step_parser.parse_double(object_attributes[1]);
		o->displacement_y = step_parser.parse_double(object_attributes[2]);
		o->displacement_z = step_parser.parse_double(object_attributes[3]);
		o->rotational_displacement_r_x = step_parser.parse_double(object_attributes[4]);
		o->rotational_displacement_r_y = step_parser.parse_double(object_attributes[5]);
		o->rotational_displacement_r_z = step_parser.parse_double(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralLoadSingleDisplacementDistortion")) {
		Ifc_structural_load_single_displacement_distortion *o = new Ifc_structural_load_single_displacement_distortion();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->displacement_x = step_parser.parse_double(object_attributes[1]);
		o->displacement_y = step_parser.parse_double(object_attributes[2]);
		o->displacement_z = step_parser.parse_double(object_attributes[3]);
		o->rotational_displacement_r_x = step_parser.parse_double(object_attributes[4]);
		o->rotational_displacement_r_y = step_parser.parse_double(object_attributes[5]);
		o->rotational_displacement_r_z = step_parser.parse_double(object_attributes[6]);
		o->distortion = step_parser.parse_double(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralLoadSingleForce")) {
		Ifc_structural_load_single_force *o = new Ifc_structural_load_single_force();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->force_x = step_parser.parse_double(object_attributes[1]);
		o->force_y = step_parser.parse_double(object_attributes[2]);
		o->force_z = step_parser.parse_double(object_attributes[3]);
		o->moment_x = step_parser.parse_double(object_attributes[4]);
		o->moment_y = step_parser.parse_double(object_attributes[5]);
		o->moment_z = step_parser.parse_double(object_attributes[6]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralLoadSingleForceWarping")) {
		Ifc_structural_load_single_force_warping *o = new Ifc_structural_load_single_force_warping();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->force_x = step_parser.parse_double(object_attributes[1]);
		o->force_y = step_parser.parse_double(object_attributes[2]);
		o->force_z = step_parser.parse_double(object_attributes[3]);
		o->moment_x = step_parser.parse_double(object_attributes[4]);
		o->moment_y = step_parser.parse_double(object_attributes[5]);
		o->moment_z = step_parser.parse_double(object_attributes[6]);
		o->warping_moment = step_parser.parse_double(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralLoadStatic")) {
		Ifc_structural_load_static *o = new Ifc_structural_load_static();
		o->name = step_parser.parse_string(object_attributes[0]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralLoadTemperature")) {
		Ifc_structural_load_temperature *o = new Ifc_structural_load_temperature();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->delta_t___constant = step_parser.parse_double(object_attributes[1]);
		o->delta_t___y = step_parser.parse_double(object_attributes[2]);
		o->delta_t___z = step_parser.parse_double(object_attributes[3]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralMember")) {
		Ifc_structural_member *o = new Ifc_structural_member();
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

	else if (boost::iequals(object_class, "IfcStructuralPlanarAction")) {
		Ifc_structural_planar_action *o = new Ifc_structural_planar_action();
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
		o->applied_load = (Ifc_structural_load *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->applied_load);
		o->global_or_local = step_parser.parse_constant(object_attributes[8]);
		o->destabilizing_load = step_parser.parse_boolean(object_attributes[9]);
		o->caused_by = (Ifc_structural_reaction *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->caused_by);
		o->projected_or_true = step_parser.parse_constant(object_attributes[11]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralPlanarActionVarying")) {
		Ifc_structural_planar_action_varying *o = new Ifc_structural_planar_action_varying();
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
		o->applied_load = (Ifc_structural_load *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->applied_load);
		o->global_or_local = step_parser.parse_constant(object_attributes[8]);
		o->destabilizing_load = step_parser.parse_boolean(object_attributes[9]);
		o->caused_by = (Ifc_structural_reaction *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->caused_by);
		o->projected_or_true = step_parser.parse_constant(object_attributes[11]);
		o->varying_applied_load_location = (Ifc_shape_aspect *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->varying_applied_load_location);
		for (auto i : step_parser.parse_list_of_links(object_attributes[13])) o->subsequent_applied_loads.push_back((Ifc_structural_load *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->subsequent_applied_loads);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralPointAction")) {
		Ifc_structural_point_action *o = new Ifc_structural_point_action();
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
		o->applied_load = (Ifc_structural_load *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->applied_load);
		o->global_or_local = step_parser.parse_constant(object_attributes[8]);
		o->destabilizing_load = step_parser.parse_boolean(object_attributes[9]);
		o->caused_by = (Ifc_structural_reaction *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->caused_by);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralPointConnection")) {
		Ifc_structural_point_connection *o = new Ifc_structural_point_connection();
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
		o->applied_condition = (Ifc_boundary_condition *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->applied_condition);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralPointReaction")) {
		Ifc_structural_point_reaction *o = new Ifc_structural_point_reaction();
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
		o->applied_load = (Ifc_structural_load *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->applied_load);
		o->global_or_local = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralProfileProperties")) {
		Ifc_structural_profile_properties *o = new Ifc_structural_profile_properties();
		o->profile_name = step_parser.parse_string(object_attributes[0]);
		o->profile_definition = (Ifc_profile_def *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->profile_definition);
		o->physical_weight = step_parser.parse_double(object_attributes[2]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->cross_section_area = step_parser.parse_double(object_attributes[6]);
		o->torsional_constant_x = step_parser.parse_double(object_attributes[7]);
		o->moment_of_inertia_y_z = step_parser.parse_double(object_attributes[8]);
		o->moment_of_inertia_y = step_parser.parse_double(object_attributes[9]);
		o->moment_of_inertia_z = step_parser.parse_double(object_attributes[10]);
		o->warping_constant = step_parser.parse_double(object_attributes[11]);
		o->shear_centre_z = step_parser.parse_double(object_attributes[12]);
		o->shear_centre_y = step_parser.parse_double(object_attributes[13]);
		o->shear_deformation_area_z = step_parser.parse_double(object_attributes[14]);
		o->shear_deformation_area_y = step_parser.parse_double(object_attributes[15]);
		o->maximum_section_modulus_y = step_parser.parse_double(object_attributes[16]);
		o->minimum_section_modulus_y = step_parser.parse_double(object_attributes[17]);
		o->maximum_section_modulus_z = step_parser.parse_double(object_attributes[18]);
		o->minimum_section_modulus_z = step_parser.parse_double(object_attributes[19]);
		o->torsional_section_modulus = step_parser.parse_double(object_attributes[20]);
		o->centre_of_gravity_in_x = step_parser.parse_double(object_attributes[21]);
		o->centre_of_gravity_in_y = step_parser.parse_double(object_attributes[22]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralReaction")) {
		Ifc_structural_reaction *o = new Ifc_structural_reaction();
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
		o->applied_load = (Ifc_structural_load *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->applied_load);
		o->global_or_local = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralResultGroup")) {
		Ifc_structural_result_group *o = new Ifc_structural_result_group();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		o->theory_type = step_parser.parse_constant(object_attributes[5]);
		o->result_for_load_group = (Ifc_structural_load_group *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->result_for_load_group);
		o->is_linear = step_parser.parse_boolean(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralSteelProfileProperties")) {
		Ifc_structural_steel_profile_properties *o = new Ifc_structural_steel_profile_properties();
		o->profile_name = step_parser.parse_string(object_attributes[0]);
		o->profile_definition = (Ifc_profile_def *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->profile_definition);
		o->physical_weight = step_parser.parse_double(object_attributes[2]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->cross_section_area = step_parser.parse_double(object_attributes[6]);
		o->torsional_constant_x = step_parser.parse_double(object_attributes[7]);
		o->moment_of_inertia_y_z = step_parser.parse_double(object_attributes[8]);
		o->moment_of_inertia_y = step_parser.parse_double(object_attributes[9]);
		o->moment_of_inertia_z = step_parser.parse_double(object_attributes[10]);
		o->warping_constant = step_parser.parse_double(object_attributes[11]);
		o->shear_centre_z = step_parser.parse_double(object_attributes[12]);
		o->shear_centre_y = step_parser.parse_double(object_attributes[13]);
		o->shear_deformation_area_z = step_parser.parse_double(object_attributes[14]);
		o->shear_deformation_area_y = step_parser.parse_double(object_attributes[15]);
		o->maximum_section_modulus_y = step_parser.parse_double(object_attributes[16]);
		o->minimum_section_modulus_y = step_parser.parse_double(object_attributes[17]);
		o->maximum_section_modulus_z = step_parser.parse_double(object_attributes[18]);
		o->minimum_section_modulus_z = step_parser.parse_double(object_attributes[19]);
		o->torsional_section_modulus = step_parser.parse_double(object_attributes[20]);
		o->centre_of_gravity_in_x = step_parser.parse_double(object_attributes[21]);
		o->centre_of_gravity_in_y = step_parser.parse_double(object_attributes[22]);
		o->shear_area_z = step_parser.parse_double(object_attributes[23]);
		o->shear_area_y = step_parser.parse_double(object_attributes[24]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_positive_ratio_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralSurfaceConnection")) {
		Ifc_structural_surface_connection *o = new Ifc_structural_surface_connection();
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
		o->applied_condition = (Ifc_boundary_condition *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->applied_condition);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralSurfaceMember")) {
		Ifc_structural_surface_member *o = new Ifc_structural_surface_member();
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
		o->predefined_type = step_parser.parse_constant(object_attributes[7]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuralSurfaceMemberVarying")) {
		Ifc_structural_surface_member_varying *o = new Ifc_structural_surface_member_varying();
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
		o->predefined_type = step_parser.parse_constant(object_attributes[7]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse container of type
		o->varying_thickness_location = (Ifc_shape_aspect *)step_parser.parse_link(object_attributes[10]);
		links_to_resolve.push_back((Ifc **)&o->varying_thickness_location);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStructuredDimensionCallout")) {
		Ifc_structured_dimension_callout *o = new Ifc_structured_dimension_callout();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->contents.push_back((Ifc_draughting_callout_element *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->contents);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStyleModel")) {
		Ifc_style_model *o = new Ifc_style_model();
		o->context_of_items = (Ifc_representation_context *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->context_of_items);
		o->representation_identifier = step_parser.parse_string(object_attributes[1]);
		o->representation_type = step_parser.parse_string(object_attributes[2]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[3])) o->items.push_back((Ifc_representation_item *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->items);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStyledItem")) {
		Ifc_styled_item *o = new Ifc_styled_item();
		o->item = (Ifc_representation_item *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->item);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->styles.push_back((Ifc_presentation_style_assignment *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->styles);
		o->name = step_parser.parse_string(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcStyledRepresentation")) {
		Ifc_styled_representation *o = new Ifc_styled_representation();
		o->context_of_items = (Ifc_representation_context *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->context_of_items);
		o->representation_identifier = step_parser.parse_string(object_attributes[1]);
		o->representation_type = step_parser.parse_string(object_attributes[2]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[3])) o->items.push_back((Ifc_representation_item *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->items);
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
		o->resource_identifier = step_parser.parse_string(object_attributes[5]);
		o->resource_group = step_parser.parse_string(object_attributes[6]);
		o->resource_consumption = step_parser.parse_constant(object_attributes[7]);
		o->base_quantity = (Ifc_measure_with_unit *)step_parser.parse_link(object_attributes[8]);
		links_to_resolve.push_back((Ifc **)&o->base_quantity);
		o->sub_contractor = (Ifc_actor_select *)step_parser.parse_link(object_attributes[9]);
		links_to_resolve.push_back((Ifc **)&o->sub_contractor);
		o->job_description = step_parser.parse_string(object_attributes[10]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSubedge")) {
		Ifc_subedge *o = new Ifc_subedge();
		o->edge_start = (Ifc_vertex *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->edge_start);
		o->edge_end = (Ifc_vertex *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->edge_end);
		o->parent_edge = (Ifc_edge *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->parent_edge);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSurface")) {
		Ifc_surface *o = new Ifc_surface();
		return o;
	}

	else if (boost::iequals(object_class, "IfcSurfaceCurveSweptAreaSolid")) {
		Ifc_surface_curve_swept_area_solid *o = new Ifc_surface_curve_swept_area_solid();
		o->swept_area = (Ifc_profile_def *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->swept_area);
		o->position = (Ifc_axis_2_placement_3_d *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->position);
		o->directrix = (Ifc_curve *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->directrix);
		o->start_param = step_parser.parse_double(object_attributes[3]);
		o->end_param = step_parser.parse_double(object_attributes[4]);
		o->reference_surface = (Ifc_surface *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->reference_surface);
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
		o->depth = step_parser.parse_double(object_attributes[3]);
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

	else if (boost::iequals(object_class, "IfcSurfaceStyle")) {
		Ifc_surface_style *o = new Ifc_surface_style();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->side = step_parser.parse_constant(object_attributes[1]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[2])) o->styles.push_back((Ifc_surface_style_element_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->styles);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSurfaceStyleLighting")) {
		Ifc_surface_style_lighting *o = new Ifc_surface_style_lighting();
		o->diffuse_transmission_colour = (Ifc_colour_rgb *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->diffuse_transmission_colour);
		o->diffuse_reflection_colour = (Ifc_colour_rgb *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->diffuse_reflection_colour);
		o->transmission_colour = (Ifc_colour_rgb *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->transmission_colour);
		o->reflectance_colour = (Ifc_colour_rgb *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->reflectance_colour);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSurfaceStyleRefraction")) {
		Ifc_surface_style_refraction *o = new Ifc_surface_style_refraction();
		o->refraction_index = step_parser.parse_double(object_attributes[0]);
		o->dispersion_factor = step_parser.parse_double(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSurfaceStyleRendering")) {
		Ifc_surface_style_rendering *o = new Ifc_surface_style_rendering();
		o->surface_colour = (Ifc_colour_rgb *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->surface_colour);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		o->diffuse_colour = (Ifc_colour_or_factor *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->diffuse_colour);
		o->transmission_colour = (Ifc_colour_or_factor *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->transmission_colour);
		o->diffuse_transmission_colour = (Ifc_colour_or_factor *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->diffuse_transmission_colour);
		o->reflection_colour = (Ifc_colour_or_factor *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->reflection_colour);
		o->specular_colour = (Ifc_colour_or_factor *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->specular_colour);
		o->specular_highlight = (Ifc_specular_highlight_select *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->specular_highlight);
		o->reflectance_method = step_parser.parse_constant(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSurfaceStyleShading")) {
		Ifc_surface_style_shading *o = new Ifc_surface_style_shading();
		o->surface_colour = (Ifc_colour_rgb *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->surface_colour);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSurfaceStyleWithTextures")) {
		Ifc_surface_style_with_textures *o = new Ifc_surface_style_with_textures();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->textures.push_back((Ifc_surface_texture *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->textures);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSurfaceTexture")) {
		Ifc_surface_texture *o = new Ifc_surface_texture();
		o->repeat_s = step_parser.parse_boolean(object_attributes[0]);
		o->repeat_t = step_parser.parse_boolean(object_attributes[1]);
		o->texture_type = step_parser.parse_constant(object_attributes[2]);
		o->texture_transform = (Ifc_cartesian_transformation_operator_2_d *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->texture_transform);
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

	else if (boost::iequals(object_class, "IfcSweptDiskSolid")) {
		Ifc_swept_disk_solid *o = new Ifc_swept_disk_solid();
		o->directrix = (Ifc_curve *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->directrix);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->start_param = step_parser.parse_double(object_attributes[3]);
		o->end_param = step_parser.parse_double(object_attributes[4]);
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

	else if (boost::iequals(object_class, "IfcSwitchingDeviceType")) {
		Ifc_switching_device_type *o = new Ifc_switching_device_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcSymbolStyle")) {
		Ifc_symbol_style *o = new Ifc_symbol_style();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->style_of_symbol = (Ifc_symbol_style_select *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->style_of_symbol);
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

	else if (boost::iequals(object_class, "IfcSystemFurnitureElementType")) {
		Ifc_system_furniture_element_type *o = new Ifc_system_furniture_element_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTShapeProfileDef")) {
		Ifc_t_shape_profile_def *o = new Ifc_t_shape_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->position = (Ifc_axis_2_placement_2_d *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->web_slope = step_parser.parse_double(object_attributes[10]);
		o->flange_slope = step_parser.parse_double(object_attributes[11]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcTable")) {
		Ifc_table *o = new Ifc_table();
		o->name = step_parser.parse_string(object_attributes[0]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->rows.push_back((Ifc_table_row *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->rows);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTableRow")) {
		Ifc_table_row *o = new Ifc_table_row();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->row_cells.push_back((Ifc_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->row_cells);
		o->is_heading = step_parser.parse_boolean(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTankType")) {
		Ifc_tank_type *o = new Ifc_tank_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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
		o->task_id = step_parser.parse_string(object_attributes[5]);
		o->status = step_parser.parse_string(object_attributes[6]);
		o->work_method = step_parser.parse_string(object_attributes[7]);
		o->is_milestone = step_parser.parse_boolean(object_attributes[8]);
		o->priority = step_parser.parse_integer(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTelecomAddress")) {
		Ifc_telecom_address *o = new Ifc_telecom_address();
		o->purpose = step_parser.parse_constant(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->user_defined_purpose = step_parser.parse_string(object_attributes[2]);
		o->telephone_numbers = step_parser.parse_list_of_strings(object_attributes[3]);
		o->facsimile_numbers = step_parser.parse_list_of_strings(object_attributes[4]);
		o->pager_number = step_parser.parse_string(object_attributes[5]);
		o->electronic_mail_addresses = step_parser.parse_list_of_strings(object_attributes[6]);
		o->w_w_w_home_page_u_r_l = step_parser.parse_string(object_attributes[7]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTendon")) {
		Ifc_tendon *o = new Ifc_tendon();
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
		o->steel_grade = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->cross_section_area = step_parser.parse_double(object_attributes[11]);
		o->tension_force = step_parser.parse_double(object_attributes[12]);
		o->pre_stress = step_parser.parse_double(object_attributes[13]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcTendonAnchor")) {
		Ifc_tendon_anchor *o = new Ifc_tendon_anchor();
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
		o->steel_grade = step_parser.parse_string(object_attributes[8]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTerminatorSymbol")) {
		Ifc_terminator_symbol *o = new Ifc_terminator_symbol();
		o->item = (Ifc_representation_item *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->item);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->styles.push_back((Ifc_presentation_style_assignment *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->styles);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->annotated_curve = (Ifc_annotation_curve_occurrence *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->annotated_curve);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTextLiteral")) {
		Ifc_text_literal *o = new Ifc_text_literal();
		o->literal = step_parser.parse_string(object_attributes[0]);
		o->placement = (Ifc_axis_2_placement *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->placement);
		o->path = step_parser.parse_constant(object_attributes[2]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTextLiteralWithExtent")) {
		Ifc_text_literal_with_extent *o = new Ifc_text_literal_with_extent();
		o->literal = step_parser.parse_string(object_attributes[0]);
		o->placement = (Ifc_axis_2_placement *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->placement);
		o->path = step_parser.parse_constant(object_attributes[2]);
		o->extent = (Ifc_planar_extent *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->extent);
		//TODO: parse non-pointer type: typedef Ifc_label Ifc_box_alignment;
		return o;
	}

	else if (boost::iequals(object_class, "IfcTextStyle")) {
		Ifc_text_style *o = new Ifc_text_style();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->text_character_appearance = (Ifc_character_style_select *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->text_character_appearance);
		o->text_style = (Ifc_text_style_select *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->text_style);
		o->text_font_style = (Ifc_text_font_select *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->text_font_style);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTextStyleFontModel")) {
		Ifc_text_style_font_model *o = new Ifc_text_style_font_model();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->font_family = step_parser.parse_list_of_strings(object_attributes[1]);
		o->font_style = step_parser.parse_string(object_attributes[2]);
		o->font_variant = step_parser.parse_string(object_attributes[3]);
		o->font_weight = step_parser.parse_string(object_attributes[4]);
		o->font_size = (Ifc_size_select *)step_parser.parse_link(object_attributes[5]);
		links_to_resolve.push_back((Ifc **)&o->font_size);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTextStyleForDefinedFont")) {
		Ifc_text_style_for_defined_font *o = new Ifc_text_style_for_defined_font();
		o->colour = (Ifc_colour *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->colour);
		o->background_colour = (Ifc_colour *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->background_colour);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTextStyleTextModel")) {
		Ifc_text_style_text_model *o = new Ifc_text_style_text_model();
		o->text_indent = (Ifc_size_select *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->text_indent);
		o->text_align = step_parser.parse_string(object_attributes[1]);
		o->text_decoration = step_parser.parse_string(object_attributes[2]);
		o->letter_spacing = (Ifc_size_select *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->letter_spacing);
		o->word_spacing = (Ifc_size_select *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->word_spacing);
		o->text_transform = step_parser.parse_string(object_attributes[5]);
		o->line_height = (Ifc_size_select *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->line_height);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTextStyleWithBoxCharacteristics")) {
		Ifc_text_style_with_box_characteristics *o = new Ifc_text_style_with_box_characteristics();
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->box_slant_angle = step_parser.parse_double(object_attributes[2]);
		o->box_rotate_angle = step_parser.parse_double(object_attributes[3]);
		o->character_spacing = (Ifc_size_select *)step_parser.parse_link(object_attributes[4]);
		links_to_resolve.push_back((Ifc **)&o->character_spacing);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTextureCoordinate")) {
		Ifc_texture_coordinate *o = new Ifc_texture_coordinate();
		return o;
	}

	else if (boost::iequals(object_class, "IfcTextureCoordinateGenerator")) {
		Ifc_texture_coordinate_generator *o = new Ifc_texture_coordinate_generator();
		o->mode = step_parser.parse_string(object_attributes[0]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->parameter.push_back((Ifc_simple_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->parameter);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTextureMap")) {
		Ifc_texture_map *o = new Ifc_texture_map();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->texture_maps.push_back((Ifc_vertex_based_texture_map *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->texture_maps);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTextureVertex")) {
		Ifc_texture_vertex *o = new Ifc_texture_vertex();
		o->coordinates = step_parser.parse_list_of_doubles(object_attributes[0]);
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

	else if (boost::iequals(object_class, "IfcTimeSeries")) {
		Ifc_time_series *o = new Ifc_time_series();
		o->name = step_parser.parse_string(object_attributes[0]);
		o->description = step_parser.parse_string(object_attributes[1]);
		o->start_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->start_time);
		o->end_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[3]);
		links_to_resolve.push_back((Ifc **)&o->end_time);
		o->time_series_data_type = step_parser.parse_constant(object_attributes[4]);
		o->data_origin = step_parser.parse_constant(object_attributes[5]);
		o->user_defined_data_origin = step_parser.parse_string(object_attributes[6]);
		o->unit = (Ifc_unit *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->unit);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTimeSeriesReferenceRelationship")) {
		Ifc_time_series_reference_relationship *o = new Ifc_time_series_reference_relationship();
		o->referenced_time_series = (Ifc_time_series *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->referenced_time_series);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->time_series_references.push_back((Ifc_document_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->time_series_references);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTimeSeriesSchedule")) {
		Ifc_time_series_schedule *o = new Ifc_time_series_schedule();
		o->global_id = step_parser.parse_string(object_attributes[0]);
		o->owner_history = (Ifc_owner_history *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->owner_history);
		o->name = step_parser.parse_string(object_attributes[2]);
		o->description = step_parser.parse_string(object_attributes[3]);
		o->object_type = step_parser.parse_string(object_attributes[4]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[5])) o->applicable_dates.push_back((Ifc_date_time_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->applicable_dates);
		o->time_series_schedule_type = step_parser.parse_constant(object_attributes[6]);
		o->time_series = (Ifc_time_series *)step_parser.parse_link(object_attributes[7]);
		links_to_resolve.push_back((Ifc **)&o->time_series);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTimeSeriesValue")) {
		Ifc_time_series_value *o = new Ifc_time_series_value();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->list_values.push_back((Ifc_value *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->list_values);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTopologicalRepresentationItem")) {
		Ifc_topological_representation_item *o = new Ifc_topological_representation_item();
		return o;
	}

	else if (boost::iequals(object_class, "IfcTopologyRepresentation")) {
		Ifc_topology_representation *o = new Ifc_topology_representation();
		o->context_of_items = (Ifc_representation_context *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->context_of_items);
		o->representation_identifier = step_parser.parse_string(object_attributes[1]);
		o->representation_type = step_parser.parse_string(object_attributes[2]);
		for (auto i : step_parser.parse_list_of_links(object_attributes[3])) o->items.push_back((Ifc_representation_item *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->items);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTransformerType")) {
		Ifc_transformer_type *o = new Ifc_transformer_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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

	else if (boost::iequals(object_class, "IfcTransportElementType")) {
		Ifc_transport_element_type *o = new Ifc_transport_element_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
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

	else if (boost::iequals(object_class, "IfcTrimmedCurve")) {
		Ifc_trimmed_curve *o = new Ifc_trimmed_curve();
		o->basis_curve = (Ifc_curve *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->basis_curve);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->trim_1.push_back((Ifc_trimming_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->trim_1);
		for (auto i : step_parser.parse_list_of_links(object_attributes[2])) o->trim_2.push_back((Ifc_trimming_select *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->trim_2);
		o->sense_agreement = step_parser.parse_boolean(object_attributes[3]);
		o->master_representation = step_parser.parse_constant(object_attributes[4]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTubeBundleType")) {
		Ifc_tube_bundle_type *o = new Ifc_tube_bundle_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcTwoDirectionRepeatFactor")) {
		Ifc_two_direction_repeat_factor *o = new Ifc_two_direction_repeat_factor();
		o->repeat_factor = (Ifc_vector *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->repeat_factor);
		o->second_repeat_factor = (Ifc_vector *)step_parser.parse_link(object_attributes[1]);
		links_to_resolve.push_back((Ifc **)&o->second_repeat_factor);
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

	else if (boost::iequals(object_class, "IfcUShapeProfileDef")) {
		Ifc_u_shape_profile_def *o = new Ifc_u_shape_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->position = (Ifc_axis_2_placement_2_d *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		o->flange_slope = step_parser.parse_double(object_attributes[9]);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		return o;
	}

	else if (boost::iequals(object_class, "IfcUnitAssignment")) {
		Ifc_unit_assignment *o = new Ifc_unit_assignment();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->units.push_back((Ifc_unit *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->units);
		return o;
	}

	else if (boost::iequals(object_class, "IfcUnitaryEquipmentType")) {
		Ifc_unitary_equipment_type *o = new Ifc_unitary_equipment_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcValveType")) {
		Ifc_valve_type *o = new Ifc_valve_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcVector")) {
		Ifc_vector *o = new Ifc_vector();
		o->orientation = (Ifc_direction *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->orientation);
		o->magnitude = step_parser.parse_double(object_attributes[1]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcVertex")) {
		Ifc_vertex *o = new Ifc_vertex();
		return o;
	}

	else if (boost::iequals(object_class, "IfcVertexBasedTextureMap")) {
		Ifc_vertex_based_texture_map *o = new Ifc_vertex_based_texture_map();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->texture_vertices.push_back((Ifc_texture_vertex *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->texture_vertices);
		for (auto i : step_parser.parse_list_of_links(object_attributes[1])) o->texture_points.push_back((Ifc_cartesian_point *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->texture_points);
		return o;
	}

	else if (boost::iequals(object_class, "IfcVertexLoop")) {
		Ifc_vertex_loop *o = new Ifc_vertex_loop();
		o->loop_vertex = (Ifc_vertex *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->loop_vertex);
		return o;
	}

	else if (boost::iequals(object_class, "IfcVertexPoint")) {
		Ifc_vertex_point *o = new Ifc_vertex_point();
		o->vertex_geometry = (Ifc_point *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->vertex_geometry);
		return o;
	}

	else if (boost::iequals(object_class, "IfcVibrationIsolatorType")) {
		Ifc_vibration_isolator_type *o = new Ifc_vibration_isolator_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcVirtualElement")) {
		Ifc_virtual_element *o = new Ifc_virtual_element();
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

	else if (boost::iequals(object_class, "IfcVirtualGridIntersection")) {
		Ifc_virtual_grid_intersection *o = new Ifc_virtual_grid_intersection();
		for (auto i : step_parser.parse_list_of_links(object_attributes[0])) o->intersecting_axes.push_back((Ifc_grid_axis *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->intersecting_axes);
		o->offset_distances = step_parser.parse_list_of_doubles(object_attributes[1]);
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

	else if (boost::iequals(object_class, "IfcWallType")) {
		Ifc_wall_type *o = new Ifc_wall_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcWasteTerminalType")) {
		Ifc_waste_terminal_type *o = new Ifc_waste_terminal_type();
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
		o->element_type = step_parser.parse_string(object_attributes[8]);
		o->predefined_type = step_parser.parse_constant(object_attributes[9]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcWaterProperties")) {
		Ifc_water_properties *o = new Ifc_water_properties();
		o->material = (Ifc_material *)step_parser.parse_link(object_attributes[0]);
		links_to_resolve.push_back((Ifc **)&o->material);
		o->is_potable = step_parser.parse_boolean(object_attributes[1]);
		o->hardness = step_parser.parse_double(object_attributes[2]);
		o->alkalinity_concentration = step_parser.parse_double(object_attributes[3]);
		o->acidity_concentration = step_parser.parse_double(object_attributes[4]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
		o->p_h_level = step_parser.parse_double(object_attributes[6]);
		//TODO: parse non-pointer type: typedef Ifc_ratio_measure Ifc_normalised_ratio_measure;
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
		o->parameter_takes_precedence = step_parser.parse_boolean(object_attributes[10]);
		o->sizeable = step_parser.parse_boolean(object_attributes[11]);
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
		o->creation_date = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->creation_date);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->creators.push_back((Ifc_person *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->creators);
		o->purpose = step_parser.parse_string(object_attributes[8]);
		o->duration = step_parser.parse_double(object_attributes[9]);
		o->total_float = step_parser.parse_double(object_attributes[10]);
		o->start_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[11]);
		links_to_resolve.push_back((Ifc **)&o->start_time);
		o->finish_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->finish_time);
		o->work_control_type = step_parser.parse_constant(object_attributes[13]);
		o->user_defined_control_type = step_parser.parse_string(object_attributes[14]);
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
		o->creation_date = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->creation_date);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->creators.push_back((Ifc_person *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->creators);
		o->purpose = step_parser.parse_string(object_attributes[8]);
		o->duration = step_parser.parse_double(object_attributes[9]);
		o->total_float = step_parser.parse_double(object_attributes[10]);
		o->start_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[11]);
		links_to_resolve.push_back((Ifc **)&o->start_time);
		o->finish_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->finish_time);
		o->work_control_type = step_parser.parse_constant(object_attributes[13]);
		o->user_defined_control_type = step_parser.parse_string(object_attributes[14]);
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
		o->creation_date = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[6]);
		links_to_resolve.push_back((Ifc **)&o->creation_date);
		for (auto i : step_parser.parse_list_of_links(object_attributes[7])) o->creators.push_back((Ifc_person *)i);
		lists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->creators);
		o->purpose = step_parser.parse_string(object_attributes[8]);
		o->duration = step_parser.parse_double(object_attributes[9]);
		o->total_float = step_parser.parse_double(object_attributes[10]);
		o->start_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[11]);
		links_to_resolve.push_back((Ifc **)&o->start_time);
		o->finish_time = (Ifc_date_time_select *)step_parser.parse_link(object_attributes[12]);
		links_to_resolve.push_back((Ifc **)&o->finish_time);
		o->work_control_type = step_parser.parse_constant(object_attributes[13]);
		o->user_defined_control_type = step_parser.parse_string(object_attributes[14]);
		return o;
	}

	else if (boost::iequals(object_class, "IfcZShapeProfileDef")) {
		Ifc_z_shape_profile_def *o = new Ifc_z_shape_profile_def();
		o->profile_type = step_parser.parse_constant(object_attributes[0]);
		o->profile_name = step_parser.parse_string(object_attributes[1]);
		o->position = (Ifc_axis_2_placement_2_d *)step_parser.parse_link(object_attributes[2]);
		links_to_resolve.push_back((Ifc **)&o->position);
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
		//TODO: parse non-pointer type: typedef Ifc_length_measure Ifc_positive_length_measure;
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

	else return new Ifc();
}

void Schema::print_object_info(Ifc *object) {	if (object->entity == "Ifc_2_d_composite_curve") {
		Ifc_2_d_composite_curve *o = reinterpret_cast<Ifc_2_d_composite_curve *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_action_request") {
		Ifc_action_request *o = reinterpret_cast<Ifc_action_request *>(object);
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
 	else if (object->entity == "Ifc_actuator_type") {
		Ifc_actuator_type *o = reinterpret_cast<Ifc_actuator_type *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_air_terminal_box_type") {
		Ifc_air_terminal_box_type *o = reinterpret_cast<Ifc_air_terminal_box_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_air_terminal_type") {
		Ifc_air_terminal_type *o = reinterpret_cast<Ifc_air_terminal_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_air_to_air_heat_recovery_type") {
		Ifc_air_to_air_heat_recovery_type *o = reinterpret_cast<Ifc_air_to_air_heat_recovery_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_alarm_type") {
		Ifc_alarm_type *o = reinterpret_cast<Ifc_alarm_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_angular_dimension") {
		Ifc_angular_dimension *o = reinterpret_cast<Ifc_angular_dimension *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_annotation") {
		Ifc_annotation *o = reinterpret_cast<Ifc_annotation *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_annotation_curve_occurrence") {
		Ifc_annotation_curve_occurrence *o = reinterpret_cast<Ifc_annotation_curve_occurrence *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_annotation_fill_area") {
		Ifc_annotation_fill_area *o = reinterpret_cast<Ifc_annotation_fill_area *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_annotation_fill_area_occurrence") {
		Ifc_annotation_fill_area_occurrence *o = reinterpret_cast<Ifc_annotation_fill_area_occurrence *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_annotation_surface") {
		Ifc_annotation_surface *o = reinterpret_cast<Ifc_annotation_surface *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_annotation_surface_occurrence") {
		Ifc_annotation_surface_occurrence *o = reinterpret_cast<Ifc_annotation_surface_occurrence *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_annotation_symbol_occurrence") {
		Ifc_annotation_symbol_occurrence *o = reinterpret_cast<Ifc_annotation_symbol_occurrence *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_annotation_text_occurrence") {
		Ifc_annotation_text_occurrence *o = reinterpret_cast<Ifc_annotation_text_occurrence *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_application") {
		Ifc_application *o = reinterpret_cast<Ifc_application *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_applied_value_relationship") {
		Ifc_applied_value_relationship *o = reinterpret_cast<Ifc_applied_value_relationship *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_approval") {
		Ifc_approval *o = reinterpret_cast<Ifc_approval *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_approval_actor_relationship") {
		Ifc_approval_actor_relationship *o = reinterpret_cast<Ifc_approval_actor_relationship *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_approval_property_relationship") {
		Ifc_approval_property_relationship *o = reinterpret_cast<Ifc_approval_property_relationship *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_approval_relationship") {
		Ifc_approval_relationship *o = reinterpret_cast<Ifc_approval_relationship *>(object);
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
 	else if (object->entity == "Ifc_asset") {
		Ifc_asset *o = reinterpret_cast<Ifc_asset *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_asymmetric_i_shape_profile_def") {
		Ifc_asymmetric_i_shape_profile_def *o = reinterpret_cast<Ifc_asymmetric_i_shape_profile_def *>(object);
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
 	else if (object->entity == "Ifc_beam_type") {
		Ifc_beam_type *o = reinterpret_cast<Ifc_beam_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_bezier_curve") {
		Ifc_bezier_curve *o = reinterpret_cast<Ifc_bezier_curve *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_blob_texture") {
		Ifc_blob_texture *o = reinterpret_cast<Ifc_blob_texture *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_block") {
		Ifc_block *o = reinterpret_cast<Ifc_block *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_boiler_type") {
		Ifc_boiler_type *o = reinterpret_cast<Ifc_boiler_type *>(object);
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
 		else if (object->entity == "Ifc_boundary_edge_condition") {
		Ifc_boundary_edge_condition *o = reinterpret_cast<Ifc_boundary_edge_condition *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_boundary_face_condition") {
		Ifc_boundary_face_condition *o = reinterpret_cast<Ifc_boundary_face_condition *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_boundary_node_condition") {
		Ifc_boundary_node_condition *o = reinterpret_cast<Ifc_boundary_node_condition *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_boundary_node_condition_warping") {
		Ifc_boundary_node_condition_warping *o = reinterpret_cast<Ifc_boundary_node_condition_warping *>(object);
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
 	else if (object->entity == "Ifc_building") {
		Ifc_building *o = reinterpret_cast<Ifc_building *>(object);
		std::cout << *o;
	}
 			else if (object->entity == "Ifc_building_element_part") {
		Ifc_building_element_part *o = reinterpret_cast<Ifc_building_element_part *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_building_element_proxy") {
		Ifc_building_element_proxy *o = reinterpret_cast<Ifc_building_element_proxy *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_building_element_proxy_type") {
		Ifc_building_element_proxy_type *o = reinterpret_cast<Ifc_building_element_proxy_type *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_building_storey") {
		Ifc_building_storey *o = reinterpret_cast<Ifc_building_storey *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_c_shape_profile_def") {
		Ifc_c_shape_profile_def *o = reinterpret_cast<Ifc_c_shape_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cable_carrier_fitting_type") {
		Ifc_cable_carrier_fitting_type *o = reinterpret_cast<Ifc_cable_carrier_fitting_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cable_carrier_segment_type") {
		Ifc_cable_carrier_segment_type *o = reinterpret_cast<Ifc_cable_carrier_segment_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cable_segment_type") {
		Ifc_cable_segment_type *o = reinterpret_cast<Ifc_cable_segment_type *>(object);
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
 	else if (object->entity == "Ifc_center_line_profile_def") {
		Ifc_center_line_profile_def *o = reinterpret_cast<Ifc_center_line_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_chamfer_edge_feature") {
		Ifc_chamfer_edge_feature *o = reinterpret_cast<Ifc_chamfer_edge_feature *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_chiller_type") {
		Ifc_chiller_type *o = reinterpret_cast<Ifc_chiller_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_circle") {
		Ifc_circle *o = reinterpret_cast<Ifc_circle *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_circle_hollow_profile_def") {
		Ifc_circle_hollow_profile_def *o = reinterpret_cast<Ifc_circle_hollow_profile_def *>(object);
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
 	else if (object->entity == "Ifc_coil_type") {
		Ifc_coil_type *o = reinterpret_cast<Ifc_coil_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_colour_rgb") {
		Ifc_colour_rgb *o = reinterpret_cast<Ifc_colour_rgb *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_column") {
		Ifc_column *o = reinterpret_cast<Ifc_column *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_column_type") {
		Ifc_column_type *o = reinterpret_cast<Ifc_column_type *>(object);
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
 	else if (object->entity == "Ifc_compressor_type") {
		Ifc_compressor_type *o = reinterpret_cast<Ifc_compressor_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_condenser_type") {
		Ifc_condenser_type *o = reinterpret_cast<Ifc_condenser_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_condition") {
		Ifc_condition *o = reinterpret_cast<Ifc_condition *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_condition_criterion") {
		Ifc_condition_criterion *o = reinterpret_cast<Ifc_condition_criterion *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_connected_face_set") {
		Ifc_connected_face_set *o = reinterpret_cast<Ifc_connected_face_set *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_connection_curve_geometry") {
		Ifc_connection_curve_geometry *o = reinterpret_cast<Ifc_connection_curve_geometry *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_connection_point_eccentricity") {
		Ifc_connection_point_eccentricity *o = reinterpret_cast<Ifc_connection_point_eccentricity *>(object);
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
 		else if (object->entity == "Ifc_constraint_aggregation_relationship") {
		Ifc_constraint_aggregation_relationship *o = reinterpret_cast<Ifc_constraint_aggregation_relationship *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_constraint_classification_relationship") {
		Ifc_constraint_classification_relationship *o = reinterpret_cast<Ifc_constraint_classification_relationship *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_constraint_relationship") {
		Ifc_constraint_relationship *o = reinterpret_cast<Ifc_constraint_relationship *>(object);
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
 		else if (object->entity == "Ifc_controller_type") {
		Ifc_controller_type *o = reinterpret_cast<Ifc_controller_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_conversion_based_unit") {
		Ifc_conversion_based_unit *o = reinterpret_cast<Ifc_conversion_based_unit *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cooled_beam_type") {
		Ifc_cooled_beam_type *o = reinterpret_cast<Ifc_cooled_beam_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cooling_tower_type") {
		Ifc_cooling_tower_type *o = reinterpret_cast<Ifc_cooling_tower_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_coordinated_universal_time_offset") {
		Ifc_coordinated_universal_time_offset *o = reinterpret_cast<Ifc_coordinated_universal_time_offset *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_cost_item") {
		Ifc_cost_item *o = reinterpret_cast<Ifc_cost_item *>(object);
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
 	else if (object->entity == "Ifc_covering") {
		Ifc_covering *o = reinterpret_cast<Ifc_covering *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_covering_type") {
		Ifc_covering_type *o = reinterpret_cast<Ifc_covering_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_crane_rail_a_shape_profile_def") {
		Ifc_crane_rail_a_shape_profile_def *o = reinterpret_cast<Ifc_crane_rail_a_shape_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_crane_rail_f_shape_profile_def") {
		Ifc_crane_rail_f_shape_profile_def *o = reinterpret_cast<Ifc_crane_rail_f_shape_profile_def *>(object);
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
 	else if (object->entity == "Ifc_currency_relationship") {
		Ifc_currency_relationship *o = reinterpret_cast<Ifc_currency_relationship *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_curtain_wall") {
		Ifc_curtain_wall *o = reinterpret_cast<Ifc_curtain_wall *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_curtain_wall_type") {
		Ifc_curtain_wall_type *o = reinterpret_cast<Ifc_curtain_wall_type *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_curve_bounded_plane") {
		Ifc_curve_bounded_plane *o = reinterpret_cast<Ifc_curve_bounded_plane *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_curve_style") {
		Ifc_curve_style *o = reinterpret_cast<Ifc_curve_style *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_curve_style_font") {
		Ifc_curve_style_font *o = reinterpret_cast<Ifc_curve_style_font *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_curve_style_font_and_scaling") {
		Ifc_curve_style_font_and_scaling *o = reinterpret_cast<Ifc_curve_style_font_and_scaling *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_curve_style_font_pattern") {
		Ifc_curve_style_font_pattern *o = reinterpret_cast<Ifc_curve_style_font_pattern *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_damper_type") {
		Ifc_damper_type *o = reinterpret_cast<Ifc_damper_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_date_and_time") {
		Ifc_date_and_time *o = reinterpret_cast<Ifc_date_and_time *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_defined_symbol") {
		Ifc_defined_symbol *o = reinterpret_cast<Ifc_defined_symbol *>(object);
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
 	else if (object->entity == "Ifc_diameter_dimension") {
		Ifc_diameter_dimension *o = reinterpret_cast<Ifc_diameter_dimension *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_dimension_callout_relationship") {
		Ifc_dimension_callout_relationship *o = reinterpret_cast<Ifc_dimension_callout_relationship *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_dimension_curve") {
		Ifc_dimension_curve *o = reinterpret_cast<Ifc_dimension_curve *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_dimension_curve_directed_callout") {
		Ifc_dimension_curve_directed_callout *o = reinterpret_cast<Ifc_dimension_curve_directed_callout *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_dimension_curve_terminator") {
		Ifc_dimension_curve_terminator *o = reinterpret_cast<Ifc_dimension_curve_terminator *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_dimension_pair") {
		Ifc_dimension_pair *o = reinterpret_cast<Ifc_dimension_pair *>(object);
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
 	else if (object->entity == "Ifc_discrete_accessory") {
		Ifc_discrete_accessory *o = reinterpret_cast<Ifc_discrete_accessory *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_discrete_accessory_type") {
		Ifc_discrete_accessory_type *o = reinterpret_cast<Ifc_discrete_accessory_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_distribution_chamber_element") {
		Ifc_distribution_chamber_element *o = reinterpret_cast<Ifc_distribution_chamber_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_distribution_chamber_element_type") {
		Ifc_distribution_chamber_element_type *o = reinterpret_cast<Ifc_distribution_chamber_element_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_distribution_control_element") {
		Ifc_distribution_control_element *o = reinterpret_cast<Ifc_distribution_control_element *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_distribution_element") {
		Ifc_distribution_element *o = reinterpret_cast<Ifc_distribution_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_distribution_element_type") {
		Ifc_distribution_element_type *o = reinterpret_cast<Ifc_distribution_element_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_distribution_flow_element") {
		Ifc_distribution_flow_element *o = reinterpret_cast<Ifc_distribution_flow_element *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_distribution_port") {
		Ifc_distribution_port *o = reinterpret_cast<Ifc_distribution_port *>(object);
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
 	else if (object->entity == "Ifc_draughting_callout") {
		Ifc_draughting_callout *o = reinterpret_cast<Ifc_draughting_callout *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_draughting_callout_relationship") {
		Ifc_draughting_callout_relationship *o = reinterpret_cast<Ifc_draughting_callout_relationship *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_draughting_pre_defined_colour") {
		Ifc_draughting_pre_defined_colour *o = reinterpret_cast<Ifc_draughting_pre_defined_colour *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_draughting_pre_defined_curve_font") {
		Ifc_draughting_pre_defined_curve_font *o = reinterpret_cast<Ifc_draughting_pre_defined_curve_font *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_draughting_pre_defined_text_font") {
		Ifc_draughting_pre_defined_text_font *o = reinterpret_cast<Ifc_draughting_pre_defined_text_font *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_duct_fitting_type") {
		Ifc_duct_fitting_type *o = reinterpret_cast<Ifc_duct_fitting_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_duct_segment_type") {
		Ifc_duct_segment_type *o = reinterpret_cast<Ifc_duct_segment_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_duct_silencer_type") {
		Ifc_duct_silencer_type *o = reinterpret_cast<Ifc_duct_silencer_type *>(object);
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
 		else if (object->entity == "Ifc_edge_loop") {
		Ifc_edge_loop *o = reinterpret_cast<Ifc_edge_loop *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_electric_appliance_type") {
		Ifc_electric_appliance_type *o = reinterpret_cast<Ifc_electric_appliance_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_electric_distribution_point") {
		Ifc_electric_distribution_point *o = reinterpret_cast<Ifc_electric_distribution_point *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_electric_flow_storage_device_type") {
		Ifc_electric_flow_storage_device_type *o = reinterpret_cast<Ifc_electric_flow_storage_device_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_electric_generator_type") {
		Ifc_electric_generator_type *o = reinterpret_cast<Ifc_electric_generator_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_electric_heater_type") {
		Ifc_electric_heater_type *o = reinterpret_cast<Ifc_electric_heater_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_electric_motor_type") {
		Ifc_electric_motor_type *o = reinterpret_cast<Ifc_electric_motor_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_electric_time_control_type") {
		Ifc_electric_time_control_type *o = reinterpret_cast<Ifc_electric_time_control_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_electrical_base_properties") {
		Ifc_electrical_base_properties *o = reinterpret_cast<Ifc_electrical_base_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_electrical_circuit") {
		Ifc_electrical_circuit *o = reinterpret_cast<Ifc_electrical_circuit *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_electrical_element") {
		Ifc_electrical_element *o = reinterpret_cast<Ifc_electrical_element *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_element_assembly") {
		Ifc_element_assembly *o = reinterpret_cast<Ifc_element_assembly *>(object);
		std::cout << *o;
	}
 			else if (object->entity == "Ifc_element_quantity") {
		Ifc_element_quantity *o = reinterpret_cast<Ifc_element_quantity *>(object);
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
 	else if (object->entity == "Ifc_energy_conversion_device") {
		Ifc_energy_conversion_device *o = reinterpret_cast<Ifc_energy_conversion_device *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_energy_properties") {
		Ifc_energy_properties *o = reinterpret_cast<Ifc_energy_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_environmental_impact_value") {
		Ifc_environmental_impact_value *o = reinterpret_cast<Ifc_environmental_impact_value *>(object);
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
 	else if (object->entity == "Ifc_evaporative_cooler_type") {
		Ifc_evaporative_cooler_type *o = reinterpret_cast<Ifc_evaporative_cooler_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_evaporator_type") {
		Ifc_evaporator_type *o = reinterpret_cast<Ifc_evaporator_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_extended_material_properties") {
		Ifc_extended_material_properties *o = reinterpret_cast<Ifc_extended_material_properties *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_externally_defined_hatch_style") {
		Ifc_externally_defined_hatch_style *o = reinterpret_cast<Ifc_externally_defined_hatch_style *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_externally_defined_surface_style") {
		Ifc_externally_defined_surface_style *o = reinterpret_cast<Ifc_externally_defined_surface_style *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_externally_defined_symbol") {
		Ifc_externally_defined_symbol *o = reinterpret_cast<Ifc_externally_defined_symbol *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_externally_defined_text_font") {
		Ifc_externally_defined_text_font *o = reinterpret_cast<Ifc_externally_defined_text_font *>(object);
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
 	else if (object->entity == "Ifc_failure_connection_condition") {
		Ifc_failure_connection_condition *o = reinterpret_cast<Ifc_failure_connection_condition *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_fan_type") {
		Ifc_fan_type *o = reinterpret_cast<Ifc_fan_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_fastener") {
		Ifc_fastener *o = reinterpret_cast<Ifc_fastener *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_fastener_type") {
		Ifc_fastener_type *o = reinterpret_cast<Ifc_fastener_type *>(object);
		std::cout << *o;
	}
 				else if (object->entity == "Ifc_fill_area_style") {
		Ifc_fill_area_style *o = reinterpret_cast<Ifc_fill_area_style *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_fill_area_style_hatching") {
		Ifc_fill_area_style_hatching *o = reinterpret_cast<Ifc_fill_area_style_hatching *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_fill_area_style_tile_symbol_with_style") {
		Ifc_fill_area_style_tile_symbol_with_style *o = reinterpret_cast<Ifc_fill_area_style_tile_symbol_with_style *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_fill_area_style_tiles") {
		Ifc_fill_area_style_tiles *o = reinterpret_cast<Ifc_fill_area_style_tiles *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_filter_type") {
		Ifc_filter_type *o = reinterpret_cast<Ifc_filter_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_fire_suppression_terminal_type") {
		Ifc_fire_suppression_terminal_type *o = reinterpret_cast<Ifc_fire_suppression_terminal_type *>(object);
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
 		else if (object->entity == "Ifc_flow_instrument_type") {
		Ifc_flow_instrument_type *o = reinterpret_cast<Ifc_flow_instrument_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_flow_meter_type") {
		Ifc_flow_meter_type *o = reinterpret_cast<Ifc_flow_meter_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_flow_moving_device") {
		Ifc_flow_moving_device *o = reinterpret_cast<Ifc_flow_moving_device *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_flow_segment") {
		Ifc_flow_segment *o = reinterpret_cast<Ifc_flow_segment *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_flow_storage_device") {
		Ifc_flow_storage_device *o = reinterpret_cast<Ifc_flow_storage_device *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_flow_terminal") {
		Ifc_flow_terminal *o = reinterpret_cast<Ifc_flow_terminal *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_flow_treatment_device") {
		Ifc_flow_treatment_device *o = reinterpret_cast<Ifc_flow_treatment_device *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_fluid_flow_properties") {
		Ifc_fluid_flow_properties *o = reinterpret_cast<Ifc_fluid_flow_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_footing") {
		Ifc_footing *o = reinterpret_cast<Ifc_footing *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_fuel_properties") {
		Ifc_fuel_properties *o = reinterpret_cast<Ifc_fuel_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_furnishing_element") {
		Ifc_furnishing_element *o = reinterpret_cast<Ifc_furnishing_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_furnishing_element_type") {
		Ifc_furnishing_element_type *o = reinterpret_cast<Ifc_furnishing_element_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_furniture_standard") {
		Ifc_furniture_standard *o = reinterpret_cast<Ifc_furniture_standard *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_furniture_type") {
		Ifc_furniture_type *o = reinterpret_cast<Ifc_furniture_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_gas_terminal_type") {
		Ifc_gas_terminal_type *o = reinterpret_cast<Ifc_gas_terminal_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_general_material_properties") {
		Ifc_general_material_properties *o = reinterpret_cast<Ifc_general_material_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_general_profile_properties") {
		Ifc_general_profile_properties *o = reinterpret_cast<Ifc_general_profile_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_geometric_curve_set") {
		Ifc_geometric_curve_set *o = reinterpret_cast<Ifc_geometric_curve_set *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_geometric_representation_context") {
		Ifc_geometric_representation_context *o = reinterpret_cast<Ifc_geometric_representation_context *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_geometric_representation_sub_context") {
		Ifc_geometric_representation_sub_context *o = reinterpret_cast<Ifc_geometric_representation_sub_context *>(object);
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
 	else if (object->entity == "Ifc_heat_exchanger_type") {
		Ifc_heat_exchanger_type *o = reinterpret_cast<Ifc_heat_exchanger_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_humidifier_type") {
		Ifc_humidifier_type *o = reinterpret_cast<Ifc_humidifier_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_hygroscopic_material_properties") {
		Ifc_hygroscopic_material_properties *o = reinterpret_cast<Ifc_hygroscopic_material_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_i_shape_profile_def") {
		Ifc_i_shape_profile_def *o = reinterpret_cast<Ifc_i_shape_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_image_texture") {
		Ifc_image_texture *o = reinterpret_cast<Ifc_image_texture *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_inventory") {
		Ifc_inventory *o = reinterpret_cast<Ifc_inventory *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_irregular_time_series") {
		Ifc_irregular_time_series *o = reinterpret_cast<Ifc_irregular_time_series *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_irregular_time_series_value") {
		Ifc_irregular_time_series_value *o = reinterpret_cast<Ifc_irregular_time_series_value *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_junction_box_type") {
		Ifc_junction_box_type *o = reinterpret_cast<Ifc_junction_box_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_l_shape_profile_def") {
		Ifc_l_shape_profile_def *o = reinterpret_cast<Ifc_l_shape_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_labor_resource") {
		Ifc_labor_resource *o = reinterpret_cast<Ifc_labor_resource *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_lamp_type") {
		Ifc_lamp_type *o = reinterpret_cast<Ifc_lamp_type *>(object);
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
 	else if (object->entity == "Ifc_light_distribution_data") {
		Ifc_light_distribution_data *o = reinterpret_cast<Ifc_light_distribution_data *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_light_fixture_type") {
		Ifc_light_fixture_type *o = reinterpret_cast<Ifc_light_fixture_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_light_intensity_distribution") {
		Ifc_light_intensity_distribution *o = reinterpret_cast<Ifc_light_intensity_distribution *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_light_source_ambient") {
		Ifc_light_source_ambient *o = reinterpret_cast<Ifc_light_source_ambient *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_light_source_directional") {
		Ifc_light_source_directional *o = reinterpret_cast<Ifc_light_source_directional *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_light_source_goniometric") {
		Ifc_light_source_goniometric *o = reinterpret_cast<Ifc_light_source_goniometric *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_light_source_positional") {
		Ifc_light_source_positional *o = reinterpret_cast<Ifc_light_source_positional *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_light_source_spot") {
		Ifc_light_source_spot *o = reinterpret_cast<Ifc_light_source_spot *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_line") {
		Ifc_line *o = reinterpret_cast<Ifc_line *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_linear_dimension") {
		Ifc_linear_dimension *o = reinterpret_cast<Ifc_linear_dimension *>(object);
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
 	else if (object->entity == "Ifc_material_definition_representation") {
		Ifc_material_definition_representation *o = reinterpret_cast<Ifc_material_definition_representation *>(object);
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
 		else if (object->entity == "Ifc_measure_with_unit") {
		Ifc_measure_with_unit *o = reinterpret_cast<Ifc_measure_with_unit *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_mechanical_concrete_material_properties") {
		Ifc_mechanical_concrete_material_properties *o = reinterpret_cast<Ifc_mechanical_concrete_material_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_mechanical_fastener") {
		Ifc_mechanical_fastener *o = reinterpret_cast<Ifc_mechanical_fastener *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_mechanical_fastener_type") {
		Ifc_mechanical_fastener_type *o = reinterpret_cast<Ifc_mechanical_fastener_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_mechanical_material_properties") {
		Ifc_mechanical_material_properties *o = reinterpret_cast<Ifc_mechanical_material_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_mechanical_steel_material_properties") {
		Ifc_mechanical_steel_material_properties *o = reinterpret_cast<Ifc_mechanical_steel_material_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_member") {
		Ifc_member *o = reinterpret_cast<Ifc_member *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_member_type") {
		Ifc_member_type *o = reinterpret_cast<Ifc_member_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_metric") {
		Ifc_metric *o = reinterpret_cast<Ifc_metric *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_monetary_unit") {
		Ifc_monetary_unit *o = reinterpret_cast<Ifc_monetary_unit *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_motor_connection_type") {
		Ifc_motor_connection_type *o = reinterpret_cast<Ifc_motor_connection_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_move") {
		Ifc_move *o = reinterpret_cast<Ifc_move *>(object);
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
 	else if (object->entity == "Ifc_one_direction_repeat_factor") {
		Ifc_one_direction_repeat_factor *o = reinterpret_cast<Ifc_one_direction_repeat_factor *>(object);
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
 	else if (object->entity == "Ifc_order_action") {
		Ifc_order_action *o = reinterpret_cast<Ifc_order_action *>(object);
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
 	else if (object->entity == "Ifc_outlet_type") {
		Ifc_outlet_type *o = reinterpret_cast<Ifc_outlet_type *>(object);
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
 	else if (object->entity == "Ifc_performance_history") {
		Ifc_performance_history *o = reinterpret_cast<Ifc_performance_history *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_permeable_covering_properties") {
		Ifc_permeable_covering_properties *o = reinterpret_cast<Ifc_permeable_covering_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_permit") {
		Ifc_permit *o = reinterpret_cast<Ifc_permit *>(object);
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
 	else if (object->entity == "Ifc_physical_complex_quantity") {
		Ifc_physical_complex_quantity *o = reinterpret_cast<Ifc_physical_complex_quantity *>(object);
		std::cout << *o;
	}
 			else if (object->entity == "Ifc_pile") {
		Ifc_pile *o = reinterpret_cast<Ifc_pile *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_pipe_fitting_type") {
		Ifc_pipe_fitting_type *o = reinterpret_cast<Ifc_pipe_fitting_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_pipe_segment_type") {
		Ifc_pipe_segment_type *o = reinterpret_cast<Ifc_pipe_segment_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_pixel_texture") {
		Ifc_pixel_texture *o = reinterpret_cast<Ifc_pixel_texture *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_planar_box") {
		Ifc_planar_box *o = reinterpret_cast<Ifc_planar_box *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_planar_extent") {
		Ifc_planar_extent *o = reinterpret_cast<Ifc_planar_extent *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_plane") {
		Ifc_plane *o = reinterpret_cast<Ifc_plane *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_plate") {
		Ifc_plate *o = reinterpret_cast<Ifc_plate *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_plate_type") {
		Ifc_plate_type *o = reinterpret_cast<Ifc_plate_type *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_point_on_curve") {
		Ifc_point_on_curve *o = reinterpret_cast<Ifc_point_on_curve *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_point_on_surface") {
		Ifc_point_on_surface *o = reinterpret_cast<Ifc_point_on_surface *>(object);
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
 			else if (object->entity == "Ifc_pre_defined_dimension_symbol") {
		Ifc_pre_defined_dimension_symbol *o = reinterpret_cast<Ifc_pre_defined_dimension_symbol *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_pre_defined_point_marker_symbol") {
		Ifc_pre_defined_point_marker_symbol *o = reinterpret_cast<Ifc_pre_defined_point_marker_symbol *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_pre_defined_terminator_symbol") {
		Ifc_pre_defined_terminator_symbol *o = reinterpret_cast<Ifc_pre_defined_terminator_symbol *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_presentation_layer_assignment") {
		Ifc_presentation_layer_assignment *o = reinterpret_cast<Ifc_presentation_layer_assignment *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_presentation_layer_with_style") {
		Ifc_presentation_layer_with_style *o = reinterpret_cast<Ifc_presentation_layer_with_style *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_presentation_style_assignment") {
		Ifc_presentation_style_assignment *o = reinterpret_cast<Ifc_presentation_style_assignment *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_procedure") {
		Ifc_procedure *o = reinterpret_cast<Ifc_procedure *>(object);
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
 	else if (object->entity == "Ifc_products_of_combustion_properties") {
		Ifc_products_of_combustion_properties *o = reinterpret_cast<Ifc_products_of_combustion_properties *>(object);
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
 	else if (object->entity == "Ifc_project_order_record") {
		Ifc_project_order_record *o = reinterpret_cast<Ifc_project_order_record *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_projection_curve") {
		Ifc_projection_curve *o = reinterpret_cast<Ifc_projection_curve *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_projection_element") {
		Ifc_projection_element *o = reinterpret_cast<Ifc_projection_element *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_property_bounded_value") {
		Ifc_property_bounded_value *o = reinterpret_cast<Ifc_property_bounded_value *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_property_constraint_relationship") {
		Ifc_property_constraint_relationship *o = reinterpret_cast<Ifc_property_constraint_relationship *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_property_dependency_relationship") {
		Ifc_property_dependency_relationship *o = reinterpret_cast<Ifc_property_dependency_relationship *>(object);
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
 	else if (object->entity == "Ifc_property_list_value") {
		Ifc_property_list_value *o = reinterpret_cast<Ifc_property_list_value *>(object);
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
 		else if (object->entity == "Ifc_property_single_value") {
		Ifc_property_single_value *o = reinterpret_cast<Ifc_property_single_value *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_property_table_value") {
		Ifc_property_table_value *o = reinterpret_cast<Ifc_property_table_value *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_protective_device_type") {
		Ifc_protective_device_type *o = reinterpret_cast<Ifc_protective_device_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_proxy") {
		Ifc_proxy *o = reinterpret_cast<Ifc_proxy *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_pump_type") {
		Ifc_pump_type *o = reinterpret_cast<Ifc_pump_type *>(object);
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
 	else if (object->entity == "Ifc_quantity_time") {
		Ifc_quantity_time *o = reinterpret_cast<Ifc_quantity_time *>(object);
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
 	else if (object->entity == "Ifc_radius_dimension") {
		Ifc_radius_dimension *o = reinterpret_cast<Ifc_radius_dimension *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_railing") {
		Ifc_railing *o = reinterpret_cast<Ifc_railing *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_railing_type") {
		Ifc_railing_type *o = reinterpret_cast<Ifc_railing_type *>(object);
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
 	else if (object->entity == "Ifc_ramp_flight_type") {
		Ifc_ramp_flight_type *o = reinterpret_cast<Ifc_ramp_flight_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rational_bezier_curve") {
		Ifc_rational_bezier_curve *o = reinterpret_cast<Ifc_rational_bezier_curve *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rectangle_hollow_profile_def") {
		Ifc_rectangle_hollow_profile_def *o = reinterpret_cast<Ifc_rectangle_hollow_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rectangle_profile_def") {
		Ifc_rectangle_profile_def *o = reinterpret_cast<Ifc_rectangle_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rectangular_pyramid") {
		Ifc_rectangular_pyramid *o = reinterpret_cast<Ifc_rectangular_pyramid *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rectangular_trimmed_surface") {
		Ifc_rectangular_trimmed_surface *o = reinterpret_cast<Ifc_rectangular_trimmed_surface *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_references_value_document") {
		Ifc_references_value_document *o = reinterpret_cast<Ifc_references_value_document *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_regular_time_series") {
		Ifc_regular_time_series *o = reinterpret_cast<Ifc_regular_time_series *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_reinforcement_bar_properties") {
		Ifc_reinforcement_bar_properties *o = reinterpret_cast<Ifc_reinforcement_bar_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_reinforcement_definition_properties") {
		Ifc_reinforcement_definition_properties *o = reinterpret_cast<Ifc_reinforcement_definition_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_reinforcing_bar") {
		Ifc_reinforcing_bar *o = reinterpret_cast<Ifc_reinforcing_bar *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_reinforcing_mesh") {
		Ifc_reinforcing_mesh *o = reinterpret_cast<Ifc_reinforcing_mesh *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_aggregates") {
		Ifc_rel_aggregates *o = reinterpret_cast<Ifc_rel_aggregates *>(object);
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
 	else if (object->entity == "Ifc_rel_assigns_to_project_order") {
		Ifc_rel_assigns_to_project_order *o = reinterpret_cast<Ifc_rel_assigns_to_project_order *>(object);
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
 	else if (object->entity == "Ifc_rel_associates_applied_value") {
		Ifc_rel_associates_applied_value *o = reinterpret_cast<Ifc_rel_associates_applied_value *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_associates_approval") {
		Ifc_rel_associates_approval *o = reinterpret_cast<Ifc_rel_associates_approval *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_associates_classification") {
		Ifc_rel_associates_classification *o = reinterpret_cast<Ifc_rel_associates_classification *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_associates_constraint") {
		Ifc_rel_associates_constraint *o = reinterpret_cast<Ifc_rel_associates_constraint *>(object);
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
 	else if (object->entity == "Ifc_rel_associates_profile_properties") {
		Ifc_rel_associates_profile_properties *o = reinterpret_cast<Ifc_rel_associates_profile_properties *>(object);
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
 	else if (object->entity == "Ifc_rel_connects_port_to_element") {
		Ifc_rel_connects_port_to_element *o = reinterpret_cast<Ifc_rel_connects_port_to_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_connects_ports") {
		Ifc_rel_connects_ports *o = reinterpret_cast<Ifc_rel_connects_ports *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_connects_structural_activity") {
		Ifc_rel_connects_structural_activity *o = reinterpret_cast<Ifc_rel_connects_structural_activity *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_connects_structural_element") {
		Ifc_rel_connects_structural_element *o = reinterpret_cast<Ifc_rel_connects_structural_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_connects_structural_member") {
		Ifc_rel_connects_structural_member *o = reinterpret_cast<Ifc_rel_connects_structural_member *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_connects_with_eccentricity") {
		Ifc_rel_connects_with_eccentricity *o = reinterpret_cast<Ifc_rel_connects_with_eccentricity *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_connects_with_realizing_elements") {
		Ifc_rel_connects_with_realizing_elements *o = reinterpret_cast<Ifc_rel_connects_with_realizing_elements *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_contained_in_spatial_structure") {
		Ifc_rel_contained_in_spatial_structure *o = reinterpret_cast<Ifc_rel_contained_in_spatial_structure *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_covers_bldg_elements") {
		Ifc_rel_covers_bldg_elements *o = reinterpret_cast<Ifc_rel_covers_bldg_elements *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_covers_spaces") {
		Ifc_rel_covers_spaces *o = reinterpret_cast<Ifc_rel_covers_spaces *>(object);
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
 	else if (object->entity == "Ifc_rel_projects_element") {
		Ifc_rel_projects_element *o = reinterpret_cast<Ifc_rel_projects_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_referenced_in_spatial_structure") {
		Ifc_rel_referenced_in_spatial_structure *o = reinterpret_cast<Ifc_rel_referenced_in_spatial_structure *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rel_schedules_cost_items") {
		Ifc_rel_schedules_cost_items *o = reinterpret_cast<Ifc_rel_schedules_cost_items *>(object);
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
 	else if (object->entity == "Ifc_rel_voids_element") {
		Ifc_rel_voids_element *o = reinterpret_cast<Ifc_rel_voids_element *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_relaxation") {
		Ifc_relaxation *o = reinterpret_cast<Ifc_relaxation *>(object);
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
 		else if (object->entity == "Ifc_representation_map") {
		Ifc_representation_map *o = reinterpret_cast<Ifc_representation_map *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_revolved_area_solid") {
		Ifc_revolved_area_solid *o = reinterpret_cast<Ifc_revolved_area_solid *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_rib_plate_profile_properties") {
		Ifc_rib_plate_profile_properties *o = reinterpret_cast<Ifc_rib_plate_profile_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_right_circular_cone") {
		Ifc_right_circular_cone *o = reinterpret_cast<Ifc_right_circular_cone *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_right_circular_cylinder") {
		Ifc_right_circular_cylinder *o = reinterpret_cast<Ifc_right_circular_cylinder *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_roof") {
		Ifc_roof *o = reinterpret_cast<Ifc_roof *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_rounded_edge_feature") {
		Ifc_rounded_edge_feature *o = reinterpret_cast<Ifc_rounded_edge_feature *>(object);
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
 	else if (object->entity == "Ifc_sanitary_terminal_type") {
		Ifc_sanitary_terminal_type *o = reinterpret_cast<Ifc_sanitary_terminal_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_schedule_time_control") {
		Ifc_schedule_time_control *o = reinterpret_cast<Ifc_schedule_time_control *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_section_properties") {
		Ifc_section_properties *o = reinterpret_cast<Ifc_section_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_section_reinforcement_properties") {
		Ifc_section_reinforcement_properties *o = reinterpret_cast<Ifc_section_reinforcement_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_sectioned_spine") {
		Ifc_sectioned_spine *o = reinterpret_cast<Ifc_sectioned_spine *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_sensor_type") {
		Ifc_sensor_type *o = reinterpret_cast<Ifc_sensor_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_service_life") {
		Ifc_service_life *o = reinterpret_cast<Ifc_service_life *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_service_life_factor") {
		Ifc_service_life_factor *o = reinterpret_cast<Ifc_service_life_factor *>(object);
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
 		else if (object->entity == "Ifc_site") {
		Ifc_site *o = reinterpret_cast<Ifc_site *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_slab") {
		Ifc_slab *o = reinterpret_cast<Ifc_slab *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_slab_type") {
		Ifc_slab_type *o = reinterpret_cast<Ifc_slab_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_slippage_connection_condition") {
		Ifc_slippage_connection_condition *o = reinterpret_cast<Ifc_slippage_connection_condition *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_sound_properties") {
		Ifc_sound_properties *o = reinterpret_cast<Ifc_sound_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_sound_value") {
		Ifc_sound_value *o = reinterpret_cast<Ifc_sound_value *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_space") {
		Ifc_space *o = reinterpret_cast<Ifc_space *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_space_heater_type") {
		Ifc_space_heater_type *o = reinterpret_cast<Ifc_space_heater_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_space_program") {
		Ifc_space_program *o = reinterpret_cast<Ifc_space_program *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_space_thermal_load_properties") {
		Ifc_space_thermal_load_properties *o = reinterpret_cast<Ifc_space_thermal_load_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_space_type") {
		Ifc_space_type *o = reinterpret_cast<Ifc_space_type *>(object);
		std::cout << *o;
	}
 			else if (object->entity == "Ifc_sphere") {
		Ifc_sphere *o = reinterpret_cast<Ifc_sphere *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_stack_terminal_type") {
		Ifc_stack_terminal_type *o = reinterpret_cast<Ifc_stack_terminal_type *>(object);
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
 	else if (object->entity == "Ifc_stair_flight_type") {
		Ifc_stair_flight_type *o = reinterpret_cast<Ifc_stair_flight_type *>(object);
		std::cout << *o;
	}
 			else if (object->entity == "Ifc_structural_analysis_model") {
		Ifc_structural_analysis_model *o = reinterpret_cast<Ifc_structural_analysis_model *>(object);
		std::cout << *o;
	}
 			else if (object->entity == "Ifc_structural_curve_connection") {
		Ifc_structural_curve_connection *o = reinterpret_cast<Ifc_structural_curve_connection *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_structural_curve_member") {
		Ifc_structural_curve_member *o = reinterpret_cast<Ifc_structural_curve_member *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_structural_curve_member_varying") {
		Ifc_structural_curve_member_varying *o = reinterpret_cast<Ifc_structural_curve_member_varying *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_structural_linear_action") {
		Ifc_structural_linear_action *o = reinterpret_cast<Ifc_structural_linear_action *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_structural_linear_action_varying") {
		Ifc_structural_linear_action_varying *o = reinterpret_cast<Ifc_structural_linear_action_varying *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_structural_load_group") {
		Ifc_structural_load_group *o = reinterpret_cast<Ifc_structural_load_group *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_structural_load_linear_force") {
		Ifc_structural_load_linear_force *o = reinterpret_cast<Ifc_structural_load_linear_force *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_structural_load_planar_force") {
		Ifc_structural_load_planar_force *o = reinterpret_cast<Ifc_structural_load_planar_force *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_structural_load_single_displacement") {
		Ifc_structural_load_single_displacement *o = reinterpret_cast<Ifc_structural_load_single_displacement *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_structural_load_single_displacement_distortion") {
		Ifc_structural_load_single_displacement_distortion *o = reinterpret_cast<Ifc_structural_load_single_displacement_distortion *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_structural_load_single_force") {
		Ifc_structural_load_single_force *o = reinterpret_cast<Ifc_structural_load_single_force *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_structural_load_single_force_warping") {
		Ifc_structural_load_single_force_warping *o = reinterpret_cast<Ifc_structural_load_single_force_warping *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_structural_load_temperature") {
		Ifc_structural_load_temperature *o = reinterpret_cast<Ifc_structural_load_temperature *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_structural_planar_action") {
		Ifc_structural_planar_action *o = reinterpret_cast<Ifc_structural_planar_action *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_structural_planar_action_varying") {
		Ifc_structural_planar_action_varying *o = reinterpret_cast<Ifc_structural_planar_action_varying *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_structural_point_action") {
		Ifc_structural_point_action *o = reinterpret_cast<Ifc_structural_point_action *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_structural_point_connection") {
		Ifc_structural_point_connection *o = reinterpret_cast<Ifc_structural_point_connection *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_structural_point_reaction") {
		Ifc_structural_point_reaction *o = reinterpret_cast<Ifc_structural_point_reaction *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_structural_profile_properties") {
		Ifc_structural_profile_properties *o = reinterpret_cast<Ifc_structural_profile_properties *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_structural_result_group") {
		Ifc_structural_result_group *o = reinterpret_cast<Ifc_structural_result_group *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_structural_steel_profile_properties") {
		Ifc_structural_steel_profile_properties *o = reinterpret_cast<Ifc_structural_steel_profile_properties *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_structural_surface_connection") {
		Ifc_structural_surface_connection *o = reinterpret_cast<Ifc_structural_surface_connection *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_structural_surface_member") {
		Ifc_structural_surface_member *o = reinterpret_cast<Ifc_structural_surface_member *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_structural_surface_member_varying") {
		Ifc_structural_surface_member_varying *o = reinterpret_cast<Ifc_structural_surface_member_varying *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_structured_dimension_callout") {
		Ifc_structured_dimension_callout *o = reinterpret_cast<Ifc_structured_dimension_callout *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_styled_item") {
		Ifc_styled_item *o = reinterpret_cast<Ifc_styled_item *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_styled_representation") {
		Ifc_styled_representation *o = reinterpret_cast<Ifc_styled_representation *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_sub_contract_resource") {
		Ifc_sub_contract_resource *o = reinterpret_cast<Ifc_sub_contract_resource *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_subedge") {
		Ifc_subedge *o = reinterpret_cast<Ifc_subedge *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_surface_curve_swept_area_solid") {
		Ifc_surface_curve_swept_area_solid *o = reinterpret_cast<Ifc_surface_curve_swept_area_solid *>(object);
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
 	else if (object->entity == "Ifc_surface_style") {
		Ifc_surface_style *o = reinterpret_cast<Ifc_surface_style *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_surface_style_lighting") {
		Ifc_surface_style_lighting *o = reinterpret_cast<Ifc_surface_style_lighting *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_surface_style_refraction") {
		Ifc_surface_style_refraction *o = reinterpret_cast<Ifc_surface_style_refraction *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_surface_style_rendering") {
		Ifc_surface_style_rendering *o = reinterpret_cast<Ifc_surface_style_rendering *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_surface_style_shading") {
		Ifc_surface_style_shading *o = reinterpret_cast<Ifc_surface_style_shading *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_surface_style_with_textures") {
		Ifc_surface_style_with_textures *o = reinterpret_cast<Ifc_surface_style_with_textures *>(object);
		std::cout << *o;
	}
 			else if (object->entity == "Ifc_swept_disk_solid") {
		Ifc_swept_disk_solid *o = reinterpret_cast<Ifc_swept_disk_solid *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_switching_device_type") {
		Ifc_switching_device_type *o = reinterpret_cast<Ifc_switching_device_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_symbol_style") {
		Ifc_symbol_style *o = reinterpret_cast<Ifc_symbol_style *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_system") {
		Ifc_system *o = reinterpret_cast<Ifc_system *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_system_furniture_element_type") {
		Ifc_system_furniture_element_type *o = reinterpret_cast<Ifc_system_furniture_element_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_t_shape_profile_def") {
		Ifc_t_shape_profile_def *o = reinterpret_cast<Ifc_t_shape_profile_def *>(object);
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
 	else if (object->entity == "Ifc_tank_type") {
		Ifc_tank_type *o = reinterpret_cast<Ifc_tank_type *>(object);
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
 	else if (object->entity == "Ifc_tendon") {
		Ifc_tendon *o = reinterpret_cast<Ifc_tendon *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_tendon_anchor") {
		Ifc_tendon_anchor *o = reinterpret_cast<Ifc_tendon_anchor *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_terminator_symbol") {
		Ifc_terminator_symbol *o = reinterpret_cast<Ifc_terminator_symbol *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_text_literal") {
		Ifc_text_literal *o = reinterpret_cast<Ifc_text_literal *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_text_literal_with_extent") {
		Ifc_text_literal_with_extent *o = reinterpret_cast<Ifc_text_literal_with_extent *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_text_style") {
		Ifc_text_style *o = reinterpret_cast<Ifc_text_style *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_text_style_font_model") {
		Ifc_text_style_font_model *o = reinterpret_cast<Ifc_text_style_font_model *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_text_style_for_defined_font") {
		Ifc_text_style_for_defined_font *o = reinterpret_cast<Ifc_text_style_for_defined_font *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_text_style_text_model") {
		Ifc_text_style_text_model *o = reinterpret_cast<Ifc_text_style_text_model *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_text_style_with_box_characteristics") {
		Ifc_text_style_with_box_characteristics *o = reinterpret_cast<Ifc_text_style_with_box_characteristics *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_texture_coordinate_generator") {
		Ifc_texture_coordinate_generator *o = reinterpret_cast<Ifc_texture_coordinate_generator *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_texture_map") {
		Ifc_texture_map *o = reinterpret_cast<Ifc_texture_map *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_texture_vertex") {
		Ifc_texture_vertex *o = reinterpret_cast<Ifc_texture_vertex *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_thermal_material_properties") {
		Ifc_thermal_material_properties *o = reinterpret_cast<Ifc_thermal_material_properties *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_time_series_reference_relationship") {
		Ifc_time_series_reference_relationship *o = reinterpret_cast<Ifc_time_series_reference_relationship *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_time_series_schedule") {
		Ifc_time_series_schedule *o = reinterpret_cast<Ifc_time_series_schedule *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_time_series_value") {
		Ifc_time_series_value *o = reinterpret_cast<Ifc_time_series_value *>(object);
		std::cout << *o;
	}
 		else if (object->entity == "Ifc_topology_representation") {
		Ifc_topology_representation *o = reinterpret_cast<Ifc_topology_representation *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_transformer_type") {
		Ifc_transformer_type *o = reinterpret_cast<Ifc_transformer_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_transport_element") {
		Ifc_transport_element *o = reinterpret_cast<Ifc_transport_element *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_transport_element_type") {
		Ifc_transport_element_type *o = reinterpret_cast<Ifc_transport_element_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_trapezium_profile_def") {
		Ifc_trapezium_profile_def *o = reinterpret_cast<Ifc_trapezium_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_trimmed_curve") {
		Ifc_trimmed_curve *o = reinterpret_cast<Ifc_trimmed_curve *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_tube_bundle_type") {
		Ifc_tube_bundle_type *o = reinterpret_cast<Ifc_tube_bundle_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_two_direction_repeat_factor") {
		Ifc_two_direction_repeat_factor *o = reinterpret_cast<Ifc_two_direction_repeat_factor *>(object);
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
 	else if (object->entity == "Ifc_u_shape_profile_def") {
		Ifc_u_shape_profile_def *o = reinterpret_cast<Ifc_u_shape_profile_def *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_unit_assignment") {
		Ifc_unit_assignment *o = reinterpret_cast<Ifc_unit_assignment *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_unitary_equipment_type") {
		Ifc_unitary_equipment_type *o = reinterpret_cast<Ifc_unitary_equipment_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_valve_type") {
		Ifc_valve_type *o = reinterpret_cast<Ifc_valve_type *>(object);
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
 	else if (object->entity == "Ifc_vertex_based_texture_map") {
		Ifc_vertex_based_texture_map *o = reinterpret_cast<Ifc_vertex_based_texture_map *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_vertex_loop") {
		Ifc_vertex_loop *o = reinterpret_cast<Ifc_vertex_loop *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_vertex_point") {
		Ifc_vertex_point *o = reinterpret_cast<Ifc_vertex_point *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_vibration_isolator_type") {
		Ifc_vibration_isolator_type *o = reinterpret_cast<Ifc_vibration_isolator_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_virtual_element") {
		Ifc_virtual_element *o = reinterpret_cast<Ifc_virtual_element *>(object);
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
 	else if (object->entity == "Ifc_wall_type") {
		Ifc_wall_type *o = reinterpret_cast<Ifc_wall_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_waste_terminal_type") {
		Ifc_waste_terminal_type *o = reinterpret_cast<Ifc_waste_terminal_type *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_water_properties") {
		Ifc_water_properties *o = reinterpret_cast<Ifc_water_properties *>(object);
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
 		else if (object->entity == "Ifc_work_plan") {
		Ifc_work_plan *o = reinterpret_cast<Ifc_work_plan *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_work_schedule") {
		Ifc_work_schedule *o = reinterpret_cast<Ifc_work_schedule *>(object);
		std::cout << *o;
	}
 	else if (object->entity == "Ifc_z_shape_profile_def") {
		Ifc_z_shape_profile_def *o = reinterpret_cast<Ifc_z_shape_profile_def *>(object);
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