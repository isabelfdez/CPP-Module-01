/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:14:00 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/04 19:07:11 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		check_errors(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "ERROR: Invalid number or arguments" << std::endl;
		return (0);
	}
	std::string str(argv[1]);
	if (str.compare("INFO") != 0 && str.compare("DEBUG") != 0 && str.compare("WARNING") != 0 && str.compare("ERROR") != 0)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (0);
	}
	return (1);
}

int     main(int argc, char **argv)
{
	Karen		k;
	int			n;

	if (!check_errors(argc, argv))
		return (1);
	std::string str(argv[1]);
	for (int i = 0; i < str.length(); i++)
  		str[i] = tolower(str[i]);
	switch (argv[1][0])
	{
		case 68: //DEBUG
			k.complain("debug");
			k.complain("info");
			k.complain("warning");
			k.complain("error");
			break;
		case 73: //INFO
			k.complain("info");
			k.complain("warning");
			k.complain("error");
			break;
		case 87: //WARNING
			k.complain("warning");
			k.complain("error");
			break;
		default: //ERROR
			k.complain("error");
			break;
	}
	return (0);
}