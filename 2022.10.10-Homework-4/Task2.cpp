#include<iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int i = 1;
	int k = 0;

	std::cin >> x;

	for (; x != 0;)
	{
		
		k += x % 10 * i;
		x /= 10;
		i *= 2;
	}
    std::cout << k; 

	return EXIT_SUCCESS;
}

