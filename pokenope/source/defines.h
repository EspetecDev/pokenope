
// System
#include <iostream>

// ImGui
#include "imgui/imgui.h"
#include "imgui/imgui-SFML.h"

// JSON
#include "nlohmann_json/json.hpp"
#include <fstream>
using json = nlohmann::json;


namespace Utils
{
	struct Config
	{
		// Window
		int WindowHeight;
		int WindowWidth;
		std::string WindowName;

		void ReadConfig()
		{
			std::ifstream F("config/config.json");
			json Config = json::parse(F);
			WindowHeight = Config["windowHeight"];
			WindowWidth = Config["windowWidth"];
			WindowName = Config["windowName"];
		}
	};

}
