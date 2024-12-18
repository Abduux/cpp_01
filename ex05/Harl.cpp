/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 22:36:10 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/17 01:00:52 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

void Harl::debug(void)
{
    std::cout <<  DEBUG_COLOR << "DEBUG: Debug messages contain contextual information. They are mostly used for problem diagnosis." << std::endl;
}

void Harl::info(void)
{
    std::cout <<  INFO_COLOR << "INFO: These messages contain extensive information. They are helpful for tracing program execution in a production environment." << std::endl;
}

void Harl::warning(void)
{
    std::cout <<  WARNING_COLOR << "WARNING: Warning messages indicate a potential issue in the system. However, it can be handled or ignored." << std::endl;
}

void Harl::error(void)
{
    std::cout <<  ERROR_COLOR << "ERROR: These messages indicate an unrecoverable error has occurred. This is usually a critical issue that requires manual intervention." << std::endl;
}

void    Harl::complain( std::string LEVEL )
{
    int index = getIndex(LEVEL);
    void (Harl::*levelFunction[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    if(index == -1)
        return;
    (this->*levelFunction[index])();
}

int Harl::getIndex(std::string LEVEL)
{
    std::string LevelIndex[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for(int i = 0; i < 4; i++)
        if(LEVEL == LevelIndex[i])
            return (i);
    return (-1);
}


Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

