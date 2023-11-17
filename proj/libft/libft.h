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

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*data;
	struct s_list	*next_node;
}	t_list;

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

void	*ft_calloc(size_t amount, size_t size);

char	*ft_strdup(const char *string);

char	*ft_substr(const char *string, unsigned int start, size_t length);
char	*ft_strjoin(const char *string, const char *to_join);
char	*ft_strtrim(const char *string, const char *characters);
char	**ft_split(const char *str, const char c);
char	*ft_itoa(int value);
char	*ft_strmapi(const char *string, char (*function)(unsigned int, char));
void	ft_striteri(char *string, void (*function)(unsigned int, char*));
void	ft_putchar_fd(char character, int file_descriptor);
void	ft_putstr_fd(char *string, int file_descriptor);
void	ft_putendl_fd(char *string, int file_descriptor);
void	ft_putnbr_fd(int value, int file_descriptor);

t_list	*ft_lstnew(void *data);
void	ft_lstadd_front(t_list **list, t_list *new_node);
int		ft_lstsize(t_list *list);
t_list	*ft_lstlast(t_list *list);
void	ft_lstadd_back(t_list **list, t_list *new_node);
void	ft_lstdelone(t_list *list, void (*function)(void *));
void	ft_lstclear(t_list **list, void (*function)(void *));
void	ft_lstiter(t_list *list, void (*function)(void *));
t_list	*ft_lstmap(t_list *list, void *(*f)(void *), void (*d)(void *));

#endif
