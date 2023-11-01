/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:10:33 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/31 20:24:18 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions/put_str.c"
#include "functions/str_to_ascii.c"
#include "ft_strdup.c"

int	main(void)
{
	char	*test_string = "hello world";
	char	*pointer;

	ft_put_str("test_string:");
	ft_put_str(test_string);
	ft_put_str("\n");
	pointer = ft_strdup(test_string);
	ft_put_str("pointer:");
	ft_put_str(pointer);
	ft_put_str("\n");
	ft_str_to_ascii(test_string);
	ft_str_to_ascii(pointer);
	return (0);
}
