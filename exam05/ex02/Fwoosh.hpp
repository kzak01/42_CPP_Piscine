#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include "ATarget.hpp"
# include "ASpell.hpp"

class Fwoosh : public ASpell {
	public:
		Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

		Fwoosh* clone() const override {return new Fwoosh(*this);}
		void launch(const ATarget& target) const override {
			std::cout << target.getType() << " has been " << getEffects() << "!" << std::endl;
		}
};

#endif
