#include <iostream>
#include <vector>
#include "Player.h"
#include "Monster.h"
#include "Goal.h"
#include "Input.h"
#include "Process.h"
#include "Draw.h"

using namespace std;

int main()
{

	while (true)
	{
		int KeyCode = Input();
		Process(KeyCode);
		Draw();
	}


	return 0;
}