[Variables]
OutlineWidth=1

BorderOnHover=00000066
BorderOnLeave=00000022
BorderColor=#BorderOnLeave#

; Widths
Width=447
TotalWidth=(#Width# + (#OutlineWidth# * 2))

; Heights
HeightNoDetails=165
HeightDetails=283

TotalHeightNoDetails=(#HeightNoDetails# + (#OutlineWidth# * 2))
TotalHeightDetails=(#HeightDetails# + (#OutlineWidth# * 2))

; Visualizer
visStartX=(Floor((#TotalWidth# - #visWidth#) / 2))
visStartY=95

visWidth=391
visHeightNoDetails=13
visHeightDetails=76

; Griddy
GridColor0=efeacc
GridColor1=cdefd3
GridColor2=efeacc

; Dynamic heights
TotalHeight0=(#Height0# + (#OutlineWidth# * 2))
TotalHeight1=(#Height1# + (#OutlineWidth# * 2))
Height0=[#HeightNoDetails]
Height1=[#HeightDetails]
visHeight0=[#visHeightNoDetails]
visHeight1=[#visHeightDetails]

; Controls
ControlBackgroundColor=87C4F257
ControlBackgroundStrokeColor=70c0e7
PlayBackgroundColor=00000001
PauseBackgroundStrokeColor=00000001
PauseBackgroundColor=00000001
PlayBackgroundStrokeColor=00000001
StopBackgroundColor=00000001
StopBackgroundStrokeColor=00000001

ToggleColor=00000087
