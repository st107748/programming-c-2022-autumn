#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;

	std::cin >> n >> k;


	std::cout << ((n / k * n) + (k / n * k)) / ((n / k + k / n)) << std::endl;

	return EXIT_SUCCESS;
}