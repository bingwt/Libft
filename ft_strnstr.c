/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 01:32:36 by btan              #+#    #+#             */
/*   Updated: 2023/09/11 03:27:49 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return (big);
	while (big[i] != '\0' && len--)
	{
		while (big[i + j] == little[j] && big[i + j] != '\0')
			j++;
		if (little[j] == '\0')
			return (big + i);
		i++;
		j = 0;
	}
	return (0);
}
