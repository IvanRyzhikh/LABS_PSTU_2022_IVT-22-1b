#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int num1, num2;
	bool ordered = true;

	cout << "Введите первое число: " << endl;
	cin >> num1;

	while (num1 != 0)
	{
		cout << "введите следующее число" << endl;
		cin >> num2;
		if (num2 != 0 && num1 > num2)
		{
			ordered = false;
		}
		num1 = num2;
	}

	if (ordered)
	{
		cout << "последовательность упорядочена по возрастает" << endl;
	}
	else
	{
		cout << "последовательность не упорядочена по возрастает" << endl;
	}
}