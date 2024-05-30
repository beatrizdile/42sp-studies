#include <iostream>

// We use "virtual" keyword to achieve dynamic binding, which means that when this
// function is declared in a derived class, the derived class's function will be called
// instead of the base class's function.
class Base
{
	public:
		virtual void fun() { std::cout << "Base fun()" << std::endl; }
};

class Derived : public Base
{
	public:
		void fun() { std::cout << "Derived fun()" << std::endl; }
};

// This function only knows it will be receiving a pointer to a Base class object
// but it doesn't know if it will be a Base class object or a Derived class object.
void myFunction(Base *base)
{
	base->fun();
}

int main()
{
	myFunction(new Base());
	myFunction(new Derived());
	return (0);
}
