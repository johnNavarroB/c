/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 06:13:23 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/17 06:13:34 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_p(char character)
{
	write(1, &character, 1);
}

int	ft_ip(char c)
{
	if (' ' <= c && c != 127)
	{
		return (1);
	}
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int					index;
	unsigned	char	c;

	index = 0;
	while (str[index])
	{
		c = str[index];
		if (ft_ip(c))
		{
			ft_p(c);
		}
		else
		{
			ft_p('\\');
			ft_p("0123456789abcdef"[c / 16]);
			ft_p("0123456789abcdef"[c % 16]);
		}
		index ++;
	}
}