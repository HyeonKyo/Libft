/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:19:56 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/05 20:22:31 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	char		buf[num];
	char		*d;
	const char	*s;
	int			i;

	i = -1;
	d = dest;
	s = src;
	while (++i < (int)num)
		buf[i] = s[i];
	i = -1;
	while (++i < (int)num)
		d[i] = buf[i];
	d[i] = 0;
	return (dest);
}
