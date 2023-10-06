/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_emule_cat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 23:15:01 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/20 23:15:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_header.h"

void	ft_emule_cat(int argc, char **argv)
{
	int	index;

	if (argc > 1)
	{
		g_program_name = basename(*argv);
		index = 0;
		while (++ index < argc)
		{
			if (argv[index][0] == '-' && argv[index][1] == '\0')
				ft_stdin_to_stdout();
			else
				ft_get_file_content(argv[index]);
		}
	}
	else if (argc == 1)
		ft_stdin_to_stdout();
}
