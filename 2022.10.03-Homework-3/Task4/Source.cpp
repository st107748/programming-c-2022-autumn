#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int k = 0;

	std::cin >> n;

	do
	{
		do
		{
			if (a + k < n)
			{
				std::cout << a + k + 1 << " ";
			}
			else
			{
				std::cout << 2 * n - (a + k + 1) << " ";
			}
			
			++a;
		} while (a < n);
		a = 0;
		++k;
		std::cout << "" << std::endl;
	} while (k < n); 

	return EXIT_SUCCESS;
}