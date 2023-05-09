[MeasurePlaying]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=STATE

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
