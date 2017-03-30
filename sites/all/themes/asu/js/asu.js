// Document Loaded
var $jq = jQuery.noConflict();
jQuery(document).ready(function ($jq) {

  // Replace first navigation link with home icon
  $jq('#superfish-1 > li.first').html('<a href=\'/\' class=\'keepsake\'><i class="fa fa-home"/></a>');

  // Fix WYSIWYG tables to look good in Bootstrap
  $jq('#block-system-main table', this).addClass("table table-striped table-hover table-responsive");
  $jq('#block-views-sections-block table', this).addClass("table table-striped table-hover table-responsive");

}); // End document ready function
