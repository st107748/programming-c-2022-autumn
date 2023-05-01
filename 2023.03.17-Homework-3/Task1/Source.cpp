#include<iostream>

struct Point
{
	int x;
	int y;

	Point(int x = 0, int y = 0): x(x), y(y) {}

	Point(const Point& copy): x(copy.x), y(copy.y) {}

	~Point() {}

	double Dist()
	{
		return (sqrt(x * x + y * y));
	}

	void PrintPoint()
	{
		std::cout << x << " " << y << std::endl;
	}

};

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	Point* arr = new Point[n];

	for (int i = 0; i < n; ++i)
	{
		Point p;
		std::cin >> p.x >> p.y;
		arr[i] = p;
	}

	std::cout << std::endl;

	for (int j = 0; j < n; ++j)
	{
		for (int i = n - 1; i > 0; --i)
		{
			if (arr[i].Dist() < arr[i - 1].Dist())
			{
				Point t;
				t = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = t;

			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		arr[i].PrintPoint();
	}

	delete[] arr;

	return EXIT_SUCCESS;
}