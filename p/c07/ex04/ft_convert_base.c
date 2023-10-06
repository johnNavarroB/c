/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 06:48:14 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/19 06:48:20 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int		ft_l(int a_value, char *base, int lenght);
void	ft_b(int a_value, char *base, char *char_val);

int	ft_f(char string, char *base)
{
	int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (string == base[index])
			return (index);
		index ++;
	}
	return (-1);
}

int	ft_w(char *string, int *index_pointer)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((string[i] >= 9 && string[i] <= 13) || string[i] == 32)
		i ++;
	while ((string[i] != '\0') && (string[i] == '+' || string[i] == '-'))
	{
		if (string[i] == '-')
			sign *= -1;
		i ++;
	}
	*index_pointer = i;
	return (sign);
}

int	ft_c(char *string)
{
	int	index;
	int	index_j;

	index = 0;
	if (string[0] == '\0' || string[1] == '\0')
		return (0);
	while (string[index] != '\0')
	{
		if ((string[index] >= 9 && string[index] <= 13))
			return (0);
		if (string[index] == 32 || string[index] == '+' || string[index] == '-')
			return (0);
		index_j = index + 1;
		while (string[index_j] != '\0')
		{
			if (string[index] == string[index_j])
				return (0);
			index_j ++;
		}
		index ++;
	}
	return (index);
}

int	ft_a(char *string, char *base)
{
	int	index;
	int	value;
	int	length;
	int	sign;
	int	char_index;

	index = 0;
	value = 0;
	length = ft_c(base);
	if (length >= 2)
	{
		sign = ft_w(string, &index);
		char_index = ft_f(string[index], base);
		while (char_index != -1)
		{
			value = (value * length) + char_index;
			index ++;
			char_index = ft_f(string[index], base);
		}
		return (value *= sign);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		a_value;
	int		a_val_length;
	char	*pt_v;
	char	*value;

	if (ft_c(base_to) == 0 || ft_c(base_from) == 0)
		return (0);
	a_value = ft_a(nbr, base_from);
	a_val_length = ft_l(a_value, base_to, 0);
	pt_v = (value = (char *)malloc(sizeof(char) * (a_val_length + 1)));
	if (!pt_v)
		return (0);
	ft_b(a_value, base_to, value);
	value[a_val_length] = '\0';
	return (value);
}
