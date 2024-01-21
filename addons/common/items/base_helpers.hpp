// Uniforms
#define MACRO_BASE_CLASS_COMMON \
    dlc = QUOTE(PREFIX); \
    scope = 0; \
    side = 2; \
    faction = "BLU_F"; \
    weapons[] = {"Throw", "Put"}; \
    respawnWeapons[] = {"Throw", "Put"}; \
    magazines[] = {}; \
    respawnMagazines[] = {}; \
    items[] = {"FirstAidKit"}; \
    respawnItems[] = {"FirstAidKit"}; \
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; \
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; \
    modelSides[] = {6}; \
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"}; \
    class EventHandlers;