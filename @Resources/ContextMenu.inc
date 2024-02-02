[Rainmeter]
RightMouseUpAction=[!SkinCustomMenu]
Group=Progress
ContextTitle=#CURRENTCONFIG#
ContextAction=["#CURRENTPATH#"]
ContextTitle2=-
ContextAction2=
ContextTitle3=Center horizontally
ContextAction3=[!SetWindowPosition "50%" "[#CURRENTCONFIGY]" "50%" "0%"]
ContextTitle4=Center vertically
ContextAction4=[!SetWindowPosition "([#CURRENTCONFIGX] + ([#CURRENTCONFIGWIDTH] / 2))" "50%" "50%" "50%"]
ContextTitle5=-
ContextAction5=
ContextTitle6=Open skin menu
ContextAction6=[!SkinMenu]
ContextTitle7=Unload Progress
ContextAction7=[!DeactivateConfigGroup "Progress"]
