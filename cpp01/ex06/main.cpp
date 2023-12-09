/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:20:21 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/01 12:44:46 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;
    std::string level;
    
    if(ac == 2)
    {
        level = av[1];
        harl.complain(level);
    }
    else
        std::cout<<"Wrong arguments!\n";
    return(0);    
}
