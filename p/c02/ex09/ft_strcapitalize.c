/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 06:13:23 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/17 06:13:34 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_a(char c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
	{
		return (1);
	}
	else if ('0' <= c && c <= '9')
	{
		return (1);
	}
	return (0);
}

char	ft_u(char c)
{
	if ('a' <= c && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

char	ft_l(char c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	str[0] = ft_u(str[0]);
	while (str[i] != '\0')
	{
		if (!ft_a(str[i - 1]) && ft_a(str[i]))
		{
			str[i] = ft_u(str[i]);
		}
		else
		{
			str[i] = ft_l(str[i]);
		}
		i ++;
	}
	return (str);
}