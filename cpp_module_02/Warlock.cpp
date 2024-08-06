#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : name(name), title(title){
	std::cout << name << ": This looks like another boring day.\n";
}

Warlock::Warlock(){}

Warlock::~Warlock(){
	std::cout << name << ": My job here is done!\n";
}

Warlock::Warlock(Warlock const &other){
	*this = other;
}

Warlock &Warlock::operator=(Warlock const &other){
	this->name = other.name;
	this->title = other.title;
	return *this;
}

std::string const & Warlock::getTitle() const{
	return title;
}

std::string const & Warlock::getName() const{
	return name;
}

void Warlock::setTitle(std::string const &str){
	title = str;
}

void Warlock::introduce() const{
	std::cout << name << ": I am " << name << ", " << title << "!\n";
}

void Warlock::learnSpell(ASpell *spell){
	spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellName){
	spellBook.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, ATarget const & target){
	if(spellBook.createSpell(spellName))
		spellBook.createSpell(spellName)->launch(target);
}

