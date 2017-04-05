<?php  
// prod.alias.drushrc.php  
$aliases['prod'] = array(  
  // needs to match server name as configured in vhost  
  'uri' => 'research.asu.edu',          
  // Drupal's root directory for that site (not the sites/* folder)   
  'root' => '/home/researchasu/public_html',           
  // FQDN or IP of server hosting site (think ssh user@remote-host)   
  'remote-host' => 'research.asu.edu',           
  // A user on the remote host for which you have an ssh key set up   
  'remote-user' => 'researchasu',  
);   

