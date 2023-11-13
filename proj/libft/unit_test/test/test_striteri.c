/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:23:10 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/13 09:25:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_striteri.c"
#include "libft.h"
#include <stdio.h>

void	function(unsigned int index, char *character)
{
	(void) index;
	if (ft_isalpha(*character))
		*character = *character - 32;
}

int	main(void)
{
	char	test_string[] = "hello, world!";

	printf("test_string:%s\n", test_string);
	ft_striteri(test_string, function);
	printf("after striteri:%s\n", test_string);
	return (0);
}
