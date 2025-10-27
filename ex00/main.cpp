#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Pepe");
	ClapTrap b("Juan");

	a.attack("Juan");
	b.takeDamage(5);
	b.beRepaired(3);
	b.attack("Pepe");
	a.takeDamage(9);
	a.beRepaired(10);

	return 0;
}	
