/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:42:17 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/05 21:32:56 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

void		*ft_memset(void *ptr, int value, size_t num);
void		ft_bzero(void *ptr, size_t size);
void		*ft_memcpy(void *dest, const void *source, size_t num);
const void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memmove (void *dest, const void *src, size_t num);
void		*ft_memchr(void *ptr, int value, size_t num);
int			ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
int			ft_strlen(char *str);
size_t		ft_strlcpy(char *dest, char *src, size_t size);
size_t		ft_strlcat(char *dest, char *src, size_t size);
char		*ft_strchr(char *str, int c);
char		*ft_strrchr(char *str, int c);
const char	*ft_strnstr(const char *big, const char *little, size_t len);
int			ft_atoi(const char *str);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
void		*ft_calloc(size_t n, size_t size);
char		*ft_strdup(char *src);
#endif
