#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include "ASpell.hpp"
# include "SpellBook.hpp"
# include "ATarget.hpp"

class Warlock {
	private:
		std::string name;
		std::string title;
		SpellBook spellBook;

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
		void learnSpell(ASpell* spell) {spellBook.learnSpell(spell);}
		void forgetSpell(const std::string& spellName) {spellBook.forgetSpell(spellName);}
		void launchSpell(const std::string& spellName, const ATarget& target) {
			ASpell* spell = spellBook.createSpell(spellName);
			if (spell != nullptr) {
				spell->launch(target);
				delete spell;
			}
		}
};

#endif
