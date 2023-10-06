/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:55:21 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/02 17:56:00 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/testing.h"

int	test_isalnum(char c, int expected)
{
	int	result;

	result = ft_isalnum(c);
	printf("character: %c\n", c);
	printf("result: %i\n", result);
	printf("expected: %i\n\n", expected);
	return (result == expected);
}

void	isalnum_ok()
{
	printf("## TEST IS_ALNUM ##\n\n");
	test_isalnum('0' - 1, 0);
	test_isalnum('0', 1);
	test_isalnum('9', 1);
	test_isalnum('9' + 1, 0);
	test_isalnum('A' - 1, 0);
	test_isalnum('A', 1);
	test_isalnum('Z', 1);
	test_isalnum('Z' + 1, 0);
	test_isalnum('a' - 1, 0);
	test_isalnum('a', 1);
	test_isalnum('z', 1);
	test_isalnum('z' + 1, 0);
}

int	main(void)
{
	isalnum_ok();
	return (0);
}
