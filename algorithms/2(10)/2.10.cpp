#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int n, max, number;
	cout << "введите длину последовательности: ";
	cin >> n;
	cout << "введите первое число: ";
	cin >> max;

	for (int i = 2; i < n; i++)
	{
		cout << "number is: ";
		cin >> number;
		if (number > max)
		{
			max = number;
		}
	}
	cout << endl << "max has an answer: " << max << endl;
}