/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:22:04 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/03 17:34:24 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string rand_name(void)
{
	int		size = (rand() % 6 + 3);
	char	c[size + 1];
	int		i = 0;

	c[0] = (rand() % 26 + 65);
	while (++i < size)
		c[i] = rand() % 26 + 97;
	c[size] = '\0';
	return (c);
}

Zombie* zombieHorde( int N, std::string name )
{
    int     i = 0;
	Zombie* zombies = new Zombie[N];
	
    zombies[0].set_name(name);
	while (++i < N)
		zombies[i].set_name(rand_name());
	return (zombies);
}