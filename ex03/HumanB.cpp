/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 16:21:11 by isfernan          #+#    #+#             */
/*   Updated: 2021/04/28 16:31:31 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// Can the attribute Weapon of HumanB be a reference?

// No, because that way it should be initialised in the Constructor, and
// here the constructor only takes one parameter; the name of the human.
// As references don't change the variable they reference along the program,
// Weapon will always reference NULL and the attribute will be useless

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void)	const
{
	std::cout << this->_name << " attacks with his " <<
	this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}
