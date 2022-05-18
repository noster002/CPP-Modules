CC			= c++
CFLAGS		= -Wall -Werror -Wextra -std=c++98
RM			= rm -f
NAME		= a.out
SRC			= \
main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
RobotomyRequestForm.cpp PresidentialPardonForm.cpp
OBJ			= $(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(OBJ) $(CFLAGS) -o $@

.cpp.o:
			$(CC) -c $^ $(CFLAGS) -o $@

clean:
			$(RM) $(OBJ) *_shrubbery

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
