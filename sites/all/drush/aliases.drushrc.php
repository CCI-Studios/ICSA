<?php

$aliases['dev'] = array(
	'uri'=> 'icsa.ccistaging.com',
	'root' => '/home/staging/subdomains/icsa/public_html',
	'remote-host'=> 'host.ccistudios.com',
	'remote-user'=> 'staging',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	),

	'ssh-options'=>'-p 37241'
);
