[Controls]
DynamicVariables=1
Group=Controls
UpdateDivider=-1
MouseOverAction= [!SetVariable "[#CURRENTSECTION]BackgroundColor" "[#ControlBackgroundColor]"][!SetVariable "[#CURRENTSECTION]BackgroundStrokeColor" "[#ControlBackgroundStrokeColor]"][!UpdateMeter "[#CURRENTSECTION]"][!Redraw]
MouseLeaveAction=[!SetVariable "[#CURRENTSECTION]BackgroundColor" "00000001"][!SetVariable "[#CURRENTSECTION]BackgroundStrokeColor" "00000001"][!UpdateMeter "[#CURRENTSECTION]"][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasurePlaying "PlayPause"]

[Play]
Meter=Shape
MeterStyle=Controls
Shape=Rectangle -6,-8,17,16 | Fill Color [#[#CURRENTSECTION]BackgroundColor] | StrokeWidth .5 | Stroke Color [#[#CURRENTSECTION]BackgroundStrokeColor]
Shape2=Line 0,0,1,0 | StrokeEndCap Triangle | StrokeWidth 9
X=363
Y=72
Hidden=([MeasurePlaying] <> 2 ? 1 : 0)

[Pause]
Meter=Shape
MeterStyle=Controls
Shape=Rectangle -6,-8,17,16 | Fill Color [#[#CURRENTSECTION]BackgroundColor] | StrokeWidth .5 | Stroke Color [#[#CURRENTSECTION]BackgroundStrokeColor]
Shape2=Rectangle -1, -4, 2, 8 | StrokeWidth 0 | Fill Color 000000
Shape3=Rectangle 4, -4, 2, 8 | StrokeWidth 0 | Fill Color 000000
X=r
Y=r
Hidden=([MeasurePlaying] = 2 ? 1 : 0)

[Stop]
Meter=Shape
MeterStyle=Controls
Shape=Rectangle -4,-4,17,16 | Fill Color [#[#CURRENTSECTION]BackgroundColor] | StrokeWidth .5 | Stroke Color [#[#CURRENTSECTION]BackgroundStrokeColor]
Shape2=Line 0,0,8,8 | StrokeWidth 1.5
Shape3=Line 8,0,0,8 | StrokeWidth 1.5
X=(363 + 46)
Y=(72 - 4)
LeftMouseUpAction=[!CommandMeasure MeasurePlaying "PlayPause"][!CommandMeasure MediaKey "Stop"][!CommandMeasure MeasurePlaying "PlayPause"][!Delay 30][!Hide]
