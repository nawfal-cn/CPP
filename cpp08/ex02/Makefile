NAME = stack

CCPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CPPFILES = main.cpp

HEADER = MutantStack.hpp

CPPOBJ = $(CPPFILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(CPPOBJ) $(HEADER)
		$(CCPP) $(CPPFLAGS) $(CPPOBJ) -o $(NAME)

run : all clean
	clear
	./$(NAME)

clean :
	rm -f $(CPPOBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY = all clean fclean re