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
SOURCE_FILES	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c
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
