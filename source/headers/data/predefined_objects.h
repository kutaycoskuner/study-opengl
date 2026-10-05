#pragma once

#include "../abstract/light.h"
#include "../abstract/material.h"
#include "node_data.h"

#include <vector>
#include <map>
#include <string>



// ----------------------------------------------------------------------------
//				forward declarations
// ----------------------------------------------------------------------------


// ----------------------------------------------------------------------------
//				abstract
// ----------------------------------------------------------------------------

class StaticLights
{
public:
	static std::vector<DirectionalLight> predef_dlights;
};


class PredefNameMaps
{
public:
	static std::map<std::string, Predef3DNode> predef3d_namemap;
};


class PredefSceneLights
{
public:
	static DirectionalLight d_light;
	static PointLight p_light;
	static SpotLight s_light;
};


class PredefMaterial
{
public:
	static const Material EMERALD;
	static const Material JADE;
	static const Material OBSIDIAN;
	static const Material PEARL;
	static const Material RUBY;
	static const Material TURQUOISE;
	static const Material BRASS;
	static const Material BRONZE;
	static const Material CHROME;
	static const Material COPPER;
	static const Material GOLD;
	static const Material SILVER;
	static const Material BLACK_PLASTIC;
	static const Material CYAN_PLASTIC;
	static const Material GREEN_PLASTIC;
	static const Material RED_PLASTIC;
	static const Material WHITE_PLASTIC;
	static const Material YELLOW_PLASTIC;
	static const Material BLACK_PLASTIC;
	static const Material CYAN_RUBBER;
	static const Material GREEN_RUBBER;
	static const Material RED_RUBBER;
	static const Material WHITE_RUBBER;
	static const Material YELLOW_RUBBER;
};
