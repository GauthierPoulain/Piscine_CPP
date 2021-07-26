NAME = a.out

CC = clang++
MAKE = make --no-print-directory

CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98 
CFLAGS += -fsanitize=address

HEADERS = \
		./AMateria.hpp \
		./Character.hpp \
		./Cure.hpp \
		./Ice.hpp \
		./ICharacter.hpp \
		./IMateriaSource.hpp \
		./MateriaSource.hpp \


SRCS = \
		./AMateria.cpp \
		./Character.cpp \
		./Cure.cpp \
		./Ice.cpp \
		./main.cpp \
		./MateriaSource.cpp \

OBJS = $(SRCS:%.cpp=%.o)

%.o: %.cpp Makefile $(HEADERS)
		$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean
		$(MAKE) all

.PHONY: all clean fclean re
