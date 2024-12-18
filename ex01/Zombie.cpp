/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 08:48:28 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/15 09:54:27 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void Zombie::announce(void)
{
    std::cout<< this->name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::Zombie(){}

Zombie::Zombie(std::string newName): name(newName){}

Zombie::~Zombie(){
    std::cout << this->name << " is destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}