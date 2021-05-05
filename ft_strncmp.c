/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 00:40:06 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/05 19:33:54 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;
	int		cmp;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && i < n && (s1[i] || s2[i]))
		i++;
	if (i == n)
		i--;
	cmp = s1[i] - s2[i];
	return (cmp);
}