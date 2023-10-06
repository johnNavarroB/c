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

int	ft_b(char character, char *base)
{
	int index;

	index = 0;
	while (base[index] != '\0')
	{
		if (character == base[index])
			return (index);
		index ++;
	}
	return (-1);
}

int	ft_w(char *string, int *index_pointer)
{
	int	index;
	int	sign;

	index = 0;
	while ((string[index] >= 9 && string[index] <= 13) || string[index] == 32)
		index ++;
	sign = 1;
	while (string[index] && (string[index] == '+' || string[index] == '-'))
	{
		if (string[index] == '-')
			sign *= -1;
		index ++;
	}
	*index_pointer = index;
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
		if (string[index] <= 32 || string[index] == 127)
			return (0);
		if (string[index] == '+' || string[index] == '-')
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

int		ft_atoi_base(char *str, char *base)
{
	int		index;
	int		value;
	int		length;
	int		sign;
	int		char_index;

	index = 0;
	value = 0;
	length = ft_c(base);
	if (length >= 2)
	{
		sign = ft_w(str, &index);
		char_index = ft_b(str[index], base);
		while (char_index != -1)
		{
			index ++;
			value = (value * length) + char_index;
			char_index = ft_b(str[index], base);
		}
		return (value *= sign);
	}
	return (0);
}
