#include<iostream>


#include <locale.h>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int v = 0;
	int t = 0;
	std::cout << "Введите скорость Васи в км/ч и время в часах" << std::endl;
	std::cin >> v >> t;

	std::cout << "Номер отметки, на которой стоит Вася: " << (v * t + 109) % 109 << std::endl;

	return EXIT_SUCCESS;
}