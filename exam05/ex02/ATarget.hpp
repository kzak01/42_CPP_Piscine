#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>

class ASpell;

class ATarget{
	protected:
		std::string type;

	public:
		ATarget(const std::string& type) : type(type) {}
		virtual ~ATarget() {}

		const std::string& getType() const {return type;}

		virtual ATarget* clone() const = 0;
		virtual void getHitBySpell(const ASpell& spell) const = 0;
};

#endif
