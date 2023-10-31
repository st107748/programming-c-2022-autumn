#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

vector<int>::iterator second_occure(int a, vector <int>& v)
{
	vector<int>::iterator i;
	i = find(v.begin(), v.end(), a);

	if (i != v.end())
	{
		return find(i + 1, v.end(), a);
	}
	else
	{
		return i;
	}
}

int main()
{
	vector<int> v1{ 1, 2, 1, 4, 5 };
	if (second_occure(8, v1) == v1.end())
		cout << "YES";
	else
		cout << "NO";
		
	return 0;
}
