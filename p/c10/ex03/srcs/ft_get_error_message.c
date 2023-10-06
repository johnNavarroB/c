/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_error_message.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 23:15:01 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/20 23:15:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_header.h"

const char	*ft_get_error_message(int error_value)
{
	extern const char * const	sys_errlist[];
	extern int					sys_nerr;

	if (error_value < 0)
		error_value = - error_value;
	if (error_value < sys_nerr)
		return (sys_errlist[error_value]);
	return ((const char *)"Unknown error");
}
