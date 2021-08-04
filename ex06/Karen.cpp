/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:14:20 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/04 19:05:49 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

typedef std::map<std::string,void(Karen::*)() const> map_t;

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

const map_t& Karen::return_map(void)
{
	static const map_t m = construct_map();
	return m;
}

const map_t Karen::construct_map(void)
{
	map_t m;
	m["debug"] = &Karen::debug;
	m["info"] = &Karen::info;
	m["warning"] = &Karen::warning;
	m["error"] = &Karen::error;
	return m;
}

void    Karen::complain(std::string level)
{
	map_t::const_iterator it = return_map().find(level);
    if (it == return_map().end()) 
		return ;
    (this->*(it->second))();
}

void	Karen::debug(void)    const
{
    std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)    const
{
    std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)    const
{
    std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)    const
{
    std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}