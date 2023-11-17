/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdelone_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 08:03:45 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/14 08:04:03 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_lstnew_bonus.c"
#include "ft_lstadd_back_bonus.c"
#include "ft_lstdelone_bonus.c"
#include "libft.h"
#include <stdio.h>

void	function(void *data)
{
	printf("\nexecuting deletion function...\n");
	(void) data;
	//free(data);
}

int	main(void)
{
	t_list	*first_node;
	t_list	*second_node;
	t_list	*third_node;
	t_list	**list;
	char	*data_1 = "hello, world!";
	char	*data_2 = "new created node";
	char	*data_3 = "third node data";

	// initialize the variables
	first_node = ft_lstnew(data_1);
	second_node = ft_lstnew(data_2);
	third_node = ft_lstnew(data_3);
	list = &first_node;
	ft_lstadd_back(list, second_node);
	ft_lstadd_back(list, third_node);

	// iterate over the nodes to print them
	t_list	*auxiliar = *list;
	t_list	*ptr_to_delete = second_node;
	int	index = 0;
	printf("\nBefore deletion:\n");
	while (auxiliar)
	{
		printf("%i Node:%s\n", index, (char *) auxiliar->data);
		auxiliar = auxiliar->next_node;
		index ++;
	}

	ft_lstdelone(ptr_to_delete, function);
	printf("\nAfter deletion:\n");
	auxiliar = *list;
	index = 0;
	while (auxiliar)
	{
		printf("%i Node:%s\n", index, (char *) auxiliar->data);
		auxiliar = auxiliar->next_node;
		index ++;
	}
	return (0);
}
