<?php  
// prod.alias.drushrc.php  
$aliases['qa'] = array(  
  // needs to match server name as configured in vhost  
  'uri' => 'research.rtd.asu.edu',          
  // Drupal's root directory for that site (not the sites/* folder)   
  'root' => '/home/researchrtd/public_html',           
  // FQDN or IP of server hosting site (think ssh user@remote-host)   
  'remote-host' => 'research.rtd.asu.edu',           
  // A user on the remote host for which you have an ssh key set up   
  'remote-user' => 'researchrtd',  
  'path-aliases' => array( 
    '%files' => 'sites/default/files', 
  ) 
);   

$options['shell-aliases']['pull-files'] = '!drush rsync @qa:%files/ @self:%files';
