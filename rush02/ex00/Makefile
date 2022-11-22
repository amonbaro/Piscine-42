# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amonbaro <amonbaro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 18:59:03 by amonbaro          #+#    #+#              #
#    Updated: 2022/10/27 10:32:38 by amonbaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = main.c

$(NAME) :
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean :
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
