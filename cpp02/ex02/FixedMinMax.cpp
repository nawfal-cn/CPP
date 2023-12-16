/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedMinMax.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:35:50 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/14 22:19:19 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed& Fixed::min(Fixed &value1, Fixed &value2)
{
    return (value1 < value2 ? value1 : value2);
}
const Fixed& Fixed::min(const Fixed &value1, const Fixed &value2)
{
    return (value1 < value2 ? value1 : value2);
}
Fixed& Fixed::max(Fixed &value1, Fixed &value2)
{
    return (value1 > value2 ? value1 : value2);
}
const Fixed& Fixed::max(const Fixed &value1, const Fixed &value2)
{
    return (value1 > value2 ? value1 : value2);
}