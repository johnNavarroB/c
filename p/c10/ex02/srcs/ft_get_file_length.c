/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file_length.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 23:15:01 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/20 23:15:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_header.h"

int		ft_get_file_length(char *argv)
{
	int		amount_of_bytes;
	int		file_descriptor;
	char	buffer;
	int		able_to_read;

	amount_of_bytes = 0;
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
			amount_of_bytes ++;
		}
		if (close(file_descriptor) == -1)
			ft_printerr(errno, argv);
	}
	return (amount_of_bytes);
}
