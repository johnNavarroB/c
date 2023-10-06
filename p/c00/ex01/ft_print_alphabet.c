/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 20:00:57 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/11 21:00:39 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_alphabet(void)
{
	char character;

	character = 'a';
	while (character <= 'z')
	{
		write(1, &character, 1);
		character ++;
	}
}