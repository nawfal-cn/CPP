/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:08:31 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/21 14:56:34 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
    #define CLAP_TRAP_HPP

#define RESET   "\033[0m"
#define YELLOW  "\033[33m" 

#include<iostream>

class ClapTrap
{
    private:
        std::string name;
        int hitPts;
        int energyPts;
        int attDamage;
    public:
        ClapTrap(std::string nameIn);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif