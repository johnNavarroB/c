/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 07:09:24 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/17 07:09:31 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_c(int nb)
{
	int index;

	if (nb < 2)
		return (0);
	index = 2;
	while (index <= nb / index)
	{
		if (nb % i == 0)
			return (0);
		index ++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (nb <= 2147483647)
	{
		if (ft_c(nb))
			return (nb);
		nb ++;
	}
	return (2147483647);
}
