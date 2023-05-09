; Optimal AudioLevel setup
; Thanks to @kodikuu for the math

[Variables]
; How many bands to generate
Bands=50
; How many frames of data to keep (an integer higher than 0)
; Higher accuracy also means higher latency
Accuracy=5
; How many bands to skip, it's recommended to skip the first band because of AudioLevel inaccuracies
SkipBands=1
FreqMin=20
FreqMax=20000
Sensitivity=35
FFTAttack=0
FFTDecay=0
; Assuming Update=16
FPS=60

; Get the current audio devices sampling rate
[MeasureSamplingRate]
Measure=Plugin
Plugin=AudioLevel
Type=Format
RegExpSubstitute=1
Substitute="(Hz.*)$":""
UpdateDivider=-1

[MeasureAudio]
Measure=Plugin
Plugin=AudioLevel
DynamicVariables=1
FFTSize=([MeasureSamplingRate] * #Accuracy# / #FPS#)
FFTOverlap=([MeasureSamplingRate] * (#Accuracy# - 1) / #FPS#)
FFTAttack=#FFTAttack#
FFTDecay=#FFTDecay#
Bands=(#Bands# + #SkipBands#)
FreqMin=#FreqMin#
FreqMax=#FreqMax#

; An example Factory.lua generator setup
[MeasureBandFactory]
Measure=Script
ScriptFile=#@#Factory.lua
IncFile=#@#Chart.inc
Number=100
SectionName=%%
Option0=Meter
Value0=Shape
Option1=MeterStyle
Value1=ChartBar
