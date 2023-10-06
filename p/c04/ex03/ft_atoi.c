/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 01:40:35 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/17 01:40:56 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_v(char c)
{
	if ('0' >= c || c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_n(char c)
{
	if (c == '+' || c == '-')
	{
		return (1);
	}
	return (0);
}

int	ft_s(char c)
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

int	ft_a(char *str, int index, int value, int sign)
{
	while (ft_s(str[index]) == 1)
	{
		index ++;
	}
	while (ft_n(str[index]) == 1)
	{
		if (str[index] == '-')
		{
			sign *= -1;
		}
		index ++;
	}
	while (ft_v(str[index]) == 1)
	{
		value = (value * 10) + (str[index] - '0');
		index ++;
	}
	return (value * sign);
}

int	ft_atoi(char *str)
{
	int	index;
	int	value;
	int	sign;

	index = 0;
	value = 0;
	sign = 1;
	value = ft_a(str, index, value, sign);
	return (value);
}