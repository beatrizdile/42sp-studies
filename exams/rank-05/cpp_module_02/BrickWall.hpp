#pragma once

#include <iostream>
#include "ATarget.hpp"

class BrickWall : public ATarget {
	public:
		BrickWall();
		ATarget* clone() const;
		~BrickWall();
};
