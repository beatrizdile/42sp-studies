#include "ASpell.hpp"

ASpell::ASpell() {};

ASpell::~ASpell() {};

ASpell & ASpell::operator=(ASpell const & other) {
	this->name = other.getName();
	this->effects = other.getEffects();
	return *this;
}

ASpell::ASpell(ASpell const & other) {
	*this = other;
}

ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects){
}

std::string ASpell::getName() const{
	return this->name;
}

std::string ASpell::getEffects() const{
	return this->effects;
}

void ASpell::launch(ATarget const & target) {
	target.getHitBySpell(*this);
}