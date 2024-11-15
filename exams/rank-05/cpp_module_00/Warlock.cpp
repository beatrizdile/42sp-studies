#include "Warlock.hpp"

Warlock::Warlock(){}

Warlock::Warlock(const Warlock& other) {
	this->name = other.getName();
	this->title = other.getTitle();
}
		
Warlock& Warlock::operator=(const Warlock& other) {
	if (this == &other)
		return *this;
	
	this->name = other.name;
	this->title = other.title;
	return *this;
}

Warlock::Warlock(std::string name, std::string title) : name(name), title(title) {
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

void Warlock::introduce() const {
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

Warlock::~Warlock(){
	std::cout << this->name << ": My job here is done!" << std::endl;
}

const std::string& Warlock::getName() const {
	return this->name;
}

const std::string& Warlock::getTitle() const {
	return this->title;
}

void Warlock::setTitle(std::string const str) {
	this->title = str;
}
