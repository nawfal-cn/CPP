NAME = clapTrap

CCPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CPPFILES = main.cpp ClapTrap.cpp ScavTrap.cpp

HEADER = ClapTrap.hpp
HEADER2 = ScavTrap.hpp

CPPOBJ = $(CPPFILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(CPPOBJ) $(HEADER) $(HEADER2)
		$(CCPP) $(CPPFLAGS) $(CPPOBJ) -o $(NAME)

run : all
	./$(NAME)

clean :
	rm -f $(CPPOBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY = all clean fclean re