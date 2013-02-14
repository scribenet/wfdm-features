<?php
/**
 * @file
 * wfdm.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function wfdm_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|wfdm_project|default';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wfdm_project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '10',
    'children' => array(
      0 => 'wfdm_project_isbn',
      1 => 'wfdm_project_creator',
      2 => 'wfdm_project_publisher',
      3 => 'wfdm_project_subject',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_metadata|node|wfdm_project|default'] = $field_group;

  return $export;
}
