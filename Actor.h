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

	//virtual void Render() = 0;// ���������Լ� �ڽ��� ������ �����ؾ���
	virtual void Render();
};

