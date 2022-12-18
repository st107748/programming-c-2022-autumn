#include<iostream>

int NN(int n)
{
	if (n == 1)
	{
		return 1;
	}
	if (n < 0)
	{
		return 0;
	}
	else
	{
		return(NN(n - 5) + NN(n - 3));
	}
}
int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	if (NN(n) == 1)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}