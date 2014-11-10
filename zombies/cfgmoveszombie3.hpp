class CfgMovesZombie3: CfgMovesZombie
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class Actions : Actions {
		class ZombieCrouchActions : CivilStandActions {
			die = "AdthPknlMstpSnonWnonDnon_2";
		};
	};
	class States
	{
		class DeadState: Default
		{
			actions = "DeadActions";
			file = "\A3\anims_f\Data\Anim\Sdr\dth\pne\stp\ras\Rfl\AdthPpneMstpSrasWrflDnon_1";
			speed = 1.67;
			looped = 0;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
			ragdoll = 1;
			headBobMode = 2;
			disableWeapons = 1;
			disableWeaponsLong = 1;
		};
		class Unconscious: Default
		{
			actions = "DeadActions";
			file = "\A3\anims_f\Data\Anim\Sdr\dth\pne\stp\ras\Rfl\AdthPpneMstpSrasWrflDnon_1";
			speed = -2.0;
			looped = 0;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			ragdoll = 1;
			headBobMode = 2;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			ConnectTo[] = {"Incapacitated",10.2,"IncapacitatedPistol",10.0,"IncapacitatedRifle",10.1};
			InterpolateTo[] = {"DeadState",0.1};
		};
		class Incapacitated: Unconscious
		{
			actions = "ToIncapacitatedAction";
			speed = -1.67;
			interpolationSpeed = 0.5;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon",10.1,"DeadState",0.1,"AmovPincMstpSnonWnonDnon",10.2,"Unconscious",0.2,"AmovPpneMstpSnonWnonDnon_injured",20.2};
		};
		class SprintBaseDf: StandBase
		{
			turnSpeed = 2;
			actions = "RifleStandEvasiveActionsF";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\spr\low\Rfl\AmovPercMsprSlowWrflDf.rtm";
			speed = 1.666;
			soundOverride = "sprint";
			duty = 0.5;
			showWeaponAim = 0;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Mrun_Slow_Wrfl.p3d";
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			limitGunMovement = 0;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.1;
			visibleSize = 1.000121;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			headBobStrength = 0.231343;
			interpolationSpeed = 2.5;
			rightHandIKCurve[] = {1};
			leftHandIKCurve[] = {1};
			ConnectTo[] = {"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02};
			InterpolateTo[] = {"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,"Unconscious",0.1};
		};
		class AmovPercMstpSnonWnonDnon: StandBase
		{
			actions = "CivilStandActions";
			duty = -0.4;
			file = "\zombies\zmb\zmbStandPose";
			showWeaponAim = 0;
			disableWeapons = 0;
			canPullTrigger = 0;
			speed = 1e+010;
			relSpeedMin = 0.7;
			relSpeedMax = 1.1;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			looped = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			collisionShape = "a3\anims_f\data\geom\sdr\Perc_Wnon.p3d";
			headBobStrength = 0.21393;
			limitGunMovement = 0.1;
			enableOptics = -1;
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon0S",0.01,"AidlPercMstpSnonWnonDnon_Player",0.01,"AmovPercMstpSnonWnonDnon_turnL",0.02,"AmovPercMstpSnonWnonDnon",0.02,"AmovPercMstpSnonWnonDnon_turnR",0.02,"AmovPercMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon",0.02,"AmovPercMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon",0.02,"AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon",0.02,"AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon",0.02,"AmovPercMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon",0.03,"AmovPercMstpSnonWnonDnon_AwopPercMstpSoptWbinDnon",0.02,"AmovPercMstpSnonWnonDnon_Scared",2.0,"AmovPercMstpSnonWnonDnon_Scared2",2.0,"AmovPercMstpSnonWnonDnon_SaluteIn",0.1,"AmovPercMstpSnonWnonDnon_EaseIn",0.1,"AmovPercMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground",0.1,"AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon",0.1,"AwopPercMstpSgthWnonDnon_start",0.1,"LadderCivilOn_top",1.0,"LadderCivilOn_bottom",1.0,"AmovPercMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon",0.02,"AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInLow",0.02,"AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInMedium",0.02,"AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInHigh",0.02,"AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInSDV",0.02,"amovpercmstpsnonwnondnon_amovpercmstpsraswlnrdnon",0.02};
			InterpolateTo[] = {"ZombieStandingAttack1",0.01,"ZombieStandingAttack2",0.01,"ZombieStandingAttack3",0.01,"ZombieStandingAttack4",0.01,"ZombieStandingAttack5",0.01,"ZombieStandingAttack6",0.01,"ZombieStandingAttack7",0.01,"ZombieStandingAttack8",0.01,"ZombieStandingAttack9",0.01,"ZombieStandingAttack10",0.01,"ZombieStandingAttack4",0.01,"AmovPercMrunSnonWnonDf",0.02,"AmovPercMwlkSnonWnonDf",0.02,"AmovPercMwlkSnonWnonDl",0.02,"AmovPercMwlkSnonWnonDb",0.02,"AmovPercMrunSnonWnonDb",0.02,"AmovPercMevaSnonWnonDf",0.02,"AdthPercMstpSnonWnonDnon_1",0.01,"AdthPercMstpSnonWnonDnon_2",0.01,"AdthPercMstpSnonWnonDnon_3",0.01,"AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1",0.1};
		};
		class AmovPknlMstpSnonWnonDnon: AmovPercMstpSnonWnonDnon
		{
			actions = "CivilKneelActions";
			duty = -0.7;
			file = "\zombies\zmb\zmbKneelPose";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			enableOptics = -1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon_gear",0.02,"AmovPercMstpSnonWnonDnon_gear",0.02,"AmovPknlMstpSnonWnonDnon_turnL",0.02,"AmovPknlMstpSnonWnonDnon",0.02,"AmovPknlMstpSnonWnonDnon_turnR",0.02,"amovpknlmstpsnonwnondnon_amovpknlmstpsraswpstdnon",0.02,"amovpknlmstpsnonwnondnon_amovpknlmstpsraswrfldnon",0.02,"amovpknlmstpsnonwnondnon_amovpknlmstpsraswlnrdnon",0.02,"AmovPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon",0.02,"AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf",0.01,"AmovPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon",0.02,"amovpknlmstpsnonwnondnon_amovpknlmstpsraswlnrdnon",0.01,"AidlPknlMstpSnonWnonDnon",0.01,"AidlPknlMstpSnonWnonDnon_Player",0.01,"AmovPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon",10.22};
			InterpolateTo[] = {"ZombieFeed1",0.02,"ZombieFeed2",0.02,"ZombieFeed3",0.02,"ZombieFeed4",0.02,"ZombieFeed5",0.02,"ZombieFeed6",0.01,"ZombieFeed7",0.01,"ZombieFeed8",0.01,"ZombieFeed9",0.01,"AmovPknlMstpSnonWnonDnon_turnL",0.02,"AmovPknlMstpSnonWnonDnon_turnR",0.02,"AinvPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon_medic",0.02,"AmovPknlMrunSnonWnonDf",0.02,"AmovPknlMwlkSnonWnonDf",0.02,"AmovPknlMwlkSnonWnonDbr",0.02,"AmovPknlMwlkSnonWnonDbl",0.02,"AmovPknlMwlkSnonWnonDb",0.02,"AmovPknlMwlkSnonWnonDl",0.02,"AmovPknlMwlkSnonWnonDr",0.02,"AmovPknlMwlkSnonWnonDfr",0.02,"AmovPknlMwlkSnonWnonDfl",0.02,"AmovPknlMrunSnonWnonDfl",0.02,"AmovPknlMrunSnonWnonDl",0.02,"AmovPknlMrunSnonWnonDbl",0.02,"AmovPknlMrunSnonWnonDb",0.02,"AmovPknlMrunSnonWnonDbr",0.02,"AmovPknlMrunSnonWnonDr",0.02,"AmovPknlMrunSnonWnonDfr",0.02,"AmovPknlMstpsnonwnonDnon_AinvPknlMstpsnonwnonDnon",0.02,"AmovPknlMstpsnonwnonDnon_AinvPknlMstpsnonwnonDnon_Putdown",0.02,"Unconscious",0.01,"AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2",0.1,"AmovPknlMstpSnonWnonDnon_relax",0.1,"AinvPknlMstpSnonWnonDnon_medic_1",0.02};
		};
		class AidlPercMstpSnonWnonDnon_G0S: AmovPercMstpSnonWnonDnon
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon_G0S",0.02,"AidlPercMstpSnonWnonDnon_G01",0.02,"AidlPercMstpSnonWnonDnon_G02",0.02,"AidlPercMstpSnonWnonDnon_G03",0.02,"AidlPercMstpSnonWnonDnon_G04",0.02,"AidlPercMstpSnonWnonDnon_G05",0.02,"AidlPercMstpSnonWnonDnon_G06",0.02};
			InterpolateTo[] = {"AidlPercMstpSrasWrflDnon_G0S",0.2,"Unconscious",0.01};
		};
		class AmovPercMwlkSnonWnonDf: AidlPercMstpSnonWnonDnon_G0S   //pourmarcherdebout
		{
		    actions = "CivilWlkActionsF";
			file = "\zombies\zmb\Czm2AmovPercMalrDf_short_v2.rtm";
			speed = 0.778298;					
		    variantAfter[] = {10,15,25};
		    duty = -0.1;
			soundOverride = "walk";
			soundEnabled = 1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wnon.p3d";
			walkcycles = 3;
			ConnectTo[] = {};
			InterpolateTo[] = {"ZombieWalkingDeath",0.01,"AmovPercMrunSnonWnonDf",0.025,"AmovPercMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDfl",0.025,"AmovPercMwlkSnonWnonDfr",0.025,"AmovPknlMwlkSnonWnonDf",0.03,"AmovPercMevaSnonWnonDf",0.025,"AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthStart",0.1,"Unconscious",0.1};
		};
		class AmovPercMwlkSnonWnonDfl: AmovPercMwlkSnonWnonDf
		{
			actions = "CivilWlkActionsFL";
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDf",0.025,"AmovPercMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDl",0.025,"AmovPercMrunSnonWnonDfl",0.025,"AmovPknlMwlkSnonWnonDfl",0.03,"AmovPercMevaSnonWnonDfl",0.025,"AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthStart",0.1,"Unconscious",0.1};
		};
		class AmovPercMwlkSnonWnonDl: AmovPercMwlkSnonWnonDf
		{
			actions = "CivilWlkActionsL";
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDfl",0.025,"AmovPercMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDbl",0.025,"AmovPercMrunSnonWnonDl",0.025,"AmovPknlMwlkSnonWnonDl",0.03,"Unconscious",0.1};
		};
		class AmovPercMwlkSnonWnonDbl: AmovPercMwlkSnonWnonDf
		{
			actions = "CivilWlkActionsBL";
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDl",0.025,"AmovPercMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDb",0.025,"AmovPercMrunSnonWnonDbl",0.025,"AmovPknlMwlkSnonWnonDbl",0.03,"Unconscious",0.1};
		};
		class AmovPercMwlkSnonWnonDb: AmovPercMwlkSnonWnonDf
		{
			actions = "CivilWlkActionsB";
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDbl",0.025,"AmovPercMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDbr",0.025,"AmovPercMrunSnonWnonDb",0.025,"AmovPknlMwlkSnonWnonDb",0.03,"Unconscious",0.1};
		};
		class AmovPercMwlkSnonWnonDbr: AmovPercMwlkSnonWnonDf
		{
			actions = "CivilWlkActionsBR";
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDb",0.025,"AmovPercMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDr",0.025,"AmovPercMrunSnonWnonDbr",0.025,"AmovPknlMwlkSnonWnonDbr",0.03,"Unconscious",0.1};
		};
		class AmovPercMwlkSnonWnonDr: AmovPercMwlkSnonWnonDf
		{
			actions = "CivilWlkActionsR";
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDbr",0.025,"AmovPercMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDfr",0.15,"AmovPercMrunSnonWnonDr",0.025,"AmovPknlMwlkSnonWnonDr",0.03,"Unconscious",0.1};
		};
		class AmovPercMwlkSnonWnonDfr: AmovPercMwlkSnonWnonDf    
		{
			actions = "CivilWlkActionsFR";
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDf",0.025,"AmovPercMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDr",0.15,"AmovPercMrunSnonWnonDfr",0.025,"AmovPknlMwlkSnonWnonDfr",0.03,"AmovPercMevaSnonWnonDfr",0.025,"AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthStart",0.1,"Unconscious",0.1};
		};
		class AmovPercMrunSnonWnonDf: AmovPercMstpSnonWnonDnon    //pourcourrirdebout
		{
			actions = "CivilRunActionsF";
			file = "\zombies\zmb\Czm2AmovPercMfrzDf.rtm";
			speed = 1.5798;
			soundEdge[] = {0.25,0.5,0.75,1};
			duty = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			limitGunMovement = 0.1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wnon.p3d";
			walkcycles = 3;
			disableWeapons = 1;
			ConnectTo[] = {"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",0.02};
			InterpolateTo[] = {"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",0.02,"AmovPercMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDf",0.025,"AmovPercMrunSnonWnonDfl",0.025,"AmovPercMrunSnonWnonDl",0.025,"AmovPercMrunSnonWnonDr",0.025,"AmovPercMrunSnonWnonDfr",0.025,"AmovPknlMrunSnonWnonDf",0.03,"AmovPercMevaSnonWnonDf",0.02,"Unconscious",0.1};
		};
		class AmovPercMrunSnonWnonDfl: AmovPercMrunSnonWnonDf
		{
			actions = "CivilRunActionsFL";
			InterpolateTo[] = {"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",0.02,"AmovPercMrunSnonWnonDf",0.02,"AmovPercMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDfl",0.025,"AmovPercMrunSnonWnonDl",0.025,"AmovPercMrunSnonWnonDfr",0.025,"AmovPknlMrunSnonWnonDfl",0.03,"AmovPercMevaSnonWnonDfl",0.02,"Unconscious",0.1};
		};
		class AmovPercMrunSnonWnonDl: AmovPercMrunSnonWnonDfl
		{
			actions = "CivilRunActionsL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDl",0.025,"AmovPercMrunSnonWnonDfl",0.025,"AmovPercMrunSnonWnonDbl",0.025,"AmovPknlMrunSnonWnonDl",0.03,"Unconscious",0.1};
		};
		class AmovPercMrunSnonWnonDbl: AmovPercMrunSnonWnonDl
		{
			actions = "CivilRunActionsBL";
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDbl",0.025,"AmovPercMrunSnonWnonDl",0.025,"AmovPercMrunSnonWnonDb",0.025,"AmovPknlMrunSnonWnonDbl",0.03,"Unconscious",0.1};
		};
		class AmovPercMrunSnonWnonDb: AmovPercMrunSnonWnonDl
		{
			actions = "CivilRunActionsB";
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDb",0.025,"AmovPercMrunSnonWnonDbl",0.025,"AmovPercMrunSnonWnonDbr",0.025,"AmovPknlMrunSnonWnonDb",0.03,"Unconscious",0.1};
		};
		class AmovPercMrunSnonWnonDbr: AmovPercMrunSnonWnonDl
		{
			actions = "CivilRunActionsBR";
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDbr",0.025,"AmovPercMrunSnonWnonDb",0.025,"AmovPknlMrunSnonWnonDbr",0.03,"Unconscious",0.1};
		};
		class AmovPercMrunSnonWnonDr: AmovPercMrunSnonWnonDl
		{
			actions = "CivilRunActionsR";
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDr",0.025,"AmovPercMrunSnonWnonDfr",0.025,"AmovPercMrunSnonWnonDbr",0.025,"AmovPknlMrunSnonWnonDr",0.03,"Unconscious",0.1};
		};
		class AmovPercMrunSnonWnonDfr: AmovPercMrunSnonWnonDl    //pourcourrirdebout
		{
			actions = "CivilRunActionsFR";
			ConnectTo[] = {"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",0.02};
			InterpolateTo[] = {"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",0.02,"AmovPercMrunSnonWnonDf",0.025,"AmovPercMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDfr",0.025,"AmovPercMrunSnonWnonDr",0.025,"AmovPercMrunSnonWnonDfl",0.025,"AmovPknlMrunSnonWnonDfr",0.03,"AmovPercMevaSnonWnonDfr",0.02,"Unconscious",0.1};
		};
		class AmovPknlMrunSnonWnonDf: AmovPknlMstpSnonWnonDnon   //pourcourriraccroupi
		{
			file = "\zombies\zmb\zmbM_frenziedCrawl2";
			speed = 0.5;
			soundEdge[] = {0.25,0.5,0.75,1};
			duty = 0.2;
			soundOverride = "run";
			soundEnabled = 1;
			actions = "CivilKneelActionsRunF";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Mrun_Slow_Wrfl.p3d";
			Walkcycles = 2;
			disableWeapons = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMrunSnonWnonDf",0.03,"AmovPknlMstpSnonWnonDnon",0.06,"AmovPknlMwlkSnonWnonDf",0.025,"AmovPknlMrunSnonWnonDfl",0.025,"AmovPknlMrunSnonWnonDfr",0.025,"Unconscious",0.1,"AmovPknlMstpSnonWnonDnon_relax",0.1};
		};
		class AmovPknlMwlkSnonWnonDf: AmovPknlMrunSnonWnonDf  //pourmarcheraccroupi
		{
			file = "\zombies\zmb\CzmbAmovPknlMwlkSnonWnonDf";
			speed = 0.2;
			duty = 0.1;
			walkcycles = 3;
			actions = "CivilKneelActionsWlkF";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDf",0.03,"AmovPknlMrunSnonWnonDf",0.025,"AmovPknlMwlkSnonWnonDfr",0.025,"AmovPknlMwlkSnonWnonDfl",0.025,"Unconscious",0.1,"AmovPknlMstpSnonWnonDnon_relax",0.1};
		};
		class AmovPknlMwlkSnonWnonDbr: AmovPknlMwlkSnonWnonDf
		{
			
			actions = "CivilKneelActionsWlkBR";
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDbr",0.03,"AmovPknlMwlkSnonWnonDb",0.025,"AmovPknlMwlkSnonWnonDr",0.025,"AmovPknlMrunSnonWnonDbr",0.025,"Unconscious",0.1,"AmovPknlMstpSnonWnonDnon_relax",0.1};
		};
		class AmovPknlMwlkSnonWnonDbl: AmovPknlMwlkSnonWnonDf
		{
			
			actions = "CivilKneelActionsWlkBL";
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDbl",0.03,"AmovPknlMwlkSnonWnonDb",0.025,"AmovPknlMwlkSnonWnonDl",0.025,"AmovPknlMrunSnonWnonDbl",0.025,"Unconscious",0.1,"AmovPknlMstpSnonWnonDnon_relax",0.1};
		};
		class AmovPknlMwlkSnonWnonDb: AmovPknlMwlkSnonWnonDf
		{
			
			actions = "CivilKneelActionsWlkB";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDb",0.03,"AmovPknlMwlkSnonWnonDbr",0.025,"AmovPknlMwlkSnonWnonDbl",0.025,"AmovPknlMrunSnonWnonDb",0.025,"Unconscious",0.1,"AmovPknlMstpSnonWnonDnon_relax",0.1};
		};
		class AmovPknlMwlkSnonWnonDl: AmovPknlMwlkSnonWnonDf   //pourmarcheraccroupi
		{
			
			actions = "CivilKneelActionsWlkL";
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDl",0.03,"AmovPknlMwlkSnonWnonDbl",0.025,"AmovPknlMwlkSnonWnonDfl",0.025,"AmovPknlMrunSnonWnonDl",0.025,"Unconscious",0.1,"AmovPknlMstpSnonWnonDnon_relax",0.1};
		};
		class AmovPknlMwlkSnonWnonDr: AmovPknlMwlkSnonWnonDf   //pourmarcheraccroupi
		{
			
			actions = "CivilKneelActionsWlkR";
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDr",0.03,"AmovPknlMwlkSnonWnonDbr",0.025,"AmovPknlMwlkSnonWnonDfr",0.025,"AmovPknlMrunSnonWnonDr",0.025,"Unconscious",0.1,"AmovPknlMstpSnonWnonDnon_relax",0.1};
		};
		class AmovPknlMwlkSnonWnonDfr: AmovPknlMwlkSnonWnonDf   //pourmarcheraccroupi
		{
			
			actions = "CivilKneelActionsWlkFR";
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDfr",0.03,"AmovPknlMwlkSnonWnonDf",0.025,"AmovPknlMwlkSnonWnonDr",0.025,"AmovPknlMrunSnonWnonDfr",0.025,"Unconscious",0.1,"AmovPknlMstpSnonWnonDnon_relax",0.1};
		};
		class AmovPknlMwlkSnonWnonDfl: AmovPknlMwlkSnonWnonDf   //pourmarcheraccroupi
		{
			
			actions = "CivilKneelActionsWlkFL";
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon",0.06,"AmovPercMwlkSnonWnonDfl",0.03,"AmovPknlMwlkSnonWnonDf",0.025,"AmovPknlMwlkSnonWnonDl",0.025,"AmovPknlMrunSnonWnonDfl",0.025,"Unconscious",0.1,"AmovPknlMstpSnonWnonDnon_relax",0.1};
		};
		class AmovPknlMstpSnonWnonDnon_AmovPknlMrunSnonWnonDf: AmovPknlMrunSnonWnonDf
		{
			
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon",0.02,"AmovPknlMrunSnonWnonDfl",0.025,"AmovPknlMrunSnonWnonDfr",0.025,"Unconscious",0.1};
		};
		class AmovPknlMrunSnonWnonDfl: AmovPknlMrunSnonWnonDf   //pourcourriraccroupie
		{
			
			actions = "CivilKneelActionsRunFL";
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon",0.06,"AmovPercMrunSnonWnonDfl",0.03,"AmovPknlMrunSnonWnonDf",0.025,"AmovPknlMwlkSnonWnonDfl",0.025,"AmovPknlMrunSnonWnonDl",0.025,"AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf",0.01,"Unconscious",0.1,"AmovPknlMstpSnonWnonDnon_relax",0.1};
		};
		class AmovPknlMrunSnonWnonDl: AmovPknlMrunSnonWnonDf   //pourcourriraccroupie
		{
			
			actions = "CivilKneelActionsRunL";
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon",0.06,"AmovPercMrunSnonWnonDl",0.03,"AmovPknlMwlkSnonWnonDl",0.025,"AmovPknlMrunSnonWnonDfl",0.025,"AmovPknlMrunSnonWnonDbl",0.025,"Unconscious",0.1,"AmovPknlMstpSnonWnonDnon_relax",0.1};
		};
		class AmovPknlMrunSnonWnonDbl: AmovPknlMrunSnonWnonDf   //pourcourriraccroupie
		{
			
			actions = "CivilKneelActionsRunBL";
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon",0.06,"AmovPercMrunSnonWnonDbl",0.03,"AmovPknlMwlkSnonWnonDbl",0.025,"AmovPknlMrunSnonWnonDl",0.025,"AmovPknlMrunSnonWnonDb",0.025,"Unconscious",0.1,"AmovPknlMstpSnonWnonDnon_relax",0.1};
		};
		class AmovPknlMrunSnonWnonDb: AmovPknlMrunSnonWnonDf
		{
			
			actions = "CivilKneelActionsRunB";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon",0.06,"AmovPercMrunSnonWnonDb",0.03,"AmovPknlMwlkSnonWnonDb",0.025,"AmovPknlMrunSnonWnonDbl",0.025,"AmovPknlMrunSnonWnonDbr",0.025,"Unconscious",0.1,"AmovPknlMstpSnonWnonDnon_relax",0.1};
		};
		class AmovPknlMrunSnonWnonDbr: AmovPknlMrunSnonWnonDf   //pourcourriraccroupie
		{
			
			actions = "CivilKneelActionsRunBR";
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon",0.06,"AmovPercMrunSnonWnonDbr",0.03,"AmovPknlMwlkSnonWnonDbr",0.025,"AmovPknlMrunSnonWnonDb",0.025,"AmovPknlMrunSnonWnonDr",0.025,"Unconscious",0.1,"AmovPknlMstpSnonWnonDnon_relax",0.1};
		};
		class AmovPknlMrunSnonWnonDr: AmovPknlMrunSnonWnonDf   //pourcourriraccroupie
		{
			
			actions = "CivilKneelActionsRunR";
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon",0.06,"AmovPercMrunSnonWnonDr",0.03,"AmovPknlMwlkSnonWnonDr",0.025,"AmovPknlMrunSnonWnonDbr",0.025,"AmovPknlMrunSnonWnonDfr",0.025,"Unconscious",0.1,"AmovPknlMstpSnonWnonDnon_relax",0.1};
		};
		class AmovPknlMrunSnonWnonDfr: AmovPknlMrunSnonWnonDf   //pourcourriraccroupie
		{
			
			actions = "CivilKneelActionsRunFR";
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon",0.06,"AmovPercMrunSnonWnonDfr",0.03,"AmovPknlMrunSnonWnonDf",0.025,"AmovPknlMwlkSnonWnonDfr",0.025,"AmovPknlMrunSnonWnonDr",0.025,"AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf",0.01,"Unconscious",0.1,"AmovPknlMstpSnonWnonDnon_relax",0.1};
		};
		class TransAnimBase: Default
		{
			file = "\A3\anims_f\Data\Anim\sdr\trigger.rtm";
			visibleSize = 0.500125;
			looped = 0;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			soundEdge[] = {0.01};
			headBobStrength = 0.164179;
			headBobMode = 2;
			InterpolateTo[] = {"Unconscious",0.1};
		};
		class TransAnimBase_noIK: TransAnimBase
		{
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
		};
		class AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf: TransAnimBase
		{
			actions = "CivilKneelActions";
			file = "\zombies\zmb\zmbStand_zmbKneel";
			speed = 0.6;
			canPullTrigger = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			enableDirectControl = 0;
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf_2",0.01};
			InterpolateTo[] = {"Unconscious",0.01};
		};
		class CutSceneAnimationBase: AmovPercMstpSnonWnonDnon
		{
			enableDirectControl = 1;
			showWeaponAim = 0;
			relSpeedMin = 1;
			relSpeedMax = 1;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			enableOptics = 0;
			head = "headNo";
			enableBinocular = 0;
			headBobMode = 5;
			headBobStrength = -1;
			forceAim = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		class ZombieStandingAttack: CutSceneAnimationBase{};
		class ZombieStandingAttack1: ZombieStandingAttack
		{
			file = "\zombies\zmb\zmbStandAttack6";
			speed = 1;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.02};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ZombieStandingAttack2: ZombieStandingAttack1
		{
			file = "\zombies\zmb\zmbStandAttack5";
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ZombieStandingAttack3: ZombieStandingAttack1
		{
			file = "\zombies\zmb\zmbStandAttack4";
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ZombieStandingAttack4: ZombieStandingAttack1
		{
			file = "\zombies\zmb\zmbStandAttack3";
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ZombieStandingAttack5: ZombieStandingAttack1
		{
			file = "\zombies\zmb\zombie_staticAttack3_67-158";
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ZombieStandingAttack6: ZombieStandingAttack1
		{
			file = "\zombies\zmb\zombie_staticAttack3_183-274";
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ZombieStandingAttack7: ZombieStandingAttack1
		{
			file = "\zombies\zmb\zombie_staticAttack3_441-554";
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ZombieStandingAttack8: ZombieStandingAttack1
		{
			file = "\zombies\zmb\zombie_staticAttack3_570-707";
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ZombieStandingAttack9: ZombieStandingAttack1
		{
			file = "\zombies\zmb\zombie_staticAttack3_742-833";
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ZombieStandingAttack10: ZombieStandingAttack1
		{
			file = "\zombies\zmb\zombie_staticAttack3_855-987";
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ZombieFeed: CutSceneAnimationBase
		{
			actions = "ZombieCrouchActions";
		};
		class ZombieFeed1: ZombieFeed
		{
			file = "\zombies\zmb\zmbKneel_feedA";
			speed = 0.2;
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon",0.02};
			InterpolateTo[] = {};
		};
		class ZombieFeed2: ZombieFeed1
		{
			file = "\zombies\zmb\zmbKneel_feedB";
		};
		class ZombieFeed3: ZombieFeed1
		{
			file = "\zombies\zmb\zmbKneel_feedC";
		};
		class ZombieFeed4: ZombieFeed1
		{
			file = "\zombies\zmb\zmbKneel_feedD";
		};
		class ZombieFeed5: ZombieFeed1
		{
			file = "\zombies\zmb\zmbKneel_feedE";
		};
		class ZombieFeed6: ZombieFeed1
		{
			file = "\zombies\zmb\zombie_kneelFeeding2_112_301";
		};
		class ZombieFeed7: ZombieFeed1
		{
			file = "\zombies\zmb\zombie_kneelFeeding2_1054_1275";
		};
		class ZombieFeed8: ZombieFeed1
		{
			file = "\zombies\zmb\zombie_kneelFeeding3_109-308";
		};
		class ZombieFeed9: ZombieFeed1
		{
			file = "\zombies\zmb\zombie_kneelFeeding3_363-574";
		};
		class AmovPercMstpSlowWrflDnon: StandBase
		{
			variantAfter[] = {30,30,30};
			variantsPlayer[] = {"AidlPercMstpSlowWrflDnon_G01",0.5,"AidlPercMstpSlowWrflDnon_G02",0.125,"AidlPercMstpSlowWrflDnon_G03",0.125,"AidlPercMstpSlowWrflDnon_G04",0.125,"AidlPercMstpSlowWrflDnon_G05",0.125};
			actions = "RifleLowStandActions";
			duty = -0.4;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\stp\low\rfl\AmovPercMstpSlowWrflDnon.rtm";
			collisionShape = "A3\anims_f\data\geom\sdr\Perc_Wrfl_Low.p3d";
			showWeaponAim = 0;
			disableWeapons = 0;
			disableWeaponsLong = 1;
			speed = 1e+010;
			relSpeedMin = 0.886855;
			relSpeedMax = 1.1;
			soundEnabled = 0;
			enableBinocular = 1;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			weaponIK = 1;
			canPullTrigger = 0;
			interpolationSpeed = 5.0;
			canBlendStep = 1;
			headBobStrength = 0.054726;
			weaponLowered = 1;
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMstpSlowWrflDnon_turnL",0.02,"AmovPercMstpSlowWrflDnon_turnR",0.02,"AmovPercMstpSlowWrflDnon_AmovPknlMstpSlowWrflDnon",0.01,"AmovPercMstpSlowWrflDnon_AmovPpneMstpSrasWrflDnon",0.02,"AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon",0.01,"AmovPercMstpSlowWrflDnon_SaluteIn",0.1,"AmovPercMstpSrasWrflDnon_SaluteIn",0.15,"AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon",0.1,"AmovPercMstpSlowWrflDnon_AmovPsitMstpSrasWrflDnon",0.1,"LadderRifleOn",1.0,"AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1",0.1,"Helper_SwitchToCarryRfl",0.2};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon_turnL",0.02,"AmovPercMstpSlowWrflDnon_turnR",0.02,"AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1",0.01,"AmovPercMstpSrasWrflDnon_AinvPercMstpSrasWrflDnon",0.01,"AmovPercMstpSrasWrflDnon_AinvPercMstpSrasWrflDnon_Putdown",0.01,"AovrPercMstpSlowWrflDf",0.01,"Helper_SwitchToCarryRfl",0.2,"AmovPercMwlkSlowWrflDf",0.02,"AmovPercMwlkSlowWrflDfl",0.02,"AmovPercMwlkSlowWrflDl",0.02,"AmovPercMwlkSlowWrflDbl",0.02,"AmovPercMwlkSlowWrflDb",0.02,"AmovPercMwlkSlowWrflDbr",0.02,"AmovPercMwlkSlowWrflDr",0.02,"AmovPercMwlkSlowWrflDfr",0.02,"AmovPercMrunSlowWrflDf",0.02,"AmovPercMrunSlowWrflDfl",0.02,"AmovPercMrunSlowWrflDl",0.02,"AmovPercMrunSlowWrflDbl",0.02,"AmovPercMrunSlowWrflDb",0.02,"AmovPercMrunSlowWrflDbr",0.02,"AmovPercMrunSlowWrflDr",0.02,"AmovPercMrunSlowWrflDfr",0.02,"AmovPercMevaSlowWrflDf",0.025,"AmovPercMevaSlowWrflDfl",0.025,"AmovPercMevaSlowWrflDfr",0.025,"AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDl",0.05,"AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDr",0.05,"AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDb",0.05,"Unconscious",0.01,"AwopPercMstpSgthWrflDnon_Start1",0.1,"AwopPercMstpSgthWrflDnon_Throw1",0.1,"AwopPercMstpSgthWrflDnon_End1",0.1,"AwopPercMstpSgthWrflDnon_Throw2",0.1,"AwopPercMstpSgthWrflDnon_End2",0.1,"AidlPercMstpSlowWrflDnon_G01",0.02,"AidlPercMstpSlowWrflDnon_G02",0.02,"AidlPercMstpSlowWrflDnon_G03",0.02,"AidlPercMstpSlowWrflDnon_G04",0.02,"AidlPercMstpSlowWrflDnon_G05",0.02,"AmovPercMtacSlowWrflDf",0.2,"AmovPercMtacSlowWrflDfl",0.2,"AmovPercMtacSlowWrflDl",0.2,"AmovPercMtacSlowWrflDbl",0.2,"AmovPercMtacSlowWrflDb",0.2,"AmovPercMtacSlowWrflDbr",0.2,"AmovPercMtacSlowWrflDr",0.2,"AmovPercMtacSlowWrflDfr",0.2,"Helper_SwitchToCarrynon",0.2,"AmovPercMwlkSrasWrflDf_AsdvPercMrunSnonWnonDf",0.2,"AmovPercMwlkSrasWrflDf_AdvePercMrunSnonWnonDf",0.2,"AmovPercMwlkSrasWrflDf_AbdvPercMrunSnonWnonDf",0.2,"HaloFreeFall_non",10.2,"AinvPercMstpSrasWrflDnon",0.05};
		};
		class AmovPknlMstpSlowWrflDnon: AmovPercMstpSlowWrflDnon
		{
			variantsPlayer[] = {"AidlPknlMstpSlowWrflDnon_G01",0.25,"AidlPknlMstpSlowWrflDnon_G02",0.25,"AidlPknlMstpSlowWrflDnon_G03",0.25};
			actions = "RifleKneelLowActions";
			duty = -0.7;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\stp\low\rfl\AmovPknlMstpSlowWrflDnon.rtm";
			visibleSize = 0.300122;
			aimPrecision = 0.55;
			camShakeFire = 0.5;
			collisionShape = "A3\anims_f\data\geom\sdr\Pknl_Wrfl_Low.p3d";
			interpolationSpeed = 4.0;
			ConnectTo[] = {"AidlPknlMstpSlowWrflDnon_G0S",0.01,"AmovPknlMstpSlowWrflDnon_gear",0.02,"AmovPknlMstpSlowWrflDnon",0.02,"AmovPknlMstpSlowWrflDnon_diary",0.02,"AmovPknlMstpSrasWrflDnon_diary",0.02,"AmovPercMstpSrasWrflDnon_diary",0.02,"AmovPercMstpSlowWrflDnon_gear",0.02,"AmovPercMstpSlowWrflDnon_diary",0.02,"AidlPknlMstpSlowWrflDnon_AI",0.1,"AmovPknlMstpSlowWrflDnon_turnL",0.02,"AmovPknlMstpSlowWrflDnon_turnR",0.02,"amovpknlmstpSlowwrfldnon_amovpknlmstpsraswrfldnon",0.01,"AmovPknlMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon",0.01,"AmovPknlMstpSlowWrflDnon_AmovPpneMstpSrasWrflDnon",0.01};
			InterpolateTo[] = {"AidlPknlMstpSlowWrflDnon_AI",0.1,"AmovPknlMstpSlowWrflDnon_turnL",0.02,"AmovPknlMstpSlowWrflDnon_turnR",0.02,"AinvPknlMstpSnonWrflDnon_AinvPknlMstpSnonWrflDnon_medic",0.02,"AmovPknlMstpSrasWrflDnon_AinvPknlMstpSrasWrflDnon_Putdown",0.02,"AmovPknlMstpSrasWrflDnon_AinvPknlMstpSrasWrflDnon",0.02,"AmovPknlMwlkSlowWrflDf",0.02,"AmovPknlMwlkSlowWrflDfl",0.02,"AmovPknlMwlkSlowWrflDl",0.02,"AmovPknlMwlkSlowWrflDbl",0.02,"AmovPknlMwlkSlowWrflDb",0.02,"AmovPknlMwlkSlowWrflDbr",0.02,"AmovPknlMwlkSlowWrflDr",0.02,"AmovPknlMwlkSlowWrflDfr",0.02,"AmovPknlMtacSlowWpstDf",0.02,"AmovPknlMtacSlowWpstDfl",0.02,"AmovPknlMtacSlowWpstDl",0.02,"AmovPknlMtacSlowWpstDbl",0.02,"AmovPknlMtacSlowWpstDb",0.02,"AmovPknlMtacSlowWpstDbr",0.02,"AmovPknlMtacSlowWpstDr",0.02,"AmovPknlMtacSlowWpstDfr",0.02,"AmovPknlMrunSlowWrflDf",0.01,"AmovPknlMrunSlowWrflDfl",0.02,"AmovPknlMrunSlowWrflDl",0.02,"AmovPknlMrunSlowWrflDbl",0.02,"AmovPknlMrunSlowWrflDb",0.02,"AmovPknlMrunSlowWrflDbr",0.02,"AmovPknlMrunSlowWrflDr",0.02,"AmovPknlMrunSlowWrflDfr",0.02,"AmovPknlMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon",0.02,"AovrPercMstpSlowWrflDf",0.02,"Unconscious",0.01,"AmovPknlMstpSlowWrflDnon_relax",10.01,"AmovPknlMtacSlowWrflDf",0.02,"AmovPknlMtacSlowWrflDfl",0.02,"AmovPknlMtacSlowWrflDl",0.02,"AmovPknlMtacSlowWrflDbl",0.02,"AmovPknlMtacSlowWrflDb",0.02,"AmovPknlMtacSlowWrflDbr",0.02,"AmovPknlMtacSlowWrflDr",0.02,"AmovPknlMtacSlowWrflDfr",0.02,"AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1",0.01};
		};
		class AmovPknlMstpSrasWrflDnon: AmovPknlMstpSlowWrflDnon
		{
			variantsPlayer[] = {"AidlPknlMstpSrasWrflDnon_G01_player",0.5,"AidlPknlMstpSrasWrflDnon_G02_player",0.5};
			variantAfter[] = {15,15,15};
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon.rtm";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Wrfl.p3d";
			showWeaponAim = 1;
			enableOptics = 1;
			actions = "RifleKneelActions";
			disableWeaponsLong = 0;
			canPullTrigger = 1;
			limitGunMovement = 0.8;
			weaponLowered = 0;
			ConnectTo[] = {"AidlPknlMstpSlowWrflDnon_AI",0.1,"AmovPknlMstpSrasWrflDnon",0.03,"AmovPknlMstpSrasWrflDnon_turnL",0.02,"AmovPknlMstpSrasWrflDnon_turnR",0.02,"WeaponMagazineReloadKneel",0.1,"amovpknlmstpsraswrfldnon_amovpknlmstpSlowwrfldnon",0.02,"AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon",0.01,"AmovPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon",0.01,"AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon",0.02,"AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWlnrDnon",0.02,"AmovPknlMstpSrasWrflDnon_AwopPknlMstpSoptWbinDnon",0.02,"AmovPknlMstpSrasWrflDnon_AinvPknlMstpSrasWrflDnon",0.02,"AmovPknlMstpSrasWrflDnon_AinvPknlMstpSrasWrflDnon_Putdown",0.02,"AmovPknlMstpSrasWrflDnon_AmovPknlMstpSnonWnonDnon",0.02,"AwopPknlMstpSgthWrflDnon_Start",0.1,"AwopPknlMstpSgthWrflDnon_End",0.1,"AmovPknlMstpSrasWrflDnon_AadjPknlMstpSrasWrflDup",0.02,"AmovPknlMstpSrasWrflDnon_AadjPknlMstpSrasWrflDdown",0.02,"AmovPknlMstpSrasWrflDnon_AadjPknlMstpSrasWrflDleft",0.02,"AmovPknlMstpSrasWrflDnon_AadjPknlMstpSrasWrflDright",0.02,"AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon_gear",0.02,"AmovPknlMstpSrasWrflDnon_AmovPknlMrunSlowWrflDf",0.01};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon_turnL",0.02,"AmovPknlMstpSrasWrflDnon_turnR",0.02,"AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon",0.01,"AmovPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon",0.01,"AidlPknlMstpSrasWrflDnon_AI",0.02,"AinvPknlMstpSnonWrflDnon_AinvPknlMstpSnonWrflDnon_medic",0.02,"AmovPknlMwlkSrasWrflDf",0.02,"AmovPknlMwlkSrasWrflDfl",0.02,"AmovPknlMwlkSrasWrflDl",0.02,"AmovPknlMwlkSrasWrflDbl",0.02,"AovrPercMstpSrasWrflDf",1.02,"AmovPknlMwlkSrasWrflDb",0.02,"AmovPknlMwlkSrasWrflDbr",0.02,"AmovPknlMwlkSrasWrflDr",0.02,"AmovPknlMwlkSrasWrflDfr",0.02,"AmovPknlMrunSrasWrflDfl",0.02,"AmovPknlMrunSrasWrflDl",0.02,"AmovPknlMrunSrasWrflDbl",0.02,"AmovPknlMrunSrasWrflDb",0.02,"AmovPknlMrunSrasWrflDbr",0.02,"AmovPknlMrunSrasWrflDr",0.02,"AmovPknlMrunSrasWrflDfr",0.02,"AmovPknlMrunSrasWrflDf_ldst",0.02,"AmovPknlMrunSrasWrflDfl_ldst",0.02,"AmovPknlMrunSrasWrflDl_ldst",0.02,"AmovPknlMrunSrasWrflDbl_ldst",0.02,"AmovPknlMrunSrasWrflDb_ldst",0.02,"AmovPknlMrunSrasWrflDbr_ldst",0.02,"AmovPknlMrunSrasWrflDr_ldst",0.02,"AmovPknlMrunSrasWrflDfr_ldst",0.02,"AmovPknlMstpSrasWrflDnon_AmovPknlMevaSrasWrflDl",0.02,"AmovPknlMstpSrasWrflDnon_AmovPknlMevaSrasWrflDr",0.02,"AmovPknlMstpSrasWrflDnon_AmovPknlMevaSrasWrflDb",0.02,"Unconscious",0.01,"AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_2",0.2,"ReloadGM6",0.2,"DismountOptic",0.2,"MountOptic",0.2,"MountSide",0.2,"DismountSide",0.2,"AmovPknlMstpSlowWrflDnon_relax",10.2,"AmovPknlMrunSrasWrflDf",0.2,"AinvPknlMstpSnonWrflDnon_medicUp",0.2,"AmovPknlMtacSrasWrflDf",0.02,"AmovPknlMtacSrasWrflDfl",0.02,"AmovPknlMtacSrasWrflDl",0.02,"AmovPknlMtacSrasWrflDbl",0.02,"AmovPknlMtacSrasWrflDb",0.02,"AmovPknlMtacSrasWrflDbr",0.02,"AmovPknlMtacSrasWrflDr",0.02,"AmovPknlMtacSrasWrflDfr",0.02,"AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon",0.01,"amovpknlmstpSlowwrfldnon_amovpknlmstpsraswrfldnon",0.02,"AmovPercMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon",0.02,"AmovPpneMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon",0.02};
		};
		class AwopPknlMstpSoptWbinDnon_rfl: AmovPknlMstpSrasWrflDnon
		{
			variantsPlayer[] = {};
			actions = "BinocKneelRflActions";
			file = "\A3\anims_f\Data\Anim\Sdr\wop\knl\stp\opt\bin\awoppknlmstpsoptwbindnon_rfl";
			showWeaponAim = 0;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			aimprecision = 0.05;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Wnon.p3d";
			enableOptics = 4096;
			canPullTrigger = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_rifle",0.02,"AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_rifle",0.02,"AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWrflDnon",0.02,"AwopPknlMstpSoptWbinDnon_rfl_turnL",0.02,"AwopPknlMstpSoptWbinDnon_rfl_turnR",0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_rfl_turnL",0.02,"AwopPknlMstpSoptWbinDnon_rfl_turnR",0.02,"Unconscious",0.01,"AmovPknlMwlkSoptWbinDf_rfl",0.02,"AmovPknlMwlkSoptWbinDfr_rfl",0.02,"AmovPknlMwlkSoptWbinDr_rfl",0.02,"AmovPknlMwlkSoptWbinDbr_rfl",0.02,"AmovPknlMwlkSoptWbinDb_rfl",0.02,"AmovPknlMwlkSoptWbinDbl_rfl",0.02,"AmovPknlMwlkSoptWbinDl_rfl",0.02,"AmovPknlMwlkSoptWbinDfl_rfl",0.02};
		};
		class AmovPknlMrunSnonWbinDf_rfl: AwopPknlMstpSoptWbinDnon_rfl
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondf";
			soundEdge[] = {0.25,0.5,0.75,1};
			aimprecision = 1.0;
			speed = 0.666667;
			enableOptics = 0;
			enableBinocular = 0;
			duty = 0.4;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.096506;
			soundOverride = "run";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSnonWbinDfr_rfl",0.025,"AmovPknlMrunSnonWbinDfl_rfl",0.025,"AmovPknlMwlkSoptWbinDf_rfl",0.025,"Unconscious",0.1};
		};
		class AmovPknlMrunSnonWbinDl_rfl: AmovPknlMrunSnonWbinDf_rfl
		{
			file = "\zombies\zmb\zombie_frenziedCrawl3";
			speed = 1.3;
			InterpolateTo[] = {"AmovPknlMrunSnonWbinDbl_rfl",0.025,"AmovPknlMrunSnonWbinDfl_rfl",0.025,"AmovPknlMwlkSoptWbinDl_rfl",0.025,"Unconscious",0.1};
		};
		class AidlPercMstpSnonWnonDnon0S: AmovPercMstpSnonWnonDnon
		{
			variantsPlayer[] = {};
			variantsAI[] = {"AidlPercMstpSnonWnonDnon0S",0.01,"AidlPercMstpSnonWnonDnon01",0.01,"AidlPercMstpSnonWnonDnon02",0.01,"AidlPercMstpSnonWnonDnon03",0.01,"AidlPercMstpSnonWnonDnon04",0.01,"AidlPercMstpSnonWnonDnon05",0.01,"AidlPercMstpSnonWnonDnon06",0.01,"AidlPercMstpSnonWnonDnon07",0.01,"AidlPercMstpSnonWnonDnon08",0.01};
			variantAfter[] = {1,5,10};
			equivalentTo = "AidlPercMstpSnonWnonDnon01";
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AidlPercMstpSnonWnonDnon0S",0.01,"AidlPercMstpSnonWnonDnon01",0.01,"AidlPercMstpSnonWnonDnon02",0.01,"AidlPercMstpSnonWnonDnon03",0.01,"AidlPercMstpSnonWnonDnon04",0.01,"AidlPercMstpSnonWnonDnon05",0.01,"AidlPercMstpSnonWnonDnon06",0.01,"AidlPercMstpSnonWnonDnon07",0.01,"AidlPercMstpSnonWnonDnon08",0.01};
			InterpolateTo[] = {"AidlPercMstpSnonWnonDnon0S",0.01,"AidlPercMstpSnonWnonDnon01",0.01,"AidlPercMstpSnonWnonDnon02",0.01,"AidlPercMstpSnonWnonDnon03",0.01,"AidlPercMstpSnonWnonDnon04",0.01,"AidlPercMstpSnonWnonDnon05",0.01,"AidlPercMstpSnonWnonDnon06",0.01,"AidlPercMstpSnonWnonDnon07",0.01,"AidlPercMstpSnonWnonDnon08",0.01,"Unconscious",0.01};
		};
		class AidlPercMstpSnonWnonDnon01: AidlPercMstpSnonWnonDnon0S
		{
			file = "\zombies\zmb\zmbStandIdleA";
			speed = 0.088757;
			looped = 0;
			variantAfter[] = {1,1,1};
			interpolationSpeed = 6;
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon0S",0.01};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"Unconscious",0.01};
		};
		class AidlPercMstpSnonWnonDnon02: AidlPercMstpSnonWnonDnon01
		{
			file = "\zombies\zmb\zmbStandIdleB";
			speed = 0.107143;
		};
		class AidlPercMstpSnonWnonDnon03: AidlPercMstpSnonWnonDnon01
		{
			file = "\zombies\zmb\zmbStandIdleC_lookAround";
			speed = 0.089286;
		};
		class AidlPercMstpSnonWnonDnon04: AidlPercMstpSnonWnonDnon01
		{
			file = "\zombies\zmb\zmbBentIdleA";
			speed = 0.172414;
		};
		class AidlPercMstpSnonWnonDnon05: AidlPercMstpSnonWnonDnon01
		{
			file = "\zombies\zmb\zmbBentIdleB_lookAroundSwing";
			speed = 0.09375;
		};
		class AidlPercMstpSnonWnonDnon06: AidlPercMstpSnonWnonDnon01
		{
			file = "\zombies\zmb\zmbBentIdleC_lookAround";
			speed = 0.091463;
		};
		class AidlPercMstpSnonWnonDnon07: AidlPercMstpSnonWnonDnon01
		{
			file = "\zombies\zmb\zmbStandIdleD_sniffingHyped";
			speed = 0.091463;
		};
		class AidlPercMstpSnonWnonDnon08: AidlPercMstpSnonWnonDnon01
		{
			file = "\zombies\zmb\zmbStandIdleE_swinging";
			speed = 0.091463;
		};
		class AidlPercMstpSnonWnonDnon09: AidlPercMstpSnonWnonDnon01
		{
			file = "\zombies\zmb\zmbStandCry1";
			speed = 0.2;
		};
		class AidlPercMstpSnonWnonDnon10: AidlPercMstpSnonWnonDnon01
		{
			file = "\zombies\zmb\zmbStandCry2";
			speed = 0.2;
		};
		class AidlPknlMstpSnonWnonDnon: AmovPknlMstpSnonWnonDnon
		{
			variantsPlayer[] = {};
			variantsAI[] = {"AidlPknlMstpSnonWnonDnon01",0.04,"AidlPknlMstpSnonWnonDnon02",0.03,"AidlPknlMstpSnonWnonDnon03",0.03,"AidlPknlMstpSnonWnonDnon_idleSteady03",0.3,"AidlPknlMstpSnonWnonDnon_idleSteady02",0.3,"AidlPknlMstpSnonWnonDnon_idleSteady01",0.3};
			variantAfter[] = {0,0,0};
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon",0.01,"AidlPknlMstpSnonWnonDnon0S",0.01};
			InterpolateTo[] = {"Unconscious",0.1};
		};
		class AidlPknlMstpSnonWnonDnon0S: AidlPknlMstpSnonWnonDnon
		{
			equivalentTo = "AidlPknlMstpSnonWnonDnon01";
			file = "\zombies\zmb\zmbKneelPose";
			variantAfter[] = {1,1,1};
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon01",0.01,"AidlPknlMstpSnonWnonDnon02",0.01,"AidlPknlMstpSnonWnonDnon03",0.01,"AidlPknlMstpSnonWnonDnon_idleSteady01",0.01,"AidlPknlMstpSnonWnonDnon_idleSteady02",0.01,"AidlPknlMstpSnonWnonDnon_idleSteady03",0.01};
			InterpolateTo[] = {"Unconscious",0.01,"AidlPknlMstpSnonWnonDnon",0.01,"AidlPknlMstpSnonWnonDnon0S",0.2};
		};
		class AidlPknlMstpSnonWnonDnon01: AidlPknlMstpSnonWnonDnon0S
		{
			file = "\zombies\zmb\zmbKneel_idleA";
			speed = 0.04065;
			looped = 0;
			variantAfter[] = {1,1,1};
			canPullTrigger = 0;
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon0S",0.01};
			InterpolateTo[] = {"Unconscious",0.01,"AidlPknlMstpSnonWnonDnon",0.01};
		};
		class AidlPknlMstpSnonWnonDnon02: AidlPknlMstpSnonWnonDnon01
		{
			file = "\zombies\zmb\zmbKneel_idleB";
			speed = 0.049505;
			canPullTrigger = 0;
		};
		class AidlPknlMstpSnonWnonDnon03: AidlPknlMstpSnonWnonDnon01
		{
			file = "\zombies\zmb\zmbKneel_idleC";
			speed = 0.043732;
		};
		class AidlPknlMstpSnonWnonDnon04: AidlPknlMstpSnonWnonDnon01
		{
			file = "\zombies\zmb\zmbKneel_idleD";
			speed = 0.043732;
		};
		class AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1: Default
		{
			actions = "MoveWithInjuredManDraggerRfl";
			file = "\A3\anims_f\Data\Anim\Sdr\inj\AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1";
			speed = 1;
			looped = 0;
			disableWeapons = 1;
			aiming = "empty";
			aimingBody = "empty";
			duty = 0.2;
			interpolationSpeed = 10.05;
			showWeaponAim = 0;
			canPullTrigger = 0;
			limitGunMovement = 0;
			headBobMode = 2;
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_2",0.2};
			InterpolateTo[] = {"AcinPknlMwlkSlowWrflDb_AmovPercMstpSlowWrflDnon",0.2,"AcinPknlMwlkSlowWrflDb_death",0.2,"AcinPknlMwlkSlowWrflDb_agony",0.1};
		};
		class AcinPknlMwlkSlowWrflDb_death: AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1
		{
			file = "\zombies\zmb\zombie_runDeaths6";
			speed = 0.8;
			looped = 0;
			equivalentTo = "";
			ArrayVariable_1194 = "";
			ArrayVariable_1193 = "";
			ArrayVariable_1192 = "";
			interpolationSpeed = 1;
			ConnectTo[] = {"Unconscious",1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSnonWnonDnon_1: AcinPknlMwlkSlowWrflDb_death
		{
			file = "\zombies\zmb\zmbStandDeath1";
			speed = 0.6;
			equivalentTo = "AdthPercMstpSnonWnonDnon_1";
			variantsPlayer[] = {"AdthPercMstpSnonWnonDnon_1",0.33,"AdthPercMstpSnonWnonDnon_2",0.33,"AdthPercMstpSnonWnonDnon_3",0.33};
			canPullTrigger = 0;
			terminal = 1;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class AdthPercMstpSnonWnonDnon_2: AcinPknlMwlkSlowWrflDb_death
		{
			file = "\zombies\zmb\zmbStandDeath2";
			speed = 0.6;
			canPullTrigger = 0;
			terminal = 1;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class AdthPercMstpSnonWnonDnon_3: AcinPknlMwlkSlowWrflDb_death
		{
			file = "\zombies\zmb\zmbStandDeath3";
			speed = 0.6;
			canPullTrigger = 0;
			terminal = 1;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class ZombieWalkingDeath: AcinPknlMwlkSlowWrflDb_death
		{
			file = "\zombies\zmb\zombie2_deathFromWalk";
			speed = 0.6;
			equivalentTo = "AdthPercMstpSnonWnonDnon_1";
			variantsPlayer[] = {};
			canPullTrigger = 0;
			terminal = 1;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class AdthPknlMstpSnonWnonDnon_1: AcinPknlMwlkSlowWrflDb_death
		{
			file = "\zombies\zmb\zmbKneel_deathA";
			speed = 0.6;
			equivalentTo = "AdthPknlMstpSnonWnonDnon_1";
			variantsPlayer[] = {"AdthPknlMstpSnonWnonDnon_1",0.5,"AdthPknlMstpSnonWnonDnon_2",0.5};
			canPullTrigger = 0;
			terminal = 1;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class AdthPknlMstpSnonWnonDnon_2: AcinPknlMwlkSlowWrflDb_death
		{
			file = "\zombies\zmb\zmbKneel_deathB";
			speed = 0.6;
			canPullTrigger = 0;
			terminal = 1;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class CzmbAdthPercMrunSnonWnonDf: AcinPknlMwlkSlowWrflDb_death
		{
			file = "\zombies\zmb\zombie_runDeaths6";
			speed = 0.8;
			looped = 0;
			equivalentTo = "";
			ArrayVariable_1194 = "";
			ArrayVariable_1193 = "";
			ArrayVariable_1192 = "";
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};

	};
	class BlendAnims: BlendAnims
	{
		wholeBody[] = {"Pelvis",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"Camera",1,"weapon",1,"launcher",1,"neck",1,"neck1",1,"head",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftLeg",1,"LeftLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightLeg",1,"RightLegRoll",1,"RightFoot",1,"RightToeBase",1};
		aimingDefault[] = {"head",0.6,"neck1",0.6,"neck",0.6,"weapon",1,"launcher",1,"LeftShoulder",0.8,"LeftArm",0.8,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",0.8,"RightArm",0.8,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.3,"Spine1",0.4,"Spine2",0.5,"Spine3",0.6};
		aimingPistol[] = {"head",0.6,"neck1",0.6,"neck",0.6,"LeftShoulder",1,"launcher",1,"weapon",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.3,"Spine1",0.4,"Spine2",0.5,"Spine3",0.6};
		aimingLauncher[] = {"head",0.6,"neck1",0.6,"neck",0.6,"launcher",1,"weapon",1,"LeftShoulder",0.8,"LeftArm",0.8,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",0.8,"RightArm",0.8,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.3,"Spine1",0.4,"Spine2",0.5,"Spine3",0.6};
		aimingCivil[] = {"neck1",0.25,"neck",0.25,"Spine",0.3,"Spine1",0.4,"Spine2",0.5,"Spine3",0.5};
		aimingCivilKneel[] = {"neck1",0.25,"neck",0.25,"Spine",0.3,"Spine1",0.4,"Spine2",0.5,"Spine3",0.5,"LeftShoulder",0.5,"LeftArm",0.2,"LeftArmRoll",0.15,"LeftForeArm",0.1,"LeftForeArmRoll",0.05,"RightShoulder",0.5,"RightArm",0.2,"RightArmRoll",0.15,"RightForeArm",0.1,"RightForeArmRoll",0.05};
		aimingLying[] = {"weapon",1,"LeftShoulder",0.8,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",0.8,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine2",0.2,"Spine3",0.6};
		aimingLyingPistol[] = {"LeftShoulder",0.8,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",0.8,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine2",0.2,"Spine3",0.6};
		legsLyingAiming[] = {"weapon",0,"LeftShoulder",0.2,"LeftArm",0,"LeftArmRoll",0,"LeftForeArm",0,"LeftForeArmRoll",0,"LeftHand",0,"LeftHandRing",0,"LeftHandPinky1",0,"LeftHandPinky2",0,"LeftHandPinky3",0,"LeftHandRing1",0,"LeftHandRing2",0,"LeftHandRing3",0,"LeftHandMiddle1",0,"LeftHandMiddle2",0,"LeftHandMiddle3",0,"LeftHandIndex1",0,"LeftHandIndex2",0,"LeftHandIndex3",0,"LeftHandThumb1",0,"LeftHandThumb2",0,"LeftHandThumb3",0,"RightShoulder",0.2,"RightArm",0,"RightArmRoll",0,"RightForeArm",0,"RightForeArmRoll",0,"RightHand",0,"RightHandRing",0,"RightHandPinky1",0,"RightHandPinky2",0,"RightHandPinky3",0,"RightHandRing1",0,"RightHandRing2",0,"RightHandRing3",0,"RightHandMiddle1",0,"RightHandMiddle2",0,"RightHandMiddle3",0,"RightHandIndex1",0,"RightHandIndex2",0,"RightHandIndex3",0,"RightHandThumb1",0,"RightHandThumb2",0,"RightHandThumb3",0,"Spine2",0.8,"Spine3",0.4,"spine1",1,"pelvis",1,"leftupleg",1,"leftuplegroll",1,"leftleg",1,"leftlegroll",1,"leftfoot",1,"LeftToeBase",1,"rightupleg",1,"rightuplegroll",1,"rightleg",1,"rightlegroll",1,"rightfoot",1,"RightToeBase",1};
		legsLyingAimingPistol[] = {"LeftShoulder",0.2,"LeftArm",0,"LeftArmRoll",0,"LeftForeArm",0,"LeftForeArmRoll",0,"LeftHand",0,"LeftHandRing",0,"LeftHandPinky1",0,"LeftHandPinky2",0,"LeftHandPinky3",0,"LeftHandRing1",0,"LeftHandRing2",0,"LeftHandRing3",0,"LeftHandMiddle1",0,"LeftHandMiddle2",0,"LeftHandMiddle3",0,"LeftHandIndex1",0,"LeftHandIndex2",0,"LeftHandIndex3",0,"LeftHandThumb1",0,"LeftHandThumb2",0,"LeftHandThumb3",0,"RightShoulder",0.2,"RightArm",0,"RightArmRoll",0,"RightForeArm",0,"RightForeArmRoll",0,"RightHand",0,"RightHandRing",0,"RightHandPinky1",0,"RightHandPinky2",0,"RightHandPinky3",0,"RightHandRing1",0,"RightHandRing2",0,"RightHandRing3",0,"RightHandMiddle1",0,"RightHandMiddle2",0,"RightHandMiddle3",0,"RightHandIndex1",0,"RightHandIndex2",0,"RightHandIndex3",0,"RightHandThumb1",0,"RightHandThumb2",0,"RightHandThumb3",0,"Spine2",0.8,"Spine3",0.4,"spine1",1,"pelvis",1,"leftupleg",1,"leftuplegroll",1,"leftleg",1,"leftlegroll",1,"leftfoot",1,"LeftToeBase",1,"rightupleg",1,"rightuplegroll",1,"rightleg",1,"rightlegroll",1,"rightfoot",1,"RightToeBase",1};
		headDefault[] = {"head",1,"neck1",0.5,"neck",0.5};
		leaningDefault[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7,"pelvis",0.4};
		crewShake_half[] = {"weapon",0.5,"Camera",0.5,"launcher",0.5,"Head",0.5,"Neck",0.5,"Neck1",0.5,"LeftShoulder",0.45,"LeftArm",0.35,"LeftArmRoll",0.25,"LeftForeArm",0.15,"RightShoulder",0.45,"RightArm",0.35,"RightArmRoll",0.25,"RightForeArm",0.315,"spine3",0.475,"spine2",0.45,"spine1",0.4,"spine",0.35,"pelvis",0.2,"LeftUpLeg",0.1,"LeftUpLegRoll",0.25,"LeftLeg",0.1,"RightUpLeg",0.1,"RightUpLegRoll",0.25,"RightLeg",0.1};
		crewShake[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",0.9,"LeftArm",0.7,"LeftArmRoll",0.5,"LeftForeArm",0.3,"RightShoulder",0.9,"RightArm",0.7,"RightArmRoll",0.5,"RightForeArm",0.3,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7,"pelvis",0.4,"LeftUpLeg",0.2,"LeftUpLegRoll",0.5,"LeftLeg",0.2,"RightUpLeg",0.2,"RightUpLegRoll",0.5,"RightLeg",0.2};
		aimingUpDefault[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7};
		aimingUpCivilKneel[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7,"LeftShoulder",0.95,"LeftArm",0.45,"LeftArmRoll",0.35,"LeftForeArm",0.25,"LeftForeArmRoll",0.15,"RightShoulder",0.95,"RightArm",0.45,"RightArmRoll",0.35,"RightForeArm",0.25,"RightForeArmRoll",0.15};
		aimingUpLying[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.9,"spine2",0.7,"spine1",0.5};
		aimingUpPistol[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7};
		aimingUpCivil[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7};
		aimingUpLauncher[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7};
		legsDefault[] = {"LeftUpLeg",0.9,"LeftUpLegRoll",0.9,"LeftLeg",0.95,"LeftLegRoll",0.95,"LeftFoot",1,"LeftToeBase",1,"RightUpLeg",0.9,"RightUpLegRoll",0.9,"RightLeg",0.95,"RightLegRoll",0.95,"RightFoot",1,"RightToeBase",1};
		idleDefault[] = {"Pelvis",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"Camera",1,"weapon",1,"launcher",1,"neck",1,"neck1",1,"head",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftLeg",1,"LeftLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightLeg",1,"RightLegRoll",1,"RightFoot",1,"RightToeBase",1};
	};
};