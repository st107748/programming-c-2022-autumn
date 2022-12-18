#include <iostream>

void spiral(int** a, int b, int c, int d, int n, int f, int h)
{
	if (b >= n * n)
	{
		return;
	}
	a[c][d] = b;
	
	if ((d < n - 1 - h) && (f == 0))
	{
		return(spiral(a, b + 1, c, d + 1, n, f, h)); 
	}

	if ((d == n - 1 - h) && (f == 0))
	{
		f = 1;
		return(spiral(a, b + 1, c + 1, d, n, f, h)); 
	}

	if ((c < n - 1 - h) && (f == 1))
	{
		return(spiral(a, b + 1, c + 1, d, n, f, h)); 
	}

	if ((c == n - 1 - h) && (f == 1))
	{
		f = 2;
		return(spiral(a, b + 1, c, d - 1, n, f, h)); 
	}

	if ((d > 0 + h) && (f == 2))
	{
		return(spiral(a, b + 1, c, d - 1, n, f, h)); 
	}

	if ((d == 0 + h) && (f == 2))
	{
		f = 3;
		return(spiral(a, b + 1, c - 1, d, n, f, h + 1)); 
	}

	if ((c > 0 + h) && (f == 3))
	{
		return(spiral(a, b + 1, c - 1, d, n, f, h)); 
	}

	if ((c == 0 + h) && (f == 3))
	{
		f = 0;
		return(spiral(a, b + 1, c, d + 1, n, f, h)); 
	}
}

int main(int argc, char argv[])
{
	int n = 0;

	std::cin >> n;

	int** a = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = new int [n];
	}

	int b = 1;
	int c = 0;
	int d = 0;
	int f = 0;

	spiral(a, b, c, d, n, f, 0);

	b = n * n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (a[i][j] < (-1) * n * n || a[i][j] > n * n)
			{
				a[i][j] = n * n;
			}
			std::cout << a[i][j] << ' ';
			if (j == n - 1)
			{
				std::cout << std::endl;
			}
		}
	}
	
	for (int i = 0; i < n; ++i)
	{
		delete[] a[i];
	}
	delete[] a;
	return EXIT_SUCCESS;
}


