/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:55:21 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/02 17:56:00 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/testing.h"

int	test_isascii(char c, int expected)
{
	int	result;

	result = ft_isascii(c);
	printf("character: %c\n", c);
	printf("decimal: %i\n", (int) c);
	printf("unsigned: %i\n", (unsigned char) c);
	printf("result: %i\n", result);
	printf("expected: %i\n\n", expected);
	return (result == expected);
}

void	isascii_ok()
{
	printf("## TEST IS_ASCII ##\n\n");
	test_isascii(-1, 0);
	test_isascii(0, 1);
	test_isascii(127, 1);
	test_isascii(128, 0);
}

int	main(void)
{
	isascii_ok();
	return (0);
}
