/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:52:24 by nchaknan          #+#    #+#             */
/*   Updated: 2023/11/24 19:58:25 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFstName()
{
    std::string str;
    
    while(1)
    {
        std::cout<<"First Name: ";
        std::getline(std::cin, str);
        if(std::cin.eof())
            return;
        if(!str.empty() && !isOnlySpaces(str))
        {
            firstName = str;
            break;
        }
    }
}
void Contact::setLstName()
{
    std::string str;
    
    while(1)
    {
        std::cout<<"Last Name: ";
        std::getline(std::cin, str);
        if(std::cin.eof())
            return;
        if(!str.empty() && !isOnlySpaces(str))
        {
            lastName = str;
            break;
        }    
    }
}
void Contact::setNickName()
{
    std::string str;
    
    while(1)
    {
        std::cout<<"Nick Name: ";
        std::getline(std::cin, str);
        if(std::cin.eof())
            return;
        if(!str.empty() && !isOnlySpaces(str))
        {
            nickName = str;
            break;
        }    
    }
}
void Contact::setPhoneNumber()
{
    std::string str;
    
    while(1)
    {
        std::cout<<"Phone Number: ";
        std::getline(std::cin, str);
        if(std::cin.eof())
            return;
        if(!str.empty() && !isOnlySpaces(str))
        {
            phoneNumber = str;
            break;
        }    
    }
}
void Contact::setDarkestSecret()
{
    std::string str;
    
    while(1)
    {
        std::cout<<"Darkest Secret: ";
        std::getline(std::cin, str);
        if(std::cin.eof())
            return;
        if(!str.empty() && !isOnlySpaces(str))
        {
            darkestSecret = str;
            break;
        }
    }
}
std::string Contact::getFstName()
{
    return(firstName);
}
std::string Contact::getLstName()
{
    return(lastName);
}
std::string Contact::getNickName()
{
    return(nickName);
}
std::string Contact::getPhoneNumber()
{
    return(phoneNumber);
}
std::string Contact::getDarkestSecret()
{
    return(darkestSecret);
}

void Contact::printInfo()
{
    std::cout<<"* First Name is: ";
    std::cout<<firstName<<"\n";
    std::cout<<"* Last Name is: ";
    std::cout<<lastName<<"\n";
    std::cout<<"* Nick Name is: ";
    std::cout<<nickName<<"\n";
    std::cout<<"* Phone Number is: ";
    std::cout<<phoneNumber<<"\n";
    std::cout<<"* Darkest Secret is: ";
    std::cout<<darkestSecret<<"\n";
}

int isOnlySpaces(const std::string& str)
{
    for (size_t i = 0; i < str.size(); ++i) {
        if (!std::isspace(static_cast<unsigned char>(str[i]))) {
            return (0);
        }
    }
    return (1);
}

std::string my_strtrim(std::string str)
{
    std::string trim;
    
    if(str.length() > 10)
    {
        trim = str.substr(0, 9);
        trim.append(".");
        return(trim);
    }
    return(str);
}