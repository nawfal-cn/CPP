NAME = harl

CCPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp Harl.cpp

OBJS = $(FILES:.cpp =.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(CCPP) $(FLAGS) $(OBJS) -o $(NAME)

clean : 
	rm -f $(OBG)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re