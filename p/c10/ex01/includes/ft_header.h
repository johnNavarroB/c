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

void        ft_emule_cat(int argc, char **argv);
void	    ft_get_file_content(char *argv);

const char	*ft_get_error_message(int error_value);
void		ft_printerr(int error_value, char *argv);

void		ft_putchar(char c);
void		ft_putstr(char *str);

void        ft_stdin_to_stdout(void);

#endif