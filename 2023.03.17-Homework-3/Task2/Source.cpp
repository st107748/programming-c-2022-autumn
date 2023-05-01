#include<iostream>
#include<string>

struct Student
{
	std::string surname;
	std::string name;
	int m;
	int f;
	int i;

	Student(std::string surname = "Abakarova", std::string name = "Masha", int m = 0, int f = 0, int i = 0) :
		surname(surname), name(name), m(m), f(f), i(i) {}

	Student(const Student& copy) : surname(copy.surname), name(copy.name), m(copy.m), f(copy.f), i(copy.i) {}

	~Student() {}

	int Sum()
	{
		return(m + f + i);
	}

	void PrintSt()
	{
		std::cout << surname << " " << name << std::endl;
	}
};

int main(int argc, char* argv[])
{
	int n = 0;
	std::string surname;
	std::string name;
	int m = 0;
	int f = 0;
	int in = 0;

	std::cin >> n;

	Student* arr = new Student[n];

	for (int i = 0; i < n; ++i)
	{
		std::cin >> surname >> name >> m >> f >> in;
		arr[i] = Student(surname, name, m, f, in);
	}

	std::cout << std::endl;

	for (int j = 0; j < n; ++j)
	{
		for (int i = n - 1; i > 0; --i)
		{
			if (arr[i].Sum() > arr[i - 1].Sum())
			{
				Student t;
				t = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = t;

			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		arr[i].PrintSt();
	}

	delete[] arr;

	return EXIT_SUCCESS;
}