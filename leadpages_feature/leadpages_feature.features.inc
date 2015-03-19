<?php
/**
 * @file
 * leadpages_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function leadpages_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function leadpages_feature_node_info() {
  $items = array(
    'landing_page' => array(
      'name' => t('Landing page'),
      'base' => 'node_content',
      'description' => t('Use <em>landing pages</em> to upload your HTML landing page files from Leadpages.'),
      'has_title' => '1',
      'title_label' => t('Page title'),
      'help' => '',
    ),
    'thank_you_page' => array(
      'name' => t('Thank you page'),
      'base' => 'node_content',
      'description' => t('Use <em>thank you pages</em> to upload your HTML thank you page files from Leadpages.'),
      'has_title' => '1',
      'title_label' => t('Page title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
