#include "Contact.hpp"
#include <iostream>

Contact::Contact(){
	std::cout << "Contact created" << std::endl;
}

Contact::~Contact(){
}

void Contact::printContact(){
	std::cout << "Id: " << this->id << " | Name: " << this->name << std::endl;
}
