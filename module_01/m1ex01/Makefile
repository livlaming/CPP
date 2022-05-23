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

FLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

SRCS = main.cpp \
        Zombie.cpp \
        zombieHorde.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)
	
re: fclean all
