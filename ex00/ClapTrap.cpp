#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hit(10), _energyPoints(10),
	_attackDamage(0)
{
	std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _hit(10), _energyPoints(10),
	_attackDamage(0)
{
	std::cout << "constructor called for " << Name << std::endl;
	this->_name = Name;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "clapTrap destroyed on " << this->_name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
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

void ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints < 0)
	{
		std::cout << this->_name << " havn't energy points" << std::endl;
		return ;
	}
	if (this->_hit < 0)
	{
		std::cout << this->_name << " is dead" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacked " << target;
	std::cout << " causing " << this->_attackDamage << " damage" << std::endl;
	this->_energyPoints--;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints < 0)
		std::cout << this->_name << " havn't enough energy points" << std::endl;
	else if (this->_hit < 0)
		std::cout << this->_name << " can't repair itself because he's dead" << std::endl;
	else if (this->_hit)
	{
		this->_hit += amount;
		this->_energyPoints--;
		std::cout << this->_name << " repaired itself" << std::endl
		<< "actual hit points : " << this->_hit << std::endl
		<< "actual energy points : " << this->_energyPoints << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energyPoints < 0)
	{
		std::cout << this->_name << " havn't energy points" << std::endl;
		return ;
	}
	if (this->_hit < 0)
	{
		std::cout << this->_name << " is dead" << std::endl;
		return ;
	}
	std::cout << this->_name << " taked " << amount << " damage" << std::endl;
	this->_hit -= amount;
	this->_energyPoints--;
}
