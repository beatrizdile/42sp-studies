#include <iostream>

int main()
{
	int number = 2;
	switch (number)
	{
		case 1:
			std::cout << "Number is 1" << std::endl;
			break;
		case 2:
			std::cout << "Number is 2" << std::endl;
			break;
		case 3:
			std::cout << "Number is 3" << std::endl;
			break;
		default:
			std::cout << "Number is not 1, 2 or 3" << std::endl;
			break;
	}

	return 0;
}
