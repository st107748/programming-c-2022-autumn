#include<iostream>


#include <locale.h>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int N = 0;
	int K = 0;
	std::cout << "������� ���������� ���������� � �����" << std::endl;
	std::cin >> N >> K;

	std::cout << "���������� �����, ������� ��������� � �������: " << K % N << std::endl;

	return EXIT_SUCCESS;
}