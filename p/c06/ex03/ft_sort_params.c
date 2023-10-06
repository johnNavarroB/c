/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 04:33:13 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/19 04:33:20 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int		ft_c(char *first_character, char *second_character)
{
	while (*first_character == *second_character)
	{
		first_character ++;
		second_character ++;
	}
	return ((unsigned char)*first_character - (unsigned char)*second_character);
}

void	ft_p(char *string)
{
	int index;

	index = 0;
	while (string[index])
	{
		write(1, &string[index], 1);
		index ++;
	}
}

int		main(int argc, char *argv[])
{
	int		index;
	int		index_j;
	char	*auxiliar_pointer;

	index = 1;
	while (index < argc - 1)
	{
		index_j = index + 1;
		while (index_j < argc)
		{
			if (ft_c(argv[index], argv[index_j]) > 0)
			{
				auxiliar_pointer = argv[index];
				argv[index] = argv[index_j];
				argv[index_j] = auxiliar_pointer;
			}
			index_j ++;
		}
		index ++;
	}
	index = 1;
	while (index < argc)
	{
		ft_p(argv[index]);
		write(1, "\n", 1);
		index ++;
	}
	return (0);
}