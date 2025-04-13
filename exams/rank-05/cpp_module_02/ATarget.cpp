#include "ATarget.hpp"

ATarget::ATarget() {};

ATarget::~ATarget() {};

ATarget & ATarget::operator=(ATarget const & other) {
	this->type = other.getType();
	return *this;
}

ATarget::ATarget(ATarget const & other) {
	*this = other;
}

ATarget::ATarget(std::string type) : type(type) {
}

std::string ATarget::getType() const {
	return this->type;
}

void ATarget::getHitBySpell(ASpell const & spell) const {
	std::cout << this->type << " has been " << spell.getEffects() << std::endl;
}