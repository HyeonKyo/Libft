/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:20:31 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/15 14:26:29 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (c == 0)
		i++;
	while (--i >= 0)
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)(str + i));
	return (0);
}
