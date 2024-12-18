/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:50:02 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/16 22:06:27 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string new_name) : name(new_name), owned_weapon(NULL)
{
    //do nothing...
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &newWeapon)
{
    owned_weapon = &newWeapon;
}

void HumanB::attack()
{
    if(this->owned_weapon)
        std::cout << this->name << " attacks with their " << owned_weapon->getType() << std::endl;
    else
        std::cout << this->name << " attacks with their " << "Hands" << std::endl;
}
