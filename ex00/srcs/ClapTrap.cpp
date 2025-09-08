#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("Default"), _hit(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _hit(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "constructor called for" << Name << std::endl;
	this->Name = Name;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "clapTrap destroyed on " << this->Name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        this->Name = other.Name;
        this->_hit = other._hit;
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
    }
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hit > 0)
	{
		std::cout << this->Name << " attacked " << target;
        std::cout << " causing " << this->_attackDamage << " damage" << std::endl; 
		this->_energyPoints--;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hit > 0)
	{
		std::cout << this->Name << " repaired itself" << std::endl;
        this->_hit += amount;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_energyPoints > 0 && this->_hit > 0)
	{
		std::cout << this->Name << " taked " << amount << " damage" << std::endl;
        this->_hit -= amount;
		this->_energyPoints--;
	}
}
