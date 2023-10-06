/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:48:40 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/19 12:48:46 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <unistd.h>

void	ft_p(char character)
{
	write(1, &character, 1);
}

void	ft_n(int value)
{
	if (value == -2147483648)
	{
		ft_p('-');
		ft_p('2');
		ft_n(147483648);
	}
	else if (value < 0)
	{
		ft_p('-');
		value = -value;
		ft_n(value);
	}
	else if (value > 9)
	{
		ft_n(value / 10);
		ft_n(value % 10);
	}
	else
		 ft_p(value + '0');
}

void	ft_s(char *string)
{
	while (*string)
	{
		write(1, string, 1);
		string ++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	index;

	index = 0;
	while (par[index].str)
	{
		ft_s(par[index].str);
		ft_s("\n");
		ft_n(par[index].size);
		ft_s("\n");
		ft_s(par[index].copy);
		ft_s("\n");
		index ++;
	}
}
