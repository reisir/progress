[VolumeGraph]
Meter=Histogram
MeasureName=MeasureAudio
Y=#visStartY#
X=(#visStartX# + #Tick# - #w#)
W=#w#
H=#h#
PrimaryColor=06b025
DynamicVariables=1
GraphStart=Right
AntiAlias=1
UpdateDivider=-1

[MeasureUpdates]
Measure=Calc
Formula=(((MeasureDuration / (1000 / 16)) * #w# / (1000/ 16)))

[MeasureUpdate]
Measure=Calc
; Formula=(Counter % (MeasureDuration / (#w# / (1000 / 32))))
Formula=(Counter % MeasureUpdates)
IfEqualValue=0
IfEqualAction=[!UpdateMeter VolumeGraph][!SetVariable Tick "([#Tick] + 1)"][!Redraw]
DynamicVariables=1
