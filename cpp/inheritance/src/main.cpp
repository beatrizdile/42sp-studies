#include <iostream>

class MenuItem
{
public:
	std::string name;
	double		calories;

	void	print(){
		std::cout << name << " [" << calories << " cal]" << std::endl;
	}
};

class Drink : public MenuItem
{
public:
	double ounces;

	double cal_per_ounce(){
		return calories / ounces;
	}
};

int main()
{
	MenuItem frenchFries;
	frenchFries.name = "French Fries";
	frenchFries.calories = 300;
	frenchFries.print();

	Drink hot_chocolate;
	hot_chocolate.name = "Hot Chocolate";
	hot_chocolate.calories = 400;
	hot_chocolate.ounces = 8;

	MenuItem *pItem = &hot_chocolate;
	pItem->print();
	std::cout << "Calories per ounce: " << hot_chocolate.cal_per_ounce() << std::endl;
}
