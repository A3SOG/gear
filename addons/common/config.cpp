#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"Item_Suit_VIP"};
        weapons[] = {"Suit_VIP"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"sog_gear_main"};
        authors[] = {"J. Schmidt", "Creedcoder"}; // sub array of authors, considered for the specific addon
        author = "SOG"; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};

// configs go here
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"