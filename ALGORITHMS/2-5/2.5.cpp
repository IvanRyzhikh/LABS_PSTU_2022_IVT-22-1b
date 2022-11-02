// Задача 2.5
//
// напечатать заполненный прямоугольный равнобедренный треугольник из `*` со 
// сторонами катетов, равными N, и прямым углом справа снизу. где N — натуральное число больше 2.

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

start:
	float n;
	int countspaces;
	int countstars = 1;
	char space = ' ';
	char star = '*';

	cout << "Введите длину катетов N:" << endl;
	cin >> n;

	if ((n <= 2) or ((int)n != n))
	{
		cout << "Неверно!" << endl;
		goto start;
	}
	countspaces = n;

	for (int i = 1; i <= n; i++)
	{
		countspaces--;
		countstars = i;
		for (int j = 1; j <= countspaces; j++)
		{
			cout << space;
		}

		for (int j = 1; j <= countstars; j++)
		{
			cout << star;
		}

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