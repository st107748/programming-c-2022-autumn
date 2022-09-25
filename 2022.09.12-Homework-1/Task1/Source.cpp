#include<iostream>


#include <locale.h>

int main(int argc, char* argv[])
{
	
	setlocale(LC_ALL, "Russian");

	int a = 0;
	std::cout << "¬ведите целое число, по модулю не превосход€щее 10000" << std::endl;
	std::cin >> a;

	std::cout << "The next number for the number " << a << " is " << a + 1 << "." << std::endl;
	std::cout << "The previous number for the number " << a << " is " << a - 1 << "." << std::endl;

	return EXIT_SUCCESS;
}