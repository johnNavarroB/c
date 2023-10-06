/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 01:40:35 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/17 01:40:56 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_recursive(long value)
{
	long	digit;
	long	ten;
	char	print;

	digit = value % 10;
	ten = value / 10;
	if (value > 9)
	{
		ft_recursive(ten);
	}
	print = (char) digit + 48;
	write(1, &print, 1);
}

void	ft_wn(int nb, long value)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		value = nb * -1;
	}
	else
	{
		value = nb + 0;
	}
	ft_recursive(value);
}

void	ft_putnbr(int nb)
{
	long	value;

	value = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		ft_wn(nb, value);
	}
}