/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:55:21 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/02 17:56:00 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/testing.h"

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

int	main(void)
{
	isdigit_ok();
	return (0);
}
