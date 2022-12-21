#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n; int sum = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}