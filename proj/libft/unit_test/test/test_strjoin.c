/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:04:46 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/01 20:05:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions/put_str.c"
#include "functions/str_to_ascii.c"
#include "ft_strjoin.c"

int	main(void)
{
	char	*test_string = "hello,";
	char	*to_join = " world!";
	char	*result;

	if (!test_string)
		ft_put_str("test_string is a null pointer\n");
	else
	{
		ft_put_str("test_string:");
		ft_put_str(test_string);
		ft_put_str("\n");
	}
	if (!to_join)
		ft_put_str("to_join is a null pointer\n");
	else
	{
		ft_put_str("to_join:");
		ft_put_str(to_join);
		ft_put_str("\n");
	}
	result = ft_strjoin(test_string, to_join);
	if (!result)
		ft_put_str("result is a null pointer\n");
	else
	{
		ft_put_str("result:");
		ft_put_str(result);
		ft_put_str("\n");
		ft_str_to_ascii(result);
	}
	return (0);
}
