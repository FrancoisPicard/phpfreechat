<?php if(isset($_SERVER['DOCUMENT_ROOT']) && isset($_SERVER['HTTP_HOST'])){
	$write = realpath(gpv('path'));
	$docroot = realpath($_SERVER['DOCUMENT_ROOT']);
	if(strpos($write,$docroot)===false){
		$url = $write;
	}else{
		$url = str_replace($docroot,$_SERVER['HTTP_HOST'],$write);
		$url = str_replace('\\','/','http://'.$url);
		$url = "<a href=\"$url\">$url</a>";
	}
}else{
		$url = $write;
}
$content = '<h1> Please delete this file </h1>
<div class="clr"> </div>
<div>The install Finished!</div>
<div>
This installer will self destruct in... Actually PHP can\'t self-destruct. For ensured security, please delete this file.
Your newly installed script is in <var>'.$url.'</var>
</div>
<div class="clr"> </div><div id="break"> </div></div>';
?>