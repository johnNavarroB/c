## compile source code into object files
cc -Wall -Wextra -Werror -c src/ft_isalpha.c -o objects/ft_isalpha.o -I includes
cc -Wall -Wextra -Werror -c test/test_isalpha.c -o objects/test_isalpha.o -I includes

## link object files into binary executable files
cc objects/ft_isalpha.o objects/test_isalpha.o -o bin/ft_isalpha

## execute
bin/ft_isalpha
