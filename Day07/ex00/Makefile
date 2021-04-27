NAME=whatever
CC=clang++
FLAGS= -Wall -Wextra -Werror -std=c++98
SRCS=main.cpp
OBJS=$(SRCS:.c=.o)
INC=whatever.hpp
RM=rm -f

%.c%.o:
	$(CC) $(FLAGS) -c $< -o $@

all:		$(NAME)

$(OBJS):	$(INC)

$(NAME):	$(OBJS) $(INC)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) *.o

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY: all re fclean clean
