/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:20:31 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/10 19:15:42 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (c == 0)
		i++;
	while (--i >= 0)
		if ((unsigned char)str[i] == (unsigned char)c)
			return (str + i);
	return (0);
}
