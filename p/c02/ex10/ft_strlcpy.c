/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 06:13:23 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/17 06:13:34 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_l(char *string)
{
	unsigned	int	index;

	index = 0;
	while (string[index])
	{
		index ++;
	}
	return (index);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned	int	i;

	i = 0;
	if (size == 0)
	{
		return (ft_l(src));
	}
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (ft_l(src));
}