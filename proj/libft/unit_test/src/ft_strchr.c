/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:13:34 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/29 16:13:45 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *string, int character)
{
	int		index;
	char	*aux_ptr_string;

	index = 0;
	aux_ptr_string = (char *) string;
	while (string[index] != 0)
	{
		if (string[index] == character)
			return (aux_ptr_string);
		index ++;
		aux_ptr_string ++;
	}
	if (string[index] == character)
		return (aux_ptr_string);
	return ((void *) 0);
}
