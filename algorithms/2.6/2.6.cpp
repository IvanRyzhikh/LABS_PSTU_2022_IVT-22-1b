//������ 2.6
//
//�������: ���������� ����������� ������������� �������������� ����������� �� `*` �� ��������� �������, 
//������� N, � ������ ����� ������ ������.��� N � ����������� ����� ������ 2.

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

start:
    float n;
    char stars = '*';
    char space = ' ';
    int countspaces;
    int countstars = 1;

    cout << "������� ����� ������� N:" << endl;
    cin >> n;

    if ((n <= 2) or ((int)n != n))
    {
        cout << "�������!" << endl;
        goto start; // �� ������ 13
    }

    countspaces = 0;
    countstars = n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= countspaces; j++)
        {
            cout << space;
        }

        for (int j = 1; j <= countstars; j++)
        {
            cout << stars;
        }

        countspaces++;
        countstars--;

        if (countstars < n)
        {
            cout << endl;
        }

        if (countstars == n)
        {
            break;
        }
    }
}