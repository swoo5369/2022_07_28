#pragma once
#include "Vector2D.h"

class Actor
{
public:
	Actor() : Shape(' ')
	{
	}
	virtual ~Actor() {}

	Vector2D Location;

	char Shape;

	//virtual void Render() = 0;// 순수가상함수 자식이 무조건 구현해야함
	virtual void Render();
};

