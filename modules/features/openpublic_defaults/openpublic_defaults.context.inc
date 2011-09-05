<?php
/**
 * @file
 * openpublic_defaults.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function openpublic_defaults_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = 'Context for the Home page';
  $context->tag = 'OpenPublic Front Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'follow-site' => array(
          'module' => 'follow',
          'delta' => 'site',
          'region' => 'sidebar_first',
          'weight' => 0,
        ),
        'twitter_pull-0' => array(
          'module' => 'twitter_pull',
          'delta' => 0,
          'region' => 'sidebar_first',
          'weight' => 1,
        ),
        'views-press_releases-block_1' => array(
          'module' => 'views',
          'delta' => 'press_releases-block_1',
          'region' => 'inner_first',
          'weight' => 0,
        ),
        'views-blogs-block_1' => array(
          'module' => 'views',
          'delta' => 'blogs-block_1',
          'region' => 'inner_second',
          'weight' => 0,
        ),
        'views-f357e00a950996a5a5f114f3de9b7a5f' => array(
          'module' => 'views',
          'delta' => 'f357e00a950996a5a5f114f3de9b7a5f',
          'region' => 'content_prefix',
          'weight' => 0,
        ),
        'views-breaking_news-block_1' => array(
          'module' => 'views',
          'delta' => 'breaking_news-block_1',
          'region' => 'content_prefix',
          'weight' => 1,
        ),
        'views-services-block_1' => array(
          'module' => 'views',
          'delta' => 'services-block_1',
          'region' => 'content_prefix',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for the Home page');
  t('OpenPublic Front Page');
  $export['home'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'media_room';
  $context->description = '';
  $context->tag = 'OpenPublic Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'media-room' => 'media-room',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nodeblock-Press_contact_editors_choice' => array(
          'module' => 'nodeblock',
          'delta' => 'Press_contact_editors_choice',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
        'nodeblock-press_kit_download' => array(
          'module' => 'nodeblock',
          'delta' => 'press_kit_download',
          'region' => 'sidebar_second',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OpenPublic Blocks');
  $export['media_room'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nav_blog';
  $context->description = 'Navigation Individual Blog Entries';
  $context->tag = 'OpenPublic Navigation';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog_entry' => 'blog_entry',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'blogs',
    'menu' => 'blogs',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Navigation Individual Blog Entries');
  t('OpenPublic Navigation');
  $export['nav_blog'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nav_breadcrumb_title';
  $context->description = 'Add Page Title to Breadcrumbs for some Pages';
  $context->tag = 'OpenPublic Navigation';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
        'contact-us' => 'contact-us',
        'feedback' => 'feedback',
        'frequently-asked-questions' => 'frequently-asked-questions',
      ),
    ),
    'views' => array(
      'values' => array(
        'blogs:page_1' => 'blogs:page_1',
        'people:page_1' => 'people:page_1',
        'people:page_2' => 'people:page_2',
        'press_releases:page_1' => 'press_releases:page_1',
        'services:page_1' => 'services:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb_current_page' => array(
      'breadcrumb_show_current_page' => 1,
      'breadcrumb_show_current_page_title' => '',
      'breadcrumb_show_current_page_only' => 0,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Page Title to Breadcrumbs for some Pages');
  t('OpenPublic Navigation');
  $export['nav_breadcrumb_title'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nav_leader';
  $context->description = 'Navigation for a Staff Leader';
  $context->tag = 'OpenPublic Navigation';
  $context->conditions = array(
    'field_bool' => array(
      'values' => array(
        'field_person_leadership' => 'field_person_leadership',
      ),
      'options' => array(
        'bool_field_value' => '1',
      ),
    ),
    'node' => array(
      'values' => array(
        'author' => 'author',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'staff-directory/leadership',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Navigation for a Staff Leader');
  t('OpenPublic Navigation');
  $export['nav_leader'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nav_press_release';
  $context->description = 'Navigation for Individual Press Releases';
  $context->tag = 'OpenPublic Navigation';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'press_release' => 'press_release',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'press-releases',
    'menu' => 'node-name/media_room',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Navigation for Individual Press Releases');
  t('OpenPublic Navigation');
  $export['nav_press_release'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nav_search';
  $context->description = 'Navigation for Search Results';
  $context->tag = 'OpenPublic Navigation';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search*' => 'search*',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb_current_page' => array(
      'breadcrumb_show_current_page' => 1,
      'breadcrumb_show_current_page_title' => 'Search Results',
      'breadcrumb_show_current_page_only' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Navigation for Search Results');
  t('OpenPublic Navigation');
  $export['nav_search'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nav_service';
  $context->description = 'Navigation for a Service Pages';
  $context->tag = 'OpenPublic Navigation';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'services' => 'services',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'serving-you',
    'menu' => 'serving-you',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Navigation for a Service Pages');
  t('OpenPublic Navigation');
  $export['nav_service'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nav_staff';
  $context->description = 'Navigation for a None Leader Staff Pages';
  $context->tag = 'OpenPublic Navigation';
  $context->conditions = array(
    'field_bool' => array(
      'values' => array(
        'field_person_leadership' => 'field_person_leadership',
      ),
      'options' => array(
        'bool_field_value' => '0',
      ),
    ),
    'node' => array(
      'values' => array(
        'author' => 'author',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'staff-directory',
    'menu' => 'node-name/about_page',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Navigation for a None Leader Staff Pages');
  t('OpenPublic Navigation');
  $export['nav_staff'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'no_sidebars';
  $context->description = '';
  $context->tag = 'OpenPublic Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'projects' => 'projects',
      ),
    ),
  );
  $context->reactions = array(
    'region' => array(
      'bartik' => array(
        'disable' => array(
          'header' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'highlighted' => 0,
          'featured' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'triptych_first' => 0,
          'triptych_middle' => 0,
          'triptych_last' => 0,
          'footer_firstcolumn' => 0,
          'footer_secondcolumn' => 0,
          'footer_thirdcolumn' => 0,
          'footer_fourthcolumn' => 0,
          'footer' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'openpublic_theme' => array(
        'disable' => array(
          'sidebar_second' => 'sidebar_second',
          'sidebar_first' => 0,
          'inner_first' => 0,
          'inner_second' => 0,
          'content_prefix' => 0,
          'content' => 0,
          'content_suffix' => 0,
          'header' => 0,
          'footer' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'help' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'rubik' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OpenPublic Blocks');
  $export['no_sidebars'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'open_government';
  $context->description = '';
  $context->tag = 'OpenPublic Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'open' => 'open',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nodeblock-open_gov_contact_block' => array(
          'module' => 'nodeblock',
          'delta' => 'open_gov_contact_block',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
        'nodeblock-open_gov_more_block' => array(
          'module' => 'nodeblock',
          'delta' => 'open_gov_more_block',
          'region' => 'sidebar_second',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OpenPublic Blocks');
  $export['open_government'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_wide_after';
  $context->description = 'Site wide blocks that appear after other blocks';
  $context->tag = 'OpenPublic Blocks';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'follow-site' => array(
          'module' => 'follow',
          'delta' => 'site',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
        'nodeblock-footer_info' => array(
          'module' => 'nodeblock',
          'delta' => 'footer_info',
          'region' => 'footer',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OpenPublic Blocks');
  t('Site wide blocks that appear after other blocks');
  $export['site_wide_after'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_wide_before';
  $context->description = 'Site wide blocks that appear before other blocks';
  $context->tag = 'OpenPublic Blocks';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'openpublic_defaults-current_navigation' => array(
          'module' => 'openpublic_defaults',
          'delta' => 'current_navigation',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OpenPublic Blocks');
  t('Site wide blocks that appear before other blocks');
  $export['site_wide_before'] = $context;

  return $export;
}
