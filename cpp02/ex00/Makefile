NAME = fixed

Ccpp = c++

cppFLAGS = -Wall -Wextra -Werror -std=c++98

cppFILES = main.cpp Fixed.cpp

cppOBJ = $(cppFILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(cppOBJ)
		$(Ccpp) $(cppFLAGS) $(cppOBJ) -o $(NAME)

clean :
	rm -f $(cppOBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all	

.PHONY = all clean fclean re