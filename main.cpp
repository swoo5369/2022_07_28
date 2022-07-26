#include <iostream>
#include <vector>
#include "Player.h"
#include "Monster.h"
#include "Goal.h"
#include "Input.h"
#include "Process.h"

using namespace std;

int main()
{

	while (true)
	{
		int KeyCode = Input();
		Process(Input);
	}


	return 0;
}