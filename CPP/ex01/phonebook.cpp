/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:10:10 by nchaknan          #+#    #+#             */
/*   Updated: 2023/10/31 15:38:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <string>

int main ()
{
    std::string fstName, lstName, number;
    
    std::cout<<"First Name: ";
    std::getline(std::cin, fstName);
    std::cout<<"Last Name: ";
    std::getline(std::cin, lstName);
    std::cout<<"Number: ";
    std::getline(std::cin, number);

    std::cout<<"Your first Name is "<<fstName<<".\n";
    std::cout<<"Your last Name is "<<lstName<<".\n";
    std::cout<<"Your number is "<<number<<".\n";
}