#include <iostream>
#include "structure.h"

using namespace std;

void event_selection()
{
	int rmn = 1, rmx = 4;
	const int MAX = 25;
	int Game_Event[MAX];
	int choice;

	srand((unsigned)time(NULL)); //генерируем случайные числа от 1 до 25 и заполняем ими массив - события в игре, что произойдут.
	for (int i = 0; i < MAX; ++i)
	{
		Game_Event[i] = rand() % rmx + rmn;
		cout << Game_Event[i] << " ";
	}
	cout << "\n"; // для быстрого контроля

	for (int i = 0; i < MAX; ++i)
	{
		choice = Game_Event[i];

		switch (choice)
		{
		case 1:
			events_1931();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			break;
		}
	}

	cout << "Спасибо за игру!\n";
}