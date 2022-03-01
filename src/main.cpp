#include "FO/fomain.hpp"
#include <stdio.h>

int main(){
	#if defined(GAMENAME)
	FairlyOutdated::Engine::FO_Init(GAMENAME, 60);
	#else
	#error Compiler directive GAMENAME is empty. Please refer to the build instruction file(eg.: build.bat) and define that constant
	#endif
	return 0;
}
