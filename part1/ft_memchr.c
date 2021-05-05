/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:17:28 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/05 16:17:29 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(void *ptr, int value, size_t num)
{
	char	*s;
	int		i;

	s = ptr;
	i = 0;
	while (i < num)
	{
		if (s[i] == value)
			return (ptr + i);
		i++;
	}
	return (0);
}
