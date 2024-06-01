#include <iostream>

// We use "virtual" keyword to achieve dynamic binding, which means that when this
// function is declared in a derived class, the derived class's function will be called
// instead of the base class's function.
class Base
{
	public:
		Base() { x = 42;}
		int x;
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

// This function will be receiving a copy of the object passed as a parameter.
// even if the passed object is from a derived class, it's functions
// will be replaced by the base class's functions.
// We need to pass the object as a reference or pointer to avoid this.
void doSomething(Base base)
{
	base.fun();
	std::cout << "x: " << base.x << std::endl;
}

// The decision of which function to call (the base or derived func) is made at
// runtime, so this is called dynamic binding.
int main()
{
	myFunction(new Base());
	myFunction(new Derived());

	std::cout << "-----------------" << std::endl;

	Base base;
	Base derived;
	derived.x = 10;

	doSomething(base);
	doSomething(derived);

	return (0);
}
