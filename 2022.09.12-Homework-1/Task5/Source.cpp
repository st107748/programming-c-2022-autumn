#include<iostream>


#include <locale.h>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int a = 0;
	std::cout << "Введите трехзначное число" << std::endl;
	std::cin >> a;

	std::cout << "Сумма его цифр: " << (a % 10)+(a / 100) + (a % 100  / 10 )<< std::endl;

	return EXIT_SUCCESS;
}