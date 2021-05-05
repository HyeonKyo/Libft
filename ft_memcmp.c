/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:19:44 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/05 20:26:05 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	int					i;

	i = 0;
	s1 = ptr1;
	s2 = ptr2;
	while (!(s1[i] - s2[i]) && i < (int)num && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
