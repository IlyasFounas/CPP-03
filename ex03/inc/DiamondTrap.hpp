#ifndef DIAMOND_TRAPP_HPP
#define DIAMOND_TRAPP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;
    
    public:
        DiamondTrap();
        DiamondTrap(const std::string &name);
        DiamondTrap(const DiamondTrap &other);
        ~DiamondTrap();

        DiamondTrap &operator=(const DiamondTrap &other);

        using ScavTrap::attack;
        void whoAmI();
};

#endif