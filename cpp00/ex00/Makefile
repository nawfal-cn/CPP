NAME = megaphone

CC = c++

FLAGS = -Wall -Wextra -Werror #-std=c++98

FILES = megaphone.cpp

OBJS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re