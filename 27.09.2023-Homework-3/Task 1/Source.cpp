#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include<cstdlib>

using namespace std;

class NoFile1 {};
class File2Exists {};
 
void Copy(string a, string b)
{
	string x, s;
	ifstream f(a);
	ifstream g(b);
	if (!f.is_open()) {throw NoFile1{};}
	if (g.is_open()) { throw File2Exists{}; }
	
	else
	{
		ofstream g(b);
		
		while (getline(f, s))
		{
			g << s << endl;
		}
	}
}

int main()
{
	string a, b, x;
	cin >> a >> b;
	try { Copy(a, b); }

	catch (NoFile1) 
	{
		cerr << "error1" << endl;
		return EXIT_FAILURE;
	}

	catch (File2Exists) 
	{
		cerr << "error2" << endl;
		return EXIT_FAILURE;
	}
	return 0;
}

