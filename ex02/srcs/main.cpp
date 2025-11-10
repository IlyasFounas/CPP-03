#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap dest("destroyer");
    ScavTrap term("terminator");

    for (int i = 0; i < 4; i++)
    {
        dest.attack("term");
        term.takeDamage(30);
        term.attack("dest");
        dest.takeDamage(20);
    }
    dest.highFivesGuys();
    term.guardGate();
    return (0);
}
