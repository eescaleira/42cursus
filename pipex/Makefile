NAME = pipex
HEADER = pipex.h
CC = cc
FLAGS = -Wall -Werror -Wextra
INCLUDE = -I include
RM = rm -f
SRC = pipex.c free.c childs.c libft/ft_split.c libft/ft_strncmp.c libft/ft_strjoin.c libft/ft_strlen.c libft/ft_substr.c libft/ft_strdup.c
OBJS = ${SRC:.c=.o}
.c.o:
	${CC} ${FLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS} ${HEADER}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
