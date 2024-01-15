NAME = Materia

CCPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CPPFILES = AMateria.cpp Cure.cpp MateriaSource.cpp Character.cpp Ice.cpp main.cpp

HEADER = AMateria.hpp Character.hpp Cure.hpp ICharacter.hpp IMateriaSource.hpp Ice.hpp MateriaSource.hpp 

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