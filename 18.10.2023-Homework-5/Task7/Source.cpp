#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

vector<int>::iterator last_occure(int a, vector <int>& v)
{
	vector<int>::iterator i;
	vector<int>::iterator j;
	vector<int>::iterator k;
	k = find(v.begin(), v.end(), a);

	if (k != v.end())
	{
		for (i = k + 1, j = k; i != v.end(); ++i)
		{
			i = find(i, v.end(), a);

			if (i == v.end())
			{
				return j;
			}
			if (i == v.end() - 1)
			{
				return i;
			}
			j = i;
		}
		
	}
	else
		return k;

}

int main()
{
	vector<int>v1{3, 2, 5, 9, 4, 5, 7, 1, 5, 3};
	if (last_occure(3, v1) == v1.end() - 1 )
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
