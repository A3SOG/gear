// VIP
class Civilian_F;
class CLASS(Uniform_I_VIP): Civilian_F {
    dlc = QUOTE(PREFIX);
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 0;
    side = 2;
    faction = "IND_F";
    author = "Pomigit, Jonpas";
    displayname = "Suit_VIP";
    editorPreview = QPATHTOF(ui\Unit_VIP.jpg);
    model = QPATHTOF(data\vip.p3d);
    modelSides[] = {6};
    uniformClass = QCLASS(Suit_VIP);

    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    items[] = {};
    respawnItems[] = {};
    linkedItems[] = {};
    respawnLinkedItems[] = {};

    class Wounds {
        tex[] = {};
        mat[] = {
            QPATHTOR(data\vip.rvmat),
            QPATHTOR(data\w1_vip.rvmat),
            QPATHTOR(data\w2_vip.rvmat)
        };
    };
};