#include <iostream>

int main()
{
	const int MAX_AGE = 90;
	int* a = new int;

	*a = 8;
	std::cout << "a: " << a <<  std::endl;
	std::cout << "*a: " << *a << std::endl;

	a = (int*)&MAX_AGE;
	std::cout << "a: " << a <<  std::endl;
	std::cout << "*a: " << *a << std::endl;


	// In here, we can't change the value of a const pointer variable
	// but we can change the variable it points to
	const int* b = new int; // or int const* b = new int;
	// *b = 8; // Error: cannot change the value of a const pointer
	b = (int*)&MAX_AGE;
	std::cout << "b: " << b <<  std::endl; 
	std::cout << "*b: " << *b <<  std::endl; 


	// In here, we can change the value of a pointer variable
	// but we can't change the variable it points to
	int* const c = new int;
	*c = 8;
	// c = (int*)&MAX_AGE; // Error: cannot change the pointer it points to
	std::cout << "c: " << c <<  std::endl;
	std::cout << "*c: " << *c <<  std::endl;


	// In here, we can't change the value nor the pointer it points to
	const int* const d = new int;
	// *d = 8; // Error: cannot change the value of a const pointer
	// d = (int*)&MAX_AGE; // Error: cannot change the pointer it points to
}
