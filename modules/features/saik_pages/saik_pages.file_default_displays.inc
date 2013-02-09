<?php
/**
 * @file
 * saik_pages.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function saik_pages_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'cropped-345x210',
    'alt' => '[file:field-file-image-alt-text]',
    'title' => '[file:field-file-image-title-text]',
  );
  $export['image__default__file_image'] = $file_display;

  return $export;
}
