/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:01:02 by nchaknan          #+#    #+#             */
/*   Updated: 2024/01/06 20:19:00 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private :
		Brain *dogBrain;
    public :
		Dog();
		~Dog(); 
		Dog(Dog const &copy);
		Dog &operator=(Dog const &other);
		void makeSound() const;
  };

#endif