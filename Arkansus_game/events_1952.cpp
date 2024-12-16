#include <iostream>
#include "structure.h"

using namespace std;

void events_1952()
{
    setlocale(LC_CTYPE, "Russian");

    srand((unsigned)time(NULL));
    int incident = rand() % 6 + 1; // Два инцидента
    int choice;

    int karma_points;

    // Пример события: Проблемы с водой
    if (incident == 1)
    {
        cout << "Житель: Мэр, в городе проблемы с водоснабжением! Люди недовольны!" << endl;
        cout << "1 - Провести расследование и выяснить причины." << endl;
        cout << "2 - Объявить о временном прекращении поставок." << endl;
        cout << "3 - Игнорировать проблему." << endl;

        cout << "-> "; cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Вы провели расследование и выяснили, что трубы нужно заменить!" << endl;
            karma_points = 3; // Начисляем 3 очка за выбор.
            game_points(karma_points);
            break;
        case 2:
            cout << "Вы объявили о прекращении поставок. Люди в ярости!" << endl;
            karma_points = -2; // Уменьшаем карму.
            game_points(karma_points);
            break;
        default:
            cout << "Вы проигнорировали проблему, и она только усугубилась." << endl;
            karma_points = -3;
            game_points(karma_points);
            break;
        }
    }

    if (incident == 2)
    {
        cout << "Инженер: Мэр, у нас проблемы с очистительными сооружениями!" << endl;
        cout << "1 - Увеличить бюджет на ремонт." << endl;
        cout << "2 - Нанять подрядчиков." << endl;
        cout << "3 - Игнорировать и надеяться на лучшее." << endl;

        cout << "-> "; cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Вы увеличили бюджет, и вскоре проблемы были решены!" << endl;
            karma_points = 3;
            game_points(karma_points);
            break;
        case 2:
            cout << "Подрядчики задерживаются, и ситуация только ухудшается." << endl;
            karma_points = -1;
            game_points(karma_points);
            break;
        default:
            cout << "Вы проигнорировали проблему, и жители начали протестовать." << endl;
            karma_points = -3;
            game_points(karma_points);
            break;
        }
    }
}