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
#include "testing.h"

int	test_isdigit(char c, int expected)
{
	int	result;

	result = ft_isdigit(c);
	printf("character: %c\n", c);
	printf("result: %i\n", result);
	printf("expected: %i\n\n", expected);
	return (result == expected);
}

void	isdigit_ok()
{
	printf("## TEST IS_DIGIT ## \n\n");
	test_isdigit('0' - 1, 0);
	test_isdigit('0', 1);
	test_isdigit('9', 1);
	test_isdigit('9' + 1, 0);
}

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
	char	test_string[14];
	int		index;

	ft_memset(test_string, '6', 14 * sizeof(char));
	ft_memset(test_string + 3, 'X', 4 * sizeof(char));
	index = 0;
	while (index < 14)
	{
		printf("%c", test_string[index]);
		index ++;
	}
	printf("\n");
	ft_bzero(test_string, 14 * sizeof(char));
	index = 0;
	while (index < 14)
	{
		printf("%c", test_string[index]);
		index ++;
	}
	printf("\n");
	return (0);
}
