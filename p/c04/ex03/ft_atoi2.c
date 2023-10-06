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

int	ft_rw(char *string, int *index_pointer)
{
	int	index;
	int	sign;

	index = 0;
	sign = 1;
	while ((string[index] >= 9 && string[index] <= 13) || string[index] == 32)
		index ++;
	while (string[index] && (string[index] == '+' || string[index] == '-'))
	{
		if (string[index] == '-')
			sign *= -1;
		index ++;
	}
	*index_pointer = index;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	index;
	int	sign;
	int	result;

	sign = ft_rw(str, &index);
	result = 0;
	while (str[index] && str[index] >= '0' && str[index] <= '9')
	{
		result *= 10;
		result += str[index] - '0';
		index ++;
	}
	result *= sign;
	return (result);
}
