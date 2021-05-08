/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:29:36 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/07 17:40:14 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_num(int n, int fd, int *flag)
{
	char	c;

	if (n == 0 && *flag == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n == 0)
		return ;
	*flag = 1;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	print_num(n / 10, fd, flag);
	c = n % 10 + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	flag;

	flag = 0;
	print_num(n, fd, &flag);
}
