[DetailsBackground]
Meter=Shape
Shape=Rectangle #OutlineWidth#, #OutlineWidth#, [#Width], [#HeightDetails] | StrokeWidth 0 | Fill Color ffffff
Shape2=Rectangle (#visStartX# - 2), (#visStartY# - 2), (#visWidth# + 4), (#visHeightDetails# + 4), | StrokeWidth 0 | Fill Color bcbcbc
Shape3=Rectangle (#visStartX# - 1), (#visStartY# - 1), (#visWidth# + 2), (#visHeightDetails# + 2), | StrokeWidth 0 | Fill Color e6e6e6
Shape4=Rectangle (#visStartX#), (#visStartY#), (#visWidth#), (#visHeightDetails#) | StrokeWidth 0 | Fill Color ffffff
UpdateDivider=-1
MeterStyle=Details

[Grid]
Meter=Shape
Shape=  Line 0,  ((#visHeightDetails# / 5) * 1), (#visWidth#), ((#visHeightDetails# / 5) * 1) | Extend Defaults
Shape2= Line 0,  ((#visHeightDetails# / 5) * 2), (#visWidth#), ((#visHeightDetails# / 5) * 2) | Extend Defaults
Shape3= Line 0,  ((#visHeightDetails# / 5) * 3), (#visWidth#), ((#visHeightDetails# / 5) * 3) | Extend Defaults
Shape4= Line 0,  ((#visHeightDetails# / 5) * 4), (#visWidth#), ((#visHeightDetails# / 5) * 4) | Extend Defaults
Shape5= Line ((#visWidth# / 11) * 1), 0, ((#visWidth# / 11) * 1), (#visHeightDetails#)| Extend Defaults
Shape6= Line ((#visWidth# / 11) * 2), 0, ((#visWidth# / 11) * 2), (#visHeightDetails#)| Extend Defaults
Shape7= Line ((#visWidth# / 11) * 3), 0, ((#visWidth# / 11) * 3), (#visHeightDetails#)| Extend Defaults
Shape8= Line ((#visWidth# / 11) * 4), 0, ((#visWidth# / 11) * 4), (#visHeightDetails#)| Extend Defaults
Shape9= Line ((#visWidth# / 11) * 5), 0, ((#visWidth# / 11) * 5), (#visHeightDetails#)| Extend Defaults
Shape10=Line ((#visWidth# / 11) * 6), 0, ((#visWidth# / 11) * 6), (#visHeightDetails#)| Extend Defaults
Shape11=Line ((#visWidth# / 11) * 7), 0, ((#visWidth# / 11) * 7), (#visHeightDetails#)| Extend Defaults
Shape12=Line ((#visWidth# / 11) * 8), 0, ((#visWidth# / 11) * 8), (#visHeightDetails#)| Extend Defaults
Shape13=Line ((#visWidth# / 11) * 9), 0, ((#visWidth# / 11) * 9), (#visHeightDetails#)| Extend Defaults
Shape14=Line ((#visWidth# / 11) * 10),0, ((#visWidth# / 11) * 10),(#visHeightDetails#)| Extend Defaults
Defaults=StrokeWidth 1 | Stroke Color [#GridColor[&MeasurePlaying:]]
X=#visStartX#
Y=#visStartY#
UpdateDivider=-1
DynamicVariables=1
MeterStyle=Details
Group=Controls | Details

[VisContainer]
Meter=Shape
Shape=Rectangle #visStartX#, #visStartY#, #visWidth#, [#visHeightDetails] | StrokeWidth 0 | Fill Color ffffff
MeterStyle=Details

[DetailsProgress]
Meter=Shape
Shape=Rectangle #visStartX#, #visStartY#, (#visWidth# * (#Tick# / #visWidth#)), #visHeightDetails# | StrokeWidth 0 | Fill Color 74E2589a
DynamicVariables=1
Container=VisContainer

[VolumeGraph]
UpdateDivider=-1
Y=#visStartY#
X=(#visStartX# + #Tick# - #visWidth#)
W=#visWidth#
H=[#visHeight[#Details]]

[VolumeGraph0]
Meter=Image
MeterStyle=VolumeGraph | Details
[VolumeGraph1]
Meter=Histogram
MeasureName=MeasurePeak
MeterStyle=VolumeGraph | Details
PrimaryColor=06b025
DynamicVariables=1
GraphStart=Right
AntiAlias=1
Container=VisContainer
[VolumeGraph2]
Meter=Image
MeterStyle=VolumeGraph | Details

[MeasureUpdates]
Measure=Calc
Formula=(((MeasureDuration / (1000 / 16)) * #visWidth# / (1000/ 16)))

[MeasureUpdate]
Measure=Calc
; Formula=(Counter % (MeasureDuration / (#visWidth# / (1000 / 32))))
Formula=(Counter % MeasureUpdates)
IfEqualValue=0
IfEqualAction=[!UpdateMeter "VolumeGraph[&MeasurePlaying:]"][!SetVariable Tick "([&MeasurePlaying:] = 1 ? [#Tick] + 1 : [#Tick])"][!Redraw]
DynamicVariables=1

[Level]
Meter=Shape
Shape=Rectangle #visStartX#, (#visStartY# + #visHeightDetails#), #visWidth#, 1 | StrokeWidth 0 | Fill Color 0, 0, 0
DynamicVariables=1
Y=(-[#visHeightDetails] * [MeasurePeak])
UpdateDivider=(Floor([MeasureUpdates] / 3))
MeterStyle=Details

[MeasureSpeed]
Measure=Calc
; Formula=1000 / (MeasureUpdates * 16)
Formula=Log(MeasurePeak) * 45
DynamicVariables=1
UpdateDivider=34
RegExpSubstitute=1
Substitute="\.(\d{#Decimals#})\d*":".\1",".?\d{3}\.\d*":"-inf"
Disabled=(1 - #Details#)

[MeterSpeed]
Meter=String
MeterStyle=StringDefaults | Details
Text=Volume: [MeasureSpeed] dB
StringAlign=RightBottom
X=R
Y=-2R
FontSize=9
DynamicVariables=1
