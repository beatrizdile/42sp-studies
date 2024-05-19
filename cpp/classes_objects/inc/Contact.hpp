#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	public:
		Contact();
		~Contact();
		int 		id;
		std::string	name;
		void printContact();
	private:

};

#endif