#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	std::cin >> a >> b >> c;

	if (a + b > c && a + c > b && b + c > a)
	{
		if (a > b && a > c)
		{
			if (a * a == b * b + c * c)
			{
				std::cout << "right";
			}
			else
			{
				if (a * a > b * b + c * c)
				{
					std::cout << "obtuse";
				}
				else
				{
					std::cout << "acute";
				}
			}
		}
		else
		{
			if (b > a && b > c)
			{
				if (b * b == a * a + c * c)
				{
					std::cout << "right";
				}
				else
				{
					if (b * b > a * a + c * c)
					{
						std::cout << "obtuse";
					}
					else
					{
						std::cout << "acute";
					}
				}
			}
			else
			{
				if (c * c == a * a + b * b)
				{
					std::cout << "right";
				}
				else
				{
					if (c * c > a * a + b * b)
					{
						std::cout << "obtuse";
					}
					else
					{
						std::cout << "acute";
					}
				}
			}
		}
	}
	else
	{
		std::cout << "impossible";
	}

	return EXIT_SUCCESS;
}