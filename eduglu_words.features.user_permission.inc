<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function eduglu_words_user_default_permissions() {
  $permissions = array();

  // Exported permission: create word content
  $permissions['create word content'] = array(
    'name' => 'create word content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any word content
  $permissions['delete any word content'] = array(
    'name' => 'delete any word content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own word content
  $permissions['delete own word content'] = array(
    'name' => 'delete own word content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any word content
  $permissions['edit any word content'] = array(
    'name' => 'edit any word content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own word content
  $permissions['edit own word content'] = array(
    'name' => 'edit own word content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
