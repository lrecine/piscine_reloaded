NAME = ft_display_file
SRCS = srcs/*.c
CC = gcc
CFLAGS = -Wall -Werror -Wextra

all:
	${CC} ${SRCS} ${CFLAGS} -o ${NAME}

clean:
	rm -f ${OBJS}
fclean: clean
	rm -f ${NAME}

re: fclean all