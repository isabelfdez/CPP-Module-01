/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 19:42:16 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/04 18:02:57 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main() {
    Karen k;
    std::cout << "DEBUG" << std::endl;
    k.complain("debug");
    std::cout << "INFO" << std::endl;
    k.complain("info");
    std::cout << "WARNING" << std::endl;
    k.complain("warning");
    std::cout << "ERROR" << std::endl;
    k.complain("error");
    std::cout << "INVALID INPUT" << std::endl;
    k.complain("invalid");
}