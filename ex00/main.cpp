/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 08:48:22 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/15 08:57:53 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
    Zombie *_newZombie;
    _newZombie =  newZombie("Heap Zombie");
    _newZombie->announce();
    delete _newZombie;
    
    randomChump("Stack Zombie");
    return 0;
}