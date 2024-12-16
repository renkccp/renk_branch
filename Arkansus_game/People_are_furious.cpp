#include <iostream>
#include "structure.h"
using namespace std;

void peopleAreFurious()
{
    setlocale(LC_ALL, "ru");
    cout << "����� ����� �������� ��� � ������� ����������!" << endl;
    cout << "1 - ����������� ��������� ����� � ��������� ��������." << endl;
    cout << "2 - �������� � ����� ����� ��� ������� ��������." << endl;
    cout << "3 - ������� � ����������." << endl;

    int choice;
    cout << "-> "; cin >> choice;

    int karma_points;
    switch (choice)
    {
    case 1:
        cout << "�� ���������� ��������� �����. ������� ��� ���� ����������, �� ����� ������ ��� �������." << endl;
        karma_points = 2; // ��������� ���� �� �������
        break;
    case 2:
        cout << "�� �������� � ����� �����, � ����� ����� ����� ���������, �� ��������� ��� ��� ����������." << endl;
        karma_points = 1; // ��������� ���������� �����
        break;
    case 3:
        cout << "�� ������ �������, �� ����� ��� �������. ��� ������ ��������� ��������." << endl;
        karma_points = -3; // ��������� �����
        break;
    default:
        cout << "�������� �����. ����� �������� ������ ��������!" << endl;
        karma_points = -2; // ����� �� ������������ �����
        break;
    }

    game_points(karma_points); // ��������� ���� ������
}