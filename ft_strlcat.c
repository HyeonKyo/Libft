/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 02:02:27 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/07 17:37:08 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	n_dest;
	unsigned int	n_src;
	unsigned int	i;
	unsigned int	j;

	n_dest = 0;
	n_src = 0;
	while (dest[n_dest])
		n_dest++;
	while (src[n_src])
		n_src++;
	if (n_dest > size)
		return (n_src + size);
	i = n_dest;
	j = 0;
	while (i + 1 < size && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (n_dest + n_src);
}
