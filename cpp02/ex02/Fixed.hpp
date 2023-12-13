/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:32:58 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/13 13:40:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include<cmath>

class Fixed
{
    int value;
    static const int bits = 8;

 public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &copy);
    Fixed(const int valueIn);
    Fixed(const float valueIn);
    Fixed &operator=(const Fixed &copy);
    void setRawBits(int const raw);
    int getRawBits(void) const;
    float toFloat( void ) const;
    int toInt( void ) const;
    //--------------------------------------
    bool operator>(const Fixed &other);
    bool operator<(const Fixed &other);
    bool operator>=(const Fixed &other);
    bool operator<=(const Fixed &other);
    bool operator==(const Fixed &other);
    bool operator!=(const Fixed &other);
    //--------------------------------------
    Fixed operator+(const Fixed &other);
    Fixed operator-(const Fixed &other);
    Fixed operator*(const Fixed &other);
    Fixed operator/(const Fixed &other);
    //--------------------------------------
    Fixed &operator++(void);
    Fixed &operator++(int);
    Fixed &operator--(void);
    Fixed &operator--(int);
    //--------------------------------------
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif