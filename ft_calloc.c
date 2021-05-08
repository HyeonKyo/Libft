/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:15:38 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/07 17:32:51 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*ptr;
	int		i;
	size_t	num;

	i = 0;
	num = n * size;
	if (n == 0 || size == 0)
		num = 1;
	ptr = malloc(n * size);
	if (ptr == 0)
		return (0);
	while (i < (int)num)
		ptr[i++] = 0;
	return (ptr);
}
