<?php
/**
 * @file
 * azur_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function azur_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access services page'.
  $permissions['access services page'] = array(
    'name' => 'access services page',
    'roles' => array(
      'Business admin' => 'Business admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'azur_pages',
  );

  return $permissions;
}
