#include <iostream>

class Entity
{
	private:
		int a, b;
		// int* a, b; // a is a pointer, b is an integer
		mutable int var;
	public:
		// if we've got a pointer variable as an attribute, we can make it const all around like this:
			// const int* const GetA() const
			// {
				// return a;
			// }
		// this means we are returning a const pointer that can't be modified,
		// the content of the pointer is also const and can't be modified
		// and the method itself is const and can't modify any variable

		int GetA() const
		{
			// a = 2; // Error: cannot change a variable in a const method
			// var = 2; // mutable variable can be changed in a const method
			return a;
		}

		void SetA(int x)
		{
			a = x;
		}
};

// "const Entity& e" means the same as "const Entity*: 
// we can't modify the value of what it's pointing to,
// but we can modify the address it points to

// therefore, inside the scope of this function, we can't modify the 
// contents of Entity object
void PrintEntity(const Entity& e)
{
	// if the method GetA() is not const, we can't guarantee that the object won't be modified
	// e.SetA(2); // Error: cannot change a variable in a const method
	std::cout << e.GetA() << std::endl;
}

int main()
{
	Entity e;
}
