/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 01:40:35 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/17 01:40:56 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_b(char character, char *base)
{
	int index;

	index = 0;
	while (base[index] && base[index] != character)
		index ++;
	return (index);
}

int		ft_s(int c)
{
	if (c == ' ' || c == '\t' || c == '\n')
	{
		return (1);
	}
	else if (c == '\v' || c == '\f' || c == '\r')
	{
		return (1);
	}
	return (0);
}

int		ft_c(char *base, int length)
{
	int index;
	int index_j;

	index = 0;
	while (index < length)
	{
		index_j = index + 1;
		while (index_j < length)
		{
			if (base[index] == base[index_j])
				return (1);
			index_j ++;
		}
		if (base[index] == '-' || base[index] == '+')
			return (1);
		index ++;
	}
	return (0);
}

int		ft_l(char *str)
{
	int index;

	index = 0;
	while (str[index])
		index ++;
	return (index);
}

int	ft_atoi_base(char *str, char *base)
{
	int	index;
	int length;
	int value;

	index = 0;
	length = ft_l(base);
	value = 0;
	if (length < 2)
		return (0);
	if (ft_c(base, length))
		return (0);
	while (ft_s(str[index]))
		index ++;
	while (ft_b(str[index], base) < length)
	{
		value = value * length - ft_b(str[index], base);
		index ++;
	}
	return (-value);
}