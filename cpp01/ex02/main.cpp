/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 22:10:02 by nchaknan          #+#    #+#             */
/*   Updated: 2023/11/27 01:11:28 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI, THIS IS BRAIN.";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout<< "The memory address of the string variable: " << &str <<"\n";
    std::cout<< "The memory address held by stringPTR: " << stringPTR <<"\n";
    std::cout<< "The memory address held by stringREF: " << &stringREF << "\n";

    std::cout<< "The value of the string variable: " << str <<"\n";
    std::cout<< "The value pointed to by stringPTR: " << *stringPTR <<"\n";
    std::cout<< "The value pointed to by stringREF: " << stringREF <<"\n";

    return (0);
}
