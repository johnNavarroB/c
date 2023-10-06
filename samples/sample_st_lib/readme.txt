### a Static Library (.a) or Statically Linked Library is a 
### collection of Object Files that are bundled together 
### into a single Archive File (.a)

### the process to create a Static Library is:

## compile C Source Files into Object Files
## "-c" means to Compile and Assemble but do not Link
## (supposing there is a libft.h in the current directory)
cc -Wall -Wextra -Werror -c ft_sample.c -o ft_sample.o

## link the Object Files into a single Archive File
ar rc libft.a ft_sample1.o ft_sample2.o

## what is a Symbol in a Static Library?
##
## a Symbol refers to an identifier for a function name, 
## variable or constant that is defined in the Object Files
##
## Symbols represent code or data elements that can be accessed 
## by other parts of a program linked with the library

## after an archive is created or modified, it must be indexed
## the index is leveraged by the compiler to speed up symbol-lookup
## and to make sure that the order of the symbols will not affect compilation
ranlib libft.a

## it can also be indexed with the "-s" option of the "ar" command
ar rcs libft.a ft_*.o

## the Object Files of a Static Library can be listed with the "-t" option
ar -t libft.a

## the Symbols of a Static Library can be listed using "nm"
nm libft.a

### how to use a Static Library

## ft_isalpha.c: source code of the library
## test_isalpha.c: source code containing the main() function
## ft_isalpha,o: object file
## libft.h: header file
## libtest.a: static library

## compiles the source code containing the main() function
## "-L" specifies the path to the Static Library
## "-l" specifies the Static Library name
## without the "lib" prefix and ".a" suffix
## because the linker attaches these parts back to the library name
cc -Wall -Wextra -Werror test_isalpha.c -L . -l test -o test_isalpha

