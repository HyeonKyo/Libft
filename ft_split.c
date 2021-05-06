/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:33:31 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/06 23:01:01 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

int		*make_arr1(char const *s)
{
	int		*buf_len;

	buf_len = (int *)malloc(ft_strlen((char *)s) * sizeof(int));
	if (buf_len == 0)
		return (0);
	return (buf_len);
}

void	clear(char **arr, int idx)
{
	if (idx != 0)
		while (--idx >= 0)
			free(arr[idx]);
	free(arr);
}

char	**make_arr2(char const *s, char c)
{
	int		i;
	int		cnt;
	int		*buf_len;
	char	**arr;

	i = -1;
	buf_len = make_arr1(s);
	cnt = count(s, c, buf_len);
	arr = (char **)malloc((cnt + 1) * sizeof(char *));
	if (arr == 0)
		return (0);
	while (++i <= cnt)
	{
		arr[i] = (char *)malloc((buf_len[i] + 1) * sizeof(char));
		if (arr[i] == 0)
		{
			clear(arr, i);
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
	arr = make_arr2(s, c);
	while (s[i])
	{
		k = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
			arr[j][k++] = s[i++];
		arr[j++][k] = 0;
	}
	arr[j] = 0;
	return (arr);
}
