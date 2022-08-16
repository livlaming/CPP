# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: livlamin <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 13:28:13 by livlamin      #+#    #+#                  #
#    Updated: 2020/07/27 15:03:31 by livlamin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex01

SRC =	main.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \
			Brain.cpp

OBJS = $(SRC:.cpp=.o)

CC = c++

CFLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

all: $(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o:	%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re: fclean all

.PHONY:     clean fclean



