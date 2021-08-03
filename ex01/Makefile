# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/03 17:36:00 by isfernan          #+#    #+#              #
#    Updated: 2021/08/03 17:36:19 by isfernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= main.cpp	Zombie.cpp	ZombieHorde.cpp

OBJS 	= $(SRCS:.cpp=.o)

FLAGS	= -Wall -Werror -Wextra

NAME	= Brains

all:		$(NAME)

$(NAME):	$(OBJS)
			-@clang++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
			-@rm -f $(OBJS)

fclean: 	clean
			-@rm -f $(NAME)

re:	fclean all

.PHONY: all clea fclean re