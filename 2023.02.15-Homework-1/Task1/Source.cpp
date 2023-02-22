#include<iostream>
#include<string>

struct Animal {
	std:: string type;
	std::string name;
	int age;

	Animal(std::string type = "goat", std::string name = "Volodya", int age = 70 )
	{
		this->type = type;
		this->name = name;
		this->age = age;
	}

	Animal(const Animal& kopir)
	{
		this->type = kopir.type;
		this->name = kopir.name;
		this->age = kopir.age;
	}

	void printAnimal()
	{
		std::cout << type << "\n" << name <<  "\n" << age << std::endl << std::endl;
	}

	void enderAnimal()
	{
		age = age + 1;
	}

	~Animal()
	{

	}
};
int main(int argc, char* argv[])
{
	Animal an1;
	an1.enderAnimal();
	an1.printAnimal();

	Animal an2("tiger", "Kuzya", 6);
	an2.printAnimal();

	Animal an3(an2);
	an3.printAnimal();

	return EXIT_SUCCESS;
}