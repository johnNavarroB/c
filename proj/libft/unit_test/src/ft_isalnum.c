/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:55:21 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/02 17:56:00 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_isupper(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

static	int	ft_islower(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

static	int	ft_isalpha(char c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	return (0);
}

static	int	ft_isdigit(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int	ft_isalnum(char c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}
