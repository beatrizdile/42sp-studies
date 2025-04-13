#include "SpellBook.hpp"

SpellBook::SpellBook(SpellBook const & other) {
	*this = other;
}

SpellBook & SpellBook::operator=(SpellBook const & other) {
	spellBook = other.spellBook;
	return (*this);
}

SpellBook::SpellBook()
{}

SpellBook::~SpellBook()
{}

void SpellBook::learnSpell(ASpell* spell) {
	if (spell)
		if (spellBook.find(spell->getName()) == spellBook.end())
			spellBook[spell->getName()] = spell->clone();
};


void SpellBook::forgetSpell(std::string const & spellName) {
	if (spellBook.find(spellName) != spellBook.end()) {
		spellBook.erase(spellBook.find(spellName));
	}
}

ASpell* SpellBook::createSpell(std::string const & spellName, ATarget const & target) {
	ASpell* tmp = NULL;
	if (spellBook.find(spellName) != spellBook.end())
		tmp = spellBook[spellName];

	return tmp;
}