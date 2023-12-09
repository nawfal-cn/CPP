/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:57:49 by nchaknan          #+#    #+#             */
/*   Updated: 2023/11/26 19:44:54 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
    #define ZOMBIE_HPP


#include<iostream>

class Zombie
{
    std::string name;
    
 public:
    Zombie();
    void setName(std::string nameIn);
    void announce();
    ~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif