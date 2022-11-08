Route201_MapScripts::
	.byte 0

Route201_TreasureBeach_Sign::
	lockall
	msgbox Route201_TreasureBeach_Sign_Text_0
	releaseall
	return


Route201_EventScript_YoungsterHank::
	trainerbattle_single TRAINER_BEYOND_YOUNGSTERHANK, Beyond_YoungsterHank_Intro, Beyond_YoungsterHank_Outro
	msgbox Beyond_YoungsterHank_PostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route201_EventScript_YoungsterJesse::
	trainerbattle_single TRAINER_BEYOND_YOUNGSTERJESSE, Beyond_YoungsterJesse_Intro, Beyond_YoungsterJesse_Outro
	msgbox Beyond_YoungsterJesse_PostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route201_TreasureBeach_Sign_Text_0:
	.string "TREASURE BEACH\n"
	.string "“Hidden bounties await!”$"

Beyond_YoungsterHank_Intro::
	.string "This is our secret hideout!\nNo grown-ups allowed!$"

Beyond_YoungsterHank_Outro::
	.string "Hey, you're not a grown-up...$"

Beyond_YoungsterHank_PostBattle::
	.string "Me and my brother have a secret base up\n"
	.string "ahead. Don't tell anyone!$"

Beyond_YoungsterJesse_Intro::
	.string "How'd you find our secret hideout!$"

Beyond_YoungsterJesse_Outro::
	.string "No fair, you cheated!$"

Beyond_YoungsterJesse_PostBattle::
	.string "I don't wanna talk to a cheater...$"
