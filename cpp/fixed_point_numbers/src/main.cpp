#include <iostream>
#include <iomanip>

int main()
{
	float num1 = 0.1;
	float num2 = 0.2;

	float res = num1 + num2;
	
	std::cout << std::fixed << std::setprecision(32);
	std::cout << res << std::endl;
}
