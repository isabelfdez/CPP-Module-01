/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:30:14 by isfernan          #+#    #+#             */
/*   Updated: 2021/06/08 15:06:17 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// Why do I have to take the input weapon as a reference?

// If I received Weapon weapon, this wouldn't have the same memory address as
// the "club" in the main function (since it is just a copy) and therefore
// the exercise would be wrong. The only option left (having sent weapon as a 
// stack variable in main) is receiving it as a reference.

// Can Weapon be saved as both a reference and a pointer in the class HumanA?

// Yes. Had it been saved as a pointer (Weapon*	_weapon), the constructor
// would be:

// HumanA::HumanA(std::string name, Weapon& weapon) : _name(name)
// {
// 	this->_weapon = &weapon;
// }

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void)	const
{
	std::cout << this->_name << " attacks with his " <<
	this->_weapon.getType() << std::endl;
}
