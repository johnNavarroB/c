/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstsize_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 08:03:45 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/14 08:04:03 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_lstnew_bonus.c"
#include "ft_lstadd_front_bonus.c"
#include "ft_lstsize_bonus.c"
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*first_node;
	t_list	*new_node;
	t_list	**list;
	char	*data_1 = "hello, world!";
	char	*data_2 = "new created node";
	int	length;

	first_node = ft_lstnew(data_1);
	new_node = ft_lstnew(data_2);
	list = &first_node;
	printf("dereferencing first_node:%s\n", (char *) (*list)->data);
	ft_lstadd_front(list, new_node);
	printf("dereferencing first_node:%s\n", (char *) (*list)->data);
	if (!(*list)->next_node)
		printf("next node does not exist (is null)");
	else
	{
		char	*string = (char *) (*list)->next_node->data;
		printf("dereferencing second_node:%s\n", string);
	}
	length = ft_lstsize(*list);
	printf("list size:%i\n", length);
	return (0);
}
