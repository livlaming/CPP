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

SRC = main.cpp \
        Zombie.cpp \
        zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

CC = clang++

all: $(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o:	%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re:     fclean all

.PHONY:  clean fclean

