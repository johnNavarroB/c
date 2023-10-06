/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:00:40 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/15 19:00:21 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int index;

	index = 0;
	while (str[index])
	{
		index ++;
	}
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int index;
	unsigned int index_j;

	index = 0;
	index_j = 0;
	while (dest[index] && index < size)
	{
		index ++;
	}
	index_j = index;
	while (src[index - index_j] && index + 1 < size)
	{
		dest[index] = src[index - index_j];
		index ++;
	}
	if (index_j < size)
	{
		dest[index] = '\0';
	}
	return (index_j + ft_strlen(src));
}

int	main(void)
{
	char str1[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
	char str2[4] = {'w', 'o', 'r', '\0'};
	int l = ft_strlcat(str1, str2, 11);

	printf("%d\n", l);
	return (0);
}