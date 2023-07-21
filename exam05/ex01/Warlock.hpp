#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock {
	private:
		std::string name;
		std::string title;
		std::map<std::string, ASpell*> spells;

		Warlock();
		Warlock(const Warlock&);
		Warlock& operator=(const Warlock&);

	public:
		Warlock(const std::string& name, const std::string& title) : name(name), title(title) {
			std::cout << name << ": This looks like another boring day." << std::endl;
		}
		~Warlock() {
			std::cout << name << ": My job here is done!" << std::endl;
		}

		const std::string& getName() const {return name;}
		const std::string& getTitle() const {return title;}
		void setTitle(const std::string& title) {this->title = title;}

		void introduce() const {
			std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
		}
		void learnSpell(ASpell* spell) {
			if (spell)
				spells[spell->getName()] = spell;
		}
		void forgetSpell(const std::string& spellName) {
			if (spells.find(spellName) != spells.end()) {
				spells.erase(spells.find(spellName));
			}
		}
		void launchSpell(const std::string& spellName, const ATarget& target) {
			if (spells.find(spellName) != spells.end())
				spells[spellName]->launch(target);
		}
};

#endif
