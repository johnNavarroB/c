# file name
NAME	= libft.a
# compiler and flags
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
# directories
INCLUDES	= includes
# source and object files
SOURCE_FILES	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJECT_FILES	= ${SOURCE_FILES:.c=.o}
# library creation
CREATE_LIB	= ar rc
CREATE_INDEX	= ranlib
# remove files
DELETE		= rm -f
# compiles source files into object files
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDES}
# builds the library
${NAME}: ${OBJECT_FILES}
	${CREATE_LIB} ${NAME} ${OBJECT_FILES}
	${CREATE_INDEX} ${NAME}
# default rule builds the library
all: ${NAME}
# deletes object files
clean:
	${DELETE} ${OBJECT_FILES}
# deletes object files and the library
fclean: clean
	${DELETE} ${NAME}
# deletes object files, the library and builds it
re: fclean all