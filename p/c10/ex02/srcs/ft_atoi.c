/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 23:15:01 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/20 23:15:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	i;
	int	is_negative;
	int	value;

	i = 0;
	is_negative = 0;
	value = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i ++;
	if (str[i] == '-')
		is_negative = 1;
	if ((str[i] == '-') || (str[i] == '+'))
		i ++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		value *= 10;
		value += ((int)str[i] - '0');
		i ++;
	}
	if (is_negative == 1)
		return (- value);
	else
		return (value);
}
