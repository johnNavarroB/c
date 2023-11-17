/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd_back_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 08:03:45 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/14 08:04:03 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_lstnew_bonus.c"
#include "ft_lstadd_back_bonus.c"
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*empty = (void *) 0;
	t_list	*first_node;
	t_list	*second_node;
	t_list	*third_node;
	t_list	**list;
	char	*data_1 = "hello, world!";
	char	*data_2 = "new created node";
	char	*data_3 = "third node data";

	first_node = ft_lstnew(data_1);
	second_node = ft_lstnew(data_2);
	third_node = ft_lstnew(data_3);
	//list = &first_node;
	list = &empty;
	ft_lstadd_back(list, first_node);
	ft_lstadd_back(list, second_node);
	ft_lstadd_back(list, third_node);
	t_list	*auxiliar = *list;
	printf("\ncontent of the first pointer:%s\n", (char *) auxiliar->data);
	auxiliar = auxiliar->next_node;
	printf("\ncontent of the second pointer:%s\n", (char *) auxiliar->data);
	auxiliar = auxiliar->next_node;
	printf("\ncontent of the third pointer:%s\n\n", (char *) auxiliar->data);
	return (0);
}
