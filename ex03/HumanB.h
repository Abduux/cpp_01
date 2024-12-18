/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:49:21 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/16 22:13:21 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.h"

class HumanB
{
    private:
        Weapon *owned_weapon;
        std::string name;
    public:
        HumanB(std::string new_name);
        ~HumanB();
        void attack( void );
        void setWeapon(Weapon &newWeapon);
};

#endif