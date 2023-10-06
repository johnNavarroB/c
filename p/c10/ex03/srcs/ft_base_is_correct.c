/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_is_correct.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 23:15:01 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/20 23:15:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_base_is_correct(char *base)
{
	int	i;
	int	index_j;

	i = 0;
	if (!base || !base[1])
		return (0);
	while (base[i])
	{
		if (!((base[i] >= '0' && base[i] <= '9') || (base[i] >= 'a' \
				&& base[i] <= 'z') || (base[i] >= 'A' && base[i] <= 'Z')))
			return (0);
		index_j = i + 1;
		while (base[index_j])
		{
			if (base[i] >= base[index_j])
				return (0);
			index_j ++;
		}
		i ++;
	}
	return (i);
}
