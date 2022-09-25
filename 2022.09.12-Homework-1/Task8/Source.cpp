#include<iostream>


#include <locale.h>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int a = 0;
	int aa = 0;
	int aaa = 0;
	int b = 0;
	int bb = 0;
	int bbb = 0;

	std::cout << "Введите значения двух моментов времени, принадлежащих одним и тем же суткам: часы, минуты и секунды для каждого из моментов времени" << std::endl;
	std::cin >> a >> aa >> aaa >> b >> bb >> bbb;

	std::cout << "Число секунд между этими моментами времени: " << (b * 3600 + bb * 60 + bbb) - (a * 3600 + aa * 60 + aaa) << std::endl;

	return EXIT_SUCCESS;
}