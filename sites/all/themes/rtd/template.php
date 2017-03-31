<?php
function template_preprocess_html(&$variables)
{
    $domain = $_SERVER['SERVER_NAME'];

    if ($domain != 'pv.asu.edu') {

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