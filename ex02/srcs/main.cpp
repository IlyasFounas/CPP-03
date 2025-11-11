#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap dest("destroyer");
    ScavTrap term("terminator");

    std::cout << std::endl << "DEST AND TERM TESTS :" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        dest.attack("term");
        term.takeDamage(30);
        term.attack("dest");
        dest.takeDamage(20);
    }
    
    std::cout << std::endl << "END TESTS :" << std::endl;
    dest.highFivesGuys();
    term.guardGate();

    std::cout << std::endl << "DESTRUCTORS :" << std::endl;
    return (0);
}
