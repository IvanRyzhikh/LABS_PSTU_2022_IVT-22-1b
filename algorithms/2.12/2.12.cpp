#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int n, num, sum;
    cin >> n;
    int max = num;
    int min = num;

    for (int i = 1; i <= n; i++)
    {
        cin >> num;

        if (num > max)
        {
            max = num;
        }

        else if (num < min)
        {
            min = num;
        }
    }
    sum = min + max;
    cout << "sum of max and min is: " << sum << endl;
    return 0;
}
