#include <unistd.h>

// fills an array with zeros
void	ft_fill_with_zero(int *binary, int length)
{
	int	index;

	index = 0;
	while (index < length)
	{
		binary[index] = 0;
		index ++;
	}
}

// prints an array of binary values
void	ft_print_binary(int *values, int length)
{
    int index;
	int auxiliar;

    index = 0;
    while (index < length)
    {
		if (index > 0 && index % 4 == 0) write(1, " ", 1);
		auxiliar = values[index] + '0';
        write(1, &auxiliar, 1);
        index ++;
    }
}

// turns an int to its binary representation
void	ft_to_binary(int value, int *buffer)
{
	int	auxiliar;
	int	remainder;
	int	index;

	value = 12345;
	auxiliar = value;
	index = 0;
	ft_fill_with_zero(buffer, 32);
	while (auxiliar != 0)
	{
		remainder = auxiliar % 2;
		buffer[(32 - 1) - index] = remainder;
		index ++;
		auxiliar /= 2;
	}
}

int	main(void)
{
	int	binary[32];
	
	ft_to_binary(12345, binary);
	ft_print_binary(binary, 32);
	return (0);
}