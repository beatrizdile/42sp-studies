#include <iostream>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class ASpell;
class ATarget;

class Warlock {
	private:
		Warlock& operator=(Warlock const & other);
		Warlock();
		Warlock(Warlock const & other);
		std::string title;
		std::string name;
		std::map<std::string, ASpell *> spellBook;
	public:
		~Warlock();
		Warlock(std::string name, std::string title);
		std::string const & getTitle() const;
		std::string const & getName() const;
		void setTitle(std::string const & str);
		void introduce() const;
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const & spellName);
		void launchSpell(std::string const & spellName, ATarget const & target);
};
