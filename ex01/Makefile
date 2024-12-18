# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/15 09:01:24 by ahraich           #+#    #+#              #
#    Updated: 2024/12/17 21:00:28 by ahraich          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC  = main.cpp Zombie.cpp zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombieHorde

CPP = clang++

REMOVE = rm -rf


all : ${NAME}

${NAME}: ${OBJ} Zombie.h
	${CPP} ${OBJ} ${CPPFLAGS} -o ${NAME}

clean:
	${REMOVE} ${OBJ}

fclean: clean
	${REMOVE} ${NAME}

re: fclean all

.PHONY: all clean fclean re