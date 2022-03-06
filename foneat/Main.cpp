#include "Neat/Neat.h"
#include "Neat/RenderAgent.h"
#include "Definitions.h"
#include "Neat/Scenes.h"
#include <raylib.h>

MainMenu mainmenu;

int main() {
	
	Neat::System::Context Game;
	Game.Title = "Example Project";
	Game.TargetFPS = 60;
	Game.InitContext(1280, 720);
	Neat::Rendering::Skybox defsky;
	defsky.background = BLACK;
	Neat::Rendering::RenderAgent Agent;
	Agent.Sky = defsky;
	while(!WindowShouldClose()){
		BeginDrawing();
		Agent.Render(&mainmenu);
		EndDrawing();
	}
	CloseWindow();
}