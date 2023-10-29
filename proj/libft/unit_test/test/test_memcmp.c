/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:13:34 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/29 16:13:45 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions/put_str.c"
#include "ft_memcmp.c"
#include <stdio.h>

int	main(void)
{
	char	test_string[] = "hello world";
	char	comp_string[] = "hella world";
	int		comparison;
	int		length;

	length = 11;
	ft_put_str("test_string:");
	ft_put_str(test_string);
	ft_put_str("\n");
	ft_put_str("comp_string:");
	ft_put_str(comp_string);
	ft_put_str("\n");
	comparison = ft_memcmp(comp_string, test_string, length);
	printf("comparison:%i\n", comparison);
	return (0);
}
