#include "Neat.h"
#include <raylib.h>

void Neat::System::Context::InitContext(int ScreenWidth, int ScreenHeight, bool NeatSplash, bool RaySplash)
{

	InitWindow(ScreenWidth, ScreenHeight, Title.c_str());
	SetTargetFPS(TargetFPS);
	
	/* This function is a stub. */
}