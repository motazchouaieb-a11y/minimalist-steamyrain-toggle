[Name1]
Meter=String
Text=#ID1name#
LeftMouseUpAction=[steam://rungameid/#ID1#]
MeterStyle=NameStyle
Hidden=(1-#Vis1#)
Group=Games | G1

[Game1]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Program Files (x86)\Steam/appcache/librarycache\#ID1#\icon.jpg
LeftMouseUpAction=[steam://rungameid/#ID1#]
Hidden=(1-#Vis1#)
Group=Games | G1

[Vis1]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Vis1" 0 "#@#GamesInfo.inc"][!WriteKeyValue Variables GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))" "#@#GamesInfo.inc"][!SetVariable GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))"][!SetVariable Vis1 0][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup G1][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Vis1"][!SetVariable UpdateVar2 "GameCountPLUS"][!SetVariable UpdateVar3 "G1"][!Updatemeasure HiddenWindow]
Hidden=(1-#Vis1#)
Group=Games | G1

[Gap1]
Meter=Image
MeterStyle=GapStyle

[Name2]
Meter=String
Text=#ID2name#
LeftMouseUpAction=[steam://rungameid/#ID2#]
MeterStyle=NameStyle
Hidden=(1-#Vis2#)
Group=Games | G2

[Game2]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Program Files (x86)\Steam/appcache/librarycache\#ID2#\icon.jpg
LeftMouseUpAction=[steam://rungameid/#ID2#]
Hidden=(1-#Vis2#)
Group=Games | G2

[Vis2]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Vis2" 0 "#@#GamesInfo.inc"][!WriteKeyValue Variables GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))" "#@#GamesInfo.inc"][!SetVariable GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))"][!SetVariable Vis2 0][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup G2][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Vis2"][!SetVariable UpdateVar2 "GameCountPLUS"][!SetVariable UpdateVar3 "G2"][!Updatemeasure HiddenWindow]
Hidden=(1-#Vis2#)
Group=Games | G2

[Gap2]
Meter=Image
MeterStyle=GapStyle

[Name3]
Meter=String
Text=#ID3name#
LeftMouseUpAction=[steam://rungameid/#ID3#]
MeterStyle=NameStyle
Hidden=(1-#Vis3#)
Group=Games | G3

[Game3]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Program Files (x86)\Steam/appcache/librarycache\#ID3#\icon.jpg
LeftMouseUpAction=[steam://rungameid/#ID3#]
Hidden=(1-#Vis3#)
Group=Games | G3

[Vis3]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Vis3" 0 "#@#GamesInfo.inc"][!WriteKeyValue Variables GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))" "#@#GamesInfo.inc"][!SetVariable GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))"][!SetVariable Vis3 0][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup G3][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Vis3"][!SetVariable UpdateVar2 "GameCountPLUS"][!SetVariable UpdateVar3 "G3"][!Updatemeasure HiddenWindow]
Hidden=(1-#Vis3#)
Group=Games | G3

[Gap3]
Meter=Image
MeterStyle=GapStyle

