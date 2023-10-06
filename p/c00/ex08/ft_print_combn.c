#include <unistd.h>

void    ft_putchar(char character)
{
    write(1, &character, 1);
}

int ft_get_auxiliar(int* values, int length)
{
    int index;
    int maximum;

    index = 0;
    maximum = 10 - length;
    while (index < length)
    {
        if (values[index] == maximum)
        {
            return (index - 1);
        }
        else if (index == (length - 1) && values[index] < maximum)
        {
            return (index);
        }
        index ++;
        maximum ++;
    }
    return (-1);
}

void    ft_print_array(int* values, int length)
{
    int index;

    index = 0;
    while (index < length)
    {
        ft_putchar(*(values + index) + '0');
        index ++;
    }
}

void    ft_add_values(int auxiliar, int* values, int length)
{
    int index;
    
    index = auxiliar + 1;
    values[auxiliar] ++;
    while (index < length)
    {
        values[index] = values[index - 1] + 1;
        index ++;
    }
}

void    ft_print_combn(int n)
{
    int auxiliar;
    int index;
    int values[n];

    index = 0;
    while (index < n)
    {
        values[index] = index;
        index ++;
    }
    while (ft_get_auxiliar(values, n) != -1)
    {
        auxiliar = ft_get_auxiliar(values, n);
        ft_print_array(values, n);
        ft_add_values(auxiliar, values, n);
        write(1, ", ", 3);
    }
    ft_print_array(values, n);
}

int main(void)
{
    ft_print_combn(3);

    return (0);
}