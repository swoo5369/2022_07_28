#include <iostream>
#include <vector>
#include "Player.h"
#include "Monster.h"
#include "Gate.h"
#include "World.h"


using namespace std;

int main()
{
	World* MyWorld = new World();

	MyWorld->SpawnActor(new Player());
	MyWorld->SpawnActor(new Monster());

	//range for
	for (Actor* MyActor : MyWorld->ActorList)
	{
		MyActor->Render();
	}
	//for (int i = 0; i < MyWorld->ActorList.size(); ++i)
	//{
	//	MyWorld->ActorList[i]->Render();
	//}

	delete MyWorld;

	return 0;
}