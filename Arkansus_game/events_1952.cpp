#include <iostream>
#include "structure.h"

using namespace std;

void events_1952()
{
    setlocale(LC_CTYPE, "Russian");

    srand((unsigned)time(NULL));
    int incident = rand() % 6 + 1; // ��� ���������
    int choice;

    int karma_points;

    // ������ �������: �������� � �����
    if (incident == 1)
    {
        cout << "������: ���, � ������ �������� � ��������������! ���� ����������!" << endl;
        cout << "1 - �������� ������������� � �������� �������." << endl;
        cout << "2 - �������� � ��������� ����������� ��������." << endl;
        cout << "3 - ������������ ��������." << endl;

        cout << "-> "; cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "�� ������� ������������� � ��������, ��� ����� ����� ��������!" << endl;
            karma_points = 3; // ��������� 3 ���� �� �����.
            game_points(karma_points);
            break;
        case 2:
            cout << "�� �������� � ����������� ��������. ���� � ������!" << endl;
            karma_points = -2; // ��������� �����.
            game_points(karma_points);
            break;
        default:
            cout << "�� ��������������� ��������, � ��� ������ �����������." << endl;
            karma_points = -3;
            game_points(karma_points);
            break;
        }
    }

    if (incident == 2)
    {
        cout << "�������: ���, � ��� �������� � �������������� ������������!" << endl;
        cout << "1 - ��������� ������ �� ������." << endl;
        cout << "2 - ������ �����������." << endl;
        cout << "3 - ������������ � ��������� �� ������." << endl;

        cout << "-> "; cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "�� ��������� ������, � ������ �������� ���� ������!" << endl;
            karma_points = 3;
            game_points(karma_points);
            break;
        case 2:
            cout << "���������� �������������, � �������� ������ ����������." << endl;
            karma_points = -1;
            game_points(karma_points);
            break;
        default:
            cout << "�� ��������������� ��������, � ������ ������ ������������." << endl;
            karma_points = -3;
            game_points(karma_points);
            break;
        }
    }
    if (incident == 3) {
        cout << "�������: ���, �� ������� ��������� �����! ��� ������?" << endl;
        cout << "1 - ��������� �������� �� �����." << endl;
        cout << "2 - ������������, ��� �� ���� ��������." << endl;
        cout << "3 - ����������� �������� ����� ��������������." << endl;

        int choice;
        cout << "-> "; cin >> choice;

        int karma_points;
        switch (choice)
        {
        case 1:
            cout << "�������� ������ ���������� � �������!" << endl;
            karma_points = 3;
            game_points(karma_points);
            break;
        case 2:
            cout << "������������� ������� � �������� ������." << endl;
            karma_points = -3;
            game_points(karma_points);
            break;
        case 3:
        {
            int success_chance = rand() % 10; // ���� ������
            if (success_chance < 5)
            {
                cout << "��� ������� �������� �����, �� �� �������� ������." << endl;
                karma_points = 1;
            }
            else
            {
                cout << "�� �� ������ ����������, ����� ������ ��������!" << endl;
                karma_points = -2;
            }
            game_points(karma_points);
            break;
        }
        }
    }
    if (incident == 4) {
        cout << "������: ���, � ������ ������ �����!" << endl;
        cout << "1 - ������������ ������� ���." << endl;
        cout << "2 - ������������, ������ ���������." << endl;
        cout << "3 - �������� � ������������� ��������� ��������." << endl;

        int choice;
        cout << "-> "; cin >> choice;

        int karma_points;
        switch (choice)
        {
        case 1:
            cout << "������� ��� ������� ������ �������!" << endl;
            karma_points = 3;
            game_points(karma_points);
            break;
        case 2:
            cout << "������������� �������� ������� � �����." << endl;
            karma_points = -3;
            game_points(karma_points);
            break;
        case 3:
        {
            int response_chance = rand() % 10; // ���� ���������� �������
            if (response_chance < 5)
            {
                cout << "������ ������� ��� ����, �� ����� ��� ��� ��������." << endl;
                karma_points = 1;
            }
            else
            {
                cout << "������ ���������� � ������� ��������!" << endl;
                karma_points = -2;
            }
            game_points(karma_points);
            break;
        }
        }
    }
    if (incident == 5) {
        cout << "�������: ���, �� ����� ������ ����� ���������� ��� ��������� ����� � ������!" << endl;
        cout << "1 - ������������� � ����� ����������." << endl;
        cout << "2 - ��������� �����������." << endl;
        cout << "3 - ��������� ������� �������������." << endl;

        int choice;
        cout << "-> "; cin >> choice;

        int karma_points;
        switch (choice)
        {
        case 1:
            cout << "���������� �������� �����, ����� ���� ����� �����������!" << endl;
            karma_points = 3;
            game_points(karma_points);
            // ������� � ��������� ������� "���������� ����������"
            technology_discussion_event();
            break;
        case 2:
            cout << "���������� ����������� ������� � ������������ ����� ���������." << endl;
            karma_points = -2;
            game_points(karma_points);
            break;
        case 3:
        {
            int vote_chance = rand() % 10; // ���� �������������� �����������
            if (vote_chance < 5)
            {
                cout << "������ ������������� �� ��������� ����������!" << endl;
                karma_points = 2;
            }
            else
            {
                cout << "����������� ������� ������ ��������� ����������." << endl;
                karma_points = -1;
            }
            game_points(karma_points);
            break;
        }
        }
    }
    if (incident == 6) {
        cout << "�����������: ���, � ������ ����������� ���� ������������ ����������!" << endl;
        cout << "1 - ��������� �������������� �������." << endl;
        cout << "2 - ������������, ��� �� ���� ��������." << endl;
        cout << "3 - �������� � �������� �������������� ����." << endl;

        int choice;
        cout << "-> "; cin >> choice;

        int karma_points;
        switch (choice)
        {
        case 1:
            cout << "�������������� ������� ������� ������� ������� ������������!" << endl;
            karma_points = 3;
            game_points(karma_points);
            // ������� � ��������� ������� "���������� ��������"
            increase_police_patrols_event();
            break;
        case 2:
            cout << "������������� �������� ������� � ����� ������������ ����� �������." << endl;
            karma_points = -3;
            game_points(karma_points);
            break;
        case 3:
        {
            int backlash_chance = rand() % 10; // ���� ���������� �������
            if (backlash_chance < 5)
            {
                cout << "������������� ��� ������ �������� ����� �������!" << endl;
                karma_points = -2;
            }
            else
            {
                cout << "������ ����������� �� ������������� ��� ���� ������������." << endl;
                karma_points = 2;
            }
            game_points(karma_points);
            break;
        }
        }
    }
}




