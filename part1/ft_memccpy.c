/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:18:18 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/05 16:22:42 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dst;
	char	*s;
	int		i;

	i = 0;
	dst = dest;
	s = src;
	while (n--)
	{
		if (s[i] == c)
			return (src + i + 1);
		dst[i] = s[i];
		i++;
	}
	return (0);
}
