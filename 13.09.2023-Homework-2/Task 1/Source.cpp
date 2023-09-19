#include<iostream>
#include<string>
#include<fstream>

void function(std::string a, std::string b)
{
	int i = 1;
	std::string s;
	std::ifstream f(a);

	while (getline(f, s))
	{
		std::string l = b + std::to_string(i) + ".txt";
		std::ofstream g(l);
		g << s << std::endl;
		++i;
	}
}
int main(int argc, char* argv[])
{
	function("f.txt", "g");
	return EXIT_SUCCESS;
}