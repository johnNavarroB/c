/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:10:33 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/30 20:10:46 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions/put_str.c"
#include "ft_atoi.c"
#include <stdio.h>

int	main(void)
{
	char	*test_string = "   --++--+12345";
	int		value;

	ft_put_str("test_string:");
	ft_put_str(test_string);
	ft_put_str("\n");
	value = ft_atoi(test_string);
	printf("value_returned:%i\n", value);
	return (0);
}
