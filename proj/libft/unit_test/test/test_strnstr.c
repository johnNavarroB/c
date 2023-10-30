/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:10:33 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/30 20:10:46 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions/put_str.c"
#include "ft_strnstr.c"

int	main(void)
{
	char	*test_string = "hello world";
	char	*substr = "llo";
	char	*ptr_to_substr;
	int		length;

	length = 11;
	if (test_string != 0)
	{
		ft_put_str("test_string:");
		ft_put_str(test_string);
		ft_put_str("\n");
	}
	if (substr != 0)
	{
		ft_put_str("substr:");
		ft_put_str(substr);
		ft_put_str("\n");
	}
	ptr_to_substr = ft_strnstr(test_string, substr, length);
	if (ptr_to_substr == 0)
	{
		ft_put_str("ptr_found:is null\n");
		return (-1);
	}
	ft_put_str("ptr_found:");
	ft_put_str(ptr_to_substr);
	ft_put_str("\n");
	return (0);
}
