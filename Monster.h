#pragma once
#include "Actor.h"

class Monster : public Actor
{
public:
	Monster()
	{
		SortOrder = 4;
		bCollisionEnabled = false;
	}
	Monster(int NewX, int NewY)
	{
		Shape = 'M';
		SortOrder = 4;
		bCollisionEnabled = false;

		Location.X = NewX;
		Location.Y = NewY;
	}
	virtual ~Monster() {}
};

