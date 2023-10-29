/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:13:34 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/29 16:13:45 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions/put_str.c"
#include "ft_tolower.c"

int	main(void)
{
	char	test_string[] = "HELLO WORLD";
	int		index;
	char	current_character;

	index = 0;
	ft_put_str("test_string:");
	ft_put_str(test_string);
	ft_put_str("\n");
	while (test_string[index] != 0)
	{
		current_character = test_string[index];
		test_string[index] = ft_tolower(current_character);
		index ++;
	}
	ft_put_str("after_tolower:");
	ft_put_str(test_string);
	ft_put_str("\n");
	return (0);
}
