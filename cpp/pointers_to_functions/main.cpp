#include <iostream>

void test(void)
{
	std::cout << "this is a test" << std::endl;
}

int main()
{
	void (*func) (void) = &test;
	func();
}
