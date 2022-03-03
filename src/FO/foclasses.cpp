#include "foclasses.hpp"
#include <raylib.h>
#include <stdio.h>
/*

THIS IS FOR NON-NETWORKING CLASSES ONLY! CHECK FOCLASSES_NET.CPP FOR NETWORKING!

*/



void FairlyOutdated::Engine::UIElement::update(UIElement* element){
    switch(type){
        case FairlyOutdated::Engine::UIElementType::text:
            DrawText(textValue.c_str(), posx, posy, textsize, {red, green, blue, alpha});
            break;
        case FairlyOutdated::Engine::UIElementType::button:
            printf("FAIRLYOUTDATED ENGINE: Buttons are currently unusable.\n");
            break;
        case FairlyOutdated::Engine::UIElementType::random:
            element->customupdate();
            break;
    }
}