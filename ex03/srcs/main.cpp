#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap faker("faker");
    DiamondTrap bdd("bdd");

    std::cout << std::endl << "____________________________________"
    << std::endl << std::endl << "FAKER, the B.M.O.A.T (better midlaner of all time)"
    << std::endl << std::endl << "VS" << std::endl << std::endl << "bdd"
    << std::endl << "____________________________________" << std::endl << std::endl;

    faker.guardGate();
    std::cout << std::endl;

    faker.attack("bdd");
    bdd.takeDamage(30);

    std::cout << std::endl;
    faker.attack("bdd");
    bdd.takeDamage(30);

    std::cout << std::endl;
    faker.attack("bdd");
    bdd.takeDamage(30);

    std::cout << std::endl;
    faker.attack("bdd");
    bdd.takeDamage(30);

    std::cout << std::endl << "SPECIAL ABILITIES :" << std::endl;
    faker.highFivesGuys();
    faker.whoAmI();
    
    std::cout << std::endl << "DESTRUCTORS :" << std::endl;
    return (0);
}
