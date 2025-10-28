#include "ScavTrap.hpp"

int main()
{
	ScavTrap Scav("Lolo");
	ScavTrap Scav3("Guardian");
	ScavTrap Scav2(Scav3);
	
	ClapTrap a("Pepe");
	ClapTrap b("Juan");

	Scav.attack("Juan");
	Scav2.takeDamage(5);
	Scav2.beRepaired(3);
	Scav3.attack("Pepe");
	Scav.takeDamage(9);
	a.beRepaired(10);

	return 0;
}	
