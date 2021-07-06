NAME = karen

CC = clang++
MAKE = make --no-print-directory

CFLAGS = -Wall -Wextra -Werror -g

HEADERS = \
	./Karen.hpp \

SRCS = \
	./main.cpp \
	./Karen.cpp \

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