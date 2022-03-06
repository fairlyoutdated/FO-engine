#ifndef NEAT_CRASH_H
#define NEAT_CRASH_H

#define NEAT_ERROR_SCENE_NULLPTR = 1

namespace Neat {
	namespace Crash {
		void CrashUpdate(int ErrorCode, std::string MoreInfo);
	}
}

#endif