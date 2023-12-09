/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 23:56:52 by nchaknan          #+#    #+#             */
/*   Updated: 2023/11/27 12:17:01 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
    #define HUMANB_HPP
    
#include <iostream>
#include "Weapon.hpp"    

class HumanB
{
    Weapon *weapon;
    std::string name;

 public:
    HumanB();
    HumanB(std::string nameIn);
    void setWeapon(Weapon &weaponIn);
    void attack();
    ~HumanB();
};

#endif