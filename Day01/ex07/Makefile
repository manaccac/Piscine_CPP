NAME 	=	replace
SRC 	=	main.cpp
RM 		=	rm -fclean
C 		=		clang++
FLAGS 	=	-Wall -Wextra -Werror -std=c++98
OBJ 	=	main.o

all: $(NAME)

%.o:%.cpp
	$(C) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(C) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) test.txt.replace

re:	fclean all

.PHONY: all clean fclean re
