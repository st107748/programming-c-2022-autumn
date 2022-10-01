#include<iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int xx = 0;
	
	std::cin >> x;

	xx = x * x;

	std::cout << (xx + 1) * (xx + x) + 1 << std::endl;

	return EXIT_SUCCESS;
}