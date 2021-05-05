/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:20:07 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/05 16:20:20 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (str + i);
	return (0);
}
