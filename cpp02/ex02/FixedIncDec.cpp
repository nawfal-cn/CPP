/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedIncDec.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:10:41 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/14 22:18:27 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ++x
Fixed &Fixed::operator++(void)
{
    this->value += 1;
    return(*this);
}

// x++
Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    this->value += 1;
    return (tmp);
}

// --x
Fixed &Fixed::operator--(void)
{
    this->value -= 1;
    return(*this);
}

// x--
Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    this->value -= 1;
    return(tmp);
}