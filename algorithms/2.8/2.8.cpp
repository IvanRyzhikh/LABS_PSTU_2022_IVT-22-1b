#include <iostream>

using namespace std;

int main()
{
	int n, numofstars;

	cout << "write N that more than 2 " << endl;
	cin >> n;

	if (n <= 2)
	{
		cout << "Error: write right word" << endl;
	}

	numofstars = 1;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= numofstars; j++)
		{
			cout << "* ";
		}
		numofstars++;
		cout << endl;
	}
	return 0;
}