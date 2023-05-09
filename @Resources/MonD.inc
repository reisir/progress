[MonD]
SkinName=Progress
PreviewImage=https://user-images.githubusercontent.com/93496808/236972898-73c97c26-96d9-4844-bd73-3a3b38990ff2.png
Author=Reisir
ProfilePicture=https://avatars.githubusercontent.com/u/93496808
Description=a Rainmeter player skin

; Optional measure that writes SkinName automatically
Measure=String
UpdateDivider=1
IfMatch=#ROOTCONFIG#
IfMatchAction=[!DisableMeasure "MonD"]
IfNotMatchAction=[!WriteKeyValue "MonD" "String" "[#ROOTCONFIG]" "#@#Mond.inc"][!WriteKeyValue "MonD" "SkinName" "[#ROOTCONFIG]" "#@#Mond.inc"][!Refresh]
String=Progress
