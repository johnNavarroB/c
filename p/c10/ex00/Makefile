# **************************************************************************** #
#                                                                              #
#                                                        :::      ::::::::     #
#   Makefile                                           :+:      :+:    :+:     #
#                                                    +:+ +:+         +:+       #
#   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+          #
#                                                +#+#+#+#+#+   +#+             #
#   Created: 2023/06/20 23:15:01 by jonnavar          #+#    #+#               #
#   Updated: 2023/06/20 23:15:06 by jonnavar         ###   ########.fr         #
#                                                                              #
# **************************************************************************** #
# file name
NAME := ft_display_file
# compiler and flags
CC := cc
CFLAGS := -Wall -Werror -Wextra -c
LINK_FLAGS	:= -Wall -Werror -Wextra -o
# directories
SOURCE_DIRECTORY := ./srcs/
OBJECT_DIRECTORY	:= ./obj/
HEADER_FLAG := -I includes/
# source and object files
SOURCE_FILES := main.c ft_display_file.c ft_strcmp.c ft_putstr.c ft_putchar.c
OBJECT_FILES = $(SRC_FILES:.c=.o)
# relative paths
SOURCES = $(addprefix $(SOURCE_DIRECTORY), $(SOURCE_FILES))
OBJECTS = $(addprefix $(OBJECT_DIRECTORY), $(OBJECT_FILES))
# remove files
DELETE := rm -rf
# default rule creates obj dir and the binary
all: obj $(NAME)
# creates the object files directory
obj: $(SOURCES)
	@mkdir -p $(OBJECT_DIRECTORY)
# compiles source files into object files
$(OBJECT_DIRECTORY)%.o: $(SOURCE_DIRECTORY)%.c
	$(CC) $(CFLAGS) $< -o $@ $(HEADER)
# links the object files into the binary file
$(NAME): $(OBJECTS)
	$(CC) $(LINK_FLAGS) $(NAME) $(OBJECTS) $(HEADER_FLAG)
# deletes the object files directory
clean:
	$(DELETE) $(OBJECT_DIRECTORY)
# deletes the object files and the binary file
fclean: clean
	/bin/rm -f $(NAME)
# deletes the object files, binary file and compiles the source code
re: fclean all
# defines the dependencies as phony rules
.PHONY: all clean fclean re