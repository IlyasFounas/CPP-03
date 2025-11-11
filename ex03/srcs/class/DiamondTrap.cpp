#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"),
                             ScavTrap("default"),
                             FragTrap("default")
{
    this->_name = "default";
    this->_hit = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
    std::cout << "DiamondTrap constructor called for " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"),
                                                    ScavTrap(name),
                                                    FragTrap(name)
{
    this->_name = name;
    this->_hit = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
    std::cout << "DiamondTrap constructor called for " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other),
                                                     ScavTrap(other),
                                                     FragTrap(other)
{
    *this = other;
    std::cout << "DiamondTrap copy constructor called for " << this->_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destroyed on " << this->_name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
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

void DiamondTrap::whoAmI()
{
    std::cout << "I'm " << this->_name << " and my ClapTrap name is "
    << ClapTrap::_name << std::endl;
}
