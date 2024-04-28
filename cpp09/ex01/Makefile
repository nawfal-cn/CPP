NAME = RPN

CCPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CPPFILES = main.cpp RPN.cpp

HEADER = RPN.hpp

CPPOBJ = $(CPPFILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(CPPOBJ) $(HEADER)
		$(CCPP) $(CPPFLAGS) $(CPPOBJ) -o $(NAME)

clean :
	rm -f $(CPPOBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY = all clean fclean re