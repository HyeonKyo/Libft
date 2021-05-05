/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:33:31 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/05 19:31:15 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		count(char const *s, char c, int *buf_len)
{
	int	i;
	int	j;
	int	count;
	int	len;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == 0)
			break ;
		count++;
		len = 0;
		while (s[i] != c && s[i])
		{
			i++;
			len++;
		}
		buf_len[j++] = len;
	}
	buf_len[j] = 0;
	return (count);
}

char	**make_arr(char const *s, char c)
{
	int		i;
	int		cnt;
	int		*buf_len;
	char	**arr;

	i = -1;
	buf_len = (int *)malloc(ft_strlen((char *)s) * sizeof(int));
	cnt = count(s, c, buf_len);
	arr = (char **)malloc((cnt + 1) * sizeof(char *));
	if (arr == 0)
		return (0);
	while (++i <= cnt)
	{
		arr[i] = (char *)malloc((buf_len[i] + 1) * sizeof(char));
		if (arr[i] == 0)
		{
			while (--i >= 0)
				free(arr[i]);
			free(arr);
			free(buf_len);
			return (0);
		}
	}
	free(buf_len);
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**arr;

	i = 0;
	j = 0;
	arr = make_arr(s, c);
	while (s[i])
	{
		k = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
			arr[j][k++] = s[i++];
		arr[j++][k] = 0;
		if (k == 0)
			arr[j] = 0;
		if (s[i] == 0)
		{
			arr[j] = 0;
			break ;
		}
	}
	return (arr);
}
