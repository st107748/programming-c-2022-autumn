#include<iostream>


#include <locale.h>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int a = 0;
	int b = 0;
	int h = 0;
	
	std::cout << "������� ��� ����� �����" << std::endl;
	std::cin >> a >> b;
	h = a;
	a = b;
	b = h;

	std::cout << "��������, ������������ �����: " << a << " " << b << std::endl;

	return EXIT_SUCCESS;
}