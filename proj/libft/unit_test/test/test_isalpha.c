/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:55:21 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/02 17:56:00 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/testing.h"

/*
int	test_isupper(char c, int expected)
{
	int	result;

	result = ft_isupper(c);
	printf("character: %c\n", c);
	printf("result: %i\n", result);
	printf("expected: %i\n\n", expected);
	return (result == expected);
}

int	test_islower(char c, int expected)
{
	int	result;

	result = ft_islower(c);
	printf("character: %c\n", c);
	printf("result: %i\n", result);
	printf("expected: %i\n\n", expected);
	return (result == expected);
}

void	isupper_ok()
{
	printf("## TEST IS_UPPER ##\n\n");
	test_isupper('A' - 1, 0);
	test_isupper('A', 1);
	test_isupper('Z', 1);
	test_isupper('Z' + 1, 0);
}

void	islower_ok()
{
	printf("## TEST IS_LOWER ##\n\n");
	test_islower('a' - 1, 0);
	test_islower('a', 1);
	test_islower('z', 1);
	test_islower('z' + 1, 0);
}
*/

int	test_isalpha(char c, int expected)
{
	int	result;

	result = ft_isalpha(c);
	printf("character: %c\n", c);
	printf("result: %i\n", result);
	printf("expected: %i\n\n", expected);
	return (result == expected);
}

void	isalpha_ok()
{
	printf("## TEST IS_ALPHA ##\n\n");
	test_isalpha('A' - 1, 0);
	test_isalpha('A', 1);
	test_isalpha('Z', 1);
	test_isalpha('Z' + 1, 0);
	test_isalpha('a' - 1, 0);
	test_isalpha('a', 1);
	test_isalpha('z', 1);
	test_isalpha('z' + 1, 0);
}

int	main(void)
{
	isalpha_ok();
	return (0);
}
