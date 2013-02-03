<?php
/**
 * @file
 * saik_main.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function saik_main_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-guest-menu:user
  $menu_links['menu-guest-menu:user'] = array(
    'menu_name' => 'menu-guest-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => 'Login to your account.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-guest-menu:user/register
  $menu_links['menu-guest-menu:user/register'] = array(
    'menu_name' => 'menu-guest-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Create account',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new user account.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Create account');
  t('Login');


  return $menu_links;
}
