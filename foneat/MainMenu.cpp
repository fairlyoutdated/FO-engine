#include "Definitions.h"
#include <raylib.h>
#include <iostream>

void MainMenu::Start()
{
	std::cout << "Player arrives at : " + Title + "\n";

}

void MainMenu::Update() {
	DrawText("Welcome to NEAT Engine", 0, 0, 20, WHITE);
	if (IsKeyPressed(KEY_SPACE)) exit(0);
	DrawFPS(60, 60);
}