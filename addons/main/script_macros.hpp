// #include "\x\cba\addons\main\script_macros_common.hpp" // Included in ACE3's "script_macros.hpp"
#include "\z\ace\addons\main\script_macros.hpp"

#include "\a3\ui_f\hpp\defineDIKCodes.inc"
#include "\a3\ui_f\hpp\defineCommonGrids.inc"

// #define DFUNC(var1) TRIPLES(ADDON,fnc,var1)

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

// Path
#define PATHTOR_SYS(var1,var2,var3) MAINPREFIX\var1\SUBPREFIX\var2\var3
#define PATHTOR(var1) PATHTOR_SYS(PREFIX,COMPONENT,var1)
#define PATHTOER(var1,var2) PATHTOR_SYS(PREFIX,var1,var2)
#define QPATHTOR(var1) QUOTE(PATHTOR(var1))
#define QPATHTOER(var1,var2) QUOTE(PATHTOER(var1,var2))

// Class
#define CLASS(var1) DOUBLES(PREFIX,var1)
#define QCLASS(var1) QUOTE(DOUBLES(PREFIX,var1))

// Equipment
#define MACRO_ADDMAG(MAG,COUNT) class _xx_##MAG { \
    magazine = #MAG; \
    count = COUNT; \
}
#define MACRO_ADDWEAP(WEAP,COUNT) class _xx_##WEAP { \
    weapon = #WEAP; \
    count = COUNT; \
}
// #define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
//     name = #ITEM; \
//     count = COUNT; \
// }

// Inventory
#define ITEM_2(ITEM) ITEM,ITEM
#define ITEM_3(ITEM) ITEM,ITEM,ITEM
#define ITEM_4(ITEM) ITEM,ITEM,ITEM,ITEM
#define ITEM_5(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM
#define ITEM_6(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM
#define ITEM_7(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM
#define ITEM_8(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM

// Magazines
#define MAG_2(MAG) MAG,MAG
#define MAG_3(MAG) MAG,MAG,MAG
#define MAG_4(MAG) MAG,MAG,MAG,MAG
#define MAG_5(MAG) MAG,MAG,MAG,MAG,MAG
#define MAG_6(MAG) MAG,MAG,MAG,MAG,MAG,MAG
#define MAG_7(MAG) MAG,MAG,MAG,MAG,MAG,MAG,MAG
#define MAG_8(MAG) MAG,MAG,MAG,MAG,MAG,MAG,MAG,MAG