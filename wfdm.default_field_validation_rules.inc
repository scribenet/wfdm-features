<?php
/**
 * @file
 * wfdm.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function wfdm_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Client code length';
  $rule->name = 'client_code_length';
  $rule->field_name = 'field_client_code';
  $rule->col = 'value';
  $rule->entity_type = 'user';
  $rule->bundle = 'user';
  $rule->validator = 'field_validation_length_validator';
  $rule->settings = array(
    'min' => '3',
    'max' => '3',
    'errors' => 0,
  );
  $rule->error_message = 'The client code must be 3 characters long.';
  $export['client_code_length'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Ensure the ISBN is 13 characters';
  $rule->name = 'isbn_13_length';
  $rule->field_name = 'wfdm_project_isbn';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'wfdm_project';
  $rule->validator = 'field_validation_length_validator';
  $rule->settings = array(
    'min' => '13',
    'max' => '13',
    'errors' => 0,
  );
  $rule->error_message = 'Your ISBN must only contain 13 characters. If you have entered a value with dashes, please remove them.';
  $export['isbn_13_length'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Project code is unique';
  $rule->name = 'project_code_unique';
  $rule->field_name = 'wfdm_project_code';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'wfdm_project';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'global',
    'errors' => 0,
  );
  $rule->error_message = 'This project code is already in use. Please use another one, or edit the existing project.';
  $export['project_code_unique'] = $rule;

  return $export;
}
