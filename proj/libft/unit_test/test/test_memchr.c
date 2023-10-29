/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:13:34 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/29 16:13:45 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions/put_str.c"
#include "ft_memchr.c"

int	main(void)
{
	char	test_string[] = "hello world";
	char	character = 'o';
	void	*ptr_to_char;
	int		length;

	length = 5;
	ft_put_str("test_string:");
	ft_put_str(test_string);
	ft_put_str("\n");
	ptr_to_char = ft_memchr(test_string, character, length);
	ft_put_str(ptr_to_char);
	ft_put_str("\n");
	return (0);
}
