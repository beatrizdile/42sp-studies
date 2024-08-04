#include <iostream>

template <typename T>
class Calculator
{
	public:
		T add(T a, T b)
		{
			return a + b;
		}

		T subtract(T a, T b)
		{
			return a - b;
		}

		T multiply(T a, T b)
		{
			return a * b;
		}

		T divide(T a, T b)
		{
			return a / b;
		}
};

int main()
{
	Calculator<int> intCalc;
	std::cout << "Int results:" << std::endl;
	std::cout << "Add: " << intCalc.add(1, 2) << std::endl;
	std::cout << "Subtract: " << intCalc.subtract(1, 2) << std::endl;
	std::cout << "Multiply: " << intCalc.multiply(1, 2) << std::endl;
	std::cout << "Divide: " << intCalc.divide(1, 2) << std::endl;

	Calculator<float> floatCalc;
	std::cout << "Float results:" << std::endl;
	std::cout << "Add: " << floatCalc.add(1.1, 2.2) << std::endl;
	std::cout << "Subtract: " << floatCalc.subtract(1.1, 2.2) << std::endl;
	std::cout << "Multiply: " << floatCalc.multiply(1.1, 2.2) << std::endl;
	std::cout << "Divide: " << floatCalc.divide(1.1, 2.2) << std::endl;

	return 0;
}
