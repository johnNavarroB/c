### check norminette
norminette *.c
norminette -R CheckDefine libft.h

## a C header file (.h) contains: Data Structures (enum & struct), Function Prototypes, 
## Global Variables, Type Definitions and Preprocessor Directives which include 
## "include" directives, Constants, Macros and Conditional Compilation Directives

### examples

## enum
enum id
{
	false = 0,
	true = 1
};

## struct
struct Point
{
	int x;
	int y;
};

## Function Prototype
void	ft_putstr(char *str);

## Global Variable
extern int global_var;

## Type Definition
typedef enum id
{
	false = 0,
	true = 1
}	t_bool;

## include
# include <unisdt.h>

## Constant
# define FALSE 0

## Macro
# define EVEN(number) (number % 2 == 0)

## Conditional Compilation Directive
#ifndef SAMPLELIB_H
# define SAMPLELIB_H

void	ft_putstr(char *str);
#endif

### to compile the example provided
## source files: ft_test.c, ft_main.c
## header file: libft.h
cc -Wall -Wextra -Werror -c ft_test.c -o ft_test.o -I .
cc -Wall -Wextra -Werror -c ft_main.c -o ft_main.o -I .
cc -o resulting_app ft_test.o ft_main.o
