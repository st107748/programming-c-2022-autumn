#include<iostream>
#include <cstring>

void MM(char* st, int k, int d)
{
	
	if (st[k] == st[d] && k < strlen(st) / 2 && d >= strlen(st) / 2)
	{ 
		MM(st, k + 1, d - 1);
	}
	
	if (st[k] != st[d] && k < strlen(st) / 2 && d >= strlen(st) / 2)
	{
		std::cout << st[k];
		MM(st, k + 1, d - 1);
		std::cout << st[d];
	}

	if (strlen(st) % 2 != 0 && d == strlen(st) / 2)
	{
		std::cout << st[d];
	}
}
int main(int argc, char* argv[])
{
	char st[1000]{ 0 };

	std::cin >> st;

	MM(st, 0, strlen(st) - 1);

	return EXIT_SUCCESS;
}