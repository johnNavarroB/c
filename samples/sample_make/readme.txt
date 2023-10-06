### "make" is a Build Automation Tool

## manages the linking of object files, headers and compilation of c files
## which is the building of the project

## its core component is the "Makefile" which describes a set of rules
## and a set of variables

### the rules provided in this basic Makefile are:

## ".c.o" compiles any .c file into its respective .o file
## can not be called from "make" since it has no Target, 
## it's defined as a pattern rule

## "make ${NAME}" in which name stands for "libft.a" in this case
## builds the library

## "make all" or just "make", invokes "make ${NAME}"

## "make clean" deletes object files

## "make fclean" invokes "make clean" and deletes the library file

## "make re" invokes "make fclean" and "make all"
