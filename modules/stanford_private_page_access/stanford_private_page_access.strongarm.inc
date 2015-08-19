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
  $strongarm->value = array(
    'view_own' => array(
      0 => 10,
      1 => 9,
      2 => 7,
      3 => 8,
    ),
    'view' => array(
      0 => 10,
      1 => 9,
      2 => 7,
      3 => 8,
    ),
  );
  $export['content_access_stanford_private_page'] = $strongarm;

  return $export;
}
