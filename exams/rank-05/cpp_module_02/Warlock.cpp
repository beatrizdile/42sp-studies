#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::~Warlock() {
	std::cout << name << ": My job here is done!" << std::endl;
	for (std::map<std::string, ASpell *>::iterator it = spellBook.begin(); it != spellBook.end(); ++it) {
		delete it->second;
	}
	spellBook.clear();
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

void Warlock::learnSpell(ASpell* spell)
{
	_SpellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string SpellName)
{
	_SpellBook.forgetSpell(SpellName);
}

void Warlock::launchSpell(std::string SpellName, ATarget const & target)
{
	if (_SpellBook.createSpell(SpellName))
		_SpellBook.createSpell(SpellName)->launch(target);
}
