/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 23:15:01 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/20 23:15:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_HEADER_H
# define FT_HEADER_H

// sys_errlist[], sys_nerr external variables
# include <stdio.h>
// close() read() write()
# include <unistd.h>
// open()
# include <fcntl.h>
// errno variable
# include <errno.h>
// basename()
# include <libgen.h>

char        *g_program_name;

int		    ft_base_is_correct(char *base);

void    	ft_emule_hexdump(int argc, char **argv);
void     	ft_print_address(int nbr, char *hex);
void	    ft_print_hex(int i, unsigned int size, unsigned char *p, char *hex);
void    	ft_print_char(int i, unsigned int size, unsigned char *p);

const char	*ft_get_error_message(int errnum);
void		ft_printerr(int eno, char *argv);

void		ft_putchar(char c);
void		ft_putstr(char *str);

#endif