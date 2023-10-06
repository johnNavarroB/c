/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 06:13:23 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/17 06:13:34 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_a(char c)
{
	if (64 < c && c < 91)
	{
		return (1);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (ft_a(str[index]) == 1)
		{
			str[index] += 32;
		}
		index ++;
	}
	return (str);
}