#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
	: Name("Default"), Hit_points(10), Energy_points(10), attack_damage(0) {
	std::cout << "ClapTrap created (default)" << std::endl;
}

ClapTrap::ClapTrap(std::string name): Hit_points(10), Energy_points(10), attack_damage(0) {
	this->Name = name;
	std::cout << "ClapTrap " << name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;
	std::cout << "ClapTrap " << Name << " copied" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << this->Name << " has been destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		Name = other.Name;
		Hit_points = other.Hit_points;
		Energy_points = other.Energy_points;
		attack_damage = other.attack_damage;
	}
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (Energy_points == 0 || Hit_points == 0) {
		std::cout << "ClapTrap " << Name << " has no energy or is dead" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->Name << " attacks " << target
		<< " causing " << attack_damage << " points of damage" << std::endl;
	Energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (Hit_points == 0) {
		std::cout << "ClapTrap " << Name << " is already dead" << std::endl;
		return;
	}
	if (Hit_points > amount)
		Hit_points -= amount;
	else
		Hit_points = 0;
	std::cout << "ClapTrap " << this->Name << " received " << amount
		<< " points of damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (Energy_points == 0 || Hit_points == 0) {
		std::cout << "ClapTrap " << Name << " can't repair" << std::endl;
		return;
	}
	Hit_points += amount;
	std::cout << "ClapTrap " << this->Name << " has been repaired gaining " << amount
		<< " hit points now having " << Hit_points << "Hit points" << std::endl;
	Energy_points--;
}
