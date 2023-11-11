/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:04:46 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/01 20:05:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions/put_str.c"
#include "ft_strtrim.c"

int	main(void)
{
	char	*test_string = "12312_ hello, world! _31231";
	char	*characters = "123_ ";
	char	*result;

	if (!test_string)
		ft_put_str("test_string is a null pointer\n");
	else
	{
		ft_put_str("test_string:");
		ft_put_str(test_string);
		ft_put_str("\n");
	}
	if (!characters)
		ft_put_str("characters is a null pointer\n");
	else
	{
		ft_put_str("characters:");
		ft_put_str(characters);
		ft_put_str("\n");
	}
	result = ft_strtrim(test_string, characters);
	if (!result)
		ft_put_str("result is a null pointer\n");
	else
	{
		ft_put_str("result:");
		ft_put_str(result);
		ft_put_str("\n");
	}
	return (0);
}
