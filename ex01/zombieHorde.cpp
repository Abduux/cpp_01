/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 09:47:48 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/15 10:02:31 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"


Zombie*    zombieHorde( int N, std::string name )
{
    Zombie *ZombieHorde = new Zombie[N];
    for(int i = 0; i < N ; i++)
    {
        ZombieHorde[i].setName(name);
    }
    return ZombieHorde;
}