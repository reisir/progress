[NoDetailsBackground]
Meter=Shape
Shape=Rectangle #OutlineWidth#, #OutlineWidth#, [#Width], [#HeightNoDetails] | StrokeWidth 0 | Fill Color ffffff
Shape2=Rectangle (#visStartX# - 2), (#visStartY# - 2), (#visWidth# + 4), (#visHeightNoDetails# + 4), | StrokeWidth 0 | Fill Color bcbcbc
Shape3=Rectangle (#visStartX# - 1), (#visStartY# - 1), (#visWidth# + 2), (#visHeightNoDetails# + 2), | StrokeWidth 0 | Fill Color e6e6e6
UpdateDivider=-1

[NoDetailsProgress]
Meter=Shape
Shape=Rectangle #visStartX#, #visStartY#, (#visWidth# * [MeasureProgress] / 100), #visHeightNoDetails# | StrokeWidth 0 | Fill Color 74E2589a
DynamicVariables=1
MeterStyle=NoDetails
