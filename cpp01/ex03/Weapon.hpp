/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 23:33:43 by nchaknan          #+#    #+#             */
/*   Updated: 2023/11/27 00:13:15 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
    #define WEAPON_HPP

#include <iostream>    

class Weapon
{
    std::string type;
    
 public:
    Weapon();
    Weapon(std::string typeIn);
    void setType(std::string typeIn);
    std::string getType();
    ~Weapon();
};

#endif