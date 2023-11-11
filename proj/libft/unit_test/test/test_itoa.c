/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:04:46 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/01 20:05:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions/put_str.c"
#include "ft_itoa.c"
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	char	*result;
	int		value = -2147483648;

	printf("value:%i\n", value);
	result = ft_itoa(value);
	printf("result:%s\n", result);
	return (0);
}
