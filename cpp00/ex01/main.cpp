/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:56:56 by nchaknan          #+#    #+#             */
/*   Updated: 2023/11/24 19:55:08 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int main ()
{
    PhoneBook phoneBook;
    std::string command;
    int index = 0;
    
    while(1)
    {
        std::cout<<"Enter a command ADD, SEARCH, EXIT: ";
        std::getline(std::cin, command);
        if(std::cin.eof())
            return(0);
        if(command == "ADD")
        {
            phoneBook.getContacts()[index].setFstName();
            phoneBook.getContacts()[index].setLstName();
            phoneBook.getContacts()[index].setNickName();
            phoneBook.getContacts()[index].setPhoneNumber();
            phoneBook.getContacts()[index].setDarkestSecret();
            index++;
            if(index == 8)
                index = 0;
        }
        
        else if(command == "SEARCH")
        {
            std::cout<<"__________________________________________________"<<"\n";
            std::cout<<std::right<<std::setw(10)<<"Index"<<" | "
                     <<std::setw(10)<<"First Name"<<" | "
                     <<std::setw(10)<<"Last Name"<<" | "
                     <<std::setw(10)<<"Nick Name"<<"\n";
            std::cout<<"--------------------------------------------------"<<"\n";
            for(int i = 0; i < 8; i++)
            {
                if (!phoneBook.getContacts()[i].getFstName().empty()) {
                    std::cout<<std::right<<std::setw(10)<< i+1 <<" | "
                             <<std::setw(10)<<my_strtrim(phoneBook.getContacts()[i].getFstName())<<" | "
                             <<std::setw(10)<<my_strtrim(phoneBook.getContacts()[i].getLstName())<<" | "
                             <<std::setw(10)<<my_strtrim(phoneBook.getContacts()[i].getNickName())<<"\n";
                    std::cout<<"--------------------------------------------------"<<"\n";        
                }
            }
            if(!phoneBook.getContacts()[0].getFstName().empty())
            {
                int searchIndex;
                std::string tmp;
                
                std::cout<<"Enter a contact index to display: ";
                std::getline(std::cin, tmp);
                if(std::cin.eof())
                    return(0);
                searchIndex = std::atoi(tmp.c_str());
                while(1)
                {
                    if(searchIndex < 1 || searchIndex > 8 
                        || phoneBook.getContacts()[searchIndex-1].getFstName().empty())
                    {
                        std::cout<<"You Entered invalid Index!"<<"\n";
                        std::cout<<"Enter a contact index to display: ";
                        std::getline(std::cin, tmp);
                        if(std::cin.eof())
                            return(0);
                        searchIndex = std::atoi(tmp.c_str());
                    }
                    else
                    {
                        std::cout<<"Contact information at index "<<searchIndex<<": "<<"\n";
                        phoneBook.getContacts()[searchIndex-1].printInfo();
                        break;
                    }
                }
            }
        }
        else if(command == "EXIT")
            exit(0);
        else
            std::cout<<"You Entered an illegal command!"<<"\n";    
    }
}