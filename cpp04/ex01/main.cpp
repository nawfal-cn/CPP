/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:29:07 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/31 16:50:16 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *d = new Dog();
    const Animal *c = new Cat();
    
    std::cout << d->getType() << " " << std::endl;
    std::cout << c->getType() << " " << std::endl;
    d->makeSound();
    c->makeSound();
    meta->makeSound();

    delete c;
    delete d;
    delete meta;

    return 0;
}