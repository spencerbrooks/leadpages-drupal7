<?php
/**
 * @file
 * leadpages_feature.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function leadpages_feature_filter_default_formats() {
  $formats = array();

  // Exported format: No filter.
  $formats['no_filter'] = array(
    'format' => 'no_filter',
    'name' => 'No filter',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
