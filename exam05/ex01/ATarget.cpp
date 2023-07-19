# include "ATarget.hpp"

void ATarget::getHitBySpell(const ASpell& spell) const {
    std::cout << getType() << " has been " << spell.getEffects() << "!" << std::endl;
}
