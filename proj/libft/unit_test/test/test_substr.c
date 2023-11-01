/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:04:46 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/01 20:05:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions/put_str.c"
#include "ft_substr.c"

int	main(void)
{
	char	*test_string = "hello world!";
	char	*pointer;

	ft_put_str("test_string:");
	ft_put_str(test_string);
	ft_put_str("\n");
	pointer = ft_substr(test_string, 6, 5);
	ft_put_str("pointer:");
	ft_put_str(pointer);
	ft_put_str("\n");
	return (0);
}
