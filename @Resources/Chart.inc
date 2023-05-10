[VolumeGraph]
UpdateDivider=-1
Y=#visStartY#
X=(#visStartX# + #Tick# - #w#)
W=#w#
H=#h#

[VolumeGraph0]
Meter=Image
MeterStyle=VolumeGraph
[VolumeGraph1]
Meter=Histogram
MeasureName=MeasurePeak
MeterStyle=VolumeGraph
PrimaryColor=06b025
DynamicVariables=1
GraphStart=Right
AntiAlias=1
Container=VisContainer
[VolumeGraph2]
Meter=Image
MeterStyle=VolumeGraph

[MeasureUpdates]
Measure=Calc
Formula=(((MeasureDuration / (1000 / 16)) * #w# / (1000/ 16)))

[MeasureUpdate]
Measure=Calc
; Formula=(Counter % (MeasureDuration / (#w# / (1000 / 32))))
Formula=(Counter % MeasureUpdates)
IfEqualValue=0
IfEqualAction=[!UpdateMeter "VolumeGraph[&MeasurePlaying:]"][!SetVariable Tick "([&MeasurePlaying:] = 1 ? [#Tick] + 1 : [#Tick])"][!Redraw]
DynamicVariables=1
