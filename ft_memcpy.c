/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:18:08 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/05 19:51:23 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t num)
{
	char		*dst;
	const char	*src;
	int			i;

	i = -1;
	dst = dest;
	src = source;
	while (++i < (int)num)
		dst[i] = src[i];
	return (dest);
}
