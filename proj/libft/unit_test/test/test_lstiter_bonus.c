/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstiter_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 08:03:45 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/14 08:04:03 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_lstnew_bonus.c"
#include "ft_lstadd_back_bonus.c"
#include "ft_lstiter_bonus.c"
#include "libft.h"
#include <stdio.h>

void	function(void *data)
{
	char	*pointer;
	int	index;

	printf("\nexecuting function...\n");
	pointer = (char *) data;
	index = 0;
	while (pointer[index])
	{
		if ('a' <= pointer[index] && pointer[index] <= 'z')
			pointer[index] = pointer[index] - 32;
		index ++;
	}
}

int	main(void)
{
	t_list	*first_node;
	t_list	*second_node;
	t_list	*third_node;
	t_list	**list;
	char	*data_1 = ft_strdup("hello, world!");
	char	*data_2 = ft_strdup("new created node");
	char	*data_3 = ft_strdup("third node data");

	// initialize the variables
	first_node = ft_lstnew(data_1);
	second_node = ft_lstnew(data_2);
	third_node = ft_lstnew(data_3);
	list = &first_node;
	ft_lstadd_back(list, second_node);
	ft_lstadd_back(list, third_node);

	// iterate over the nodes to print them
	t_list	*auxiliar = *list;
	int	index = 0;
	printf("\nBefore function:\n");
	while (auxiliar)
	{
		printf("%i Node:%s\n", index, (char *) auxiliar->data);
		auxiliar = auxiliar->next_node;
		index ++;
	}

	ft_lstiter(*list, function);
	printf("\nAfter function:\n");
	if (!*list)
		printf("the list is not initialized\n");
	else
	{
		auxiliar = *list;
		index = 0;
		while (auxiliar)
		{
			printf("%i Node:%s\n", index, (char *) auxiliar->data);
			auxiliar = auxiliar->next_node;
			index ++;
		}
	}
	free(data_1);
	free(data_2);
	free(data_3);
	return (0);
}
