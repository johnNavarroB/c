/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:04:46 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/01 20:05:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions/put_str.c"
#include "ft_split.c"
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	char	*test_string = "__hello,_world!__test_split_?";
	//char	*error_case1 = "_hello,_world!_test_split";
	//char	*error_case2 = "hello,_world!_test_split_";
	//char	*error_case3 = "hello,__world!_test_split";
	char	delimiter = '_';
	char	**result;
	int		index;

	index = 0;
	if (!test_string)
		ft_put_str("test_string is a null pointer\n");
	else
	{
		ft_put_str("test_string:");
		ft_put_str(test_string);
		ft_put_str("\n");
	}
	ft_put_str("delimiter:");
	write(1, &delimiter, 1);
	ft_put_str("\n");
	result = ft_split(test_string, delimiter);
	if (!result)
		ft_put_str("result is a null pointer\n");
	else
	{
		while (result[index] != 0)
		{
			printf("result %i:", index);
			printf("%s\n", result[index]);
			index ++;
		}
	}
	return (0);
}
