#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_length(const char string[])
{
	int index;

	index = 0;
	while (string[index] != '\0') index ++;
	return index;
}

void ft_add(char *source, char character)
{
	int length;

	length = 0;
	while (source[length] != '\0') length ++;

    printf("LENGTH IS = %d\n", length);

	*(source + length) = character;
	*(source + (length + 1)) = '\0';
}

void ft_print_alphabet(void)
{
	char *alphabet;
	char character;

    alphabet = (char*) malloc(26 * sizeof(char));
	character = 'a';
/*
	while (character <= 'z')
	{
		ft_add(alphabet, character);
	}
*/

    *alphabet = 'd';
    *(alphabet + 1) = 'H';

    ft_add(alphabet, 't');
    ft_add(alphabet, 'a');

    write(1, alphabet, 1);
    write(1, alphabet + 1, 1);
    write(1, alphabet + 2, 1);

    printf("\nCHARACTER: %c\n", *alphabet);
    printf("\nCHARACTER: %c\n", *(alphabet + 1));
    printf("\nCHARACTER: %c\n", *(alphabet + 2));
    printf("\nCHARACTER: %c\n", *(alphabet + 3));

	//write(1, &alphabet, ft_length(alphabet));

    free(alphabet);
}

int main()
{
	ft_print_alphabet();
	return (0);
}