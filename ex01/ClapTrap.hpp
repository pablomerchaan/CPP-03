#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
	protected:
		std::string Name;
		unsigned int Hit_points;
		unsigned int Energy_points;
		unsigned int attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
		virtual ~ClapTrap();
		virtual void	attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
