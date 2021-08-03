/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:14:16 by isfernan          #+#    #+#             */
/*   Updated: 2021/04/26 21:52:08 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str) : _type(str)
{
}

Weapon::~Weapon(void)
{
}

std::string const	Weapon::getType(void)	const
{
	return (this->_type);
}

void				Weapon::setType(std::string str)
{
	this->_type.assign(str);
}
