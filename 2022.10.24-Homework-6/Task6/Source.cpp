#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int t = 0;

	std::cin >> n;

	int a[100]{ 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	
	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 != 0)
		{
			std::cout << a[i] << " ";
			++k;
		}
		
	}
	std::cout << std::endl;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			std::cout << a[i] << " ";
			++t;
		}
	}
	std::cout << std::endl;

	if (k <= t)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}


	return EXIT_SUCCESS;
}