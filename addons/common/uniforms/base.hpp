class Uniform_Base;

// Underwear
class U_BasicBody: Uniform_Base {
    class ItemInfo;
};

// Uniforms
class UniformItem;
class CLASS(Uniform_Base): Uniform_Base {
    dlc = QUOTE(PREFIX);
    scope = 0;
    model = "\a3\characters_f\common\suitpacks\suitpack_blufor_diver";

    class ItemInfo: UniformItem {
        uniformModel = "-";
        containerClass = "Supply50";
        mass = 40;
    };
};