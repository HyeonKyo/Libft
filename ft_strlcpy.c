/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:47:18 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/06 21:59:41 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	while (i + 1 < size && src[i] && dest[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (i + 1 == size)
		dest[i] = 0;
	return (len);
}
