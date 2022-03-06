#include <raylib.h>
#include "RenderAgent.h"
#include "Scenes.h"
#include "Actors.h"


void Neat::Rendering::RenderAgent::Render(Neat::Scenes::Scene * scene)
{
	ClearBackground(Sky.background);
	scene->Update();
	for (int i = 0; i < scene->Actors.size(); i++) {
		scene->Actors.at(i).Update();
	}

}