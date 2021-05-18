/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 19:45:41 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/18 13:28:32 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char	*dst;
	unsigned char	*s;
	size_t			i;

	if ((dest == 0 && src == 0) || num == 0)
		return (dest);
	dst = dest;
	s = (unsigned char *)src;
	i = 0;
	if (dest <= src)
	{
		while (i < num)
		{
			dst[i] = s[i];
			i++;
		}
	}
	else
		while (num--)
			dst[num] = s[num];
	return (dest);
}
