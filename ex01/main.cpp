/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:32:06 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/03 17:45:29 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	int		n;
    Zombie  *zombie;

	if (argc != 2 || atoi(argv[1]) <= 0)
		n = 5;
	else if (atoi(argv[1]) > 300)
		n = 300;
	else
		n = atoi(argv[1]);
	srand((unsigned int)time(NULL));
    zombie = zombieHorde(n, "Ray");
    while (n-- > 0)
        zombie[n].announce();
	delete [] zombie;
}