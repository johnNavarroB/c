/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_name.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 23:15:01 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/20 23:15:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_header.h"

void	ft_print_name(int index, int argc, char *name)
{
	if (argc > 4)
	{
		if (index >= 4)
			ft_putstr("\n==> ");
		else
			ft_putstr("==> ");
		ft_putstr(name);
		ft_putstr(" <==\n");
	}
}
