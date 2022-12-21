#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    int n, tmp, * ptr = &tmp, max, min;
    std::cout << "Введите длину последовательности: " << std::endl;;
    std::cin >> n;
    std::cout << "Введите первое число: " << std::endl;
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
    std::cout << "Максимальный элемент последовательности равен: " << max << std::endl;
    std::cout << "Минимальный элемент последовательности равен: " << min << std::endl;
    return 0;
}
    