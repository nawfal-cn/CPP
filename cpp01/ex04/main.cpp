/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:08:48 by nchaknan          #+#    #+#             */
/*   Updated: 2023/11/28 16:41:22 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void my_replace(std::string &tmpLine, const std::string s1, const std::string s2)
{
    size_t position = 0;

    while((position = tmpLine.find(s1, position)) != std::string::npos)
    {
        tmpLine.erase(position, s1.length());
        tmpLine.insert(position, s2);
        position += s2.length();
    }
}

int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cout<<"Error: You have to enter a <filename>, <str1> and <str2> !\n";
        return (1);
    }
    // store program inputs
    std::string filename = av[1];
    std::string str1 = av[2];
    std::string str2 = av[3];

    // open input file
    std::ifstream inputFile;
    inputFile.open(filename);
    if(!inputFile.is_open())
    {
        std::cout<<"Error in opening file <"<< filename <<"> !\n";
        return(1);
    }
    
    // copy the content of input file to a temporary string
    std::string tmpFile;
    std::string tmpLine;
    while(std::getline(inputFile, tmpLine))
        tmpFile = tmpFile + tmpLine + "\n";
    
    // close input file
    inputFile.close();
     
    // create and open the replace output file
    std::ofstream outputFile;
    outputFile.open(filename + ".replace", std::ios::out);
    if(!outputFile.is_open())
    {
        std::cout<<"Error in opening file <"<< filename + ".replace" <<"> !\n";
        return(1);
    }

    // fill the replace output file with tmpFile after
    // replacing every occurrence of s1 with s2 line by line.
    my_replace(tmpFile, str1, str2);
    outputFile << tmpFile;
    
    // close outputFile
    outputFile.close();
        
    return(0);
}