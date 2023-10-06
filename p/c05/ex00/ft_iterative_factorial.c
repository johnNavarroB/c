/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 07:09:24 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/17 07:09:31 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	index;
	int	value;

	index = 0;
	value = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	while (index <= nb)
	{
		if (index > 0)
		{
			value *= index;
		}
		index ++;
	}
	return (value);
}