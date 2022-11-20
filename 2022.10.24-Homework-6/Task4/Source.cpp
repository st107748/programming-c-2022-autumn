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

	for (int i = aa - 1, k = 0; i < (aa - 1) + (bb - aa + 1) / 2; ++i, ++k)
	{
		int c = a[i];
		a[i] = a[bb - k - 1];
		a[bb - k - 1] = c;
	}

	for (int i = cc - 1, k = 0; i < (cc - 1) + (dd - cc + 1) / 2; ++i, ++k)
	{
		int c = a[i];
		a[i] = a[dd - k - 1];
		a[dd - k - 1] = c;
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << a[i] << " ";
	}

	return EXIT_SUCCESS;
}