#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int h = 0;
	
	std::cin >> a >> b;

	h = a;
	a = b;
	b = h;

	std::cout << a << " " << b << std::endl;

	return EXIT_SUCCESS;
}