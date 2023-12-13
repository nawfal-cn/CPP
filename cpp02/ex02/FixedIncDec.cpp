/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedIncDec.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:11:10 by marvin            #+#    #+#             */
/*   Updated: 2023/12/13 13:11:10 by marvin           ###   ########.fr       */
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
Fixed &Fixed::operator++(int)
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
Fixed &Fixed::operator--(int)
{
    Fixed tmp = *this;
    this->value -= 1;
    return(tmp);
}