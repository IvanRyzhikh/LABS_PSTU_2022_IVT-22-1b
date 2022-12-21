//Задача 2.6
//
//Условие: напечатать заполненный прямоугольный равнобедренный треугольник из `*` со сторонами катетов, 
//равными N, и прямым углом справа сверху.где N — натуральное число больше 2.

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

    cout << "Введите длину катетов N:" << endl;
    cin >> n;

    if ((n <= 2) or ((int)n != n))
    {
        cout << "Неверно!" << endl;
        goto start; // на строку 13
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