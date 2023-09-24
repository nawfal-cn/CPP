/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:26:27 by nchaknan          #+#    #+#             */
/*   Updated: 2023/09/24 22:44:57 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(int ac, char **av){
    int j = 0;
    
    if(ac == 1){
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    while(av[++j]){
        int i = -1;
        while(av[j][++i])
            std::cout<<(char)std::toupper(av[j][i]);
    }
    std::cout<<'\n';
    return(0);
}