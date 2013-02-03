<?php
/**
 * @file
 * saik_main.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function saik_main_user_default_permissions() {
  $permissions = array();

  // Exported permission: use text format saik_wysiwyg.
  $permissions['use text format saik_wysiwyg'] = array(
    'name' => 'use text format saik_wysiwyg',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
