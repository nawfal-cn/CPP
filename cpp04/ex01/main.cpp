/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:29:07 by nchaknan          #+#    #+#             */
/*   Updated: 2024/01/06 20:25:51 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    int num = 6;
    Animal *animal[num];

    for(int i = 0; i < num/2; i++)
        animal[i] = new Dog();

    for(int i = num/2; i < num; i++)
        animal[i] = new Cat();
        
    for(int i = 0; i < num; i++)
        delete animal[i];

    return 0;
}