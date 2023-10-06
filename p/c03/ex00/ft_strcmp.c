/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:00:40 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/15 19:00:21 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		++ s1;
		++ s2;
	}
	return (unsigned char) (*s1) - (unsigned char) (*s2);
}

int	main(void)
{
	char str1[6] = {'h', 'e', 'l', 'l', 75, '\0'};
	char str2[6] = {'h', 'e', 'l', 'l', 70, '\0'};
	int diff = ft_strcmp(str1, str2);

	printf("%d\n", diff);
	return (0);
}