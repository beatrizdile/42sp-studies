#include <iostream>

template <typename T>
void Print(T value)
{
	std::cout << value << std::endl;
}

int main()
{
	Print(42);
	Print(42.2f);
	Print("Hello, World!");
}
