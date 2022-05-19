# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: livlamin <livlamin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/10 17:15:44 by livlamin      #+#    #+#                  #
#    Updated: 2022/02/10 17:15:49 by livlamin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = main.cpp\
		Phonebook.cpp\
		Contact.cpp

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
