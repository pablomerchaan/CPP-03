#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default_Scav") {
	Hit_points = 100;
	Energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap created (default)" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	Hit_points = 100;
	Energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap " << this->Name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	*this = other;
	std::cout << "ScavTrap " << Name << " copied" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << Name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (Energy_points == 0 || Hit_points == 0) {
		std::cout << "ScavTrap " << Name << " can't attack!" << std::endl;
		return;
	}
	Energy_points--;
	std::cout << "ScavTrap " << Name << " ferociously attacks " << target 
			  << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << Name << " is now in Gate Keeper mode." << std::endl;
}

