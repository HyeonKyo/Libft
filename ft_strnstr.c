/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:20:57 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/05 19:48:46 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (*little == 0)
		return (big);
	while (i < (int)len - 1)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != 0)
			j++;
		if (little[j] == 0)
			return (big + i);
		i++;
	}
	return (0);
}
