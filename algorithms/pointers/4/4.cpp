#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    int n, tmp, * ptr = &tmp, max, min;
    std::cout << "������� ����� ������������������: " << std::endl;;
    std::cin >> n;
    std::cout << "������� ������ �����: " << std::endl;
    std::cin >> *ptr;
    max = *ptr;
    min = *ptr;
    for (int i = 2; i <= n; i++)
    {
        std::cin >> *ptr;
        if (*ptr > max)
        { 
            max = *ptr; 
        }
        else if (*ptr < min) 
        { 
            min = *ptr; 
        }
    }
    std::cout << "������������ ������� ������������������ �����: " << max << std::endl;
    std::cout << "����������� ������� ������������������ �����: " << min << std::endl;
    return 0;
}
    