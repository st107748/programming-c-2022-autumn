#include<iostream>


#include <locale.h>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int N = 0;
	int K = 0;
	std::cout << "¬ведите количество школьников и €блок" << std::endl;
	std::cin >> N >> K;

	std::cout << " оличество €блок, которое останетс€ в корзине: " << K % N << std::endl;

	return EXIT_SUCCESS;
}