/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:22:04 by nchaknan          #+#    #+#             */
/*   Updated: 2023/11/26 21:39:06 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
    #define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    std::string name;
    
 public:
    Zombie();
    void setName(std::string nameIn);
    void announce();
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif