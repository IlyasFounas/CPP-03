#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "string"
# include "iostream"

class ClapTrap
{
  public:
    ClapTrap();
    ClapTrap(const std::string Name);
    ClapTrap(const ClapTrap &other);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap &other);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
  
  private:
	std::string Name;
	int _hit = 10;
    int _energyPoints = 10;
    int _attackDamage = 0;
};

#endif