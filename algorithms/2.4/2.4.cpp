//������ 2.4
//
//�������: ���������� � ������� �������������� ����������� �� ���������(`*`) � ��������, 
//������������ �����, � ���������� N, ��� N � ����������� �������� ����� ������ 3.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

 
    int n;
    int colvoProbelov;
    int colvoZvezd = 1;
    std::cout << "������� ��������� ��������������� ������������ N (�������� � ������ 3-��)" << std::endl;
    std::cin >> n;

    if ((n <= 3) or ((int)n != n) or ((int)n % 2 != 1))
    {
        std::cout << "�������!" << std::endl;
    }

    colvoProbelov = n / 2;
    std::cout << std::endl;

    for (int i = 1; i <= n; i += 2)
    {
        for (int j = 1; j <= colvoProbelov; j++)
        {
            std::cout << " ";
        }

        for (int j = 1; j <= colvoZvezd; j++)
        {
            std::cout << "*";
        }

        if (colvoZvezd != n)
        {
            std::cout << std::endl;
        }

        colvoProbelov--;
        colvoZvezd += 2;
    }

    std::cout << std::endl;
}