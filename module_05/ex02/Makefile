NAME = a.out

CC = clang++
MAKE = make --no-print-directory

CFLAGS = -Wall -Wextra -Werror -g -std=c++98
# CFLAGS += -fsanitize=address

HEADERS = \
		./Bureaucrat.hpp \
		./Form.hpp \
		./ShrubberyCreationForm.hpp \
		./RobotomyRequestForm.hpp \
		./PresidentialPardonForm.hpp

SRCS = \
		./main.cpp \
		./Bureaucrat.cpp \
		./Form.cpp \
		./ShrubberyCreationForm.cpp \
		./RobotomyRequestForm.cpp \
		./PresidentialPardonForm.cpp

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