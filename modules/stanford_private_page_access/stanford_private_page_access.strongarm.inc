<?php
/**
 * @file
 * stanford_private_page_access.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function stanford_private_page_access_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_stanford_private_page';
  $strongarm->value = variable_get('content_access_stanford_private_page', array());
  $export['content_access_stanford_private_page'] = $strongarm;

  return $export;
}
