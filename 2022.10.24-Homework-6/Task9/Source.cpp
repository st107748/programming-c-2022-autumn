#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int max = 0;
	int j = 0;
	int sum = 0;
	int t = 0;

	std::cin >> n;

	int a[100]{ 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < 101; ++i)
	{
		for (int i = 0; i < n; ++i)
		{
			if (a[i] > max)
			{
				max = a[i];
				j = i;
			}
			sum = a[j] * (j + 1);
		}
		t += sum;
		if (j != n - 1)
		{
			for (int i = 0; i < n; ++i)
			{
				a[i] = a[j + 1 + i];
			}
			n = n - j - 1;
			max = 0;
			j = 0;
		}
		else
		{
			break;
		}
	}
	
	std::cout << t;
	
	return EXIT_SUCCESS;
}