# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/28 16:47:13 by isfernan          #+#    #+#              #
#    Updated: 2021/04/28 16:47:50 by isfernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= main.cpp

OBJS 	= $(SRCS:.cpp=.o)

FLAGS	= -Wall -Werror -Wextra

NAME	= replace

all:		$(NAME)

$(NAME):	$(OBJS)
			-@clang++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
			-@rm -f $(OBJS)

fclean: 	clean
			-@rm -f $(NAME)

re:	fclean all

.PHONY: all clea fclean re