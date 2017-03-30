<?php
header("Cache-Control: no-store, no-cache, must-revalidate, max-age=0");
header("Cache-Control: post-check=0, pre-check=0", false);
header("Pragma: no-cache");

/**
 * @file
 * The primary PHP file for this theme.
 */
function code($input) {
  return "
  <pre><code>" . $input . "</pre></pre>
  ";
}
/* ************************* */
/* RTD FUNCTIONS */
// RENDER IMAGE FROM URI INPUT
function imageUrl($input) {
	return '/sites/default/files' . substr($input, 8);
}
function icon($input) {
	return '<span class="glyphicon glyphicon-' . $input . '" aria-hidden="true"></span>';
}
