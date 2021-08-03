/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:01:10 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/03 17:20:29 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main(void)
{
    Zombie*     zombie0 = newZombie("Tyler");
    zombie0->announce();
    randomChump("Manolo");
    delete zombie0;
    return (0);
}