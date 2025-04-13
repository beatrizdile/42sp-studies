#include <iostream>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class ASpell;
class ATarget;

class Warlock {
	private:
		Warlock& operator=(Warlock const & other);
		Warlock();
		Warlock(Warlock const & other);
		std::string title;
		std::string name;
		SpellBook _SpellBook;
	public:
		~Warlock();
		Warlock(std::string name, std::string title);
		std::string const & getTitle() const;
		std::string const & getName() const;
		void setTitle(std::string const & str);
		void introduce() const;
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string spellName);
		void launchSpell(std::string spellName, ATarget const & target);
};
