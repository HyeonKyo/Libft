/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:18:08 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/18 13:28:03 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t num)
{
	unsigned char		*dst;
	unsigned char		*src;
	size_t				i;

	i = 0;
	if (dest == 0 && source == 0)
		return (0);
	dst = dest;
	src = (unsigned char *)source;
	while (i < num)
	{
		dst[i] = src[i];
		i++;
	}
	return (dest);
}
