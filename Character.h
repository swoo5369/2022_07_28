#pragma once
#include "Position.h"

class Character : public Position
{
public:
	Character();
	virtual ~Character();

	int HP = 0;
	int Gold = 0;

	virtual void Move();
	virtual void Attack();
};

