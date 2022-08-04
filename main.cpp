#include "Engine.h"
#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
	/*int Numbers[10] = { 10, 9, 5, 2, 4, 1, 3, 6, 8, 7 };*/
	/*int temp = 0;

	for (int i = 0; i < 10; ++i)
	{
		for (int j = i; j < 10; ++j)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}*/
	/*std::sort(&Numbers[0], &Numbers[10]);

	for (int k = 0; k < 10; ++k)
	{
		std::cout << Numbers[k] << " ";
	}*/

	Engine* MyEngine = Engine::GetInstance();

	MyEngine->LoadMap("level1.txt");
	MyEngine->Run();

	delete MyEngine;

	return 0;
}