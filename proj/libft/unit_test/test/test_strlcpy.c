/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:13:34 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/29 16:13:45 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions/put_str.c"
#include "functions/str_to_ascii.c"
#include "ft_strlcpy.c"

int	main(void)
{
	char	test_string[] = "hello world";
	char	buffer[16];

	ft_put_str("test_string:");
	ft_put_str(test_string);
	ft_put_str("\n");
	ft_strlcpy(buffer, test_string, 12);
	ft_put_str("buffer:");
	ft_put_str(buffer);
	ft_put_str("\n");
	ft_str_to_ascii(buffer);
	return (0);
}
