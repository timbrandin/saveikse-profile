<?php
/**
 * @file
 * saik_main.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function saik_main_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: saik_wysiwyg
  $profiles['saik_wysiwyg'] = array(
    'format' => 'saik_wysiwyg',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'JustifyLeft' => 1,
          'JustifyRight' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Unlink' => 1,
          'RemoveFormat' => 1,
          'Format' => 1,
        ),
        'linkit' => array(
          'linkit' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,h2,h3,blockquote',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
      'advanced__active_tab' => 'edit-css',
    ),
  );

  return $profiles;
}
