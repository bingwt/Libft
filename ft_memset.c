/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:25:18 by btan              #+#    #+#             */
/*   Updated: 2023/09/07 13:29:04 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memset(void *str, int c, size_t n)
{
	char *ptr;
	
	ptr = (char *) str;
	while (n > 0)
		ptr[(n--) - 1] = c;
	return (ptr);
}
/*
#include <stdio.h>
int     main()
{
	char str[12] = "Hello World";
	
	printf("%s", ft_memset(str, 'a', 7));
}*/
