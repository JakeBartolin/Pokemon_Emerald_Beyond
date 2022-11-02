SeviiIsland_OneIsland_MapScripts::
	.byte 0

SeviiIsland_OneIsland_WelcomeSign::
	lockall
	msgbox SeviiIsland_OneIsland_WelcomeSign_Text_0
	releaseall
	return


SeviiIsland_OneIsland_WelcomeSign_Text_0:
	.string "Welcome to One Island!$"
