#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include "ASpell.hpp"

class Fwoosh : public ASpell {
	public:
		Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

		Fwoosh* clone() const override {return new Fwoosh(*this);}
		void launch(const ATarget& target) const override {target.getHitBySpell(*this);}
};

#endif
