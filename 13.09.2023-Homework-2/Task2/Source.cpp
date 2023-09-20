#include<iostream>
#include<string>
#include<fstream>
#include<sstream>

void function()
{
	std::string h;
	int x;
	int sum = 0;
	std::string s;
	std::ifstream f("ff.txt");
	std::ofstream g("gg.txt");

	while (getline(f, h))
	{
		std::stringstream str(h);
		while (str >> x)
		{
			sum = sum + x;
		}
		g << sum << std::endl;
		sum = 0;
	}
}
int main(int argc, char* argv[])
{
	function();
	return EXIT_SUCCESS;
}