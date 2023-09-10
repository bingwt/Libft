/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 23:10:53 by btan              #+#    #+#             */
/*   Updated: 2023/09/11 00:27:33 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	ptr = (char *) s;
	i = ft_strlen(ptr);
	while (ptr[i] != c && i)
		i--;
	if (!i && !c)
		return (ptr);
	if (!i)
		return (NULL);
	return ((char *) &ptr[i]);
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
	printf("    Real: %s\n", strrchr(str, 'H'));
	printf("    Faux: %s\n", ft_strrchr(str, 'H'));
	printf("    Real: %s\n", strrchr(str, 'l'));
	printf("    Faux: %s\n", ft_strrchr(str, 'l'));
	printf("    Real: %s\n", strrchr(str, 0));
	printf("    Faux: %s\n", ft_strrchr(str, 0));
	printf("    Real: %s\n", strrchr(str, 'f'));
	printf("    Faux: %s\n", ft_strrchr(str, 'f'));
}*/