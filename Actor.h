#pragma once
#include "Vector2D.h"

class Actor
{
public:
	Actor() : Shape(' ')
	{
	}
	Actor(int NewX, int NewY) : Shape(' ')
	{
		Location.X = NewX;
		Location.Y = NewY;
	}
	virtual ~Actor() {}

	Vector2D Location;

	char Shape;

	//virtual void Render() = 0;// 순수가상함수 자식이 무조건 구현해야함
	virtual void Tick();
	virtual void Render();

	int SortOrder = 0;

	bool bCollisionEnabled = true;

};

