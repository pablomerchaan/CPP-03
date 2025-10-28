#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap Scav("Lolo");
	ScavTrap Scav3("Guardian");
	FragTrap Frag("Lolo");
	FragTrap Frag3("Guardian");
	FragTrap Frag2(Frag3);
	
	ClapTrap a("Pepe");
	ClapTrap b("Juan");

	Scav.attack("Juan");
	Frag2.takeDamage(5);
	Frag2.beRepaired(3);
	Frag3.attack("Pepe");
	Frag.takeDamage(9);
	a.beRepaired(10);

	return 0;
}	
