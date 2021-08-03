/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:47:09 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/03 17:56:49 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <stdlib.h>

int     main(void)
{
    std::string     string;
    std::string     *stringPTR = &string;
    std::string     &stringREF = string;
    
    string.assign("HI THIS IS BRAIN");
    std::cout << "String address" << std::endl;
    std::cout << &string << std::endl;
    std::cout << "String address using stringPTR" << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << "String address using stringREF" << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << "String content using stringPTR" << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << "String content using stringREF" << std::endl;
    std::cout << stringREF << std::endl;
    
    
}