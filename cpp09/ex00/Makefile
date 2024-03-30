NAME = btc

CCPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CPPFILES = main.cpp BitcoinExchange.cpp

HEADER = BitcoinExchange.hpp

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