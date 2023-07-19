#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell {
	protected:
		std::string name;
		std::string effects;

	public:
		ASpell(const std::string& name, const std::string& effects) : name(name), effects(effects) {}
		virtual ~ASpell() {}

		ASpell() {}
		ASpell(const ASpell& asd) {*this = asd;}
		ASpell& operator=(const ASpell& asd) {this->name = asd.getName(); this->effects = asd.getEffects(); return *this;}

		const std::string& getName() const {return name;}
		const std::string& getEffects() const {return effects;}

		virtual ASpell* clone() const = 0;
		virtual void launch(const ATarget& target) const;
};

#endif
