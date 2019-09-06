# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsmith <fsmith@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 20:19:54 by fsmith            #+#    #+#              #
#    Updated: 2019/09/06 22:58:10 by fsmith           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c get_next_line.c

INCLUDES = -I *.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(SRC) $(FLAGS)
	ar rc $(NAME) ft_*.o get_next_line.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

main:
	gcc -o main $(INCLUDES) $(SRC) $(FLAGS)

mclean:
	/bin/rm -f main

remain:	mclean main
