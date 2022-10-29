#include<iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int a = 0;

	std::cin >> x;

	for (int i = 1; i <= x; ++i)
	{
		if (x % i == 0)
		{
			 ++a;
		}
	}
	std::cout << a;
	
	return EXIT_SUCCESS;
}
