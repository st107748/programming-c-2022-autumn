#include <iostream>
#include <list>
#include <cstdlib>
#include <string>

using namespace std;

struct Subscriber
{
	int number;
	string name;
	string adress;
	Subscriber(int number = 1, string name = "N", string adress = "Street") : number(number), name(name),
		adress(adress) {};
};
ostream& operator << (ostream& st, Subscriber a)
{
	return st << a.number << " " << a.name << " " << a.adress;
}

istream& operator >> (istream& st, Subscriber& a)
{
	st >> a.number >> a.name >> a.adress;
	return st;
}

ostream& operator << (ostream& st, list<Subscriber> l)
{
	list<Subscriber>::iterator i;
	for (i = l.begin(); i != l.end(); ++i)
	{
		cout << (*i).number << " " << (*i).name << " " << (*i).adress << endl;
	}

	return st;
		
}

istream& operator << (istream& st, list<Subscriber> &l)
{
	while (true)
	{
		cout << "������� ���� ��� ���������� �����" << endl;
		Subscriber a;
		cin >> a;
		if (a.number == 0 && a.name == "0" && a.adress == "0")
		{
			break;
		}

		l.push_back(a);
		
	}
	
	return st;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	list<Subscriber> l;

	Subscriber a(7980, "masha", "kur");
	Subscriber b(7981, "jone", "street");
	Subscriber c(7982, "frank", "prospect");
	l.push_back(a);
	l.push_back(b);
	l.push_back(c);


	int h = 0;
	while (h != 4)
	{
		cout << "1 - �������� ������ ��������" << endl;
		cout << "2 - ������� �������� �� ������" << endl;
		cout << "3 - ����������� ��� � ����� �������� �� ������ ��������" << endl;
		cout << "4 - ����� �� ����" << endl;
		cin >> h;
		if (h == 1)
		{
			cout << "������� ������ ��������" << endl;
			Subscriber a;
			cin >> a;
			l.push_back(a);

		}

		if (h == 2)
		{
			cout << "������� ����� ��������" << endl;
			int n;
			cin >> n;
			list<Subscriber>::iterator i;
			for (i = l.begin(); i != l.end(); ++i)
			{
				if ((*i).number == n)
				{
					i = l.erase(i);
					break;
				}
			}
		}

		if (h == 3)
		{
			cout << "������� ����� ��������" << endl;
			int num;
			cin >> num;
			list<Subscriber>::iterator i;
			for (i = l.begin(); i != l.end(); ++i)
			{
				if ((*i).number == num)
				{
					std::cout << (*i).name << " " << (*i).adress << std::endl;
					break;
				}

			}

		}

	}

	return EXIT_SUCCESS;
}