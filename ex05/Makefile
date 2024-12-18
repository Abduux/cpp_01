# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 22:36:01 by ahraich           #+#    #+#              #
#    Updated: 2024/12/17 01:16:49 by ahraich          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC  = main.cpp Harl.cpp 
OBJ = $(SRC:.cpp=.o)
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Brain
CPP = c++
REMOVE = rm -rf


all : ${NAME}

${NAME}: ${OBJ}
	${CPP} ${OBJ} ${CPPFLAGS} -o ${NAME}

clean:
	${REMOVE} ${OBJ}

fclean: clean
	${REMOVE} ${NAME}

re: fclean all

.PHONY: all clean fclean re