/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:28:58 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/06 21:25:23 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
    #define FIXED_HPP

#include<iostream>

class Fixed
{
    int value;
    static const int bits = 8;

 public:
    Fixed();
    Fixed(const Fixed &copy);
    Fixed &operator=(const Fixed &copy);
    void setRawBits(int const raw);
    int getRawBits(void) const;
    ~Fixed();
};

#endif