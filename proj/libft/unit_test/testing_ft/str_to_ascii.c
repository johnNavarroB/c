/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_ascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:06:10 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/08 21:10:04 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_str_to_ascii(char *character)
{
	int		index;
	int		ascii;
	char	curr_char;

	index = 0;
	while (character[index])
	{
		curr_char = character[index];
		ascii = (int) character[index];
		printf("(%c)\t%i\t%i\n", curr_char, ascii, index);
		index ++;
	}
	curr_char = character[index];
	ascii = (int) character[index];
	printf("(%c)\t%i\t%i\n", curr_char, ascii, index);
}

void	ft_str_to_lascii(char *character, int length)
{
	int		index;
	int		ascii;
	char	curr_char;

	index = 0;
	while (index < length)
	{
		curr_char = character[index];
		ascii = (int) character[index];
		printf("(%c)\t%i\t%i\n", curr_char, ascii, index);
		index ++;
	}
}
