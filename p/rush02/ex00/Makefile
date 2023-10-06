NAME=rush-02.exe

CC=gcc
CFLAGS=-Wall -Wextra -Werror

FT_DIR=functions
OBJ_DIR=objects

SRC=$(wildcard $(FT_DIR)/*.c)
OBJ=$(wildcard $(OBJ_DIR)/*.o)

all: $(NAME)

ft_main.o: ./functions/ft_main.c
	$(CC) -c ./functions/ft_main.c -o ./objects/ft_main.o

main.o: ./main.c
	$(CC) -c ./main.c -o ./objects/main.o

%.o: $(SRC)
	$(CC) -c $< -o $@

$(NAME): ft_main.o main.o
	$(CC) $(CFLAGS) ./objects/*.o -o $@

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)
