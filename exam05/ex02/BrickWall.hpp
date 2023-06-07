#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include "ATarget.hpp"

class BrickWall : public ATarget {
	public:
		BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}

		BrickWall* clone() const override {return new BrickWall(*this);}
		void getHitBySpell(const ASpell& spell) const override {
			std::cout << getType() << " has been " << spell.getEffects() << "!" << std::endl;
		}
};

#endif
