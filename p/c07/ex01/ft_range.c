/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 06:48:14 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/19 06:48:20 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int		length;
	int		index;
	int		*pt_b;
	int		*buffer;

	if (min >= max)
		return (0);
	length = max - min;
	pt_b = (buffer = malloc(length * sizeof(int)));
	if (!pt_b)
		return (0);
	index = 0;
	while (index < length)
	{
		buffer[index] = min + index;
		index ++;
	}
	return (buffer);
}
