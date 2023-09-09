/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:26:03 by btan              #+#    #+#             */
/*   Updated: 2023/09/09 11:25:37 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
	{
		while (n-- >= 0)
			((unsigned char *) dest)[n] = ((unsigned char *) src)[n];
	}
	else if (dest < src)
		ft_memcpy(dest, src, n);
	return (dest);
}
