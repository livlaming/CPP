NAME = ex00

SRC =	main.cpp \
			Convert.cpp

OBJS = $(SRC:.cpp=.o)

DEPS = $(OBJS:.o=.d)

CC = c++

CFLAGS = -Wall -Werror -Wextra -pedantic -std=c++98 -g

all: $(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

-include $(DEPS)

%.o:	%.cpp
			$(CC) $(CFLAGS) -MMD -c $< -o $@

clean:
			rm -f $(OBJS)
			rm -f $(DEPS)

fclean: 	clean
			rm -f $(NAME)

re: fclean all

.PHONY:     clean fclean


