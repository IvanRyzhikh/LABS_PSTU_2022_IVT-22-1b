//
// ���������� ������������� �������������� ����������� �� ��������� �������, 
// ������� N, � ������ ����� �����, ��� N � ����������� ����� ������ 2.

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Rus");

	start:
	float n;
	int countspaces;
	int countstars = 1;
	char spaces = ' ';
	char stars = '*';

	std::cout << "������� ����� N" << std::endl;
	std::cin >> n;

	if ((n <= 2) or ((int)n != n))
	{
		std::cout << "�������" << std::endl;
		goto start;
	}
		

	countspaces = 0;
	countstars = n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= countstars; j++)
		{
			std::cout << stars;
		}
		
		if (countspaces >= 1)
		{
			for (int j = 1; j <= countspaces; j++)
			{
				std::cout << spaces;
			}
		}

		countstars--;
		countspaces++;

		if (countstars < n)
		{
			std::cout << std::endl;
		}

		if (countstars == n)
		{
			break;
		}
	}
}