#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap p1 = ClapTrap("bdd");
    for (int i = 0; i < 20; i++)
        p1.attack("p2");
    ClapTrap Faker("Faker");
    std::cout << std::endl;
    Faker.beRepaired(10);
}
