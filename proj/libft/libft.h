/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:19:12 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/01 15:25:14 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isalnum(char c);
int		ft_isascii(char c);
int		ft_isprint(char c);

int		ft_strlen(const char *c);

void	*ft_memset(void *b, int character, size_t length);
void	ft_bzero(void *b, size_t length);
void	*ft_memcpy(void *destination, const void *source, size_t length);
void	*ft_memmove(void *destination, const void *source, size_t length);

size_t	ft_strlcpy(char *destination, const char *source, size_t length);
size_t	ft_strlcat(char *destination, const char *source, size_t length);

int		ft_toupper(int character);
int		ft_tolower(int character);

char	*ft_strchr(const char *string, int character);
char	*ft_strrchr(const char *string, int character);

int		ft_strncmp(const char *ptr_find, const char *ptr_str, size_t length);

void	*ft_memchr(const void *ptr_str, int character, size_t length);
int		ft_memcmp(const void *ptr_find, const void *ptr_str, size_t length);

char	*ft_strnstr(const char *string, const char *to_find, size_t length);

int		ft_atoi(const char *value);

#endif
