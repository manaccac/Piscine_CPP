# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manaccac <manaccac@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/24 08:17:35 by manaccac          #+#    #+#              #
#    Updated: 2021/02/24 08:19:06 by manaccac         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME     =    megaphone
SRC     =    megaphone.cpp
RM         =    rm -fclean
C         =    clang++
FLAGS     =    -Wall -Wextra -Werror -std=c++98
OBJ     =    megaphone.o

all: $(NAME)

%.o:%.c
    $(C) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
    $(C) -o $(NAME) $(OBJ)

clean:
    rm -f $(OBJ)

fclean: clean
    rm -f $(NAME)

re:    fclean all

.PHONY: all clean fclean re
