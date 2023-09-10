/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 23:04:57 by btan              #+#    #+#             */
/*   Updated: 2023/09/11 03:33:11 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (*ptr != c && *ptr)
		ptr++;
	if (!*ptr && !c)
		return ((char *) ptr);
	if (!*ptr)
		return (NULL);
	return ((char *) ptr);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char str[6] = "Hello";

	//printf("%s\n", ft_strchr(str, 'e'));
	////printf("%s\n", str);
	////printf("Faux: %s\n", ft_strchr(str, 'e'));
	printf("Original: %s\n", str);
	printf("    Real: %s\n", strchr(str, 'e'));
	printf("    Faux: %s\n", ft_strchr(str, 'e'));
	printf("    Faux: %s\n", ft_strchr(str, 0));
	printf("    Real: %s\n", strchr(str, 0));
	printf("    Faux: %s\n", ft_strchr(str, 'f'));
	printf("    Real: %s\n", strchr(str, 'f'));
}*/
