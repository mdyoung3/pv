<?php  
// prod.alias.drushrc.php  
$aliases['qa'] = array(  
  // needs to match server name as configured in vhost  
  'uri' => 'qa3.rtd.asu.edu',          
  // Drupal's root directory for that site (not the sites/* folder)   
  'root' => '/home/qa3rtd/public_html',           
  // FQDN or IP of server hosting site (think ssh user@remote-host)   
  'remote-host' => 'qa3.rtd.asu.edu',           
  // A user on the remote host for which you have an ssh key set up   
  'remote-user' => 'qa3rtd',  
  'path-aliases' => array( 
    '%files' => 'sites/default/files', 
  ) 
);   

$options['shell-aliases']['pull-files'] = '!drush rsync @qa:%files/ @self:%files';
