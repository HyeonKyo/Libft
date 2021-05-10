/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:20:07 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/10 19:16:06 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = -1;
	while (str[++i])
		if ((unsigned char)str[i] == (unsigned char)c)
			return (str + i);
	if (str[i] == 0 && c == 0)
		return (str + i);
	return (0);
}
