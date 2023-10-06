/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 07:09:24 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/17 07:09:31 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;

	index = 1;
	if (nb > 0)
	{
		while (index * index <= nb)
		{
			if (index * index == nb)
			{
				return (index);
			}
			else if (index >= 46341)
			{
				return (0);
			}
			index ++;
		}
	}
	return (0);
}