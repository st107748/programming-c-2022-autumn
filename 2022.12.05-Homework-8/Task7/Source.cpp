#include<iostream>
#include <cstring>

void MM(char* st, int k)
{
	if (k == 0)
	{
		std::cout << st[k];
		MM(st, k + 1);
	}
	
	if (k != 0 && k < strlen(st))
	{
		std::cout << "*" << st[k];
		MM(st, k + 1);
	}
	
}
int main(int argc, char* argv[])
{
	char st[1000]{ 0 };

	std::cin >> st;

	MM(st, 0);

	return EXIT_SUCCESS;
}