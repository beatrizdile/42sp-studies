#include "ASpell.hpp"

ASpell::ASpell() {
}

ASpell::ASpell(ASpell const & other) {
	*this = other;
}

ASpell & ASpell::operator=(ASpell const & other) {
	this->name = other.getName();
	this->effects = other.getEffects();

	return *this;
}

ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects) {
}

std::string const & ASpell::getName() const{
	return (name);
}

std::string const & ASpell::getEffects() const{
	return (effects);
}


