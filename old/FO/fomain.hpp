#pragma once
#include <iostream>
#include <vector>
#include <raylib.h>

namespace FairlyOutdated{
    namespace Engine{
        // using namespace Engine;
        
        typedef enum { zero, one, two, three, four } DimensionType;


class Actor{
public:
	DimensionType dimension;
    Vector4 position;
    virtual void start() = 0;
	virtual void update() = 0;
};

typedef enum { text, button, random } UIElementType;


class UIElement{
public:
    UIElementType type;
    std::string textValue;
    int posx, posy, textsize;
    int red, green, blue, alpha;
    bool active;
    void update(); // Automatically refers to a type's update method, even 'random', in which case it calls customupdate();
    virtual void customupdate() = 0;
};

class Scene{
public:
	std::vector<Actor*> objectlist;
    virtual void update() = 0;
	/*void ImportFromSceneFile(std::string path);*/ // Will be used in the future to load a scene from a .FOSCENE file.
};
    void FO_init(std::string gamename, int FPS, bool fun = false);
        void FO_renderScene(Scene * scene);
    }
}