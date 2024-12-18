# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/15 08:48:18 by ahraich           #+#    #+#              #
#    Updated: 2024/12/17 01:17:10 by ahraich          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC  = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJ = $(SRC:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie

CPP = c++

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