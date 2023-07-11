# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: livlamin <livlamin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/10 17:15:56 by livlamin      #+#    #+#                  #
#    Updated: 2022/02/10 17:16:04 by livlamin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex02

SRC = Account.cpp\
		tests.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

CC = c++

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
