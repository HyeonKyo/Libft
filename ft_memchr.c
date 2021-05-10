/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:17:28 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/10 19:18:59 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *ptr, int value, size_t num)
{
	char	*s;
	size_t	i;

	s = ptr;
	i = 0;
	while (i < num)
	{
		if ((unsigned char)s[i] == (unsigned char)value)
			return (ptr + i);
		i++;
	}
	return (0);
}
