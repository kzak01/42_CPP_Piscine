#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget {
	protected:
		std::string type;

	public:
		ATarget(const std::string& type) : type(type) {}
		virtual ~ATarget() {}

		ATarget();
		ATarget(const ATarget& asd) {*this = asd;}
		ATarget& operator=(const ATarget& asd) {this->type = asd.getType(); return *this;}

		const std::string& getType() const {return type;}

		virtual ATarget* clone() const = 0;
		void getHitBySpell(const ASpell& spell) const;
};

#endif
