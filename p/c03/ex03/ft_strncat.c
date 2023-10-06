/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:00:40 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/15 19:00:21 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void print_char_array(char* values, int length)
{
    int index;

    index = 0;
    
    write(1, "{", 1);
    while (index < length)
    {
        write(1, (values + index), 1);
        if (index != (length - 1)) write(1, ", ", 2);
        index ++;
    }
    write(1, "}", 1);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int index;
	int index_j;

	index = 0;
	index_j = 0;
	while (dest[index])
	{
		index ++;
	}
	while ((index_j < nb) && src[index_j])
	{
		dest[index + index_j] = src[index_j];
		index_j ++;
	}
	dest[index + index_j] = '\0';
	return (dest);
}

int	main(void)
{
	char str1[] = "hello";
	char str2[] = "world";
	char *diff;

	diff = ft_strncat(str1, str2, 5);

	//print_char_array(diff, 11);
	printf("'%c' ", *diff);			// h
	printf("'%c' ", *(diff + 1));	// e
	printf("'%c' ", *(diff + 2));	// l
	printf("'%c' ", *(diff + 3));	// l
	printf("'%c' ", *(diff + 4));	// o
	printf("'%c' ", *(diff + 5));	// w
	printf("'%c' ", diff[6]);		// o
	printf("'%c' ", diff[7]);		// r
	printf("'%c' ", diff[8]);		// l
	printf("'%c' ", diff[9]);		// d
	return (0);
}