NAME = Animal

CCPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

CPPFILES = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

HEADER = Animal.hpp Dog.hpp Cat.cpp Brain.cpp

CPPOBJ = $(CPPFILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(CPPOBJ) $(HEADER)
		$(CCPP) $(CPPFLAGS) $(CPPOBJ) -o $(NAME)

run : $(NAME)
	./$(NAME)

clean :
	rm -f $(CPPOBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY = all clean fclean re