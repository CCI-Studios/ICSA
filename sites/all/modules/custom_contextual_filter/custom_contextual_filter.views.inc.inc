<?php 
function custom_contextual_filter_views_query_alter(&$view, &$query) {
  if ($view->name == 'members_area') {
    $query->where[0]['type'] = 'OR';
  }
}
?>