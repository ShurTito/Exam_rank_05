#include "ATarget.hpp"

ATarget::ATarget(std::string type) : type(type){}

ATarget &  ATarget::operator=(ATarget const &other){
	type = other.getType();
	return *this;
}

ATarget::ATarget(ATarget const &other){
	*this = other;
}

ATarget::~ATarget(){}

std::string ATarget::getType() const{
	return type;
}

void ATarget::getHitBySpell(ASpell const & spell)const{
	std::cout << type << " has been " << spell.getEffects() << "!\n";
}
