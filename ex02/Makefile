# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/03 17:54:33 by isfernan          #+#    #+#              #
#    Updated: 2021/08/03 17:54:55 by isfernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= main.cpp

OBJS 	= $(SRCS:.cpp=.o)

FLAGS	= -Wall -Werror -Wextra

NAME	= HiThisIsBrain

all:		$(NAME)

$(NAME):	$(OBJS)
			-@clang++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
			-@rm -f $(OBJS)

fclean: 	clean
			-@rm -f $(NAME)

re:	fclean all

.PHONY: all clea fclean re