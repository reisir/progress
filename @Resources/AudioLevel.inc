; https://gist.github.com/reisir/80393374a04e4a2725788d107d4e69b0

[Variables]
Accuracy=5
FreqMin=20
FreqMax=16000
Sensitivity=35
PeakAttack=(Floor(250 * [MeasureUpdates] / 8))
PeakDecay=2500
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
PeakAttack=#PeakAttack#
PeakDecay=#PeakDecay#
FreqMin=#FreqMin#
FreqMax=#FreqMax#
Sensitivity=#Sensitivity#

[MeasurePeak]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Peak
MaxValue=(([MeasureVolume] / 100) > 0.01 ? ([MeasureVolume] / 100) : 1)
DynamicVariables=1
