/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin_to_stdout.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 23:15:01 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/20 23:15:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_header.h"

void	ft_stdin_to_stdout(void)
{
	int		able_to_read;
	char	buffer;

	while ((able_to_read = read(0, &buffer, 1)))
	{
		if (able_to_read == -1)
		{
			ft_putstr((char *)ft_get_error_message(errno));
			break;
		}
		else
			write(1, &buffer, 1);
	}
}
