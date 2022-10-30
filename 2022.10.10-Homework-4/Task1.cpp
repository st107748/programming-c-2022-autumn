#include<iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int k = 0;

	std::cin >> x;

	for (int i = 1; x != 0 ; i *= 2 )
	{
		
		k += x % 10 * i;
		x /= 10;
	}
    std::cout << k; 

	return EXIT_SUCCESS;
}


