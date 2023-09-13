/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#https://www.geeksforgeeks.org/insert-a-node-at-front-beginning-of-a-linked-list/+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:55:21 by btan              #+#    #+#             */
/*   Updated: 2023/09/13 17:55:26 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
