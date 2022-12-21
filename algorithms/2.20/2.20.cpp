#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, s, i = 1, a;
	bool flag = false;
	cout << "write N: ";
	cin >> n;
	cout << "write S: ";
	cin >> s;

	while (i <= n && !flag)
	{
		
		a = sin(n + i / n);
		a = round(a * 10) / 10;
		cout << n + i / n << "|" << a << endl;
		if (a == s)
		{
			flag = true;
		}
		else
		{
			i++;
		}
	}
	if (flag)
	{
		cout << "the element is in the sequence";
	}
	else
	{
		cout << "the element is not in the sequence";
	}
	return 0;
}