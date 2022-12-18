#include<iostream>
#include <cstring>

char MM(char* st, char max = 0, int k = 0)
{
	if (k == strlen(st))
	{
		return max;
	}
	if (st[k] > max)
	{
		max = st[k];
	}
	return MM(st, max, k + 1);
	
}
int main(int argc, char* argv[])
{
	char st[1000]{ 0 }; 

	std::cin >> st;

	std::cout << MM(st);
	
	return EXIT_SUCCESS;
}