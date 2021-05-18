/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:20:07 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/15 14:26:26 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = -1;
	while (str[++i])
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)(str + i));
	if (str[i] == 0 && c == 0)
		return ((char *)(str + i));
	return (0);
}
