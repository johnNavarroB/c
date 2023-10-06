/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:48:40 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/19 12:48:46 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_l(char *string)
{
	int	index;

	index = 0;
	while (string[index])
		index ++;
	return (index);
}

char	*ft_d(char *src)
{
	int		index;
	char	*duplicate;
	char	*pt_dup;

	index = 0;
	pt_dup = (duplicate = (char *)malloc(ft_l(src) * sizeof(char) + 1));
	if (!pt_dup)
		return (0);
	while (src[index])
	{
		duplicate[index] = src[index];
		index ++;
	}
	duplicate[index] = '\0';
	return (duplicate);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*s_strings;
	struct s_stock_str	*pt_s_str;
	int					index;

	pt_s_str = (s_strings = malloc((ac + 1) * sizeof(struct s_stock_str)));
	if (!pt_s_str)
		return (NULL);
	index = 0;
	while (index < ac)
	{
		s_strings[index].size = ft_l(av[index]);
		s_strings[index].str = av[index];
		s_strings[index].copy = ft_d(av[index]);
		index ++;
	}
	s_strings[index].str = '\0';
	s_strings[index].copy = '\0';
	return (s_strings);
}
