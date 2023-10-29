/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:13:34 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/29 16:13:45 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions/put_str.c"
#include "ft_strchr.c"

int	main(void)
{
	char	test_string[] = "hello world";
	char	character_to_find;
	char	*ptr_char_found;

	character_to_find = 'o';
	ft_put_str("test_string:");
	ft_put_str(test_string);
	ft_put_str("\n");
	ptr_char_found = ft_strchr(test_string, character_to_find);
	ft_put_str("found_char:");
	ft_put_str(ptr_char_found);
	ft_put_str("\n");
	return (0);
}
