/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_emule_hexdump.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 23:15:01 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/20 23:15:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_header.h"

void ft_print_address(int nbr, char *hex)
{
	int		add[9];											
	int 	i;
	int		j;

	i = 0;
	j = 8;
	if(nbr == 0)
	{
		while(j -- > 0)
			ft_putchar('0');
	}
	else
	{
		while (nbr)
		{
			add[i] = nbr % 16;
			nbr /= 16;
			i ++;
		}
		j = (8 - i);
		while(j -- > 0)
			ft_putchar('0');
		while (i > 0)
			ft_putchar(hex[add[--i]]);
	}
	ft_putchar(' ');
	ft_putchar(' ');
}


void	ft_print_hex(int i, unsigned int size, unsigned char *p, char *hex)
{
	unsigned int	j;

	j = 0;
	while ((j < 16) && (i + j < size))
	{
		ft_putchar((char)hex[(*(p + i + j) / 16) % 16]);
		ft_putchar((char)hex[*(p + i + j) % 16]);							
		ft_putchar(' ');
		if(j == 7)
			ft_putchar(' ');
		j ++;
	}
	if(j <= 7)
		ft_putchar(' ');
	while (j < 16)
	{
		ft_putstr("   ");
		j ++;
	}
	ft_putchar(' ');
}


void	ft_print_char(int i, unsigned int size, unsigned char *p)
{	
	unsigned int	j;

	j = 0;
	ft_putchar('|');
	while ((j < 16) && (i + j < size))
	{
		if (*(p + i + j) >= 32 && *(p + i + j) <= 126)
			ft_putchar((char)*(p + i + j));
		else
			ft_putchar('.');
		j ++;
	}
	ft_putchar('|');
}


void	ft_emule_hexdump(int argc, char **argv)
{
	int					j;
	int					r;
	char				hex[] = "0123456789abcdef";
	unsigned char		buffer[17];
	int					fd;

	if (argc > 2 && (argv[1][0] == '-') && (argv[1][1] == 'C'))
	{

		j = 0;
		g_progname = basename(*argv);
		argv = argv + 2;
		while (argc > 2)
		{
			if ((fd = open(*argv, O_RDONLY)) == -1)
			{
				ft_display_custom_error(errno, *argv);
			}
			else
			{
				while ((r = read(fd, buffer, 16)))
				{
					if (r == -1)
					{
						ft_display_custom_error(errno, *argv);
						break;
					}
					ft_print_address(j, hex);
					ft_print_hex(0, r, buffer, hex);
					ft_print_char(0, r, buffer);
					ft_putchar('\n');
					j += 16;
				}
				if (close(fd))
				{
					ft_display_custom_error(errno, *argv);
				}
			}
			argc --;
			argv ++;
		}
		ft_print_address(j, hex);
		ft_putchar('\n');
	}
}
