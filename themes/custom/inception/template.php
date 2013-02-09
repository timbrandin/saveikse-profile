<?php

/**
 * Set default classes for all panes.
 * Implements template_preprocess_panels_pane().
 */
function inception_preprocess_panels_pane(&$vars) {
  $vars['classes_array'] = array('pane', 
    preg_replace('/(field_|ns_|page_)/i', '', $vars['content']['#field_name']));
}

/**
 * Remove redundant pane separator.
 * Implements template_style_render_region().
 */
function inception_panels_default_style_render_region($vars) {
  return implode('', $vars['panes']);;
}

/**
 * Set default classes for all fields.
 * Implements template_preprocess_field().
 */
function inception_preprocess_field(&$vars, $hook) {
  $vars['classes_array'] = array('field', 
    preg_replace('/(field_|ns_|page_)/i', '', $vars['element']['#field_name']));
}

/**
 * Implements template_preprocess_page().
 */
function inception_preprocess_html(&$vars) {
  // Strip out redundant classes.
  $vars['classes_array'] = preg_grep(
          '/(no-sidebars|page-node[^\w]*)/', 
          $vars['classes_array'],
          PREG_GREP_INVERT);
}

function inception_clean($html) {
  // Remove whitespaces, newlines and tabs (speed optimization).
  $html = str_replace(array(
    "\r\n", 
    "\r", 
    "\n", 
    "\t", 
    '  ', 
    '    ', 
    '    '), '', $html);
  
  return $html;
}