#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default_Frag") {
	Hit_points = 100;
	Energy_points = 100;
	attack_damage = 30;
	std::cout << "a default FragTrap has been created!" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	Hit_points = 100;
	Energy_points = 100;
	attack_damage = 30;
	std::cout << "namegiven FragTrap " << this->Name << "has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	*this = other;
	std::cout << "FragTrap " << other.Name << " has been copied to " << Name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "A powerful FragTrap named " << Name << " has been destroyed" << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if (Energy_points == 0 || Hit_points == 0) {
		std::cout << "FragTrap " << Name << " can't attack!" << std::endl;
		return;
	}
	Energy_points--;
	std::cout << "FragTrap " << Name << " ferociously attacks " << target 
			  << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << Name << " is high Fiving u!" << std::endl;
}

