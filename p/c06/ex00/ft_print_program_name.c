/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 04:33:13 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/19 04:33:20 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	main(int argc, char **argv)
{
	int	index;

	index = 0;
	while (argv[0][index])
	{
		write(1, &argv[0][index], 1);
		index ++;
	}
	write(1, "\n", 1);
	return (0);
}