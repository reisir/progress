[WindowIcon]
Meter=Image
ImageName=#@#Rainmeter.ico
UpdateDivider=-1
W=16
X=5
Y=7

[WindowTitle]
Meter=String
MeasureName=MeasurePlaying
MeasureName2=MeasureProgress
Text=%1%2% complete
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
Y=41
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
MeterStyle=StringDefaults | Details
Text=Artist: _[MeasureArtist:EncodeURL]
X=r
Y=(#visStartY# + [#visHeight[#Details]] + 16)

[MeterRemaining]
Meter=String
MeterStyle=StringDefaults | Details
MeasureName=MeasureRemaining
Text=Time remaining: %1
X=r
Y=2R

[MeterDuration]
Meter=String
MeterStyle=StringDefaults | Details
MeasureName=MeasureDuration
Text=Total length: %1
X=r
Y=2R

