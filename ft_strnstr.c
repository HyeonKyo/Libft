/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:20:57 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/11 13:51:56 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*lit == 0)
		return (big);
	if (*big == 0)
		return (0);
	while (i == 0 || i + (size_t)ft_strlen((char *)lit) <= len)
	{
		j = 0;
		while (big[i + j] == lit[j] && lit[j] && j < len)
			j++;
		if (lit[j] == 0)
			return (big + i);
		i++;
	}
	return (0);
}
