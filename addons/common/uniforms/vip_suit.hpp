class CLASS(Suit_VIP): CLASS(Uniform_Base) {
    scope = 2;
    author = "Pomigit, Jonpas";
    displayName = "Suit_VIP";
    picture = QPATHTOF(ui\suit_vip.paa);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vip_01_co.paa)
    };

    class ItemInfo: ItemInfo {
        containerClass = "Supply10";
        mass = 20;
        uniformClass = QCLASS(Uniform_I_VIP);
    };
};
