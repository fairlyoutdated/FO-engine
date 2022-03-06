#ifndef NEAT_ACTORS_H
#define NEAT_ACTORS_H
#include <iostream>

namespace Neat {
	namespace Actors {
		class Actor {
		public:
			std::string ActorName;
			virtual void Start() = 0;
			virtual void Update() = 0;
		};
	}
}

#endif