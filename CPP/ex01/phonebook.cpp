/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:10:10 by nchaknan          #+#    #+#             */
/*   Updated: 2023/11/23 22:35:29 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
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

class PhoneBook
{
    Contact contacts[8];
    
 public :
    Contact *get_contacts();
};

Contact    *PhoneBook::get_contacts()
{
    return (contacts);
}
        
void Contact::setFstName()
{
    std::cout<<"First Name: ";
    std::getline(std::cin, firstName);
}
void Contact::setLstName()
{
    std::cout<<"Last Name: ";
    std::getline(std::cin, lastName);
}
void Contact::setNickName()
{
    std::cout<<"Nick Name: ";
    std::getline(std::cin, nickName);
}
void Contact::setPhoneNumber()
{
    std::cout<<"Phone Number: ";
    std::getline(std::cin, phoneNumber);
}
void Contact::setDarkestSecret()
{
    std::cout<<"Darkest Secret: ";
    std::getline(std::cin, darkestSecret);
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
    std::cout<<"First Name is: ";
    std::cout<<firstName<<"\n";
    std::cout<<"Last Name is: ";
    std::cout<<lastName<<"\n";
    std::cout<<"Nick Name is: ";
    std::cout<<nickName<<"\n";
    std::cout<<"Phone Number is: ";
    std::cout<<phoneNumber<<"\n";
    std::cout<<"Darkest Secret is: ";
    std::cout<<darkestSecret<<"\n";
}




int main ()
{
    PhoneBook phoneBook;
    std::string command;
    int index = 0;
    
    while(1)
    {
        std::cout<<"Enter a command: ";
        std::getline(std::cin, command);
        
        if(command == "add")
        {
            phoneBook.get_contacts()[index].setFstName();
            phoneBook.get_contacts()[index].setLstName();
            phoneBook.get_contacts()[index].setNickName();
            phoneBook.get_contacts()[index].setPhoneNumber();
            phoneBook.get_contacts()[index].setDarkestSecret();
            // std::cout<<"------- Contact "<<index<<":--------"<<"\n";
            // phoneBook.get_contacts()[index].printInfo();
            index++;
            if(index == 8)
                index = 0;
        }
        
        if(command == "search")
        {
            // Displaying contacts with index, first name, last name, and nickname
            std::cout << std::right << std::setw(10) << "Index" << " | "
                      << std::setw(10) << "First Name" << " | "
                      << std::setw(10) << "Last Name" << " | "
                      << std::setw(10) << " Nick Name" << std::endl;
            for (int i = 0; i < 8; ++i) {
                std::cout << std::right << std::setw(10) << i+1 << " | "
                          << std::setw(10) << phoneBook.get_contacts()[i].getFstName().substr(0, 9) << " | "
                          << std::setw(10) << phoneBook.get_contacts()[i].getLstName().substr(0, 9) << " | "
                          << std::setw(10) << phoneBook.get_contacts()[i].getNickName().substr(0, 9) << std::endl;
            }

            int searchIndex;
            std::cout << "Enter the index of the contact to display: ";
            std::cin >> searchIndex;
            std::cin.ignore(); // Ignore newline character left in the stream

            if (searchIndex < 1 || searchIndex > 8) {
                std::cout << "Invalid index! Please enter a valid index." << std::endl;
            } else {
                std::cout << "Contact information at index " << searchIndex << ":" << std::endl;
                phoneBook.get_contacts()[searchIndex-1].printInfo();
            }
        }
        
        if(command == "exit")
            exit(0);
    }
}