NAME = fixed

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

cppFILES = main.cpp Fixed.cpp FixedCompOp.cpp FixedArithOp.cpp

cppOBJ = $(cppFILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(cppOBJ)
		$(CPP) $(CPPFLAGS) $(cppFILES) -o $(NAME)

clean :
	rm -f $(cppOBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all	

.PHONY = all clean fclean re