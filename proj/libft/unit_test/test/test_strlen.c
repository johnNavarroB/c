/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:55:21 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/02 17:56:00 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/testing.h"

int	test_strlen(char *c, int expected)
{
	int	result;

	result = ft_strlen(c);
	printf("## TEST STRLEN ##\n\n");
	printf("result: %i\n", result);
	printf("expected: %i\n\n", expected);
	return (result == expected);
}

int	main(void)
{
	char	*test_string;

	test_string = "hello world";
	test_strlen(test_string, 11);
	return (0);
}
