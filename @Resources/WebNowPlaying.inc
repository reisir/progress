[MediaKey]
Measure=MediaKey

[MeasurePlaying]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=STATE
OnChangeAction=[!UpdateMeterGroup Controls][!Redraw]
IfCondition=[#CURRENTSECTION#:] = 0 
IfTrueAction=[!Delay 30][!Hide]
IfCondition2=[#CURRENTSECTION#:] = 1
IfTrueAction2=[!Show]
DynamicVariables=1
Substitute="0":"Stopped - ","1":"","2":"Paused - "

[MeasurePlayer]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=PLAYER

[MeasureProgress]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=PROGRESS

[MeasureDuration]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=DURATION
RegExpSubstitute=1
Substitute="^(.):":"0\1:"

[MeasurePosition]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=POSITION
RegExpSubstitute=1
Substitute="^(.):":"0\1:"

[MeasureArtist]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=ARTIST
Substitute="":"N/A"

[MeasureTitle]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=TITLE
Substitute="":"N/A"
OnChangeAction=[!Refresh]

[MeasureRemaining]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=REMAINING
RegExpSubstitute=1
Substitute="":"N/A"
