# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 22:38:21 by jonnavar          #+#    #+#              #
#    Updated: 2023/10/02 22:38:58 by jonnavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# file name
NAME			= libft.a

# compiler and flags
CC				= cc
CFLAGS			= -Wall -Wextra -Werror

# there are no directories
HEADERS			= .

# source and object files
SOURCE_FILES	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c
OBJECT_FILES	= ${SOURCE_FILES:.c=.o}

# library creation. "r"="replace" "c"="create"
CREATE_LIB		= ar rc
CREATE_INDEX	= ranlib

# remove files
DELETE			= rm -f

# compile source files into object files
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

# builds the library
${NAME}: ${OBJECT_FILES}
	${CREATE_LIB} ${NAME} ${OBJECT_FILES}
	${CREATE_INDEX} ${NAME}

# default rule, builds the library
all: ${NAME}

# deletes object files
clean:
	${DELETE} ${OBJECT_FILES}

# deletes object files and the library
fclean: clean
	${DELETE} ${NAME}

# deletes object files, the library and builds it
re: fclean all
