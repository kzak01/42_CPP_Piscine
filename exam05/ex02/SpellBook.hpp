#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <map>
# include "ASpell.hpp"

class SpellBook {
	private:
		std::map<std::string, ASpell*> spells;

		SpellBook(const SpellBook&);
		SpellBook& operator=(const SpellBook&);

	public:
		SpellBook() {}
		~SpellBook() {}

		void learnSpell(ASpell* spell) {
			if (spell)
				spells[spell->getName()] = spell;
		}
		void forgetSpell(const std::string& spellName) {
			if (spells.find(spellName) != spells.end())
				spells.erase(spells.find(spellName));
		}
		ASpell* createSpell(const std::string& spellName) {
			ASpell* spell = NULL;
			if (spells.find(spellName) != spells.end())
				spell = spells[spellName];
			return spell;
		}
};

#endif
