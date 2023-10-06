/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_emule_tail.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 23:15:01 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/20 23:15:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_header.h"

void	ft_emule_tail(int argc, char **argv)
{
	int		index;
	int		file_descriptor;

	if (argc > 1)
	{
		g_program_name = basename(*argv);
		index = 3;
		while (index < argc)
		{
			if ((file_descriptor = open(argv[index], O_RDONLY)) == -1)
				ft_printerr(errno, argv[index]);
			else
			{
				ft_get_file_content(index, file_descriptor, argc, argv);
				if (close(file_descriptor) == -1)
					ft_printerr(errno, argv[index]);
			}
			index ++;
		}
	}
	else if (argc == 1)
		ft_stdin_to_stdout();
}
