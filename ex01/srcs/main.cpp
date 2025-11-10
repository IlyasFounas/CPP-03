#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap faker("Faker");
    ScavTrap chovy("Chovy");
    
    std::cout << std::endl << "FAKER TESTS :" << std::endl;
    faker.attack("Chovy");
    chovy.takeDamage(20);
    faker.attack("Chovy");
    chovy.takeDamage(20);

    std::cout << std::endl << "CHOVY TESTS :" << std::endl;
    chovy.guardGate();
    chovy.takeDamage(50);
    chovy.attack("Faker");
    faker.takeDamage(20);
    chovy.beRepaired(14);
    chovy.takeDamage(50);

    std::cout << std::endl << "DESTRUCTORS :" << std::endl;
    return (0);
}
