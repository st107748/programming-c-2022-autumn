#include<iostream>


#include <locale.h>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int v = 0;
	int t = 0;
	std::cout << "������� �������� ���� � ��/� � ����� � �����" << std::endl;
	std::cin >> v >> t;

	std::cout << "����� �������, �� ������� ����� ����: " << (v * t + 109) % 109 << std::endl;

	return EXIT_SUCCESS;
}