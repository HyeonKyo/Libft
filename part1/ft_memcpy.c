/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:18:08 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/05 16:18:09 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *source, size_t num)
{
	char		*dst;
	const char	*src;
	int			i;

	i = -1;
	dst = dest;
	src = source;
	while (++i < num)
		dst[i] = src[i];
	return (dest);
}
