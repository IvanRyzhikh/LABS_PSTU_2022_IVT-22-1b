#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float n, a, max;
	int i = 2, k = 1;

	cout << "enter the number of n: ";
	cin >> n;

	max = sin(n + i / n);

	while (i <= n)
	{
		a = sin(n + i / n);
		if (a > max)
		{
			max = a;
			k = 1;
		}
		else if (a == max)
		{
			k++;
		}
		i++;
	}
	cout << "the max element inn the sequence: " << endl;
	cout << "count of elements coinciding with max: " << k << endl;
}