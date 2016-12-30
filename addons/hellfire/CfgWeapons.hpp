class CfgWeapons {
    class missiles_DAGR;
    class GVAR(launcher): missiles_DAGR {
        displayName = CSTRING(Hellfire);
        GVAR(enabled) = 1; // show attack profile / lock on hud
        EGVAR(laser,canSelect) = 1; // can ace_laser lock (allows switching laser code)
        canLock = 0;
        magazines[] = {"6Rnd_ACE_Hellfire_AGM114K", "12Rnd_ACE_Hellfire_AGM114K", "24Rnd_ACE_Hellfire_AGM114K"};
        lockingTargetSound[] = {"",0,1};
        lockedTargetSound[] = {"",0,1};
    };
};