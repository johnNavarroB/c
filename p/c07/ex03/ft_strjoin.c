/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 06:48:14 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/19 06:48:20 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char	*ft_c(char *destination, char *source)
{
	int	index;

	index = 0;
	while (source[index] != '\0')
	{
		destination[index] = source[index];
		index ++;
	}
	destination[index] = '\0';
	return (destination);
}

int	ft_l(char *string)
{
	int	index;

	index = 0;
	while (string[index])
		index ++;
	return (index);
}

int	ft_tl(int size, char **strs, int separator_length)
{
	int	length;
	int	index;

	length = 0;
	index = 0;
	while (index < size)
	{
		length += ft_l(strs[index]);
		length += separator_length;
		index ++;
	}
	length -= separator_length;
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	char	*string;
	char	*pt_str;
	int		index;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	length = ft_tl(size, strs, ft_l(sep));
	pt_str = (string = (char *)malloc((length + 1) * sizeof(char)));
	if (!pt_str)
		return (0);
	index = 0;
	while (index < size)
	{
		ft_c(pt_str, strs[index]);
		pt_str += ft_l(strs[index]);
		if (index < size - 1)
		{
			ft_c(pt_str, sep);
			pt_str += ft_l(sep);
		}
		index ++;
	}
	*pt_str = '\0';
	return (string);
}
