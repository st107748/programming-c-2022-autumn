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

	std::cout << "������� �������� ���� �������� �������, ������������� ����� � ��� �� ������: ����, ������ � ������� ��� ������� �� �������� �������" << std::endl;
	std::cin >> a >> aa >> aaa >> b >> bb >> bbb;

	std::cout << "����� ������ ����� ����� ��������� �������: " << (b * 3600 + bb * 60 + bbb) - (a * 3600 + aa * 60 + aaa) << std::endl;

	return EXIT_SUCCESS;
}