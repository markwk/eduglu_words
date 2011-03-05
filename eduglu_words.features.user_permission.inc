<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function eduglu_words_user_default_permissions() {
  $permissions = array();

  // Exported permission: access vote up/down statistics
  $permissions['access vote up/down statistics'] = array(
    'name' => 'access vote up/down statistics',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: administer vote up/down
  $permissions['administer vote up/down'] = array(
    'name' => 'administer vote up/down',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer vote up/down on nodes
  $permissions['administer vote up/down on nodes'] = array(
    'name' => 'administer vote up/down on nodes',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer voting api
  $permissions['administer voting api'] = array(
    'name' => 'administer voting api',
    'roles' => array(),
  );

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

  // Exported permission: edit field_translation
  $permissions['edit field_translation'] = array(
    'name' => 'edit field_translation',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_word_def
  $permissions['edit field_word_def'] = array(
    'name' => 'edit field_word_def',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_word_image
  $permissions['edit field_word_image'] = array(
    'name' => 'edit field_word_image',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_word_type
  $permissions['edit field_word_type'] = array(
    'name' => 'edit field_word_type',
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

  // Exported permission: reset vote up/down votes
  $permissions['reset vote up/down votes'] = array(
    'name' => 'reset vote up/down votes',
    'roles' => array(),
  );

  // Exported permission: see vote up/down node stats
  $permissions['see vote up/down node stats'] = array(
    'name' => 'see vote up/down node stats',
    'roles' => array(),
  );

  // Exported permission: use vote up/down
  $permissions['use vote up/down'] = array(
    'name' => 'use vote up/down',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: use vote up/down on nodes
  $permissions['use vote up/down on nodes'] = array(
    'name' => 'use vote up/down on nodes',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_translation
  $permissions['view field_translation'] = array(
    'name' => 'view field_translation',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_word_def
  $permissions['view field_word_def'] = array(
    'name' => 'view field_word_def',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_word_image
  $permissions['view field_word_image'] = array(
    'name' => 'view field_word_image',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_word_type
  $permissions['view field_word_type'] = array(
    'name' => 'view field_word_type',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view vote up/down count on nodes
  $permissions['view vote up/down count on nodes'] = array(
    'name' => 'view vote up/down count on nodes',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
