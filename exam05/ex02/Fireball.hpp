#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include "ASpell.hpp"
# include "ATarget.hpp"

class Fireball : public ASpell {
	public:
		Fireball() : ASpell("Fireball", "burnt to a crisp") {}

		Fireball* clone() const override {return new Fireball(*this);}
		void launch(const ATarget& target) const override {
			std::cout << target.getType() << " has been " << getEffects() << "!" << std::endl;
		}
};

#endif
