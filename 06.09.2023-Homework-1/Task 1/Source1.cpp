#include<iostream>
#include<string>

class Property
{
public:
		double worth;
		std::string adress;

        Property(double worth = 0, std::string adress = "ulica Lenina")
		{
			this->worth = worth;
			this->adress = adress;
		}

		virtual double tax() = 0;

		virtual ~Property() {}

};

class Appartment : public Property
{
public:
	Appartment(double worth = 0, std::string adress = "ulica Lenina") : Property(worth, adress) {};

	double tax()
	{
		return (0.001 * worth);
	}

	~Appartment() {}
};

class Car : public Property
{
public:
	Car(double worth = 0, std::string adress = "ulica Lenina") : Property(worth, adress) {};

	double tax()
	{
		return (0.005 * worth);
	}

	~Car() {}
};

class CountryHouse : public Property
{
public:
	CountryHouse(double worth = 0, std::string adress = "ulica Lenina") : Property(worth, adress) {};

	double tax()
	{
		return (0.002 * worth);
	}

	~CountryHouse() {}
};

int main(int argc, char* argv[])
{
	Property* ar[7];
	ar[0] = new Appartment(200000, "aa");
	ar[1] = new Appartment(300000, "bb");
	ar[2] = new Appartment(400000, "cc");
	ar[3] = new Car(347000, "dd");
	ar[4] = new Car(1200000, "ee");
	ar[5] = new CountryHouse(345678, "ff");
	ar[6] = new CountryHouse(2000000, "gg");

	for (int i = 0; i < 7; ++i)
	{
		if (i < 3)
		{
			std::cout << "Apartment tax" << " " << i << ":" << ar[i]->tax() << std::endl;
		}
		if (i > 2 && i < 5)
		{
			std::cout << "Car tax" << " " << i << ":" << ar[i]->tax() << std::endl;
		}
		if (i > 4)
		{
			std::cout << "CountryHouse tax" << " " << i << ":" << ar[i]->tax() << std::endl;
		}

	}

	for (int i = 0; i < 7; ++i)
	{
		delete ar[i];
	}
	return EXIT_SUCCESS;
}