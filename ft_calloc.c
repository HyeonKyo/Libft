/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:15:38 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/05 19:42:02 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*ptr;
	int		i;

	i = 0;
	if (n == 0 || size == 0)
		return (0);
	ptr = malloc(n * size);
	if (ptr == 0)
		return (0);
	while (i < (int)n * (int)size)
		ptr[i++] = 0;
	return (ptr);
}
