/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:17:36 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/08 14:57:31 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (*lst == 0 || del == 0)
		return ;
	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		if (temp->content != 0)
			(*del)(temp->content);
		free(temp);
	}
	*lst = 0;
}
