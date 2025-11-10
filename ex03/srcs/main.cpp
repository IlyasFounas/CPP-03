#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap dest("destroyer");
    DiamondTrap term("terminator");

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
    return (0);
}
