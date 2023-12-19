/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:08:05 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/19 20:52:43 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    // ClapTrap claptrap("Autron");

    // claptrap.attack("Enemy");
    // claptrap.takeDamage(5);
    // claptrap.beRepaired(3);
    ScavTrap s;
    // s.attack("nawfal zamal");
    std::cout << s.print1();
    return 0;
}