#include <iostream>
#include <cstdio>
#include "structure.h"

using namespace std;

void events_1931()
{
    setlocale(LC_CTYPE, "Russian");

    srand((unsigned)time(NULL));
    int incident = rand() % 2 + 1;
    int choice;

    int karma_points;
    /* Это обязательная переменная! Ее значение (от -3 до 3),
    должно быть указано после каждого case! Она занимается
    начисление очков за каждое выбранное действие игроком.*/

    int enemy_max_damage;
    int enemy_protection;
    int enemy_health;

    // Пример события #1:
    if (incident == 1)
    {
        cout << "Рабочий Майкл: Мэр, в баре «Устрица Джо» поднимают цену на выпивку! Решите этот вопрос!" << endl;
        cout << "1 - Конечно, я пришлю ребят и они накостылять Джо." << endl;
        cout << "2 - Иди отсюда, пьянь!" << endl;
        cout << "3 - Достать револьвер и выстрелить в жалобщика." << endl;

        cout << "-> "; cin >> choice; // Пожалуйста, при вводе значений в переменную, соблюдайте такой стиль.

        switch (choice)
        {
        case 1:
        {
            cout << "Рабочий Майкл: Спасибо вам, мэр! Мы добудем для вас больше угля! Слава меру!" << endl;
            karma_points = 3; // Начисляем 3 очка за выбор.
            game_points(karma_points); // Передаем 3 очка в функцию по расчету очков.
            break;
        }
        case 2:
        {
            int possible_fight = rand() % 10; //В данном варианте ответа, есть две развилки с различными событиями.
            if (possible_fight < 6)
            {
                cout << "Рабочий Майкл: Ах ты гнида! Иди сюда, мерзавец!" << endl;
                cout << "На вас напали!" << endl;

                enemy_max_damage = 13;
                enemy_protection = 21;
                enemy_health = 100;
                fight(enemy_max_damage, enemy_protection, enemy_health); // Передача выполнения функции "Драка"

                break;
            }
            else
            {
                cout << "Рабочий Майкл: Я понял вас... Уже ухожу.";
                karma_points = 1;
                game_points(karma_points);
                break;
            }
        }
        default:
        {
            cout << "Вы убили жалобщика." << endl;
            karma_points = -3;
            game_points(karma_points);
            break;
        }

        }
    }

    if (incident == 2)
    {
        cout << "Шериф: Мэр, в центре города корова застряла в фонтане. Люди паникуют!" << endl;
        cout << "1 - Приказать шерифу вызвать пожарных." << endl;
        cout << "2 - Объявить корову символом города." << endl;
        cout << "3 - Притвориться, что ничего не слышали, и закрыть дверь." << endl;

        cout << "-> "; cin >> choice;

        switch (choice)
        {

        case 1:
        {
            cout << "Пожарные спасли корову, но сломали фонтан. Теперь жители требуют новый." << endl;
            karma_points = 2;
            game_points(karma_points);
            break;
        }

        case 2:
        {
            cout << "Вы объявили корову символом города. Её теперь кормят лучше, чем вас." << endl;
            karma_points = 1;
            game_points(karma_points);
            break;
        }

        default:
        {
            cout << "Вы закрыли дверь, но корова так и осталась в фонтане." << endl;
            karma_points = -2;
            game_points(karma_points);
            break;
        }

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