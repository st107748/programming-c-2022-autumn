#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
void del(vector <double>& v)
{
	vector<double>::iterator i;

	if (v.size() % 2 == 0)
	{
		for (i = v.begin(); i != v.end(); ++i)
		{
			i = v.erase(i);
		}
	}
	else
	{

		for (i = v.begin(); i != v.end() - 1; ++i)
		{
			i = v.erase(i);
		}

		v.erase(v.end() - 1);

	}

	for (i = v.begin(); i != v.end(); ++i)
	{
		cout << *i << " ";

	}
	cout << endl;
}

int main()
{
	vector<double> v1{ 1, 2, 3, 4, 5 };
	vector<double> v2{ 1, 2, 3, 4, 5, 6 };
	double x;
	del(v1);
	del(v2);

	return 0;
}