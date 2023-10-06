/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 07:09:24 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/17 07:09:31 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int value;

	value = nb;
	if (value > value * nb)
	{
		return (0);
	}
	else if (power > 1)
	{
		return (value * ft_recursive_power(value, power - 1));
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	return (value);
}