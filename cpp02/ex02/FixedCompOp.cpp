/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedCompOp.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:59:51 by marvin            #+#    #+#             */
/*   Updated: 2023/12/13 12:59:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool Fixed::operator>(const Fixed &other) const
{
    return this->value > other.value;
}
bool Fixed::operator<(const Fixed &other) const
{
    return this->value < other.value;
}
bool Fixed::operator>=(const Fixed &other const)
{
    return this->value >= other.value;
}
bool Fixed::operator<=(const Fixed &other const)
{
    return this->value <= other.value;
}
bool Fixed::operator==(const Fixed &other const)
{
    return this->value == other.value;
}
bool Fixed::operator!=(const Fixed &other const)
{
    return this->value != other.value;
}