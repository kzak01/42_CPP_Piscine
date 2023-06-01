#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <string>
# include <vector>
# include "ASpell.hpp"

class SpellBook {
	private:
		std::vector<ASpell*> spells;

	public:
		SpellBook() {}
		SpellBook(const SpellBook&) = delete;
		SpellBook& operator=(const SpellBook&) = delete;
		~SpellBook() {
			for (ASpell* spell : spells)
				delete spell;
		}

		void learnSpell(ASpell* spell) {spells.push_back(spell->clone());}
		void forgetSpell(const std::string& spellName) {
			for (auto it = spells.begin(); it != spells.end(); it++) {
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
					return spell->clone();
				}
			}
			return nullptr;
		}
};

#endif
