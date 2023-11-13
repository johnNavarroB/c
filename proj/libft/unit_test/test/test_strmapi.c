/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:23:10 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/13 09:25:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_strmapi.c"
#include "libft.h"
#include <stdio.h>

char	function(unsigned int index, char character)
{
	char	*pointer;

	(void) index;
	pointer = &character;
	if (ft_isalpha(character))
		*pointer = *pointer - 32;
	return (*pointer);
}

int	main(void)
{
	char	*test_string = "hello, world!";
	char	*result;

	printf("test_string:%s\n", test_string);
	result = ft_strmapi(test_string, function);
	if (result)
		printf("result:%s\n", result);
	else
		printf("result is null\n");
	return (0);
}
