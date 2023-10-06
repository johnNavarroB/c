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

void	ft_pb(int nbr, int length, char *base)
{
	int	value;

	if (nbr < 0)
	{
		ft_p('-');
		value = nbr * -1;
	}
	else
	{
		value = nbr;
	}
	if (value >= length)
	{
		ft_pb(value / length, length, base);
	}
	ft_p(base[value % length]);
}

int	ft_l(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index ++;
	}
	return (index);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	length;
	int	index;
	int	index_j;

	index = 0;
	length = ft_l(base);
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
	ft_pb(nbr, length, base);
}