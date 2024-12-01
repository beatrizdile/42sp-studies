#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::~Warlock() {
	std::cout << name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(Warlock const & other) {
	*this = other;
}

Warlock& Warlock::operator=(Warlock const & other) {
	if (this == &other)
		return *this;
	
	this->name = other.getName();
	this->title = other.getTitle();
	return *this;
}

Warlock::Warlock(std::string name, std::string title) : name(name), title(title) {
	std::cout << name << ": This looks like another boring day." << std::endl;
}

std::string const & Warlock::getName() const{
	return (name);
}

std::string const & Warlock::getTitle() const{
	return (title);
}

void Warlock::introduce() const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::setTitle(std::string const & str) {
	this->title = str;
}
