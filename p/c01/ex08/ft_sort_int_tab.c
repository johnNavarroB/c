/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 06:13:23 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/17 06:13:34 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	auxiliar;
	int	index;
	int	index_j;

	index = 0;
	while(index < size)
	{
		index_j = index + 1;
		while (index_j < size)
		{
			if (tab[index] > tab[index_j])
			{
				auxiliar = tab[index];
				tab[index] = tab[index_j];
				tab[index_j] = auxiliar;
			}
			index_j ++;
		}
		index ++;
	}
}