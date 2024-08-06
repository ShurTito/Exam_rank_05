#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects){}

ASpell & ASpell::operator=(ASpell const & other){
	name = other.getName();
	effects = other.getEffects();
	return *this;
}

ASpell::ASpell(ASpell const &other){
	*this = other;
}

ASpell::~ASpell(){}

std::string ASpell::getName() const{
	return name;
}

std::string ASpell::getEffects() const{
	return effects;
}

void ASpell::launch(ATarget const &target) const{
	target.getHitBySpell(*this);
}
