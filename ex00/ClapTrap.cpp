#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: Name(name), Hit_points(10), Energy_points(10), attack_damage(0) {
	std::cout << name << " has been created" << std::endl;
}

ClapTrap::ClapTrap()
    : Name("Default"), Hit_points(10), Energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap default constructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "ClapTrap assignment operator called" << std::endl;
	if(this != &other) {
		this->Name = other.Name;
		this->Hit_points = other.Hit_points;
		this->Energy_points = other.Energy_points;
		this->attack_damage = other.attack_damage;
	}
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap() {
	std::cout << this->Name << " has been destroyed" << std::endl;
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
		<< " hit points now having " << Hit_points << "hit points" << std::endl;
	Energy_points--;
}
