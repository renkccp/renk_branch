#include <iostream>
#include "structure.h"
using namespace std;

int play_durak()
{
    setlocale(LC_ALL, "ru");
    // ��������� ����
    int player_card = rand() % 36 + 1; // ��������� ����� �� 1 �� 36
    int opponent_card = rand() % 36 + 1;

    cout << "���� �����: " << player_card << endl;
    cout << "����� ����������: " << opponent_card << endl;

    // ������ ��������
    if (player_card > opponent_card)
    {
        return 1; // �������
    }
    else
    {
        return 0; // ��������
    }
}