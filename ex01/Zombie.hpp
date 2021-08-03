/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:18:20 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/03 17:30:47 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <ctime>
# include <stdlib.h>


class	Zombie
{
	public:
		Zombie(void);
		~Zombie(void);

		void		announce(void)	const;
		void		set_name(std::string name);

	private:
		std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
