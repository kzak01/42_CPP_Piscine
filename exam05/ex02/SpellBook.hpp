#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <vector>
# include "ASpell.hpp"

class SpellBook {
	private:
		std::vector<ASpell*> spells;

		SpellBook(const SpellBook&);
		SpellBook& operator=(const SpellBook&);

	public:
		SpellBook() {}
		~SpellBook() {
			for (ASpell* spell : spells)
				delete spell;
		}

		void learnSpell(ASpell* spell) {
			if (spell)
				spells.push_back(spell->clone());
		}
		void forgetSpell(const std::string& spellName) {
			for (std::vector<ASpell*>::iterator it = spells.begin(); it != spells.end(); it++) {
				if ((*it)->getName() == spellName) {
					delete *it;
					spells.erase(it);
					break;
				}
			}
		}
		ASpell* createSpell(const std::string& spellName) const {
			for (ASpell* spell : spells) {
				if (spell->getName() == spellName) {
					return spell->clone(); //qui
				}
			}
			return nullptr;
		}
};

#endif
