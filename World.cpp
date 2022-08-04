#include "World.h"
#include <algorithm>


void World::SpawnActor(Actor* NewActor)
{
	ActorList.push_back(NewActor);
}

std::vector<Actor*>::iterator World::DestroyActor(Actor* DeletedActor)
{
	return ActorList.erase(find(ActorList.begin(),
		ActorList.end(), DeletedActor));
}
