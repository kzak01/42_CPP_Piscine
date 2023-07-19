#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include "ATarget.hpp"

class BrickWall : public ATarget {
	public:
		BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}

		ATarget* clone() const override {return new BrickWall(*this);}
};

#endif
