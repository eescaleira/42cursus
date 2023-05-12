# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 00:10:20 by eescalei          #+#    #+#              #
#    Updated: 2023/05/12 23:30:28 by eescalei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FUN = 
OBJS = {FUN:.c=.o}
HEADER = libftprinf.h
INCLUDE = -I include
CC = cc
RM = rm -f
FLAGS = -Wall -Wextra -Werror

.c.o: ${CC} ${FLAGS} ${include} -c $< -o ${<:.c=.o}
${NAME}: ${OBJS} ar rcs ${NAME} ${OBJS} ${HEADER}
all: ${NAME}
clean: ${RM} ${OBJS}
fclean: clean ${RM} ${NAME}
re: fclean all
.PHONY: all clean fclean re bonus
