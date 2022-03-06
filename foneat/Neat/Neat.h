#ifndef NEAT_NEAT_H
#define NEAT_NEAT_H
#include "Actors.h"
#include "RenderAgent.h"
#include "Scenes.h"

#include <iostream>
namespace Neat {
	namespace System {
		class Context {
		public:
			std::string Title;
			int TargetFPS;
			void InitContext(int ScreenWidth, int ScreenHeight, bool NeatSplash = true, bool RaySplash = true);
		};
	}
}


#endif