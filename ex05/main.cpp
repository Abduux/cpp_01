/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 22:36:08 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/17 01:01:58 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main ()
{
    Harl harlLevel;
    
    harlLevel.complain("INFO");
    harlLevel.complain("DEBUG");
    harlLevel.complain("WARNING");
    harlLevel.complain("ERROR");
    return 0;
}