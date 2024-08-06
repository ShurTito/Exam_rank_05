#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"


class Warlock{

	private:
		std::string name;
		std::string title;
		Warlock();
		Warlock(Warlock const &other);
		Warlock &operator=(Warlock const &other);
		std::map<std::string, ASpell *> spellBook;
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock();
		std::string const & getName() const;
		std::string const & getTitle() const;
		void setTitle(std::string const &str);
		void introduce() const;
		void learnSpell(ASpell * spell);
		void forgetSpell(std::string SpellName);
		void launchSpell(std::string SpellName, ATarget const & target);
};
