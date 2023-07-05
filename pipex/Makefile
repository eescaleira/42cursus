

NAME = pipex 
SRC = main.c free.c childs.c
OBJS = ${SRC:.c=.o}
HEADER = pipex.h
INCLUDE = -I include
CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -f

.c.o
	${CC} ${FLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS} ${HEADER}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:	fclean all

.PHONY	all clean fclean re
