NAME = braiinnzz

CC = clang++
MAKE = make --no-print-directory

CFLAGS = -Wall -Wextra -Werror

SRCS = \
	./main.cpp \

OBJS = $(SRCS:%.cpp=%.o)

%.o: %.cpp Makefile
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