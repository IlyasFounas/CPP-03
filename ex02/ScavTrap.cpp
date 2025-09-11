#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_hit = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap constructor called for " << this->Name << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    this->_hit = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap constructor called for " << this->Name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called for " << this->Name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destroyed on " << this->Name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
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

void ScavTrap::attack(const std::string &target) 
{
    if (this->_energyPoints < 0)
	{
		std::cout << this->Name << " havn't energy points" << std::endl;
		return ;
	}
	if (this->_hit < 0)
	{
		std::cout << this->Name << " is dead" << std::endl;
		return ;
	}
    std::cout << this->Name << " ferociously attacks " << target ;
    std::cout << " dealing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name << " has entered Gate Keeper mode. No one shall pass!" << std::endl;
}