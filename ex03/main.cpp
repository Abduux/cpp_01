/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:49:58 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/16 20:06:10 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"
#include "HumanB.h"

int main()
{
    {
        Weapon club = Weapon("MachinGun");

        HumanA bob("Ayoub", club); // assign the name and the weapon to the human
        bob.attack(); // attack with the assigned weapon

        club.setType("RPG");
        bob.attack();
    }
    {
        Weapon club = Weapon("Ak44"); // creating a weapon
    
        HumanB jim("Ali"); // creating a human

        jim.setWeapon(club); // seting weapon to human
        jim.attack(); // attack with weapon

        club.setType("Kar98"); // setting a new weapon to humanB
        jim.attack(); // Attack with it 
    }   


    return 0; 
}