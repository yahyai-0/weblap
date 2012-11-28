<toolbar id="nav-toolbar" mode="icon"  class="border1" align="center" >
					
						<vbox flex="1" height="150">
			
						<hbox flex="1" id="fileToolbar" class="border1">
							<toolbarbutton class="testb" image="chrome://weblap/content/style/icon/new.png" tooltiptext="Create new document" oncommand="newDocumentCommand"/>
							<toolbarbutton image="chrome://weblap/content/style/icon/open.png"  tooltiptext="Open an existing document" oncommand="loadDocumentCommand"/>
							<toolbarbutton image="chrome://weblap/content/style/icon/save.png"  tooltiptext="Save this document" oncommand="saveDocumentCommand"/>
							<toolbarbutton image="chrome://weblap/content/style/icon/print.png"  tooltiptext="print this document" oncommand="formateCmd('print')"/>
						</hbox>
						<label class="testborder" height="15">Project</label>
					</vbox>
					<vbox  flex="1" height="150">
							<toolbarseparator/>
					</vbox>
					
					<vbox flex="1" height="150">
						<hbox flex="1" id="clipToolbar" class="border1">
							<toolbarbutton class="testb" image="chrome://weblap/content/style/icon/undo.png" tooltiptext="undo" oncommand="formatCmd('undo')"/>
							<toolbarbutton image="chrome://weblap/content/style/icon/redo.png"  tooltiptext="redo" oncommand="formatCmd('redo')"/>
							<toolbarbutton image="chrome://weblap/content/style/icon/cut.png"  tooltiptext="cut" oncommand="formatCmd('cut')"/>
							<toolbarbutton image="chrome://weblap/content/style/icon/copy.png"  tooltiptext="copy" oncommand="formatCmd('copy')"/>
							<toolbarbutton image="chrome://weblap/content/style/icon/paste.png"  tooltiptext="paste" oncommand="formatCmd('paste')"/>
						</hbox>
						<label class="testborder" height="15">Project</label>
					</vbox>
					
					<vbox height="150">
						 <hbox >
						<menulist oncommand="formatCmd2('fontname' ,this.selectedItem.label);">
							<menupopup >
								<menuitem label="Default Font" value="sans-serif" />
								<menuitem label="Agency" value="agency" />
								<menuitem label="Arial" value="arial" />
								<menuitem label="Comic Sans MS" value="Comic Sans MS" />
								<menuitem label="Courier New" value="Courier New" />
								<menuitem label="Georgia" value="georgia" />
								<menuitem label="Monotype Corsiva" value="Monotype Corsiva" />
								<menuitem label="Tahoma" value="tahoma" />
								<menuitem label="Times New Roman" value="Times New Roman" />
								<menuitem label="Trebuchet" value="trebuchet" />
								<menuitem label="Verdana" value="verdana" />
							</menupopup>
						</menulist>
						
						<toolbarbutton id="text-increase-button" image="chrome://weblap/content/style/icon/decreasefont.png" oncommand="formatCmd('increasefontsize')" tooltiptext="increase font"/>
						<toolbarbutton id="text-decrease-button" image="chrome://weblap/content/style/icon/increasefont.png" oncommand="formatCmd('decreasefontsize')" tooltiptext="decrease font"/>
						</hbox> 
						
						<hbox flex="1">
						<toolbarbutton image="chrome://weblap/content/style/icon/bold.png" tooltiptext="bold" oncommand="formatCmd('bold')"/>
						<toolbarbutton image="chrome://weblap/content/style/icon/italic.png"  tooltiptext="italic" oncommand="formatCmd('italic')"/>
						<toolbarbutton image="chrome://weblap/content/style/icon/underline.png"  tooltiptext="underline" oncommand="formatCmd('underline')"/>
						<toolbarbutton image="chrome://weblap/content/style/icon/strike_trough.png"  tooltiptext="strike" oncommand="formatCmd('strikethrough')"/>
						<toolbarbutton image="chrome://weblap/content/style/icon/subscript.png"  tooltiptext="subscript" oncommand="formatCmd('subscript')"/>
						<toolbarbutton image="chrome://weblap/content/style/icon/superscript.png"  tooltiptext="superscript" oncommand="formatCmd('superscript')"/>
						<toolbarbutton image="chrome://weblap/content/style/icon/select_color_text.png"  tooltiptext="Save this document" oncommand="formatCmd(cmd)"/>
						</hbox> 
						<label pack="end" class="testborder" height="15">Font</label>
					</vbox>
						<vbox  flex="1" height="150">
							<toolbarseparator/>
						</vbox>
					<vbox flex="1" height="150">
			
						<hbox flex="1" id="fileToolbar" class="border1">
							<toolbarbutton class="testb" image="chrome://weblap/content/style/icon/numbered_list.png" tooltiptext="Create new document" oncommand="formatCmd('insertorderedlist')"/>
							<toolbarbutton image="chrome://weblap/content/style/icon/bulleted_list.png"  tooltiptext="Open an existing document" oncommand="formatCmd('insertunorderedlist')"/>
							<toolbarbutton image="chrome://weblap/content/style/icon/align_justify.png"  tooltiptext="Save this document" oncommand="formatCmd('justifyfull')"/>
							<toolbarbutton image="chrome://weblap/content/style/icon/align_center.png"  tooltiptext="Open an existing document" oncommand="formatCmd('justifycenter')"/>
							<toolbarbutton image="chrome://weblap/content/style/icon/align_left.png"  tooltiptext="Save this document" oncommand="formatCmd('justifyleft')"/>
							<toolbarbutton image="chrome://weblap/content/style/icon/align_right.png"  tooltiptext="Save this document" oncommand="formatCmd('justifyright')"/>
						</hbox>
						<label class="testborder" height="15">Paragraph</label>
					</vbox>
				</toolbar>
