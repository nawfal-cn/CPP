/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedCompOp.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 22:16:49 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/14 13:51:23 by nchaknan         ###   ########.fr       */
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
bool Fixed::operator>=(const Fixed &other) const
{
    return this->value >= other.value;
}
bool Fixed::operator<=(const Fixed &other) const
{
    return this->value <= other.value;
}
bool Fixed::operator==(const Fixed &other) const
{
    return this->value == other.value;
}
bool Fixed::operator!=(const Fixed &other) const
{
    return this->value != other.value;
}