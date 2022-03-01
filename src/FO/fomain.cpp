#include "fomain.hpp"
#include <raylib.h>
void FairlyOutdated::Engine::FO_main(std::string gamename, int FPS, bool fun = false;){
    InitWindow(1280, 720, gamename.c_str());
    SetTargetFPS(FPS);
    switch(fun){
        case false: 
            std::cout << "FairlyOutdated Engine initialized!\n";
            break;
        case true:
            std::cout << "the shit is init\n";
    }

}