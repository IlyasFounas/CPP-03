#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_hit = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap constructor called for " << this->Name << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    this->_hit = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap constructor called for " << this->Name << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called for " << this->Name << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destroyed on " << this->Name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        this->Name = other.Name;
        this->_hit = other._hit;
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
    }
    return (*this);
}

void FragTrap::attack(const std::string &target) 
{
    if (this->_energyPoints <= 0)
    {
        std::cout << this->Name << " has no energy points left!" << std::endl;
        return;
    }
    if (this->_hit <= 0)
    {
        std::cout << this->Name << " is dead and cannot attack!" << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->Name << " powerfully attacks " << target;
    std::cout << ", dealing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->Name << " requests a high five! ✋" << std::endl;
}
