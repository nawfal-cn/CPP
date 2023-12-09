/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 23:47:14 by nchaknan          #+#    #+#             */
/*   Updated: 2023/11/27 10:51:47 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
    #define HUMANA_HPP
    
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    Weapon &weapon;
    std::string name;

 public:
    HumanA(std::string nameIn, Weapon &weaponIn);
    void attack();
    ~HumanA();
};

#endif