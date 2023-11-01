/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:05:35 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/01 20:14:24 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	void	ft_copy(char *dest, const char *source, int start, int length)
{
	int	index;

	index = 0;
	while (source[start + index] != 0 && length > 0)
	{
		dest[index] = source[start + index];
		index ++;
		length --;
	}
}

static	char	*ft_allocate(const char *string, int start, int length)
{
	int		index;

	index = 0;
	while (string[start + index] != 0 && index < length)
		index ++;
	return ((char *) ft_calloc(index, sizeof(char)));
}

char	*ft_substr(const char *string, unsigned int start, size_t length)
{
	char	*pointer;

	if (!string)
		return ((void *) 0);
	pointer = ft_allocate(string, start, (int) length);
	if (pointer == 0)
		return ((void *) 0);
	ft_copy(pointer, string, start, (int) length);
	return (pointer);
}
