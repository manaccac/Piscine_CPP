#include <iostream>

class Base
{
public:
	virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void)
{
	Base *base;
	int r = rand() % 3;

	if (r == 0)
	{
		std::cout << "Base rand choose A" << std::endl;
		base = new A;
	}
	else if (r == 1)
	{
		std::cout << "Base rand choose B" << std::endl;
		base = new B;
	}
	else
	{
		std::cout << "Base rand choose C" << std::endl;
		base = new C;
	}
	return (base);
}

void	identify_from_pointer(Base *p)
{
	std::cout << "Identifiying class instance type from pointer: " << std::endl;
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	if (a == NULL)
		std::cout << "Conversion is NOT Ok for A" << std::endl;
	else
		std::cout << "Conversion is Ok for A" << std::endl;
	if (b == NULL)
		std::cout << "Conversion is NOT Ok for B" << std::endl;
	else
		std::cout << "Conversion is Ok for B" << std::endl;
	if (c == NULL)
		std::cout << "Conversion is NOT Ok for C" << std::endl;
	else
		std::cout << "Conversion is Ok for C" << std::endl;
}

void	identify_from_reference(Base & p)
{
	std::cout << "Identifiying class instance type from reference: " << std::endl;
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void) a;
		std::cout << "Conversion is Ok for A" << std::endl;
	}
	catch(std::bad_cast &bc)
	{
		std::cout << "Conversion is NOT Ok for A" << std::endl;
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void) b;
		std::cout << "Conversion is Ok for B" << std::endl;
	}
	catch(std::bad_cast &bc)
	{
		std::cout << "Conversion is NOT Ok for B" << std::endl;
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void) c;
		std::cout << "Conversion is Ok for C" << std::endl;
	}
	catch(std::bad_cast &bc)
	{
		std::cout << "Conversion is NOT Ok for C" << std::endl;
	}
	
}

int main()
{
	Base *p;
	srand(time(NULL));

	p = generate();
	identify_from_pointer(p);
	identify_from_reference(*p);

	delete p;
	return (0);
}