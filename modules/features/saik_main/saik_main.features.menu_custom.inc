<?php
/**
 * @file
 * saik_main.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function saik_main_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-guest-menu.
  $menus['menu-guest-menu'] = array(
    'menu_name' => 'menu-guest-menu',
    'title' => 'Guest menu',
    'description' => 'The Guest menu contains links related to a logged out user, as well as the \'Login\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Guest menu');
  t('The Guest menu contains links related to a logged out user, as well as the \'Login\' link.');


  return $menus;
}
