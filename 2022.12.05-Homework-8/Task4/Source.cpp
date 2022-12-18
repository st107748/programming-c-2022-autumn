#include <iostream>;

void hanoi(int count, int from, int to)
{
	if (count <= 0)
	{
		return;
	}

	int t = 6 - from - to;
	hanoi(count - 1, from, t);
	std::cout << "Disk " << count << " move from " << from << " to " << to << std::endl;
	hanoi(count - 1, t, to);
}
int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	hanoi(n, 1, 2);

	return EXIT_SUCCESS;
}
