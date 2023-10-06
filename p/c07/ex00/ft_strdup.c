/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 06:48:14 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/19 06:48:20 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_l(char *string)
{
	int	index;

	index = 0;
	while (string[index])
		index ++;
	return (index);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*destination;

	index = 0;
	destination = (char *)malloc(ft_l(src) * sizeof(char) + 1);
	if (!destination)
	{
		return (0);
	}
	while (src[index])
	{
		destination[index] = src[index];
		index ++;
	}
	destination[index] = '\0';
	return (destination);
}
