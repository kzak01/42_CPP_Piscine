#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include "ASpell.hpp"

class Polymorph : public ASpell {
	public:
		Polymorph() : ASpell("Polymorph", "turned into a critter") {}

		ASpell* clone() const {return new Polymorph();}
};

#endif
