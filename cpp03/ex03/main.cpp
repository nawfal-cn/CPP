/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:08:05 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/25 11:29:04 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    ClapTrap claptrap("CL4P-TP");
    ScavTrap scavtrap("SC4V-TP");
    FragTrap fragtrap("FR4G-TP");
    DiamondTrap diamondtrap("DI4MOND-TP");

    std::cout<<"\n";

    claptrap.attack("Corrector1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    std::cout<<"--------------------------------------------------------"<<std::endl;

    scavtrap.attack("Corrector2");
    scavtrap.takeDamage(15);
    scavtrap.beRepaired(9);
    scavtrap.guardGate();

    std::cout<<"--------------------------------------------------------"<<std::endl;

    fragtrap.attack("Corrector3");
    fragtrap.takeDamage(50);
    fragtrap.beRepaired(35);
    fragtrap.highFivesGuys();

    std::cout<<"--------------------------------------------------------"<<std::endl;
    
    diamondtrap.attack("Corrector4");
    diamondtrap.takeDamage(75);
    diamondtrap.beRepaired(40);
    diamondtrap.whoAmI();

    std::cout<<"\n";

    return 0;
}