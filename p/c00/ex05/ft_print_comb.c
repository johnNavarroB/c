/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:03:06 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/12 20:42:38 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	iterate_comb(char *combination[4], int index, int index_j, int index_k)
{
	index = 0;
	while (index < 8)
	{
		index_j = index + 1;
		while (index_j < 9)
		{
			index_k = index_j + 1;
			while (index_k < 10)
			{
				combination[0] = index + '0';
				combination[1] = index_j + '0';
				combination[2] = index_k + '0';
				combination[3] = '\0';
				write(1, &combination, 4);
				if (index != 7 || index_j != 8 || index_k != 9)
				{
					write(1, ", ", 3);
				}
				index_k ++;
			}
			index_j ++;
		}
		index ++;
	}
}

void	ft_print_comb(void)
{
	char	combination[4];
	int	index;
	int	index_j;
	int	index_k;

	iterate_comb(&combination, index, index_j, index_k);
}