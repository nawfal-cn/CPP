/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:08:31 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/19 20:59:31 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include<iostream>

class ClapTrap
{
    private:
        std::string name;
        int hitPts;
        int energyPts;
        int attDamage;
    public:
        ClapTrap();
        ClapTrap(std::string nameIn);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string    print1();
};

ClapTrap::ClapTrap()
{}


#endif