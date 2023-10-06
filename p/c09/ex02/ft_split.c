/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 06:41:50 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/20 06:41:56 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_c(char character, char *delimiter)
{
	int	index;

	index = 0;
	while (delimiter[index] != '\0')
	{
		if (character == delimiter[index])
			return (1);
		index ++;
	}
	return (0);
}

int	ft_wl(char *string, char *delimiter)
{
	int	index;

	index = 0;
	while (string[index] && !ft_c(string[index], delimiter))
		index ++;
	return (index);
}

char	*ft_w(char *string, char *delimiter)
{
	int		index;
	int		word_length;
	char	*word;

	index = 0;
	word_length = ft_wl(string, delimiter);
	word = (char *)malloc(sizeof(char) * (word_length + 1));
	while (index < word_length)
	{
		word[index] = string[index];
		index ++;
	}
	word[index] = '\0';
	return (word);
}

int	ft_a(char *string, char *delimiter)
{
	int	i;
	int	strings_amount;

	i = 0;
	strings_amount = 0;
	while (string[i] != '\0')
	{
		while (string[i] != '\0' && ft_c(string[i], delimiter))
			i ++;
		if (string[i] != '\0')
			strings_amount ++;
		while (string[i] != '\0' && !ft_c(string[i], delimiter))
			i ++;
	}
	return (strings_amount);
}

char	**ft_split(char *str, char *charset)
{
	int		index;
	char	**strings;

	index = 0;
	strings = (char **)malloc(sizeof(char *) * (ft_a(str, charset) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && ft_c(*str, charset))
			str ++;
		if (*str != '\0')
		{
			strings[index] = ft_w(str, charset);
			index ++;
		}
		while (*str && !ft_c(*str, charset))
			str ++;
	}
	strings[index] = 0;
	return (strings);
}
