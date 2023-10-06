/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 06:48:14 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/19 06:48:20 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int		length;
	int		*buffer;
	int		*pt_b;
	int		index;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	length = max - min;
	pt_b = (buffer = malloc(length * sizeof(int)));
	if (!pt_b)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index < length)
	{
		buffer[index] = min + index;
		index ++;
	}
	return (length);
}
