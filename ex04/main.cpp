/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 16:59:14 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/03 19:12:06 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		check_errors(int argc, char **argv)
{
	std::ifstream	test;

	if (argc != 4)
	{
		std::cout << "Error: Invalid number of arguments" << std::endl;
		return (1);
	}
	std::string str1 = argv[2];
	std::string str2 = argv[3];
	test.open(argv[1]);
	if (!test.is_open())
	{
		std::cout << "Error: Invalid filename" << std::endl;
		return (1);
	}
	if (str1.empty() || str2.empty())
	{
		std::cout << "Error: Invalid strings" << std::endl;
		return (1);
	}
	test.close();
	return (0);
}

int		main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		s1;
	std::string		s2;
	std::string		file;
	std::string		read;
	std::string		read2;
	size_t			found;


	if (check_errors(argc, argv))
		return (0);
	s1 = argv[2];
	s2 = argv[3];
	file = argv[1];
	ifs.open(file);
	ofs.open(file + ".replace", std::ofstream::trunc);
	std::getline(ifs, read);
	while (!read.empty())
	{
		found = read.find(s1);
		while (found != std::string::npos)
		{
			read2.assign(read, 0, found);
			read2.append(s2);
			read2.append(read.begin() + found + s1.size(), read.end());
			read.assign(read2);
			found = read.find(s1);
		}
		ofs << read;
		ofs << std::endl;
		read.clear();
		std::getline(ifs, read);
	}
	ifs.close();
	ofs.close();
	return (0);
}