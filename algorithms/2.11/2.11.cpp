#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int n, tmp;
    bool plusFirst = false; // flag
    bool minusFirst = false; // flag

    cout << "������� ���������� ����� ������������������:" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        if (!plusFirst && !minusFirst)
        {
            if (tmp > 0) { plusFirst = true; }
            else if (tmp < 0) { minusFirst = true; }
        }
    }

    if (plusFirst)
    {
        cout << "������� ����� ������������� �����";
    }
    else if (minusFirst)
    {
        cout << "������� ����� ������������� �����";
    }
    else
    {
        cout << "��� ���� ��������";
    }
    cout << endl;
}