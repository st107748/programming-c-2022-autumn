#include<iostream>
#include<string>
#include<ctime>

std::string ttype[7]{ "tiger", "lion", "leopard", "jakal", "elephant", "gazelle", "ostrich" };

std::string nname[20]{ "Masha", "Lera", "Dasha", "Sasha", "Arina", "Katerina", "Tima", "Egor", "Vera", "Lesha",
"Urra", "Dima", "Nikita", "Cringe", "Kira", "Lilu", "Afina", "Zemfira", "Alina", "Jesus"};

class Animal {

private:
	int age;
	int power;
	std::string type;
	std::string name;
public:
	Animal(std::string type = "lion", std::string name = "Lilu", int age = 70, int power = 8)
	{
		this->type = type;
		this->name = name;
		this->age = age;
		this->power = power;
	}

	Animal(const Animal& kopir)
	{
		this->type = kopir.type;
		this->name = kopir.name;
		this->age = kopir.age;
		this->power = kopir.power;
	}

	std::string Gettype() 
	{
		return type;
	}

	std::string Getname()
	{
		return name;
	}

	int Getage()
	{
		return age;
	}

	int Getpower() 
	{ 
		return power;
	}
	
	~Animal()
	{

	}

	void printinfo()
	{
		std::cout << type << "\n" << name << "\n" << age << "\n" << power << std::endl << std::endl;
	}

	void Mighter(int h)
	{
		power += h;
	}

	void Kopir(const Animal& kopir)
	{
	this->type = kopir.type;
	this->name = kopir.name;
	this->age = kopir.age;
	this->power = kopir.power;
	}

};

Animal Randomanimals()
{
	std::string t;
	std::string n;
	int a = 0;
	int p = 0;

	t = ttype[rand() % 7];

	if (t == ttype[0] || t == ttype[2])
	{
		a = rand() % 15 + 1;

		if (a <= 3)
		{
			p = 33 + a;
		}
		else
		{
			if (a >= 10)
			{
				p = 33 + 19 - a;
			}
			else
			{
				p = 33 + 10;
			}
		}
	}

	if (t == ttype[1])
	{
		a = rand() % 10 + 1;

		if (a <= 2)
		{
			p = 35 + a;
		}

		else
		{
			if (a >= 7)
			{
				p = 35 + 16 - a;
			}


			else
			{
				p = 35 + 10;
			}
		}
	}
	
	if (t == ttype[3])
	{
		a = rand() % 15 + 1;

		if (a <= 3)
		{
			p = 25 + a;
		}

		else
		{
			if (a >= 10)
			{
				p = 25 + 19 - a;
			}

			else
			{
				p = 25 + 10;
			}
		}
	}

	if (t == ttype[4])
	{
		a = rand() % 70 + 1;
		if (a <= 20)
		{
			p = 26 + a / 2;
		}

		if (a >= 61)
		{
			p = 26 + 70 - a;
		}

		else
		{
			p = 26 + 10;
		}

	}

	if (t == ttype[5])
	{
		a = rand() % 15 + 1;

		if (a <= 3)
		{
			p = 20 + a;
		}

		else
		{
			if (a >= 10)
			{
				p = 20 + 19 - a;
			}

			else
			{
				p = 20 + 10;
			}

		}
	}

	if (t == ttype[6])
	{
		a = rand() % 40 + 1;
		if (a <= 5)
		{
			p = 25 + a;
		}

		else
		{
			if (a >= 31)
			{
				p = 25 + 40 - a;
			}

			else
			{
				p = 25 + 10;
			}
		}
	}
	
	n = nname[rand() % 20];
	
	Animal an(t, n, a, p);

	return an;

}

int Battle(Animal& an1, Animal& an2)
{
	if (an1.Getpower() >= an2.Getpower())
	{
		an1.Mighter(an2.Getpower());
		return 0;
	}

	else
	{
		an2.Mighter(an1.Getpower());
		return 1;
	}
}

int main(int argc, char* argv[])
{
	srand(time(NULL));
	Animal* arr = new Animal[100];

	for (int i = 0; i < 100; i++)
	{
		arr[i] = Randomanimals();
	}

	std::cout << "Winners of the first round:" << std::endl << std::endl;

	Animal* arr1 = new Animal[50];

	for (int i = 0; i < 50; ++i)
	{
		if (Battle(arr[2 * i], arr[2 * i + 1]) == 0)
		{
			arr[2 * i].printinfo();
			arr1[i].Kopir(arr[2 * i]);
		}
		else
		{
			arr[2 * i + 1].printinfo();
			arr1[i].Kopir(arr[2 * i + 1]);
		}

	}
	delete[] arr;

	getc (stdin);

	std::cout << "Winners of the second round:" << std::endl << std::endl;

	Animal* arr2 = new Animal[25];

	for (int i = 0; i < 25; ++i)
	{
		if (Battle(arr1[2 * i], arr1[2 * i + 1]) == 0)
		{
			arr1[2 * i].printinfo();
			arr2[i].Kopir(arr1[2 * i]);
		}
		else
		{
			arr1[2 * i + 1].printinfo();
			arr2[i].Kopir(arr1[2 * i + 1]);
		}
	}

	delete[] arr1;

	getc(stdin);

	int c = 1000;
	int k = 0;

	for (int i = 0; i < 25; ++i)
	{
		if (arr2[i].Getpower() <= c)
		{
			c = arr2[i].Getpower();
			k = i;
		}
	}

	Animal t;
	t = arr2[k];
	arr2[k].Kopir(arr2[24]);
	arr2[24].Kopir(t);

	std::cout << "Winners of the third round:" << std::endl << std::endl;

	Animal* arr3 = new Animal[12];

	for (int i = 0; i < 12; ++i)
	{
		if (Battle(arr2[2 * i], arr2[2 * i + 1]) == 0)
		{
			arr2[2 * i].printinfo();
			arr3[i].Kopir(arr2[2 * i]);
		}
		else
		{
			arr2[2 * i + 1].printinfo();
			arr3[i].Kopir(arr2[2 * i + 1]);
		}
	}

	delete[] arr2;

	getc (stdin);

	std::cout << "Winners of the fourth round:" << std::endl << std::endl;

	Animal* arr4 = new Animal[6];

	for (int i = 0; i < 6; ++i)
	{
		if (Battle(arr3[2 * i], arr3[2 * i + 1]) == 0)
		{
			arr3[2 * i].printinfo();
			arr4[i].Kopir(arr3[2 * i]);
		}
		else
		{
			arr3[2 * i + 1].printinfo();
			arr4[i].Kopir(arr3[2 * i + 1]);
		}
	}

	delete[] arr3;

	getc (stdin);

	std::cout << "Winners of the fifth round:" << std::endl << std::endl;

	Animal* arr5 = new Animal[3];

	for (int i = 0; i < 3; ++i)
	{
		if (Battle(arr4[2 * i], arr4[2 * i + 1]) == 0)
		{
			arr4[2 * i].printinfo();
			arr5[i].Kopir(arr4[2 * i]);
		}
		else
		{
			arr4[2 * i + 1].printinfo();
			arr5[i].Kopir(arr4[2 * i + 1]);
		}
	}

	delete[] arr4;

	getc (stdin);

	system("cls");

	int l = 0;
	int y = 0;

	for (int i = 0; i < 3; ++i)
	{
		if (arr5[i].Getpower() > l)
		{
			l = arr5[i].Getpower();
			y = i;

		}
	}

	std::cout << "Winner:" << std::endl << std::endl;
	arr5[y].printinfo();

	delete[] arr5;

	return EXIT_SUCCESS;
}