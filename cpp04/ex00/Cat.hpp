/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:03:51 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/27 19:54:27 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private :
    public :
    	Cat();
        ~Cat();
        Cat(Cat const &copy);
        Cat &operator=(Cat const &other);
		void makeSound() const;
  };

#endif