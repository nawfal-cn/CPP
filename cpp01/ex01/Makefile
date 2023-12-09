NAME = zombie

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp Zombie.cpp zombieHord.cpp

OBJS = $(FILES:.cpp =.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean : 
	rm -f $(OBG)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re