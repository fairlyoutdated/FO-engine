#ifndef NEAT_RENDERAGENT_H
#define NEAT_RENDERAGENT_H

#include <raylib.h>
#include "Scenes.h"
#include "Actors.h"

namespace Neat {
	namespace Rendering {
		class Skybox {
		public:
			Color background;
			/*this class is a stub, it'll be expanded in the future*/
		};
		class RenderAgent{
		public:
			Skybox Sky;
			void Render(Neat::Scenes::Scene * scene);
		};
	}
}

#endif