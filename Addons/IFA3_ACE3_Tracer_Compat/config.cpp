﻿class CfgPatches {
    class IFA3_ACE3_Tracer_Compat {
        author = "Wilhelm Haas";
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"ace_tracers","WW2_Assets_c_Vehicles_Weapons_c","WW2_Assets_c_Weapons_InfantryWeapons_c"};
    };
 };

class cfgAmmo {

/*
    // 30mm or smaller
        model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
        model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
        model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
        model = "\z\ace\addons\tracers\ace_TracerWhite2.p3d"; //coming soon (TM) in ACE3 v3.13.0... I hope...

    // bigger than 30mm
        model = "\z\ace\addons\tracers\ace_shell_tracer_red.p3d";
        model = "\z\ace\addons\tracers\ace_shell_tracer_green.p3d";
        model = "\z\ace\addons\tracers\ace_shell_tracer_yellow.p3d";
        model = "\z\ace\addons\tracers\ace_shell_tracer_white.p3d"; //coming soon (TM) in ACE3 v3.13.0... I hope...
*/

    class BulletBase;
    class ShellBase;
    class SubmunitionBullet;

    class B_45ACP_Ball;
    class B_9x21_Ball;
    class B_762x51_Ball;
    class Sh_155mm_AMOS;
    class ShellBase;

    #include "LIB_Ammo.h"

};
