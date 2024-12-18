/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:47:05 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/15 13:09:01 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
    private:
        std::string type;

    public:
        Weapon();
        Weapon(std::string newType);
        ~Weapon();

        //member functions
        const std::string& getType() const;
        void setType(std::string newType);
};

#endif