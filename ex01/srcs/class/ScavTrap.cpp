#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hit = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap constructor called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    this->_hit = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap constructor called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called for " << this->_name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destroyed on " << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
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

void ScavTrap::attack(const std::string &target) 
{
    if (this->_energyPoints < 0)
		std::cout << this->_name << " havn't enough energy points" << std::endl;
	else if (this->_hit < 0)
		std::cout << this->_name << " is dead" << std::endl;
	else
	{
		this->_energyPoints--;
		std::cout << this->_name << " ferociously attacks " << target ;
		std::cout << " dealing " << this->_attackDamage << " points of damage!" << std::endl
		<< this->_name << " actual energy points : " << this->_energyPoints << std::endl;
	}
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " has entered Gate Keeper mode. No one shall pass!" << std::endl;
}
