#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_hit = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap constructor called for " << this->_name << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    this->_hit = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap constructor called for " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called for " << this->_name << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destroyed on " << this->_name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_hit = other._hit;
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
    }
    return (*this);
}

void FragTrap::attack(const std::string &target) 
{
    if (this->_energyPoints <= 0)
		std::cout << this->_name << " havn't enough energy points" << std::endl;
	else if (this->_hit <= 0)
		std::cout << this->_name << " is dead" << std::endl;
	else
	{
		this->_energyPoints--;
		std::cout << "FragTrap " << this->_name << " powerfully attacks " << target;
        std::cout << ", dealing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void FragTrap::highFivesGuys()
{
    if (this->_hit > 0)
        std::cout << "FragTrap " << this->_name << " requests a high five! ✋" << std::endl;
}
