<?php
/**
 * @file
 * wfdm.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function wfdm_default_rules_configuration() {
  $items = array();
  $items['rules_delete_project_files'] = entity_import('rules_config', '{ "rules_delete_project_files" : {
      "LABEL" : "delete_project_files",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "php" ],
      "ON" : [ "node_delete" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "wfdm_project" : "wfdm_project" } }
          }
        }
      ],
      "DO" : [
        { "php_eval" : { "code" : "$dir = $_SERVER[\\u0027DOCUMENT_ROOT\\u0027]  . \\u0027\\/sites\\/default\\/files\\/projects\\/\\u0027 . token_replace(\\u0027[node:author:field_client_code]\\u0027, array(\\u0027node\\u0027 =\\u003E $node)) . \\u0027\\/\\u0027 . token_replace(\\u0027[node:wfdm_project_code]\\u0027, array(\\u0027node\\u0027 =\\u003E $node));\\r\\nrrmdir($dir);\\r\\n\\r\\nfunction rrmdir($dir) {\\r\\n    foreach(glob($dir . \\u0027\\/*\\u0027) as $file) {\\r\\n        if(is_dir($file))\\r\\n            rrmdir($file);\\r\\n        else\\r\\n            unlink($file);\\r\\n    }\\r\\n    rmdir($dir);\\r\\n}" } }
      ]
    }
  }');
  return $items;
}
