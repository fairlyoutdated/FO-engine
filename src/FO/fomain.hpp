#pragma once
#include <iostream>
#include "foclasses.hpp"
namespace FairlyOutdated{
    namespace Engine{
        void FO_init(std::string gamename, int FPS, bool fun = false);
        void FO_renderScene(Scene scene);
        
    }
}