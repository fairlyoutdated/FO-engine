#ifndef NEAT_SCENES_H
#define NEAT_SCENES_H
#include <iostream>
#include <vector>
#include "Actors.h"

namespace Neat {
	namespace Scenes {
		class Scene {
		public:
			std::string SceneName;
			std::vector<Neat::Actors::Actor> Actors;
			virtual void Start() = 0;
			virtual void Update() = 0;
		};
	}
}

#endif