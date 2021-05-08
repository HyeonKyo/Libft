/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonkki <hyeonkki@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:23:22 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/05/08 14:33:20 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cur;
	t_list	*new;
	t_list	*head;

	if (lst == 0)
		return (0);
	head = ft_lstnew((*f)(lst->content));
	if (head == 0)
		return (0);
	new = head;
	cur = lst->next;
	while (cur)
	{
		new->next = ft_lstnew((*f)(cur->content));
		if (new->next == 0)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		new = new->next;
		cur = cur->next;
	}
	return (head);
}
