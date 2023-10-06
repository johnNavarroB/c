/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 01:40:35 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/17 01:40:56 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_p(char character)
{
	write(1, &character, 1);
}

int		ft_l(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index ++;
	return (index);
}

int	ft_c(char *str)
{
	int	index;
	int	index_j;
	int	length;

	index = 0;
	length = ft_l(str);
	if (str[0] == '\0' || length == 1)
		return (0);
	while (str[index] != '\0')
	{
		if (str[index] <= 32 || str[index] == 127)
			return (0);
		else if (str[index] == '+' || str[index] == '-')
			return (0);
		index_j = index + 1;
		while (index_j < length)
		{
			if (str[index] == str[index_j])
				return (0);
			index_j ++;
		}
		index ++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		length;
	int		base_format_exception;
	long	value;

	length = ft_l(base);
	base_format_exception = ft_c(base);
	value = nbr;
	if (base_format_exception == 1)
	{
		if (value < 0)
		{
			ft_p('-');
			value *= -1;
		}
		if (value < length)
			ft_p(base[value]);
		if (value >= length)
		{
			ft_putnbr_base(value / length, base);
			ft_putnbr_base(value % length, base);
		}
	}
}
