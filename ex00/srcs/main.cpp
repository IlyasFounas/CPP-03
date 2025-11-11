#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap p1 = ClapTrap("bdd");
    ClapTrap Faker("Faker");

    std::cout << std::endl << "P1 TESTS : " << std::endl;
    for (int i = 0; i < 20; i++)
        p1.attack("p2");

    std::cout << std::endl << "FAKER TESTS : " << std::endl;
    Faker.takeDamage(10);
    Faker.beRepaired(10);

    std::cout << std::endl << "DESTRUCTORS : " << std::endl;
}
