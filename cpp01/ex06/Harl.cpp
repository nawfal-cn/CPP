/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:18:20 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/04 14:34:19 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(void)
{
    std::cout<< "->[ DEBUG ]: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" <<"\n";
}
void Harl::info(void)
{
    std::cout<< "->[ INFO ]: cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<"\n";
}
void Harl::warning(void)
{
    std::cout<< "->[ WARNING ]: think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." <<"\n";
}
void Harl::error(void)
{
    std::cout<< "->[ ERROR ]: This is unacceptable! I want to speak to the manager now." <<"\n";
}

void Harl::complain(std::string level)
{
    std::string callNames[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*funcPtr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    int i;
    for(i = 0; i < 4; i++)
        if(level == callNames[i])
            break;
    
    switch (i)
    {
        case 0: (this->*funcPtr[0])();
        case 1: (this->*funcPtr[1])();
        case 2: (this->*funcPtr[2])();
        case 3: (this->*funcPtr[3])(); break;
    
        default:
            std::cout<<"Complain level not found!\n";
            break;
    }
}
