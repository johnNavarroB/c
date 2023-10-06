#include <unistd.h>

int ft_length(int value)
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

void    ft_print_unsigned(int value)
{
    int number_length;
    char string_number[ft_length(value) + 1];

    number_length = ft_length(value);
    ft_int_to_str(value, string_number, number_length);
    write(1, &string_number, sizeof(string_number));
}

void    ft_putnbr(int nb)
{
    int value;

    if (nb < 0)
    {
        write(1, "-", 2);
        value = nb * -1;
    }
    else
    {
        value = nb;
    }
    if (value >= 10)
    {
        ft_print_unsigned(value / 10);
    }
    ft_print_unsigned(value % 10);
}