#include "FO/fomain.hpp"
#include <stdio.h>
#include <raylib.h>
#include <algorithm>
#include <iterator>
class TestActor : public FairlyOutdated::Engine::Actor{
	public:
	FairlyOutdated::Engine::DimensionType dimension;
    Vector4 position;
    void start();
	void update();
};

void TestActor::start(){

}

void TestActor::update(){
	printf("TestActor Update\n");
}

class TestScene : public FairlyOutdated::Engine::Scene{
	public:
	std::vector<FairlyOutdated::Engine::Actor*> objectlist;
    void update();
};

void TestScene::update(){
	printf("TestScene Update\n");
}

int main(){
	FairlyOutdated::Engine::FO_init("FairlyOutdated Engine", 60);
	TestActor * testactor;
	testactor = {FairlyOutdated::Engine::three, {0,0,0,0}};
	printf("Declared 'testactor'\n");
	TestActor * testactor2;
	printf("Declared 'testactor2'\n");
	printf("can anything happen after?\n");
	//testactor->dimension = FairlyOutdated::Engine::three;
	//printf("Declared 'testactor''s dimension\n");
	testactor.position = {0,0,0,0};
	printf("Declared 'testactor''s position\n");
	//testactor2->dimension = FairlyOutdated::Engine::three;
	//printf("Declared 'testactor2''dimension\n");
	testactor2.position = {0,0,0,0};
	printf("Declared 'testactor2''s position\n");
	std::vector<FairlyOutdated::Engine::Actor*> testobjlist;
	printf("Declared 'testobjlist'\n");
	testobjlist.push_back(testactor);
	printf("Pushed back 'testactor' in 'testobjlist'\n");
	testobjlist.push_back(testactor2);
	printf("Pushed back 'testactor2' in 'testobjlist'\n");
	TestScene * testscene;
	printf("Declared 'testscene'\n");
	
	testscene->objectlist.assign(testobjlist.begin(), testobjlist.end());
	printf("Assigned scene 'testscene''s object list to 'testobjlist'\n");
	
	printf("Initialized engine.\n");
	printf("Start of loop\n");
	while(true){
		//printf("test\n");
		FairlyOutdated::Engine::FO_renderScene(testscene);
	}

	printf("EOF\n");
	return 0;
}
