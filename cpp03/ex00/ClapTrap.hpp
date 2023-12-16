/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:08:31 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/16 19:54:00 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
    #define CLAP_TRAP_HPP

#include<iostream>

class ClapTrap
{
    private:
        std::string name;
        int hitPts = 10;
        int energyPts = 10;
        int attDamage = 0;
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string nameIn);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

ClapTrap::ClapTrap() {}

ClapTrap::~ClapTrap() {}

ClapTrap::ClapTrap(std::string nameIn)
{
    this->name = nameIn;
}
void ClapTrap::attack(const std::string& target)
{
    
}
void ClapTrap::takeDamage(unsigned int amount)
{
    
}
void ClapTrap::beRepaired(unsigned int amount)
{
    
}

#endif