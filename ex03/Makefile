# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/26 20:57:57 by isfernan          #+#    #+#              #
#    Updated: 2021/04/28 16:24:24 by isfernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= main.cpp	Weapon.cpp	HumanA.cpp	HumanB.cpp

OBJS 	= $(SRCS:.cpp=.o)

FLAGS	= -Wall -Werror -Wextra

NAME	= Weapons

all:		$(NAME)

$(NAME):	$(OBJS)
			-@clang++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
			-@rm -f $(OBJS)

fclean: 	clean
			-@rm -f $(NAME)

re:	fclean all

.PHONY: all clea fclean re