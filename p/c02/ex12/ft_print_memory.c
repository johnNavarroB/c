/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 06:13:23 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/17 06:13:34 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_b(int value, int radix, int buffer[], int index)
{
	if (value > radix - 1)
		ft_b(value / radix, radix, buffer, index + 1);
	buffer[index] = value % radix;
}

void	ft_c(char *character)
{
	if (*character >= ' ' && *character != 127)
		write(1, character, 1);
	else
		write(1, &".", 1);
}

void	ft_h(unsigned int value, int radix, int length)
{
	int	buffer[14 + 1];
	int	index;

	index = -1;
	while (index < 14)
	{
		buffer[index] = 0;
		index ++;
	}
	ft_b(value, radix, buffer, 0);
	index = -1;
	while (index++ < length)
		write(1, &"0123456789abcdefgh"[buffer[length - index]], 1);
}

void	ft_p(void *addr, unsigned int size, char *address)
{
	int index;

	ft_h((unsigned int) address, 16, 14);
	write(1, &": ", 2);
	index = 0;
	while (index < 16)
	{
		if (addr + size <= (void *) (address + index - 1))
			write(1, &"  ", 2);
		else
			ft_h((unsigned char) * (address + index - 1), 16, 1);
		if (index % 2 == 0)
			write(1, &" ", 1);
		index ++;
	}
	index = 0;
	while (index++ < 16)
		if (addr + size > (void *) (address + index - 1))
			ft_c((char *) address + index - 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*address;

	address = (char *) address;
	while ((void *) address < (addr + size))
	{
		ft_p(addr, size, address);
		write(1, &"\n", 1);
		address += 16;
	}
	return (addr);
}

int	main(void)
{
	char	memory[46] = "some text here to be printed in the terminal!";
	ft_print_memory(memory, 45);
	return (0);
}