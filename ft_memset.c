/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:25:18 by btan              #+#    #+#             */
/*   Updated: 2023/09/07 20:32:28 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memset(void *str, int c, size_t n)
{
	while (n > 0)
		((char *) str)[(n--) - 1] = c;
	return (str);
}
/*
#include <stdio.h>
int     main()
{
	char str[12] = "Hello World";
	
	printf("%s", (char *) ft_memset(str, 'a', 7));
}*/
