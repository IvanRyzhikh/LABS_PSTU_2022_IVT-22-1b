// ������ 2.5
//
// ���������� ����������� ������������� �������������� ����������� �� `*` �� 
// ��������� �������, ������� N, � ������ ����� ������ �����. ��� N � ����������� ����� ������ 2.

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	float n;
	int countspaces;
	int countstars = 1;

	cout << "������� ����� ������� N:" << endl;
	cin >> n;

	if ((n <= 2) or ((int)n != n))
	{
		cout << "�������!" << endl;
	}
	countspaces = n;

	for (int i = 1; i <= n; i++)
	{
		countspaces--;
		countstars = i;
		for (int j = 1; j <= countspaces; j++)
		{
			cout << " ";
		}

		for (int j = 1; j <= countstars; j++)
		{
			cout << "*";
		}

		if (countstars < n)
		{
			cout << endl;
		}

		if (countstars == n)
		{
			break;
		}
	}
}