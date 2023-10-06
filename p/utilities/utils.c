#include <stdio.h>
// malloc() and free()
#include <stdlib.h>

// gets the length of a string
int ft_length(const char string[])
{
    int index;

    index = 0;

    while (string[index] != '\0') index ++;

    return index;
}

// gets the length of an int
int ft_int_length(int value)
{
    int length;

    if (value == 0)
    {
        return 1;
    }

    length = 0;
    while (value != 0)
    {
        value /= 10;
        length ++;
    }
    return length;
}

// prints a char
void    ft_putchar(char character)
{
    write(1, &character, 1);
}

// prints a value of a specific base
void	ft_print_base(int nbr, int length, char *base)
{
	int	value;

	if (nbr < 0)
	{
		ft_putchar('-');
		value = nbr * -1;
	}
	else
	{
		value = nbr;
	}
	if (value >= length)
	{
		ft_print_base(value / length, length, base);
	}
	ft_putchar(base[value % length]);
}

// translates a value to a specific base
void	ft_putnbr_base(int value, char *base)
{
	int	length;
	int	index;
	int	index_j;

	index = 0;
	length = ft_length(base);
	while (base[index] && length > 1)
	{
		index_j = index + 1;
		while (base[index_j])
		{
			if (base[index] == base[index_j])
			{
				return ;
			}
			index_j ++;
		}
		if (base[index] == '+' || base[index] == '-')
		{
			return ;
		}
		index ++;
	}
	ft_print_base(value, length, base);
}

// prints an array of chars
void print_char_array(char* values, int length)
{
    int index;

    index = 0;
    
    write(1, "{", 1);
    while (index < length)
    {
        write(1, (values + index), 1);
        if (index != (length - 1)) write(1, ", ", 2);
        index ++;
    }
    write(1, "}", 1);
}

// prints an array of ints
void print_int_array(int* values, int length)
{
    int index;
	int auxiliar;

    index = 0;
    write(1, "{", 1);
    while (index < length)
    {
		auxiliar = values[index] + '0';
        write(1, &auxiliar, 1);
        if (index != (length - 1)) write(1, ", ", 2);
        index ++;
    }
    write(1, "}", 1);
}

// reverse content of int array
void    ft_rev_int_tab(int *tab, int size)
{
    int index;
    
    index = 0;
    while (index != (size / 2))
    {
        int auxiliar;

        auxiliar = *(tab + index);
        *(tab + index) = *(tab + (size - (index + 1)));
        *(tab + (size - (index + 1))) = auxiliar;
        index ++;
    }
}

// adds a character at the end of a string
void    ft_add(char source[], char character)
{
    int length;

    length = 0;
    while (source[length] != '\0') length ++;

    source[length] = character;
    source[length + 1] = '\0';
}

// converts any integer to a string
void  ft_int_to_str(int value, char* string_number, int number_length)
{
    int index;

    index = number_length - 1;
    if (value == 0)
    {
        *string_number = '0';
        *(string_number + 0x1) = '\0';
    }
    else 
    {
        while (value != 0)
        {
            int digit;

            digit = value % 10;
            string_number[index] = digit + '0';
            value /= 10;
            index --;
        }
        string_number[number_length] = '\0';
    }
}

// prints any unsigned int
void    ft_print_unsigned(int value)
{
    int number_length;
    char string_number[ft_length(value) + 1];

    number_length = ft_length(value);
    ft_int_to_str(value, string_number, number_length);
    write(1, &string_number, sizeof(string_number));
}

// prints any int
void    ft_print_int(int value)
{
    int value;

    if (value < 0)
    {
        write(1, "-", 2);
        value = value * -1;
    }
    else
    {
        value = value;
    }
    if (value >= 10)
    {
        ft_print_unsigned(value / 10);
    }
    ft_print_unsigned(value % 10);
}

// copies a source string to the target array
void    ft_set_string(char source[], char target[]) 
{
    int index;

    index = 0;
    while (source[index] != '\0')
    {
        target[index] = source[index];
        index ++;
    }

    target[index] = '\0';
}

// returns 0 if character == [1-4]
int is_valid_number(char character)
{
    if (character == '1') return 0;
    else if (character == '2') return 0;
    else if (character == '3') return 0;
    else if (character == '4') return 0;
    return 1;
}

// returns 0 if the input is made of numbers from 1 to 4 inclusive
int is_valid_input(char clues[])
{
    int index;
    
    index = 0;
    while (index < 31)
    {
        int is_valid;

        is_valid = is_valid_number(clues[index]);
        if (is_valid == 1) return 1;
        index += 2;
    }
    return 0;
}

void    initialize_chances(char chances[][6][4], int size1, int size2, int size3)
{
    int index;
    int index_j;
    int index_k;

    index = 0;
    while (index < size1)
    {
        index_j = 0;
        
        while (index_j < size2)
        {
            index_k = 0;
            while (index_k < size3)
            {

                if (index == 0 && index < 5)

                if (index_k == 0) 
                {
                    chances[index][index_j][index_k] = '1';
                }
                else if (index_k == 1) 
                {
                    chances[index][index_j][index_k] = '2';
                }
                else if (index_k == 2) 
                {
                    chances[index][index_j][index_k] = '3';
                }
                else if (index_k == 3) 
                {
                    chances[index][index_j][index_k] = '4';
                }
                index_k ++;
            }
            index_j ++;
        }
        index ++;
    }
}

