CC			= c++
CFLAGS		= -Wall -Werror -Wextra -std=c++98
RM			= rm -f
NAME		= identify
SRC			= main.cpp Base.cpp
OBJ			= $(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(OBJ) $(CFLAGS) -o $@

.cpp.o:
			$(CC) -c $^ $(CFLAGS) -o $@

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
