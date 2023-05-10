[Divider]
Meter=Shape
Shape=Rectangle 0,0,#Width#,1 | StrokeWidth 0 | Fill Color e3e3e3
X=#OutlineWidth#
Y=([#TotalHeight[#Details]] - 43)
Group=NoDetails | Details
DynamicVariables=1
UpdateDivider=-1

[ToggleZone]
Meter=Shape
Shape=Rectangle 0, 0, #Width#, 43 | StrokeWidth 0 | Fill Color 00000001
Group=NoDetails | Details
DynamicVariables=1
UpdateDivider=-1
X=r
Y=r
LeftMouseUpAction=[!SetVariable Details "(1 - [#Details])"][!WriteKeyValue Variables Details [#Details] "#ROOTCONFIG#.ini"][!UpdateMeterGroup Details][!UpdateMeterGroup NoDetails][!Redraw]

[ToggleNoDetails]
Meter=Shape
Shape=Ellipse 10, 10, 10    | Extend Stroke
Shape2=Line   6,  11, 10, 6 | Extend Stroke
Shape3=Line   14, 11, 10, 6 | Extend Stroke
Stroke=StrokeWidth 1 | Stroke Color #ToggleColor# | Fill Color 00000000
X=25
Y=([Divider:Y] + 12)
DynamicVariables=1
MeterStyle=Details

[ToggleNoDetailsLabel]
Meter=String
MeterStyle=StringDefaults | Details
Text=Fewer details
X=6R
Y=2r

[ToggleDetails]
Meter=Shape
Shape=Ellipse 10, 10, 10    | Extend Stroke
Shape2=Line   6,  9, 10, 14 | Extend Stroke
Shape3=Line   14, 9, 10, 14 | Extend Stroke
Stroke=StrokeWidth 1 | Stroke Color #ToggleColor# | Fill Color 00000000
X=25
Y=([Divider:Y] + 12)
DynamicVariables=1
MeterStyle=NoDetails

[ToggleDetailsLabel]
Meter=String
MeterStyle=StringDefaults | NoDetails
Text=More details
X=6R
Y=2r

