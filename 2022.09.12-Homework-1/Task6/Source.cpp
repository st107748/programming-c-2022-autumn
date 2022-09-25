#include<iostream>


#include <locale.h>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int n = 0;
	std::cout << "¬ведите целое число" << std::endl;
	std::cin >> n;

	std::cout << "—ледущее четное за ним: " << n - n % 2 + 2 << std::endl;

	return EXIT_SUCCESS;
}