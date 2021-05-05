/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:34:02 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/05 19:40:03 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = -1;
	str = (char *)malloc(len * sizeof(char));
	if (str == 0)
		return (NULL);
	while (++i < (int)len)
		str[i] = s[start + i];
	return (str);
}
