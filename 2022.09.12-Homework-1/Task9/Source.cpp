#include<iostream>


#include <locale.h>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int x = 0;
	int xx = 0;
	
	std::cout << "¬ведите число x, чтобы посчитать x^4+x^3+x^2+x+1 " << std::endl;
	std::cin >> x;

	xx = x * x;

	std::cout << "–езультат: " << (xx + 1) * (xx + x) + 1 << std::endl;

	return EXIT_SUCCESS;
}