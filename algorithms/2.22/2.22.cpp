#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float n, a, max;
	int i = 2, num = 1;

	cout << "count of n-elements: ";
	cin >> n;

	max = sin(n + i / n);

	while (i <= n)
	{
		a = sin(n + i / n);
		if (a > max)
		{
			max = a;
			num = i;
		}
		i++;
	}

	cout << "the max element in the sequence: " << max << endl;
	cout << "it's number: " << num << endl;
}