/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:04:40 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/24 19:23:56 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
    #define DIAMOND_TRAP_HPP

#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(const std::string &nameIn);
        DiamondTrap(const DiamondTrap &copy);
        DiamondTrap &operator=(const DiamondTrap &copy);
        void attack(const std::string &target);
        void whoAmI();
};

#endif