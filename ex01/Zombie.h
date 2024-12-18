/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 07:12:23 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/15 10:48:35 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
    private:
        // private data
        std::string name;
    public:
        //public data
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announce( void );
        void setName(std::string name);
};

#endif