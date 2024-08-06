#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::TargetGenerator(TargetGenerator const &other){
	*this = other;
}

TargetGenerator &TargetGenerator::operator=(TargetGenerator const &other){
	target = other.target;
	return *this;
}

TargetGenerator::~TargetGenerator(){}

void TargetGenerator::learnTargetType(ATarget *target){
	if(target)
		this->target[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const & target){
	if(this->target.find(target) != this->target.end())
		this->target.erase(this->target.find(target));
}

ATarget *TargetGenerator::createTarget(std::string const &target){
	ATarget*tmp = NULL;

	if(this->target.find(target) != this->target.end())
		tmp = this->target[target];
	return tmp;
}
