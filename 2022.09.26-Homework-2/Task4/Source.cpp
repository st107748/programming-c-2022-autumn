#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	std::cin >> a >> b >> c >> d;

	if (a == 0)
	{
		if (b == 0)
		{
			std::cout << "INF";
		}
		else
		{
			std::cout << "NO";
		}
	}
	else
	{
		if ((-b % a == 0) && c * (-b / a) + d != 0)
		{
			std::cout << -b / a;
		}
		else
		{
			std::cout << "NO";
		}
	}

	return EXIT_SUCCESS;
}