#include "fomain.hpp"
#include <raylib.h>
#include <stdio.h>

namespace FairlyOutdated{
namespace Engine{
void FO_init(std::string gamename, int FPS, bool fun = false){
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

void FO_renderScene(FairlyOutdated::Engine::Scene scene){
    for(int i = 0; i < scene.objectlist.size(); i++){
        for(int j = 0; j < scene.objectlist.at(i).components.size(); j++){
            scene.objectlist.at(i).components.at(j).update();
        }
    }
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