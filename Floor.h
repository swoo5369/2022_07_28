#pragma once
#include "Actor.h"

class Floor : public Actor
{
public:
	Floor() 
	{
		Shape = ' ';
	}
	virtual ~Floor() {}
};

