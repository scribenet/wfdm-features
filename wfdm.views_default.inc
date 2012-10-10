<?php
/**
 * @file
 * wfdm.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wfdm_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publisher';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>The Publisher allows you to generate a variety of formats from within the system. Currently, the system will generate Scribe Markup Language (ScML), InDesign text tagged, ePub and Mobi files.  We are performing final testing on our ePub 3 module and will release that shortly.  From there, Scribe has an ambitious development plan for Version 1.1. As new standards develop, so will the output capacity.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No titles';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>You don\'t have any active titles in the system right now. Please create one, or contact support for help.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Content: Project Code */
  $handler->display->display_options['fields']['wfdm_project_code']['id'] = 'wfdm_project_code';
  $handler->display->display_options['fields']['wfdm_project_code']['table'] = 'field_data_wfdm_project_code';
  $handler->display->display_options['fields']['wfdm_project_code']['field'] = 'wfdm_project_code';
  $handler->display->display_options['fields']['wfdm_project_code']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: ISBN-13 */
  $handler->display->display_options['fields']['wfdm_project_isbn']['id'] = 'wfdm_project_isbn';
  $handler->display->display_options['fields']['wfdm_project_isbn']['table'] = 'field_data_wfdm_project_isbn';
  $handler->display->display_options['fields']['wfdm_project_isbn']['field'] = 'wfdm_project_isbn';
  $handler->display->display_options['fields']['wfdm_project_isbn']['exclude'] = TRUE;
  $handler->display->display_options['fields']['wfdm_project_isbn']['element_label_colon'] = FALSE;
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['wfdm_project_publisher']['id'] = 'wfdm_project_publisher';
  $handler->display->display_options['fields']['wfdm_project_publisher']['table'] = 'field_data_wfdm_project_publisher';
  $handler->display->display_options['fields']['wfdm_project_publisher']['field'] = 'wfdm_project_publisher';
  $handler->display->display_options['fields']['wfdm_project_publisher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['wfdm_project_publisher']['element_label_colon'] = FALSE;
  /* Field: Content: Creator */
  $handler->display->display_options['fields']['wfdm_project_creator']['id'] = 'wfdm_project_creator';
  $handler->display->display_options['fields']['wfdm_project_creator']['table'] = 'field_data_wfdm_project_creator';
  $handler->display->display_options['fields']['wfdm_project_creator']['field'] = 'wfdm_project_creator';
  $handler->display->display_options['fields']['wfdm_project_creator']['exclude'] = TRUE;
  $handler->display->display_options['fields']['wfdm_project_creator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['wfdm_project_creator']['delta_offset'] = '0';
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['wfdm_project_subject']['id'] = 'wfdm_project_subject';
  $handler->display->display_options['fields']['wfdm_project_subject']['table'] = 'field_data_wfdm_project_subject';
  $handler->display->display_options['fields']['wfdm_project_subject']['field'] = 'wfdm_project_subject';
  $handler->display->display_options['fields']['wfdm_project_subject']['label'] = '';
  $handler->display->display_options['fields']['wfdm_project_subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['wfdm_project_subject']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'Word to ScML';
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
$scmlDownload = $_SERVER[\'DOCUMENT_ROOT\'] . \'/sites/default/files/projects/\' . substr($data->field_wfdm_project_code[0][\'raw\'][\'value\'], 0, 3) . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'-scml.zip\';
$scmlMergedDownload = $_SERVER[\'DOCUMENT_ROOT\'] . \'/sites/default/files/projects/\' . substr($data->field_wfdm_project_code[0][\'raw\'][\'value\'], 0, 3) . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'-scml-merged.zip\';
echo \'<form action="/sites/all/libraries/actions/docx2scml.php" method="post">\';
echo \'<input type="hidden" id="client" name="client" value="\' . substr($data->field_wfdm_project_code[0][\'raw\'][\'value\'], 0, 3) . \'" />\';
echo \'<input type="hidden" id="code" name="code" value="\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="submit" value="Process" />\';
echo \'</form>\';
if (file_exists($scmlDownload)) {
    echo \'<a href="../sites/default/files/projects/\' . substr($data->field_wfdm_project_code[0][\'raw\'][\'value\'], 0, 3) . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'-scml.zip">Download&nbsp;SCML</a>\';
} else {
}
if (file_exists($scmlMergedDownload)) {
    echo \'<br /><a href="../sites/default/files/projects/\' . substr($data->field_wfdm_project_code[0][\'raw\'][\'value\'], 0, 3) . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'-scml-merged.zip">Download Merged&nbsp;SCML</a>\';
} else {
}
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['label'] = 'SCML to eSCML';
  $handler->display->display_options['fields']['php_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
$escmlDownload = $_SERVER[\'DOCUMENT_ROOT\'] . \'/sites/default/files/projects/\' . substr($data->field_wfdm_project_code[0][\'raw\'][\'value\'], 0, 3) . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'-escml.zip\';
echo \'<form action="/sites/all/libraries/actions/scml2escml.php" method="post">\';
echo \'<input type="hidden" id="client" name="client" value="\' . substr($data->field_wfdm_project_code[0][\'raw\'][\'value\'], 0, 3) . \'" />\';
echo \'<input type="hidden" id="code" name="code" value="\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="submit" value="Process" />\';
echo \'</form>\';
if (file_exists($escmlDownload)) {
    echo \'<a href="../sites/default/files/projects/\' . substr($data->field_wfdm_project_code[0][\'raw\'][\'value\'], 0, 3) . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'-escml.zip">Download eSCML</a>\';
} else {
}
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'InDesign';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$idttDownload = $_SERVER[\'DOCUMENT_ROOT\'] . \'/sites/default/files/projects/\' . substr($data->field_wfdm_project_code[0][\'raw\'][\'value\'], 0, 3) . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'-idtt.zip\';
echo \'<form action="/sites/all/libraries/actions/scml2idtt.php" method="post">\';
echo \'<input type="hidden" id="client" name="client" value="\' . substr($data->field_wfdm_project_code[0][\'raw\'][\'value\'], 0, 3) . \'" />\';
echo \'<input type="hidden" id="code" name="code" value="\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="submit" value="Process" />\';
echo \'</form>\';
if (file_exists($idttDownload)) {
    echo \'<a href="../sites/default/files/projects/\' . substr($data->field_wfdm_project_code[0][\'raw\'][\'value\'], 0, 3) . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'-idtt.zip">Download&nbsp;IDTT</a>\';
} else {
}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'ePub';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$epubDownload = $_SERVER[\'DOCUMENT_ROOT\'] . \'/sites/default/files/projects/\' . substr($data->field_wfdm_project_code[0][\'raw\'][\'value\'], 0, 3) . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'/epub/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'.epub\';
$mobiDownload = $_SERVER[\'DOCUMENT_ROOT\'] . \'/sites/default/files/projects/\' . substr($data->field_wfdm_project_code[0][\'raw\'][\'value\'], 0, 3) . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'/epub/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'.mobi\';
echo \'<form action="/sites/all/libraries/actions/escml2epub.php" method="post">\';
echo \'<input type="hidden" id="client" name="client" value="\' . substr($data->field_wfdm_project_code[0][\'raw\'][\'value\'], 0, 3) . \'" />\';
echo \'<input type="hidden" id="code" name="code" value="\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="title" name="title" value="\' . $row->title . \'" />\';
echo \'<input type="hidden" id="isbn" name="isbn" value="\' . $data->field_wfdm_project_isbn[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="publisher" name="publisher" value="\' . $data->field_wfdm_project_publisher[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="creator" name="creator" value="\' . $data->field_wfdm_project_creator[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="subject" name="subject" value="\' . $data->field_wfdm_project_subject[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="css" name="css" value="\' . substr($data->field_wfdm_project_code[0][\'raw\'][\'value\'], 0, 3) . \'" />\';
echo \'<input type="hidden" id="backlink" name="backlink" value="no" />\';
echo \'<input type="hidden" id="job" name="job" value="e" />\';
echo \'<input type="submit" value="Process" />\';
echo \'</form>\';
if (file_exists($epubDownload)) {
    echo \'<a href="../sites/default/files/projects/\' . substr($data->field_wfdm_project_code[0][\'raw\'][\'value\'], 0, 3) . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'/epub/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'.epub">Download&nbsp;ePub</a><br />\';
} else {
}
if (file_exists($mobiDownload)) {
    echo \'<a href="../sites/default/files/projects/\' . substr($data->field_wfdm_project_code[0][\'raw\'][\'value\'], 0, 3) . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'/epub/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'.mobi">Download&nbsp;Mobi</a>\';
} else {
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'wfdm_project' => 'wfdm_project',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'publisher';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Publisher';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['projects'] = $view;

  return $export;
}
