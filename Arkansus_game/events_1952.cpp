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
    if (incident == 3) {
        cout << "Рабочий: Мэр, на фабрике произошел пожар! Что делать?" << endl;
        cout << "1 - Отправить пожарных на место." << endl;
        cout << "2 - Игнорировать, это не наша проблема." << endl;
        cout << "3 - Попробовать потушить огонь самостоятельно." << endl;

        int choice;
        cout << "-> "; cin >> choice;

        int karma_points;
        switch (choice)
        {
        case 1:
            cout << "Пожарные быстро справились с пожаром!" << endl;
            karma_points = 3;
            game_points(karma_points);
            break;
        case 2:
            cout << "Игнорирование привело к большому ущербу." << endl;
            karma_points = -3;
            game_points(karma_points);
            break;
        case 3:
        {
            int success_chance = rand() % 10; // Шанс успеха
            if (success_chance < 5)
            {
                cout << "Вам удалось потушить огонь, но вы получили травму." << endl;
                karma_points = 1;
            }
            else
            {
                cout << "Вы не смогли справиться, пожар только усилился!" << endl;
                karma_points = -2;
            }
            game_points(karma_points);
            break;
        }
        }
    }
    if (incident == 4) {
        cout << "Житель: Мэр, в городе бушует голод!" << endl;
        cout << "1 - Организовать раздачу еды." << endl;
        cout << "2 - Игнорировать, жители справятся." << endl;
        cout << "3 - Объявить о необходимости экономить продукты." << endl;

        int choice;
        cout << "-> "; cin >> choice;

        int karma_points;
        switch (choice)
        {
        case 1:
            cout << "Раздача еды помогла многим жителям!" << endl;
            karma_points = 3;
            game_points(karma_points);
            break;
        case 2:
            cout << "Игнорирование проблемы привело к бунту." << endl;
            karma_points = -3;
            game_points(karma_points);
            break;
        case 3:
        {
            int response_chance = rand() % 10; // Шанс позитивной реакции
            if (response_chance < 5)
            {
                cout << "Жители оценили ваш жест, но голод все еще остается." << endl;
                karma_points = 1;
            }
            else
            {
                cout << "Жители недовольны и требуют действий!" << endl;
                karma_points = -2;
            }
            game_points(karma_points);
            break;
        }
        }
    }
    if (incident == 5) {
        cout << "Инженер: Мэр, мы можем ввести новые технологии для улучшения жизни в городе!" << endl;
        cout << "1 - Инвестировать в новые технологии." << endl;
        cout << "2 - Отклонить предложение." << endl;
        cout << "3 - Попросить жителей проголосовать." << endl;

        int choice;
        cout << "-> "; cin >> choice;

        int karma_points;
        switch (choice)
        {
        case 1:
            cout << "Инвестиции принесли плоды, город стал более современным!" << endl;
            karma_points = 3;
            game_points(karma_points);
            // Переход к побочному событию "Обсуждение технологий"
            technology_discussion_event();
            break;
        case 2:
            cout << "Отклонение предложения привело к недовольству среди инженеров." << endl;
            karma_points = -2;
            game_points(karma_points);
            break;
        case 3:
        {
            int vote_chance = rand() % 10; // Шанс положительного голосования
            if (vote_chance < 5)
            {
                cout << "Жители проголосовали за внедрение технологий!" << endl;
                karma_points = 2;
            }
            else
            {
                cout << "Большинство жителей против внедрения технологий." << endl;
                karma_points = -1;
            }
            game_points(karma_points);
            break;
        }
        }
    }
    if (incident == 6) {
        cout << "Полицейский: Мэр, в городе наблюдается рост криминальной активности!" << endl;
        cout << "1 - Увеличить финансирование полиции." << endl;
        cout << "2 - Игнорировать, это не наша проблема." << endl;
        cout << "3 - Объявить о введении комендантского часа." << endl;

        int choice;
        cout << "-> "; cin >> choice;

        int karma_points;
        switch (choice)
        {
        case 1:
            cout << "Финансирование полиции помогло снизить уровень преступности!" << endl;
            karma_points = 3;
            game_points(karma_points);
            // Переход к побочному событию "Увеличение патрулей"
            increase_police_patrols_event();
            break;
        case 2:
            cout << "Игнорирование проблемы привело к росту недовольства среди жителей." << endl;
            karma_points = -3;
            game_points(karma_points);
            break;
        case 3:
        {
            int backlash_chance = rand() % 10; // Шанс негативной реакции
            if (backlash_chance < 5)
            {
                cout << "Комендантский час вызвал протесты среди жителей!" << endl;
                karma_points = -2;
            }
            else
            {
                cout << "Жители согласились на комендантский час ради безопасности." << endl;
                karma_points = 2;
            }
            game_points(karma_points);
            break;
        }
        }
    }
}




