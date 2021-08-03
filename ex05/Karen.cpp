/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 19:39:20 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/03 19:48:47 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

void    Karen::complain(std::string level)
{
    void	(Karen::*f)(void);

    f = &Karen::level; 
    (this->*f)();
}