#include<iostream>
#include<string>

struct Expression
{
	virtual double evaluate() const = 0;

	virtual ~Expression() {}
};
struct Number : Expression
{
	Number(double value)
		: value(value)
	{}

	double evaluate() const
	{
		return value; 
	}

	~Number() {}

private:
	double value;
};
struct BinaryOperation : Expression
{
	/*
	Здесь op это один из 4 символов: '+', '-', '*' или '/', соответствующих операциям,
	которые вам нужно реализовать.
	*/
	BinaryOperation(Expression const* left, char op, Expression const* right)
		: left(left), op(op), right(right)
	{ }

	double evaluate() const
	{
		if (op == '+')
		{
			return left->evaluate() + right->evaluate();
		}

		if (op == '-')
		{
			return left->evaluate() - right->evaluate();
		}

		if (op == '*')
		{
			return left->evaluate() * right->evaluate();
		}

		if (op == '/')
		{
			return left->evaluate() / right->evaluate();
		}
	}

	~BinaryOperation() {}
private:
	Expression const* left;
	Expression const* right;
	char op;
};
 int main(int argc, char* argv[])
{
	 Expression * c = new BinaryOperation(new Number(4), '+', new Number(16));

	 std::cout << c->evaluate();
	 return EXIT_SUCCESS;
}