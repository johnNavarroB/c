/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:13:34 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/29 16:13:45 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions/put_str.c"
#include "functions/str_to_ascii.c"
#include "ft_strlcat.c"

int	main(void)
{
	char	test_string[] = "hello world";
	char	buffer[20] = "original ";
	int		length;

	length = 15;
	ft_put_str("test_string:");
	ft_put_str(test_string);
	ft_put_str("\n");
	ft_put_str("buffer:");
	ft_put_str(buffer);
	ft_put_str("\n");
	ft_strlcat(buffer, test_string, length);
	ft_put_str("after_strlcat:");
	ft_put_str(buffer);
	ft_put_str("\n");
	ft_str_to_ascii(buffer);
	return (0);
}
