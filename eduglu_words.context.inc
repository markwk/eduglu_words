<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_words_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'words_context';
  $context->description = '';
  $context->tag = 'eduglu';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'words' => 'words',
      ),
    ),
    'node' => array(
      'values' => array(
        'word' => 'word',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'Words' => 'Words',
        'Words:page_1' => 'Words:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-words_help' => array(
          'module' => 'boxes',
          'delta' => 'words_help',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-Words-block_1' => array(
          'module' => 'views',
          'delta' => 'Words-block_1',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-recent_word_comments-block' => array(
          'module' => 'views',
          'delta' => 'recent_word_comments-block',
          'region' => 'right',
          'weight' => 2,
        ),
      ),
    ),
    'menu' => 'words',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('eduglu');

  $export['words_context'] = $context;
  return $export;
}
