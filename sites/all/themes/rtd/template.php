<?php
function template_preprocess_html(&$variables)
{
    $domain = $_SERVER['SERVER_NAME'];

<<<<<<< HEAD
    if ($domain != 'pv.asu.edu') {
=======
    if ($domain != 'research.asu.edu') {
>>>>>>> 13cde66d8c992acff6e0bc63f91294ef9d007707

        $nofollow_meta = array(
            '#tag' => 'meta',
            '#attributes' => array(
                'name' => 'robots',
                'content' => 'noindex, nofollow'
            )
        );

        drupal_add_html_head($nofollow_meta, 'nofollow_meta');
    }
}