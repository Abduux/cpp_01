/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:49:56 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/16 22:27:02 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon() // default constructor to be able to create HumanB
{
}

Weapon::Weapon(std::string newType): type(newType)
{
}

Weapon::~Weapon(){}

void Weapon::setType(std::string newType){
    this->type = newType;
}

const std::string& Weapon::getType() const {
    return this->type;
}
