#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	
	std::cin >> a;

	while (a != 0)
	{
		std::cin >> a;

		if (a < 0 && a % 2 != 0)
		{
			++b;
		}
	}

	std::cout << b;

	return EXIT_SUCCESS;
}