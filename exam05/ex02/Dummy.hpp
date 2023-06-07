#ifndef DUMMY_HPP
# define DUMMMY_HPP

# include "ATarget.hpp"

class Dummy : public ATarget {
	public:
		Dummy() : ATarget("Target Practice Dummy") {}

		Dummy* clone() const override {return new Dummy(*this);}
		void getHitBySpell(const ASpell& spell) const override {
			std::cout << getType() << " has been " << spell.getEffects() << "!" << std::endl;
		}
};

#endif
