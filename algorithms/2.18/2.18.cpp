#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, reverse = 0;
	cin >> n;

	while (n > 0)
	{
		reverse = reverse * 10 + n % 10;
		n = n / 10;
		cout << "reversed number looks like: " << reverse << endl;
	}
	return 0;
}