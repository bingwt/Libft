/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:40:01 by btan              #+#    #+#             */
/*   Updated: 2023/09/15 17:40:02 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list	*head;
	t_list	*node;

	head = NULL;
	while (lst)
	{
		node = ft_lstnew(f((*lst).content));
		if (!node)
			return (NULL);
		ft_lstadd_back(&head, node);
		lst = (*lst).next;
	}
	ft_lstclear(&lst, del);
	return (head);
}
