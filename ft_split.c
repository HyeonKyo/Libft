/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:33:31 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/14 16:32:26 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		count(char const *s, char c, int *buf_len)
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

static	int		*make_arr1(char const *s)
{
	int	*buf_len;

	buf_len = (int *)malloc((ft_strlen(s) + 1) * sizeof(int));
	if (buf_len == 0)
		return (0);
	return (buf_len);
}

static	int		make_arr2(int *buf_len, char **arr, int cnt)
{
	int	i;

	i = -1;
	while (++i < cnt)
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
	arr[cnt] = 0;
	free(buf_len);
	return (1);
}

static	char	**make_arr3(char const *s, char c)
{
	int		i;
	int		cnt;
	int		*buf_len;
	char	**arr;

	i = -1;
	buf_len = make_arr1(s);
	if (buf_len == 0)
		return (0);
	cnt = count(s, c, buf_len);
	arr = (char **)malloc((cnt + 1) * sizeof(char *));
	if (arr == 0)
	{
		free(buf_len);
		return (0);
	}
	if (!make_arr2(buf_len, arr, cnt))
		return (0);
	return (arr);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**arr;

	i = 0;
	j = 0;
	if (s == 0)
		return (0);
	arr = make_arr3(s, c);
	if (arr == 0)
		return (0);
	while (s[i])
	{
		k = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
			arr[j][k++] = s[i++];
		if (k == 0)
			break ;
		arr[j++][k] = 0;
	}
	return (arr);
}
