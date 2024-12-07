#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
	protected:
		std::string name;
		std::string effects;
	public:
		ASpell();
		virtual ~ASpell();
		ASpell & operator=(ASpell const & other);
		ASpell(ASpell const & other);
		ASpell(std::string name, std::string effects);
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell* clone() const = 0;
		void launch(ATarget const & target);
};
