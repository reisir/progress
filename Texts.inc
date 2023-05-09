
[WindowTitle]
Meter=String
MeasureName=MeasureProgress
Text=%1% complete
MeterStyle=StringDefaults
FontColor=999999
X=R
Y=2r

[MeterTitle]
Meter=String
MeterStyle=StringDefaults
MeasureName=MeasurePlayer
Text=Playing [MeasureTitle:EncodeURL] from %1
W=350
ClipString=1
X=(#visStartX# - 4)
Y=40
InlinePattern="Playing(.*)from"
InlineSetting=Color | 0066CCff

[MeterProgress]
Meter=String
MeasureName=MeasureProgress
Text=%1% complete
FontSize=12
MeterStyle=StringDefaults
X=(#visStartX# - 4)
Y=6R

[MeterArtist]
Meter=String
MeterStyle=StringDefaults
Text=Artist: _[MeasureArtist:EncodeURL]
X=r
Y=(#visStartY# + #h# + 16)

[MeterRemaining]
Meter=String
MeterStyle=StringDefaults
MeasureName=MeasureRemaining
Text=Time remaining: %1
X=r
Y=2R

[MeterDuration]
Meter=String
MeterStyle=StringDefaults
MeasureName=MeasureDuration
Text=Total length: %1
X=r
Y=2R

