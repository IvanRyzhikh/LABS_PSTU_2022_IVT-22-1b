// ������ 2.5
//
// ���������� ����������� ������������� �������������� ����������� �� `*` �� 
// ��������� �������, ������� N, � ������ ����� ������ �����. ��� N � ����������� ����� ������ 2.

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

start:
	float n;
	int countspaces;
	int countstars = 1;
	char space = ' ';
	char star = '*';

	cout << "������� ����� ������� N:" << endl;
	cin >> n;

	if ((n <= 2) or ((int)n != n))
	{
		cout << "�������!" << endl;
		goto start;
	}
	countspaces = n;

	for (int i = 1; i <= n; i++)
	{
		countspaces--;
		countstars = i;
		for (int j = 1; j <= countspaces; j++)
		{
			cout << space;
		}

		for (int j = 1; j <= countstars; j++)
		{
			cout << star;
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