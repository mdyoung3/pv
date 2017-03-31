<?php
$page = null;
if (arg(0) == 'node' && is_numeric(arg(1))) { $page = arg(1); }
?>


<div id="editor-menu">
<div class="row">

		<div class="col-md-2 col-sm-4 col-xs-6"><strong>RTD SiteBuilder</strong></div>
		<a class="col-md-2 col-sm-4 col-xs-6" href="/documentation"> <i class="fa fa-info-circle"></i> Documentation </a>
		<a class="col-md-2 col-sm-4 col-xs-6" href="/content-manager"> <i class="fa fa-info-circle"></i> Content Manager </a>
		<a class="col-md-2 col-sm-4 col-xs-6 page-only editor-tools" href="/editor/<?php echo $page; ?>"> <i class="fa fa-cog"></i> Page Layout </a>

</div>
</div>

<style>
#editor-menu {
display:block;
background:#000000;
color:#ffffff;
font-weight: 600;
padding:10px;
text-align:center;
position: fixed;
bottom: 0;
left: 0;
right: 0;
z-index: 1000;
width: 100%;
border-top: 6px solid #ffc627 !important;
-webkit-box-shadow: 0px 0px 20px 0px rgba(0,0,0,0.75);
-moz-box-shadow: 0px 0px 20px 0px rgba(0,0,0,0.75);
box-shadow: 0px 0px 20px 0px rgba(0,0,0,0.75);
}
.editor-tools {
display:inline-block !important;
}
#editor-menu .row {
max-width: 1200px;
margin: 0 auto;
}
#editor-menu a {
display:block;
}
#innovation-footer {
margin-bottom: 60px;
}
#editor-menu a:link,
#editor-menu a:visited  {
font-size: 16px;
color:#ffc627;
white-space: nowrap;
}
#editor-menu a:hover,
#editor-menu a:active  {
font-size: 16px;
color:#ffffff;
white-space: nowrap;
}
#asu_footer {
padding-bottom:80px;
}



/* EDITOR TOOLS */
.tools-blue {
	background-color: #34495e;
	color: #ffffff;
	padding:5px;
	}
.tools-edit:link,
.tools-edit:visited {
	font-size:16px;
	padding:5px 10px;
	background-color: #34495e;
	color: #d6dbdf !important;
	border-bottom:none !important;
	}
.tools-edit:hover,
.tools-edit:active {
	color: #ffffff !important;
	border-bottom:none !important;
	}
.tools-warn:link,
.tools-warn:visited {
	font-size:16px;
	padding:5px 10px;
	background-color: #f39c12;
	color: #fdebd0 !important;
	border-bottom:none !important;
	}
.tools-warn:hover,
.tools-warn:active {
	color: #ffffff !important;
	border-bottom:none !important;
	}
.tools-kill:link,
.tools-kill:visited {
	font-size:16px;
	padding:5px 10px;
	background-color: #e74c3c;
	color: #fadbd8 !important;
	border-bottom:none !important;
	}
.tools-kill:hover,
.tools-kill:active {
	color: #ffffff !important;
	border-bottom:none !important;
	}
.page-only {
display:none !important;
}
.node-type-page .page-only {
display:block !important;
}
</style>
