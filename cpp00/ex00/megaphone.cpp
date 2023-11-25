/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:26:27 by nchaknan          #+#    #+#             */
/*   Updated: 2023/11/25 11:28:01 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av){
    if(ac == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";

    std::string str;
    int j = 0;
    while(av[++j])
    {
        str = av[j];
        int i = -1;
        while(str[++i])
        
            std::cout<<(char)std::toupper(str[i]);
    }
    std::cout<<'\n';
    return(0);
}
