/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 22:36:13 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/17 01:17:17 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_


#include <iostream>

#define DEBUG_COLOR     "\033[32m"  //green 
#define INFO_COLOR      "\033[34m" //blue 
#define WARNING_COLOR   "\033[33m" //orange
#define ERROR_COLOR     "\033[31m" //red
#define NORMAL_COLOR    "\033[0m" //normal

class Harl
{
    private:
        /* data */
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

    public:
        Harl(/* args */);
        ~Harl();

        int getIndex(std::string LEVEL);
        void    complain( std::string level );
};

