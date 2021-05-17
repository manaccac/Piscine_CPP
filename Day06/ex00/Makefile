NAME 	=	convert
SRC 	=	main.cpp
RM 		=	rm -fclean
C 		=	clang++
FLAGS 	=	-Wall -Wextra -Werror -Wconversion -std=c++98
OBJ 	=	${SRC:.cpp=.o}

all: $(NAME)

$(OBJ): %.o:%.cpp
	$(C) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(C) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
