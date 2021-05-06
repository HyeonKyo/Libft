/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:33:16 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/06 22:27:56 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		find_char(char c, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = -1;
	j = 0;
	len = ft_strlen((char *)s1) + 1;
	str = (char *)malloc(len * sizeof(char));
	if (str == 0)
		return (0);
	while (s1[++i])
		if (find_char(s1[i], set))
			str[j++] = s1[i];
	str[j] = 0;
	return (str);
}
