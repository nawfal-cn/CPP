/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 21:03:17 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/09 20:09:21 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    // Fixed  b( a );
    // Fixed c;
    // c = b;
    std::cout << a.getRawBits() << std::endl;
    // std::cout << b.getRawBits() << std::endl;
    std::cout << a.getRawBits() << std::endl;

    // std::cout << ((1 << 8)) << std::endl;
    // std::cout << ((3125.76 / (1 << 8)) ) << std::endl;

}