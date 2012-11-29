
var editor;
var fontSize;

function onLoad() {
	editor = document.getElementById("editor");
	document.getElementById('generalbt').focus();
	fontSize=document.getElementById('fontSize');
}

function showTabpanel(tabName , toolboxID) {
	var tabpanel = document.getElementById(tabName);
	document.getElementById(toolboxID).selectedPanel = tabpanel;
	
}

function formatCmd(cmd) {
  editor.contentDocument.execCommand(cmd , false, null);
  editor.focus();

}
function formatCmd2(cmd , pram) {
  editor.contentDocument.execCommand(cmd , false, pram);
  editor.focus();

}
