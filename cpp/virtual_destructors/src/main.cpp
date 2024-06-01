#include <iostream>

// virtual destructors work differently than virtual functions
// with virtual methods, the implementation found in the derived class is the one to be called
// but with destructors, we add the derived class destructor to be called first and 
// then the base class destructor

class Base
{
	public:
		Base() {std::cout << "Base constructor" << std::endl;}
		// if we don't make the destructor virtual, the derived class destructor will not be called
		// in case it's a polymorphic object
		virtual ~Base() {std::cout << "Base destructor" << std::endl;}
};

class Derived : public Base
{
	public:
		Derived() {std::cout << "Derived constructor" << std::endl;}
		~Derived() {std::cout << "Derived destructor" << std::endl;}
};

int main()
{
	Base* base = new Base();
	delete base;
	std::cout << "----------------" << std::endl;
	Base* derived = new Derived();
	delete derived;
	std::cout << "----------------" << std::endl;
	Base* poly = new Derived();
	delete poly;

	return 0;
}
