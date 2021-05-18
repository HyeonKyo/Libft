/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:33:16 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/15 14:26:30 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_char(char c, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (0);
	return (1);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	int		flag;
	char	*str;

	i = 0;
	j = 0;
	flag = 0;
	if (s1 == 0)
		return (0);
	len = ft_strlen(s1) - 1;
	while (!find_char(s1[i], set))
		i++;
	if (i - 1 == len)
		flag = 1;
	while (!find_char(s1[len], set) && len >= 0 && flag == 0)
		len--;
	str = (char *)malloc((len - i + 2) * sizeof(char));
	if (str == 0)
		return (0);
	while (i <= len)
		str[j++] = s1[i++];
	str[j] = 0;
	return (str);
}
