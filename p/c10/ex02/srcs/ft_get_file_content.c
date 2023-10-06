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

void	ft_get_file_content(int index, int fd, int argc, char **argv)
{
	int		offset;
	int		amount_of_bytes;
	int		able_to_read;
	char	buffer;

	if (argv[1][0] == '-' && (argv[1][1] == 'C' || argv[1][1] == 'c'))
	{
		ft_print_name(index, argc, argv[index]);
		offset = (ft_get_file_length(argv[index]) - ft_atoi(argv[2]));
		amount_of_bytes = 0;
		while (amount_of_bytes < offset)
		{
			if ((able_to_read = read(fd, &buffer, 1)) == -1)
			{
				ft_printerr(errno, argv[index]);
				break;
			}
			amount_of_bytes += able_to_read;
		}
		if (amount_of_bytes == offset)
		{
			while  ((able_to_read = read(fd, &buffer, 1)))
			{
				if (able_to_read == -1)
				{
					ft_printerr(errno, argv[index]);
					break;
				}
				write(1, &buffer, 1);
			}
		}
	}
}
