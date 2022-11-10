#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int aa = 0;
	int bb = 0;
	int cc = 0;
	int dd = 0;
	int k = 1;

	std::cin >> n;

	int a[1000]{ 0 };

	std::cin >> aa >> bb >> cc >> dd;

	for (int i = 0; i < n; ++i)
	{
		a[i] = i + 1;
	}

	for (int i = aa - 1, k = 0; i < bb; ++i, ++k)
	{
		a[i] = bb - k;
	}

	for (int i = 0; i < n; ++i)
	{
		if (cc - 1 <= i && i <= dd - 1)
		{
			std::cout << a[dd - k] << " ";
			++k;
		}
		else
		{
			std::cout << a[i] << " ";
		}
	}

	return EXIT_SUCCESS;
}