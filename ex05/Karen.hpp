/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 19:33:22 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/04 18:07:40 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <map>
# include <string>
# include <iostream>

class Karen
{
	typedef std::map<std::string,void(Karen::*)() const> map_t;
    public:
		Karen(void);
		~Karen(void);
        void complain(std::string level);

    private:
        const map_t& return_map(void);
        const map_t construct_map(void);
        void debug(void) const;
        void info(void) const;
        void warning(void) const;
        void error(void) const;
};


#endif