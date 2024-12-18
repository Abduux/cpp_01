/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 07:22:14 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/15 08:42:58 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* newZombie( std::string name )
{
    Zombie *newZombie = new Zombie(name);
    return newZombie;
}