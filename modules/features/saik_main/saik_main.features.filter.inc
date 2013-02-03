<?php
/**
 * @file
 * saik_main.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function saik_main_filter_default_formats() {
  $formats = array();

  // Exported format: SAIK Wysiwyg.
  $formats['saik_wysiwyg'] = array(
    'format' => 'saik_wysiwyg',
    'name' => 'SAIK Wysiwyg',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-49',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <u> <p> <blockquote> <ul> <ol> <li> <h2> <h3>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => '-47',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'media_filter' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(),
      ),
      'saik_main_floated_image' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
