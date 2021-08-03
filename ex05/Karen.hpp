/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 19:33:22 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/03 19:38:43 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

class Karen
{
    public:
        Karen(void);
        ~Karen(void);

        void complain(std::string level);

    private:
        void    _debug(void);
        void    _info(void);
        void    _warning(void);
        void    _error(void);
};


#endif