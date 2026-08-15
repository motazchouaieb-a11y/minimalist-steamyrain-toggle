[Game1]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Program Files (x86)\Steam/appcache/librarycache\#ID1#\7f6e572bde792b139018cae5a361d91d5e1ad812/library_header.jpg
LeftMouseUpAction=[steam://rungameid/#ID1#]
Hidden=#Vis1#
Group=Games | G1

[Vis1]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Vis1" 1 "#@#GamesInfo.inc"][!WriteKeyValue Variables GameCountPLUS "(Clamp((#GameCountPLUS#-1),0,#GameCount#))" "#@#GamesInfo.inc"][!SetVariable GameCountPLUS "(Clamp((#GameCountPLUS#-1),0,#GameCount#))"][!SetVariable Vis1 1][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup G1][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Vis1"][!SetVariable UpdateVar2 "GameCountPLUS"][!SetVariable UpdateVar3 "G1"][!Updatemeasure HiddenWindow]
Hidden=#Vis1#
Group=Games | G1

[Gap1]
Meter=Image
MeterStyle=GapStyle

[Game2]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Program Files (x86)\Steam/appcache/librarycache\#ID2#\6b9123a6941b57805c76d04dcaf813049e017c94/library_header.jpg
LeftMouseUpAction=[steam://rungameid/#ID2#]
Hidden=#Vis2#
Group=Games | G2

[Vis2]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Vis2" 1 "#@#GamesInfo.inc"][!WriteKeyValue Variables GameCountPLUS "(Clamp((#GameCountPLUS#-1),0,#GameCount#))" "#@#GamesInfo.inc"][!SetVariable GameCountPLUS "(Clamp((#GameCountPLUS#-1),0,#GameCount#))"][!SetVariable Vis2 1][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup G2][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Vis2"][!SetVariable UpdateVar2 "GameCountPLUS"][!SetVariable UpdateVar3 "G2"][!Updatemeasure HiddenWindow]
Hidden=#Vis2#
Group=Games | G2

[Gap2]
Meter=Image
MeterStyle=GapStyle

[Game3]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Program Files (x86)\Steam/appcache/librarycache\#ID3#\3c3489495136b26b34f8a9543c7f5645b99d388c/header.jpg
LeftMouseUpAction=[steam://rungameid/#ID3#]
Hidden=#Vis3#
Group=Games | G3

[Vis3]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Vis3" 1 "#@#GamesInfo.inc"][!WriteKeyValue Variables GameCountPLUS "(Clamp((#GameCountPLUS#-1),0,#GameCount#))" "#@#GamesInfo.inc"][!SetVariable GameCountPLUS "(Clamp((#GameCountPLUS#-1),0,#GameCount#))"][!SetVariable Vis3 1][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup G3][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Vis3"][!SetVariable UpdateVar2 "GameCountPLUS"][!SetVariable UpdateVar3 "G3"][!Updatemeasure HiddenWindow]
Hidden=#Vis3#
Group=Games | G3

[Gap3]
Meter=Image
MeterStyle=GapStyle

