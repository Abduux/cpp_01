/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:50:07 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/16 22:29:14 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

HumanA::HumanA(std::string humanName, Weapon& theWeapon) : owned_weapon(theWeapon), name(humanName)
{
    // constructor to assign the name and the weapon to the 
}

HumanA::~HumanA()
{
    
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->owned_weapon.getType() << std::endl;
}
