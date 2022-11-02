//
// посчитать сумму `S = 1*2 + 2*3*4 + 3*4*5*6 + 4*5*6*7*8 + ....` до N (натурального числа).

#include <iostream>

int SumOfSeries(int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
		s = s + i * (i + 1) * (i + 2);
	return s;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	int n;

	std::cout << "введите N" << std::endl;
	std::cin >> n;
	std::cout << SumOfSeries(n);
	return 0;
}