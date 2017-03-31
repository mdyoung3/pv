<?php
// INITIALIZE VARIABLES
$image = ''; // OPTIONAL
$background = ''; // OPTIONAL
$options = ''; // OPTIONAL
$section_content = '';
$section_styles = '';

// CHECK IF USER IS ADMINISTRATOR OR EDITOR TO DISPLAY EDIT LINKS
$editor = FALSE;
$edit = '';
foreach ($user->roles as $k => $v) {
	if ($k == 3) { $editor = TRUE; } // ADMINISTRATOR
	if ($k == 5) { $editor = TRUE; } // EDITOR
}

$result = $view->result;
foreach($result as $k => $v) {

    $nid 	= $v->nid;
    $title 	= $v->node_title;
    $entity = $v->_field_data['nid']['entity'];
    $display_title = '';
		$body = '';

    // SECTION ANCHOR LINK AND ID
    $section_name = str_replace("+", "-", urlencode(strtolower($title)));

    // ADD STYLES
    $options = '';
    if (isset($entity->field_section_options['und'][0]['value'])) {
      for ($i=0; $i<count($entity->field_section_options['und']); $i++) {
        $options .= $entity->field_section_options['und'][$i]['value'] . " ";
      }
    }

    // GET TYPE
    $type = $entity->field_section_type['und'][0]['value'];

    // SET BACKGROUND IMAGE (IF AVAILABLE)
    $image = '';
    $background = '';
    if (isset($entity->field_image['und'][0]['uri'])) {
      $image = imageUrl($entity->field_image['und'][0]['uri']);
      $background = ' style="background:url(' . $image . ') center center no-repeat; background-size:cover;"';
    }

    // BODY
    if (isset($entity->field_section_body['und'][0]['value'])) {
    $body = '
		<div class="row">
		<div class="col-md-12">
  	<div class="row">';
      for ($b=0; $b<count($entity->field_section_body['und']); $b++) {
        $col = explode('-', $entity->field_section_layout['und'][0]['value']);
        $c = $b;  if ($b >= count($col)) { $c = $b % count($col); }
        $body .= '
        <div class="col-sm-' . $col[$c] . '">
        ' . $entity->field_section_body['und'][$b]['value'] . '
        </div><!-- .col -->';
      }
    $body .= '
  	</div><!-- .row -->
  	</div><!-- .col -->
  	</div><!-- .row -->';
		}

    // USER LOGGED IN DISPLAY EDIT LINKS
  //@todo make if statement conditional to role--not if loggeed in.
	if ($editor == TRUE) {
      $edit = '<a class="btn btn-warning btn-editor pull-right" href="/node/' . $nid . '/edit?destination=/' . substr(request_uri(),1) . '">' . icon('cog') . 'EDIT</a>';
  }

	$section_content .= '
        <a name="section-' . $section_name . '" class="anchor"></a>';

		// VIEW LINK
		if (isset($entity->field_views_link['und'][0]['value'])) {
    	if ($editor == TRUE) {
  			$edit = '<a class="btn btn-warning btn-editor pull-right" href="' . $entity->field_views_link['und'][0]['value'] . '">' . icon('cog') . 'EDIT </a>';
      }
		}

    // IF VIEW REFERENCED :: RENDER VIEW
    if (isset($entity->field_views_name['und'][0]['value'])) {
        // RENDER VIEW
        $body .= formatViews( $entity->field_views_name['und'][0]['value'] );

    }

    // IF BLOCK REFERENCED :: RENDER BLOCK
    if (isset($entity->field_block_reference[LANGUAGE_NONE][0]['value'])) {

        $blockRef = $entity->field_block_reference[LANGUAGE_NONE][0]['value'];

        $block = rtdLoadBlock( $blockRef );

				$body = '<div class="row">';

        $body .= render($block['content']);

        $body .= '</div>';

    }

	$section_content .= '
	<section id="region-' . $section_name . '" class="section section-' . $type . ' ' . $options . '"' . $background . '>
	' . $edit . '
	' . $body . '
	</section><!-- #' . $section_name . ' -->
	';
}

function formatViews ( $view ) {

	$viewContent = "";
	$params = array();
	$params = explode('|', $view);
	$rView = views_get_view( $params[0] );

	if( !empty( $params[1] ) ) {
		$rView->set_display( $params[1] );
	} else {
		$rView->set_display( 'block' );
	}

	if( !empty( $params[2] ) ) {
		$rView->set_arguments(array( $params[2] ));
	}

	$viewContent .= $rView->preview();
	return $viewContent;

}

function rtdLoadBlock ( $block ) {

    $params = explode('|', $block);

    return module_invoke($params[0], 'block_view', $params[1]);

}
echo $section_content;
?>
<style>
#block-system-main {
  display:none;
}
.main-container .row {
  max-width: 100%;
  margin: 0 auto;
}
.main-container .row section {
  padding-right: 0;
  padding-left: 0;
}
  <?php echo $section_styles; ?>
</style>
