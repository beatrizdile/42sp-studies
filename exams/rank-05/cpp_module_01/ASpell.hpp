#include <iostream>

class ASpell {
	protected:
		std::string name;
		std::string effects;
	public:
		ASpell();
		virtual ~ASpell();
		ASpell(ASpell const & other);
		ASpell & operator=(ASpell const & other);
		std::string const & getName() const;
		std::string const & getEffects() const;
		virtual ASpell* clone() const = 0;
		ASpell(std::string name, std::string effects);
};
