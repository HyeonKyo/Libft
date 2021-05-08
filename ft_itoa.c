/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:30:09 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/08 14:48:14 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_size(int n)
{
	int	size;

	size = 0;
	if (n < 0)
		n = -n;
	while (n)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*min_num(void)
{
	char	*buf;
	int		i;
	int		n;

	i = 1;
	n = 214748364;
	buf = (char *)malloc(12 * sizeof(char));
	if (buf == 0)
		return (0);
	buf[0] = '-';
	buf[11] = 0;
	buf[10] = '8';
	while (i < 10)
	{
		buf[10 - i++] = n % 10 + '0';
		n = n / 10;
	}
	return (buf);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*buf;

	if (n == -2147483648)
		return (min_num());
	size = get_size(n) + 1;
	if (n <= 0)
		size = size + 1;
	buf = (char *)malloc(size * sizeof(char));
	if (buf == 0)
		return (0);
	if (n < 0)
	{
		buf[0] = '-';
		n = -n;
	}
	buf[--size] = 0;
	if (n == 0)
		buf[0] = '0';
	while (n)
	{
		buf[--size] = n % 10 + '0';
		n = n / 10;
	}
	return (buf);
}
