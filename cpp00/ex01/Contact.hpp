/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:00:12 by nchaknan          #+#    #+#             */
/*   Updated: 2023/11/24 20:00:16 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
    std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

 public :
    void setFstName();
    void setLstName();
    void setNickName();
    void setPhoneNumber();
    void setDarkestSecret();
    std::string getFstName();
    std::string getLstName();
    std::string getNickName();
    std::string getPhoneNumber();
    std::string getDarkestSecret();
    void printInfo();
};

int isOnlySpaces(const std::string& str);
std::string my_strtrim(std::string str);

#endif