/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file_content.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 23:15:01 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/20 23:15:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_header.h"

void	ft_get_file_content(char *argv)
{
	int 	file_descriptor;
	int		able_to_read;
	char	buffer;

	if ((file_descriptor = open(argv, O_RDONLY)) == -1)
		ft_printerr(errno, argv);
	else
	{
		while ((able_to_read = read(file_descriptor, &buffer, 1)))
		{
			if (able_to_read == -1)
			{
				ft_printerr(errno, argv);
				break;
			}
			else
				write(1, &buffer, 1);
		}
		if ((close(file_descriptor)) == -1)
			ft_printerr(errno, argv);
	}
}
