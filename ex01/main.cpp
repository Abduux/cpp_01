/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 08:48:22 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/15 10:05:07 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie*    zombieHorde( int N, std::string name );

int main()
{
    int N = 9;
    Zombie *horde = zombieHorde(N , "123");

    for(int i = 0; i < N ; i++)
    {
        horde[i].announce();
    }

    delete[] horde;
    return 0;
}