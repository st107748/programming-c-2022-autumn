#include<iostream>


#include <locale.h>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int n = 0;
	std::cout << "������� ����� �����" << std::endl;
	std::cin >> n;

	std::cout << "�������� ������ �� ���: " << n - n % 2 + 2 << std::endl;

	return EXIT_SUCCESS;
}