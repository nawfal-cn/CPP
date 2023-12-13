/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedArithOp.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:00:18 by marvin            #+#    #+#             */
/*   Updated: 2023/12/13 13:00:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed Fixed::operator+(const Fixed &other) const
{
    //Fixed result;
    //result.value = this->value + other.value;
    return(this->value + other.value);
}
Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed result;
    result.value = this->value - other.value;
    return(result);
}
Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed result;
    result.value = this->value * other.value;
    return(result);
}
Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed result;
    result.value = this->value / other.value;
    return(result);
}