/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 06:48:14 by jonnavar          #+#    #+#             */
/*   Updated: 2023/06/19 06:48:20 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pl(char *string)
{
	int	index;

	index = 0;
	while (string[index] != '\0')
	{
		index ++;
	}
	return (index);
}

int	ft_l(int a_value, char *base, int lenght)
{
	int				base_lenght;
	unsigned int	value;

	base_lenght = ft_pl(base);
	if (a_value < 0)
	{
		value = a_value * -1;
		lenght ++;
	}
	else
		value = a_value;
	while (value >= (unsigned)base_lenght)
	{
		value /= base_lenght;
		lenght ++;
	}
	lenght ++;
	return (lenght);
}

void	ft_b(int a_value, char *base, char *char_val)
{
	int		index;
	int		base_length;
	int		a_val_length;
	long	value;

	index = 0;
	base_length = ft_pl(base);
	a_val_length = ft_l(a_value, base, 0);
	value = a_value;
	if (value < 0)
	{
		char_val[0] = '-';
		value *= -1;
		index ++;
	}
	a_val_length --;
	while (value >= base_length)
	{
		char_val[a_val_length] = base[value % base_length];
		value /= base_length;
		a_val_length --;
	}
	if (value < base_length)
		char_val[index] = base[value];
}
