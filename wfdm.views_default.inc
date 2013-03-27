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
  $view->name = 'hub_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Hub Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hub Users';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Field: User: Client Code */
  $handler->display->display_options['fields']['field_client_code']['id'] = 'field_client_code';
  $handler->display->display_options['fields']['field_client_code']['table'] = 'field_data_field_client_code';
  $handler->display->display_options['fields']['field_client_code']['field'] = 'field_client_code';
  $handler->display->display_options['fields']['field_client_code']['element_label_colon'] = FALSE;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['label'] = 'Role';
  $handler->display->display_options['fields']['rid']['element_label_colon'] = FALSE;
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['access']['date_format'] = 'short';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: User: Client Code (field_client_code) */
  $handler->display->display_options['filters']['field_client_code_value']['id'] = 'field_client_code_value';
  $handler->display->display_options['filters']['field_client_code_value']['table'] = 'field_data_field_client_code';
  $handler->display->display_options['filters']['field_client_code_value']['field'] = 'field_client_code_value';
  $handler->display->display_options['filters']['field_client_code_value']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['field_client_code_value']['value'] = '.*';
  $handler->display->display_options['filters']['field_client_code_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_client_code_value']['expose']['operator_id'] = 'field_client_code_value_op';
  $handler->display->display_options['filters']['field_client_code_value']['expose']['label'] = 'Client Code';
  $handler->display->display_options['filters']['field_client_code_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_client_code_value']['expose']['operator'] = 'field_client_code_value_op';
  $handler->display->display_options['filters']['field_client_code_value']['expose']['identifier'] = 'field_client_code_value';
  $handler->display->display_options['filters']['field_client_code_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/hub-users';
  $export['hub_users'] = $view;

  $view = new view();
  $view->name = 'projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hub Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Digital Hub';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'wfdm_project_code' => 'wfdm_project_code',
    'title' => 'title',
    'wfdm_project_isbn' => 'wfdm_project_isbn',
    'wfdm_project_publisher' => 'wfdm_project_publisher',
    'wfdm_project_creator' => 'wfdm_project_creator',
    'wfdm_project_subject' => 'wfdm_project_subject',
    'wfdm_project_backlinking' => 'wfdm_project_backlinking',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>The Publisher allows you to generate a variety of formats from within the system. Currently, the system will generate Scribe Markup Language (ScML), InDesign Tagged Text (IDTT), ePub and Mobi files.  We are performing final testing on our ePub 3 module and will release that shortly.  From there, Scribe has an ambitious development plan for our next release. As new standards develop, so will the output capacity.</p>
<p><a href="/node/add/wfdm-project?destination=publisher">Create Project</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Content: Downloads (wfdm_project_downloads:fid) */
  $handler->display->display_options['relationships']['wfdm_project_downloads_fid']['id'] = 'wfdm_project_downloads_fid';
  $handler->display->display_options['relationships']['wfdm_project_downloads_fid']['table'] = 'field_data_wfdm_project_downloads';
  $handler->display->display_options['relationships']['wfdm_project_downloads_fid']['field'] = 'wfdm_project_downloads_fid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: User: Client Code */
  $handler->display->display_options['fields']['field_client_code']['id'] = 'field_client_code';
  $handler->display->display_options['fields']['field_client_code']['table'] = 'field_data_field_client_code';
  $handler->display->display_options['fields']['field_client_code']['field'] = 'field_client_code';
  $handler->display->display_options['fields']['field_client_code']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_client_code']['label'] = '';
  $handler->display->display_options['fields']['field_client_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_client_code']['element_label_colon'] = FALSE;
  /* Field: Content: Project Code */
  $handler->display->display_options['fields']['wfdm_project_code']['id'] = 'wfdm_project_code';
  $handler->display->display_options['fields']['wfdm_project_code']['table'] = 'field_data_wfdm_project_code';
  $handler->display->display_options['fields']['wfdm_project_code']['field'] = 'wfdm_project_code';
  $handler->display->display_options['fields']['wfdm_project_code']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['wfdm_project_code']['alter']['path'] = 'publisher/process/[nid]';
  $handler->display->display_options['fields']['wfdm_project_code']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['wfdm_project_code']['alter']['alt'] = 'Click to view project information';
  $handler->display->display_options['fields']['wfdm_project_code']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: ISBN */
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
  /* Field: Content: Author/Editor */
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
  /* Field: Content: Backlinking */
  $handler->display->display_options['fields']['wfdm_project_backlinking']['id'] = 'wfdm_project_backlinking';
  $handler->display->display_options['fields']['wfdm_project_backlinking']['table'] = 'field_data_wfdm_project_backlinking';
  $handler->display->display_options['fields']['wfdm_project_backlinking']['field'] = 'wfdm_project_backlinking';
  $handler->display->display_options['fields']['wfdm_project_backlinking']['label'] = '';
  $handler->display->display_options['fields']['wfdm_project_backlinking']['exclude'] = TRUE;
  $handler->display->display_options['fields']['wfdm_project_backlinking']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'Word to ScML';
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
echo \'<form action="/transmog.php?destination=publisher" method="post">\';
echo \'<input type="hidden" id="nid" name="nid" value="\' . $data->nid . \'" />\';
echo \'<input type="hidden" id="client" name="client" value="\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="code" name="code" value="\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="job" name="job" value="docx2scml" />\';
echo \'<input type="submit" class="docx2scml" value="Process" />\';
echo \'</form>\';
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['label'] = 'InDesign to ScML';
  $handler->display->display_options['fields']['php_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
echo \'<form action="/transmog.php?destination=publisher" method="post">\';
echo \'<input type="hidden" id="client" name="client" value="\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="code" name="code" value="\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="job" name="job" value="indd2scml" />\';
echo \'<input type="hidden" id="nid" name="nid" value="\' . $data->nid . \'" />\';
echo \'<input type="submit" class="indd2scml" value="Process" />\';
echo \'</form>\';
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['label'] = 'ScML to eScML';
  $handler->display->display_options['fields']['php_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
$escmlDownload = $_SERVER[\'DOCUMENT_ROOT\'] . \'/sites/default/files/projects/\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'-escml.zip\';
echo \'<form action="/scml2escml.php" method="post">\';
echo \'<input type="hidden" id="nid" name="nid" value="\' . $data->nid . \'" />\';
echo \'<input type="hidden" id="client" name="client" value="\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="code" name="code" value="\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="submit" value="Process" />\';
echo \'</form>\';
if (file_exists($escmlDownload)) {
    echo \'<a href="../sites/default/files/projects/\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'/\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'-escml.zip">Download eScML</a>\';
} else {
}
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'ScML to InDesign';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
echo \'<form action="/transmog.php?destination=publisher" method="post">\';
echo \'<input type="hidden" id="client" name="client" value="\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="code" name="code" value="\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="nid" name="nid" value="\' . $data->nid . \'" />\';
echo \'<input type="hidden" id="job" name="job" value="scml2idtt" />\';
echo \'<input type="submit" class="scml2idtt" value="Process" />\';
echo \'</form>\';
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'E-book';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
echo \'<form action="/transmog.php?destination=publisher" method="post">\';
echo \'<input type="hidden" id="client" name="client" value="\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="code" name="code" value="\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="nid" name="nid" value="\' . $data->nid . \'" />\';
echo \'<input type="hidden" id="title" name="title" value="\' . $row->title . \'" />\';
if(isset($data->field_wfdm_project_isbn[0])){
echo \'<input type="hidden" id="isbn" name="isbn" value="\' . $data->field_wfdm_project_isbn[0][\'raw\'][\'value\'] . \'" />\';
}
else {
echo \'<input type="hidden" id="isbn" name="isbn" value="" />\';
}
echo \'<input type="hidden" id="publisher" name="publisher" value="\' . $data->field_wfdm_project_publisher[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="creator" name="creator" value="\' . $data->field_wfdm_project_creator[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="subject" name="subject" value="\' . $data->field_wfdm_project_subject[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="css" name="css" value="\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="backlink" name="backlink" value="\' . $data->field_wfdm_project_backlinking[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="job" name="job" value="scml2epub2" />\';
echo \'<input type="submit" class="epub2" value="Process EPUB2" />\';
echo \'</form>\';
echo \'<form action="/transmog.php?destination=publisher" method="post">\';
echo \'<input type="hidden" id="client" name="client" value="\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="code" name="code" value="\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="nid" name="nid" value="\' . $data->nid . \'" />\';
echo \'<input type="hidden" id="title" name="title" value="\' . $row->title . \'" />\';
if(isset($data->field_wfdm_project_isbn[0])){
echo \'<input type="hidden" id="isbn" name="isbn" value="\' . $data->field_wfdm_project_isbn[0][\'raw\'][\'value\'] . \'" />\';
}
else {
echo \'<input type="hidden" id="isbn" name="isbn" value="" />\';
}
echo \'<input type="hidden" id="publisher" name="publisher" value="\' . $data->field_wfdm_project_publisher[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="creator" name="creator" value="\' . $data->field_wfdm_project_creator[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="subject" name="subject" value="\' . $data->field_wfdm_project_subject[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="css" name="css" value="\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="backlink" name="backlink" value="\' . $data->field_wfdm_project_backlinking[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="job" name="job" value="scml2epub3" />\';
echo \'<input type="submit" class="epub3" value="Process EPUB3" />\';
echo \'</form>\';
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Downloads */
  $handler->display->display_options['fields']['wfdm_project_downloads']['id'] = 'wfdm_project_downloads';
  $handler->display->display_options['fields']['wfdm_project_downloads']['table'] = 'field_data_wfdm_project_downloads';
  $handler->display->display_options['fields']['wfdm_project_downloads']['field'] = 'wfdm_project_downloads';
  $handler->display->display_options['fields']['wfdm_project_downloads']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['wfdm_project_downloads']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['wfdm_project_downloads']['delta_offset'] = '0';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 1;

  /* Display: Project List */
  $handler = $view->new_display('page', 'Project List', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = '[wfdm_project_code]';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_client_code' => 'field_client_code',
    'wfdm_project_client' => 'wfdm_project_client',
    'wfdm_project_code' => 'wfdm_project_code',
    'title' => 'title',
    'wfdm_project_isbn' => 'wfdm_project_isbn',
    'wfdm_project_publisher' => 'wfdm_project_publisher',
    'wfdm_project_creator' => 'wfdm_project_creator',
    'wfdm_project_subject' => 'wfdm_project_subject',
    'php_2' => 'php_2',
    'php_3' => 'php_3',
    'php_4' => 'php_4',
    'php_1' => 'php_1',
    'php' => 'php',
    'php_5' => 'php_5',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_client_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'wfdm_project_client' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'wfdm_project_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'wfdm_project_isbn' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'wfdm_project_publisher' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'wfdm_project_creator' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'wfdm_project_subject' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_3' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_4' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_5' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'publisher';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Digital Hub';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Processor */
  $handler = $view->new_display('page', 'Processor', 'processor');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p><a href="/node/[nid]/edit?destination=publisher/process/[nid]">Edit this project</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: User: Client Code */
  $handler->display->display_options['fields']['field_client_code']['id'] = 'field_client_code';
  $handler->display->display_options['fields']['field_client_code']['table'] = 'field_data_field_client_code';
  $handler->display->display_options['fields']['field_client_code']['field'] = 'field_client_code';
  $handler->display->display_options['fields']['field_client_code']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_client_code']['label'] = '';
  $handler->display->display_options['fields']['field_client_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_client_code']['element_label_colon'] = FALSE;
  /* Field: Content: Project Code */
  $handler->display->display_options['fields']['wfdm_project_code']['id'] = 'wfdm_project_code';
  $handler->display->display_options['fields']['wfdm_project_code']['table'] = 'field_data_wfdm_project_code';
  $handler->display->display_options['fields']['wfdm_project_code']['field'] = 'wfdm_project_code';
  $handler->display->display_options['fields']['wfdm_project_code']['alter']['text'] = '<div class="metadata">
<div class="views-field views-field-wfdm-project-code">
<strong class="views-label views-label-wfdm-project-code">Project Code: </strong>    [wfdm_project_code]</div>';
  $handler->display->display_options['fields']['wfdm_project_code']['element_type'] = '0';
  $handler->display->display_options['fields']['wfdm_project_code']['element_label_type'] = 'strong';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['wfdm_project_isbn']['id'] = 'wfdm_project_isbn';
  $handler->display->display_options['fields']['wfdm_project_isbn']['table'] = 'field_data_wfdm_project_isbn';
  $handler->display->display_options['fields']['wfdm_project_isbn']['field'] = 'wfdm_project_isbn';
  $handler->display->display_options['fields']['wfdm_project_isbn']['element_type'] = '0';
  $handler->display->display_options['fields']['wfdm_project_isbn']['element_label_type'] = 'strong';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['wfdm_project_publisher']['id'] = 'wfdm_project_publisher';
  $handler->display->display_options['fields']['wfdm_project_publisher']['table'] = 'field_data_wfdm_project_publisher';
  $handler->display->display_options['fields']['wfdm_project_publisher']['field'] = 'wfdm_project_publisher';
  $handler->display->display_options['fields']['wfdm_project_publisher']['element_type'] = '0';
  $handler->display->display_options['fields']['wfdm_project_publisher']['element_label_type'] = 'strong';
  /* Field: Content: Author/Editor */
  $handler->display->display_options['fields']['wfdm_project_creator']['id'] = 'wfdm_project_creator';
  $handler->display->display_options['fields']['wfdm_project_creator']['table'] = 'field_data_wfdm_project_creator';
  $handler->display->display_options['fields']['wfdm_project_creator']['field'] = 'wfdm_project_creator';
  $handler->display->display_options['fields']['wfdm_project_creator']['element_type'] = '0';
  $handler->display->display_options['fields']['wfdm_project_creator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['wfdm_project_creator']['delta_offset'] = '0';
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['wfdm_project_subject']['id'] = 'wfdm_project_subject';
  $handler->display->display_options['fields']['wfdm_project_subject']['table'] = 'field_data_wfdm_project_subject';
  $handler->display->display_options['fields']['wfdm_project_subject']['field'] = 'wfdm_project_subject';
  $handler->display->display_options['fields']['wfdm_project_subject']['element_type'] = '0';
  $handler->display->display_options['fields']['wfdm_project_subject']['element_label_type'] = 'strong';
  /* Field: Content: Backlinking */
  $handler->display->display_options['fields']['wfdm_project_backlinking']['id'] = 'wfdm_project_backlinking';
  $handler->display->display_options['fields']['wfdm_project_backlinking']['table'] = 'field_data_wfdm_project_backlinking';
  $handler->display->display_options['fields']['wfdm_project_backlinking']['field'] = 'wfdm_project_backlinking';
  $handler->display->display_options['fields']['wfdm_project_backlinking']['alter']['text'] = '<div class="views-field views-field-wfdm-project-backlinking">
<strong class="views-label views-label-wfdm-project-backlinking">Backlinking: </strong> [wfdm_project_backlinking]</div>
</div><!-- /.metadata -->';
  $handler->display->display_options['fields']['wfdm_project_backlinking']['element_type'] = '0';
  $handler->display->display_options['fields']['wfdm_project_backlinking']['element_label_type'] = 'strong';
  /* Field: Content: Downloads */
  $handler->display->display_options['fields']['wfdm_project_downloads']['id'] = 'wfdm_project_downloads';
  $handler->display->display_options['fields']['wfdm_project_downloads']['table'] = 'field_data_wfdm_project_downloads';
  $handler->display->display_options['fields']['wfdm_project_downloads']['field'] = 'wfdm_project_downloads';
  $handler->display->display_options['fields']['wfdm_project_downloads']['element_type'] = '0';
  $handler->display->display_options['fields']['wfdm_project_downloads']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['wfdm_project_downloads']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['wfdm_project_downloads']['type'] = 'file_table';
  $handler->display->display_options['fields']['wfdm_project_downloads']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['wfdm_project_downloads']['delta_offset'] = '0';
  /* Field: Word to ScML */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['ui_name'] = 'Word to ScML';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['element_type'] = '0';
  $handler->display->display_options['fields']['php_2']['element_label_type'] = '0';
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['element_wrapper_class'] = 'docx2scml-wrap';
  $handler->display->display_options['fields']['php_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<h2>Actions</h2>
<div class="button">
<?php
echo \'<form action="/transmog.php?destination=publisher/process/\' . $data->nid . \'" method="post">\';
echo \'<input type="hidden" id="nid" name="nid" value="\' . $data->nid . \'" />\';
echo \'<input type="hidden" id="client" name="client" value="\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="code" name="code" value="\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="job" name="job" value="docx2scml" />\';
echo \'<input type="submit" class="docx2scml" value="Word to ScML" />\';
echo \'</form>\';
?>
</div>
<div class="instruction">
<ul>
<li>Files need to be in .docx format</li>
<li>Tables should be built in Word</li>
<li>Typesetter notes should be in this format: {~?~TN: [instruction]}</li>
<li>Standalone image callouts should be in this format (using fig paragraph style + img character style): {~?~IM: insert scr-figurename-01 here.}</li>
<li>In-line image callout should be in this format (using img character style): {~?~IM: insert scr-figurename-01 here.}</li>
</ul>
</div>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['label'] = 'ScML to eScML';
  $handler->display->display_options['fields']['php_4']['exclude'] = TRUE;
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
  /* Field: InDesign to ScML */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'InDesign to ScML';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_type'] = '0';
  $handler->display->display_options['fields']['php_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['element_wrapper_class'] = 'indd2scml-wrap';
  $handler->display->display_options['fields']['php_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<hr />
<div class="button">
<?php
echo \'<form action="/transmog.php?destination=publisher/process/\' . $data->nid . \'" method="post">\';
echo \'<input type="hidden" id="client" name="client" value="\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="code" name="code" value="\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="job" name="job" value="indd2scml" />\';
echo \'<input type="hidden" id="nid" name="nid" value="\' . $data->nid . \'" />\';
echo \'<input type="submit" class="indd2scml" value="InDesign XML to ScML" />\';
echo \'</form>\';
?>
</div>
<div class="instruction">
<ul>
<li>upload files that have been exported from InDesign as mapped XML</li>
<li>produces one flat ScML file for uploaded file</li>
<li>.indd files are not accepted</li>
</ul>
</div>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: ScML to InDesign */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['ui_name'] = 'ScML to InDesign';
  $handler->display->display_options['fields']['php_3']['label'] = '';
  $handler->display->display_options['fields']['php_3']['element_type'] = '0';
  $handler->display->display_options['fields']['php_3']['element_label_type'] = '0';
  $handler->display->display_options['fields']['php_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_3']['element_wrapper_class'] = 'scml2idtt-wrap';
  $handler->display->display_options['fields']['php_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<hr />
<div class="button">
<?php
echo \'<form action="/transmog.php?destination=publisher/process/\' . $data->nid . \'" method="post">\';
echo \'<input type="hidden" id="client" name="client" value="\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="code" name="code" value="\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="nid" name="nid" value="\' . $data->nid . \'" />\';
echo \'<input type="hidden" id="job" name="job" value="scml2idtt" />\';
echo \'<input type="submit" class="scml2idtt" value="ScML to Indesign Tagged Text" />\';
echo \'</form>\';
?>
</div>
<div class="instruction">
<ul>
<li>Produces one .idtt file for the entire book</li>
</ul>
</div>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: ScML to E-book */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'ScML to E-book';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_type'] = '0';
  $handler->display->display_options['fields']['php']['element_label_type'] = '0';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_wrapper_class'] = 'scml2ebook-wrap';
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<hr />
<div class="button">
<?php
echo \'<form action="/transmog.php?destination=publisher/process/\' . $data->nid . \'" method="post">\';
echo \'<input type="hidden" id="client" name="client" value="\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="code" name="code" value="\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="nid" name="nid" value="\' . $data->nid . \'" />\';
echo \'<input type="hidden" id="title" name="title" value="\' . $row->title . \'" />\';
if(isset($data->field_wfdm_project_isbn[0])){
echo \'<input type="hidden" id="isbn" name="isbn" value="\' . $data->field_wfdm_project_isbn[0][\'raw\'][\'value\'] . \'" />\';
}
else {
echo \'<input type="hidden" id="isbn" name="isbn" value="" />\';
}
echo \'<input type="hidden" id="publisher" name="publisher" value="\' . $data->field_wfdm_project_publisher[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="creator" name="creator" value="\' . $data->field_wfdm_project_creator[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="subject" name="subject" value="\' . $data->field_wfdm_project_subject[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="css" name="css" value="\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="backlink" name="backlink" value="\' . $data->field_wfdm_project_backlinking[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="job" name="job" value="scml2epub2" />\';
echo \'<input type="submit" class="epub2" value="ScML to EPUB2" />\';
echo \'</form>\';
echo \'<form action="/transmog.php?destination=publisher/process/\' . $data->nid . \'" method="post">\';
echo \'<input type="hidden" id="client" name="client" value="\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="code" name="code" value="\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="nid" name="nid" value="\' . $data->nid . \'" />\';
echo \'<input type="hidden" id="title" name="title" value="\' . $row->title . \'" />\';
if(isset($data->field_wfdm_project_isbn[0])){
echo \'<input type="hidden" id="isbn" name="isbn" value="\' . $data->field_wfdm_project_isbn[0][\'raw\'][\'value\'] . \'" />\';
}
else {
echo \'<input type="hidden" id="isbn" name="isbn" value="" />\';
}
echo \'<input type="hidden" id="publisher" name="publisher" value="\' . $data->field_wfdm_project_publisher[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="creator" name="creator" value="\' . $data->field_wfdm_project_creator[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="subject" name="subject" value="\' . $data->field_wfdm_project_subject[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="css" name="css" value="\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="backlink" name="backlink" value="\' . $data->field_wfdm_project_backlinking[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="job" name="job" value="scml2epub3" />\';
echo \'<input type="submit" class="epub3" value="ScML to EPUB3" />\';
echo \'</form>\';
?>
</div>
<div class="instruction">
<ul>
<li>Convert the flat ScML files to an e-book</li>
<li>Uses the output from Word to ScML or InDesign XML to ScML</li>
<li>EPUB2 produces a Kindle</li>
<li>Cover image is added automatically; do not include in ScML</li>
<li>The file name for the cover image needs to be the project code followed by "-cover" (e.g. scr-project-cover)</li>
<li>To create an eScML file, process ScML to EPUB. An eScML file will be included in the download.</li>
</ul>
</div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: eSCML to E-book */
  $handler->display->display_options['fields']['php_5']['id'] = 'php_5';
  $handler->display->display_options['fields']['php_5']['table'] = 'views';
  $handler->display->display_options['fields']['php_5']['field'] = 'php';
  $handler->display->display_options['fields']['php_5']['ui_name'] = 'eSCML to E-book';
  $handler->display->display_options['fields']['php_5']['label'] = '';
  $handler->display->display_options['fields']['php_5']['element_type'] = '0';
  $handler->display->display_options['fields']['php_5']['element_label_type'] = '0';
  $handler->display->display_options['fields']['php_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_5']['element_wrapper_class'] = 'escml2ebook-wrap';
  $handler->display->display_options['fields']['php_5']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php_5']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_5']['php_output'] = '<hr />
<div class="button">
<?php
echo \'<form action="/transmog.php?destination=publisher/process/\' . $data->nid . \'" method="post">\';
echo \'<input type="hidden" id="client" name="client" value="\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="code" name="code" value="\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="nid" name="nid" value="\' . $data->nid . \'" />\';
echo \'<input type="hidden" id="title" name="title" value="\' . $row->title . \'" />\';
if(isset($data->field_wfdm_project_isbn[0])){
echo \'<input type="hidden" id="isbn" name="isbn" value="\' . $data->field_wfdm_project_isbn[0][\'raw\'][\'value\'] . \'" />\';
}
else {
echo \'<input type="hidden" id="isbn" name="isbn" value="" />\';
}
echo \'<input type="hidden" id="publisher" name="publisher" value="\' . $data->field_wfdm_project_publisher[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="creator" name="creator" value="\' . $data->field_wfdm_project_creator[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="subject" name="subject" value="\' . $data->field_wfdm_project_subject[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="css" name="css" value="\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="backlink" name="backlink" value="\' . $data->field_wfdm_project_backlinking[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="job" name="job" value="escml2epub2" />\';
echo \'<input type="submit" class="epub2" value="eScML to EPUB2" />\';
echo \'</form>\';
echo \'<form action="/transmog.php?destination=publisher/process/\' . $data->nid . \'" method="post">\';
echo \'<input type="hidden" id="client" name="client" value="\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="code" name="code" value="\' . $data->field_wfdm_project_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="nid" name="nid" value="\' . $data->nid . \'" />\';
echo \'<input type="hidden" id="title" name="title" value="\' . $row->title . \'" />\';
if(isset($data->field_wfdm_project_isbn[0])){
echo \'<input type="hidden" id="isbn" name="isbn" value="\' . $data->field_wfdm_project_isbn[0][\'raw\'][\'value\'] . \'" />\';
}
else {
echo \'<input type="hidden" id="isbn" name="isbn" value="" />\';
}
echo \'<input type="hidden" id="publisher" name="publisher" value="\' . $data->field_wfdm_project_publisher[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="creator" name="creator" value="\' . $data->field_wfdm_project_creator[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="subject" name="subject" value="\' . $data->field_wfdm_project_subject[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="css" name="css" value="\' . $data->field_field_client_code[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="backlink" name="backlink" value="\' . $data->field_wfdm_project_backlinking[0][\'raw\'][\'value\'] . \'" />\';
echo \'<input type="hidden" id="job" name="job" value="escml2epub3" />\';
echo \'<input type="submit" class="epub3" value="eScML to EPUB3" />\';
echo \'</form>\';
?>
</div>
<div class="instruction">
<ul>
<li>Convert one structured eScML file to an e-book</li>
<li>eScML file must be valid, well-formed XML</li>
<li>Note: running ScML to EPUB will erase any uploaded eScML file. Keep a backup of any eScML file.</li>
</ul>
</div>';
  $handler->display->display_options['fields']['php_5']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_5']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'publisher/process/%';
  $export['projects'] = $view;

  return $export;
}
