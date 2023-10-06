/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:55:21 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/02 17:56:00 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/testing.h"

int	test_isprint(char c, int expected)
{
	int	result;

	result = ft_isprint(c);
	printf("character: %c\n", c);
	printf("decimal: %i\n", (int) c);
	printf("unsigned: %i\n", (unsigned char) c);
	printf("result: %i\n", result);
	printf("expected: %i\n\n", expected);
	return (result == expected);
}

void	isprint_ok()
{
	printf("## TEST IS_PRINT ##\n\n");
	test_isprint(31, 0);
	test_isprint(32, 1);
	test_isprint(126, 1);
	test_isprint(127, 0);
}

int	main(void)
{
	isprint_ok();
	return (0);
}
