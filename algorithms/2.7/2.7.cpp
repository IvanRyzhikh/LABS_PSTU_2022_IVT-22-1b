﻿
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	int s;
	cout << "write N as sqrt of number" << endl;
	cin >> n;
	s = sqrt(n);
	if (s * s != n)
	{
		cout << "good way" << endl;
	}
	else
	{
		for (int i = 1; i <= s; i++) 
		{
			for (int j = 1; j <= s; j++) 
			{
				cout << "* ";
			}
			cout << endl; 
		}
	}

	cin >> n;
	for (int i = 1; i <= n; i++) 
	{
		for (int j = 1; j <= n; j++) 
		{
			cout << "* ";
		}
		cout << endl; 
	}
	cout << endl;
	cin >> n;
	int numofspaces = n - 2;

	for (int i = 1; i <= n; i++) 
	{
		if ((i == n) || (i == 1))
		{
			for (int j = 1; j <= n; j++)
			{
				cout << "* ";
			}

			cout << endl;

		}
		else
		{
			cout << "* ";
			for (int j = 1; j <= numofspaces; j++)
			{
				cout << " ";

			}
			cout << "* " << endl;

		}
	}

	return 0;
}
