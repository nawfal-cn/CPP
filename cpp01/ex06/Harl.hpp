/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:18:28 by nchaknan          #+#    #+#             */
/*   Updated: 2023/12/01 11:05:41 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
    #define HARL_HPP

#include <iostream>
#include <string>
#include <map>
#include <functional>

class Harl
{
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    
 public :
    Harl();
    void complain(std::string level);
    ~Harl();
};

#endif