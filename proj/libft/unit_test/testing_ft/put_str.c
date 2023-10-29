/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:06:10 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/08 21:10:04 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_put_str(char *character)
{
	int	index;

	index = 0;
	while (character[index])
	{
		write(1, character + index, 1);
		index ++;
	}
}
