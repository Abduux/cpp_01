/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 08:43:26 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/15 08:50:09 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"


void randomChump( std::string name ) // It creates a zombie, name it, and the zombie announces itself.
{
    Zombie randomChump(name);
    randomChump.announce();
}