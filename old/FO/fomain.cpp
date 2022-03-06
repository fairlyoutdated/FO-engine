#include "fomain.hpp"
#include <raylib.h>
#include <stdio.h>
#include <stdlib.h>

namespace FairlyOutdated{
namespace Engine{
void FO_init(std::string gamename, int FPS, bool fun = false){
    InitWindow(1280, 720, gamename.c_str());
    SetTargetFPS(FPS);
    std::cout << "FairlyOutdated Engine initialized!\n";
}

void FO_renderScene(FairlyOutdated::Engine::Scene * scene){
    printf("RenderStart\n");
    for(int i = 0; i < scene->objectlist.size(); i++){
        scene->objectlist.at(i)->update();
    }
    scene->update();
    printf("RenderEnd\n");
}

void UIElement::update(){
    switch(type){
        case FairlyOutdated::Engine::UIElementType::text:
            DrawText(textValue.c_str(), posx, posy, textsize, {red, green, blue, alpha});
            break;
        case FairlyOutdated::Engine::UIElementType::button:
            printf("FAIRLYOUTDATED ENGINE: Buttons are currently unusable.\n");
            break;
    }
}
}
}