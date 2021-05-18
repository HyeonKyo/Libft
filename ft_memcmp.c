/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:19:44 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/18 13:28:53 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	i = 0;
	if (ptr1 == 0 && ptr2 == 0)
		return (0);
	if (num == 0)
		return (0);
	s1 = (unsigned char *)ptr1;
	s2 = (unsigned char *)ptr2;
	while (i < num && s1[i] == s2[i])
		i++;
	if (i == num && i != 0)
		i--;
	return (s1[i] - s2[i]);
}
