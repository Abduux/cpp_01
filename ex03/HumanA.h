/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:48:43 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/16 18:33:03 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.h"

class HumanA
{
    private:
        Weapon &owned_weapon;
        std::string name;
    public:
        HumanA(std::string name, Weapon& theWeapon);
        ~HumanA();
        
        void attack( void );
};

#endif