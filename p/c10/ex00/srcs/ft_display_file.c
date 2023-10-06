/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 23:15:01 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/20 23:15:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_header.h"

void	ft_b(int fd)
{
	char	buffer;
	int		r;

	while ((r = read(fd, &buffer, 1)))
	{
		if (r == -1)
		{
			ft_putstr("Cannot read file.\n");
			break;
		}
		else
			ft_putchar(buffer);
	}
	if (close(fd) == -1)
		ft_putstr("Error closing the file.\n");
	else
		ft_putchar('\n');
}

void	ft_a(char **argv)
{
	int		fd;

	fd = 0;
	if (ft_strcmp(argv[1], ".") == 0 || ft_strcmp(argv[1], "/") == 0 ||
		ft_strcmp(argv[1], "..") == 0 || ft_strcmp(argv[1], "./") == 0 ||
		ft_strcmp(argv[1], "../") == 0)
	{
		ft_putstr(argv[1]);
		ft_putstr(": Is a directory.\n");
	}
	else if ((fd = open(argv[1], O_RDONLY)) == -1)
		ft_putstr("Cannot read file.\n");
	else
		ft_b(fd);
}

void	ft_display_file(int argc, char **argv)
{
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc == 2)
		ft_a(argv);
}
