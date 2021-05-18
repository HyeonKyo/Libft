/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:30:09 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/15 14:08:45 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_size(int n)
{
	int	size;

	size = 0;
	while (n)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

static size_t	absol_val(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char			*ft_itoa(int n)
{
	int		size;
	char	*buf;

	size = get_size(n) + 1;
	if (n <= 0)
		size = size + 1;
	buf = (char *)malloc(size * sizeof(char));
	if (buf == 0)
		return (0);
	if (n < 0)
		buf[0] = '-';
	buf[--size] = 0;
	if (n == 0)
		buf[0] = '0';
	while (n)
	{
		buf[--size] = absol_val(n % 10) + '0';
		n = n / 10;
	}
	return (buf);
}
