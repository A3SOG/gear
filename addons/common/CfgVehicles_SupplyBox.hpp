class B_supplyCrate_F;
class CLASS(Box_Uniforms): B_supplyCrate_F {
    dlc = QUOTE(PREFIX);
    scope = 2;
	author = "SOG"; // primary author name, either yours or your team's, considered for the whole mod
    displayName = "Box_Uniforms";

    transportMaxWeapons = 9001;
    transportMaxMagazines = 9001;
    transportMaxItems = 9001;
    maximumload = 9001;

    class TransportWeapons {};
    class TransportMagazines {};

    class TransportItems {
        MACRO_ADDITEM(CLASS(Suit_VIP),10);
    };

    class TransportBackpacks {};
};