/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:32:58 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/14 22:06:04 by nchaknan         ###   ########.fr       */
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
    bool operator>(const Fixed &other) const;
    bool operator<(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;
    //--------------------------------------
    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator*(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;
    //--------------------------------------
    Fixed &operator++(void);
    Fixed operator++(int);
    Fixed &operator--(void);
    Fixed operator--(int);
    //--------------------------------------
    static Fixed &min(Fixed &value1, Fixed &value2);
    static const Fixed &min(const Fixed &value1, const Fixed &value2);
    static Fixed &max(Fixed &value1, Fixed &value2);
    static const Fixed &max(const Fixed &value1, const Fixed &value2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif