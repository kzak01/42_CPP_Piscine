#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock {
	private:
		std::string name;
		std::string title;
		std::vector<ASpell*> spells;
		Warlock();
		Warlock(const Warlock&);
		Warlock& operator=(const Warlock&);

	public:
		Warlock(const std::string& name, const std::string& title) : name(name), title(title) {
			std::cout << name << ": This looks like another boring day." << std::endl;
		}
		~Warlock() {
			std::cout << name << ": My job here is done!" << std::endl;
			for (ASpell* spell : spells)
				delete spell;
		}

		const std::string& getName() const {return name;}
		const std::string& getTitle() const {return title;}
		void setTitle(const std::string& title) {this->title = title;}

		void introduce() const {
			std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
		}
		void learnSpell(ASpell* spell) {
			if (spell)
				spells.push_back(spell);
		}
		void forgetSpell(const std::string& spellName) {
			for (std::vector<ASpell*>::iterator it = spells.begin(); it != spells.end(); ++it) {
				if ((*it)->getName() == spellName) {
					delete *it;
					spells.erase(it);
					break;
				}
			}
		}
		void launchSpell(const std::string& spellName, const ATarget& target) {
			for (ASpell* spell : spells) {
				if (spell->getName() == spellName) {
					spell->launch(target);
					break;
				}
			}
		}
};

#endif
