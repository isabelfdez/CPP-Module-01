/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:46:48 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/03 17:18:13 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>
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

Zombie* newZombie(std::string name);

void randomChump( std::string name );

#endif
