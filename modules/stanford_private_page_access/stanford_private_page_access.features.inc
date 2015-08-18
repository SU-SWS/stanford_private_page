<?php
/**
 * @file
 * stanford_private_page_access.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_private_page_access_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
