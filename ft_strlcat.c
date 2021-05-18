/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 02:02:27 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/14 16:21:13 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ln_dest;
	size_t	ln_src;
	size_t	i;
	size_t	j;

	ln_dest = 0;
	ln_src = 0;
	ln_dest = ft_strlen(dest);
	ln_src = ft_strlen(src);
	if (ln_dest > size)
		return (ln_src + size);
	i = ln_dest;
	j = 0;
	while (src[j] && i + 1 < size)
		dest[i++] = src[j++];
	dest[i] = 0;
	return (ln_dest + ln_src);
}
