/*

This file will be generated automatically by the NeatEngine editor.

*/
#ifndef NEAT_DEFINITIONS_H
#define NEAT_DEFINITIONS_H
#include "Neat/Scenes.h"
#include "Neat/Actors.h"
#include <iostream>

class MainMenu : public Neat::Scenes::Scene {
public:
	std::string Title = "MainMenu";
	std::vector<Neat::Actors::Actor> Actors;
	void Start();
	void Update();
};


#endif