#include "iostream"
#include "ctime"
using namespace std;

int main()
{
    srand(time(0));
    int mas[100][100] = { 0 };
    int count = 0;
    int max;
    int N;
    cin >> N;
    cout << endl;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << (mas[i][j] = rand() % 10) << "\t";
        }
        cout << endl;
    }


// searching the biggest one number on the main diagonal
    max = mas[0][0];
    for (int i = 0; i < N; i++)
    {
        if (mas[i][i] > max)
        {
            max = mas[i][i];
        }
    }
    cout << "the biggest one is:" << max;


// count of more than the biggest one
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (mas[i][j] > max)
            {
                count++;
            }
        }
        cout << endl;
    }
    cout << "count of more than biggest one is: " << count << endl;
}