#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
	protected:
		std::string type;
	public:
		ATarget();
		virtual ~ATarget();
		ATarget & operator=(ATarget const & other);
		ATarget(ATarget const & other);
		ATarget(std::string type);
		std::string getType() const;
		virtual ATarget* clone() const = 0;
		void getHitBySpell(ASpell const & spell) const;
};