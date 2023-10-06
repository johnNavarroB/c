### having troubles linking the static library (.a) 
### with the source code file (.c)

## tried:

cc test_isalpha.c -o test_isalpha -L. -lft
cc -o test_isalpha test_isalpha.c -L. -lft

cc test_isalpha.c -o test_isalpha -L. libft.a
cc test_isalpha.c -o test_isalpha -L . libft.a

cc -static test_isalpha.c libft.a

## it prompts that the header file is not found

### solved!

## the header file must be present in the directory
## testing.h, libft.a, test_isalpha.c

## "testing.h" must be specified in "test_isalpha.c" 
## which contains the main() function

## then just compile the main() source file
cc -Wall -Wextra -Werror test_isalpha.c -L . -l ft -o test_isalpha

