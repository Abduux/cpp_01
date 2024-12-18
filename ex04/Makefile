# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/17 21:04:19 by ahraich           #+#    #+#              #
#    Updated: 2024/12/18 00:25:05 by ahraich          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#variabls	-------------------

SRC  = main.cpp 
OBJ = $(SRC:.cpp=.o)
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Brain
CPP = c++
REMOVE = rm -rf

#targets	-------------------

all : ${NAME}

${NAME}: ${OBJ}
	${CPP} ${OBJ} ${CPPFLAGS} -o ${NAME}

clean:
	${REMOVE} ${OBJ}

fclean: clean
	${REMOVE} ${NAME}

re: fclean all

.PHONY: all clean fclean re