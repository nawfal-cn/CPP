NAME = base

CCPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CPPFILES = main.cpp Base.cpp A.cpp B.cpp C.cpp

HEADER = Base.hpp A.hpp B.hpp C.hpp

CPPOBJ = $(CPPFILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(CPPOBJ) $(HEADER)
		$(CCPP) $(CPPFLAGS) $(CPPOBJ) -o $(NAME)

run : $(NAME) clean
	clear
	./$(NAME)

clean :
	rm -f $(CPPOBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY = all clean fclean re