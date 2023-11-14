/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 08:03:45 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/14 08:04:03 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_lstnew_bonus.c"
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*first_node;
	char	*data_1 = "hello, world!";

	first_node = ft_lstnew(data_1);
	printf("first_node_data:%s\n", (char *) first_node->data);
	return (0);
}
