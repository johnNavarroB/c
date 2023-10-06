/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
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
	int	index_j;

	index = argc - 1;
	while (index > 0)
	{
		index_j = 0;
		while (argv[index][index_j])
		{
			write(1, &argv[index][index_j], 1);
			index_j ++;
		}
		write(1, "\n", 1);
		index --;
	}
	return (0);
}