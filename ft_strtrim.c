/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:52:23 by btan              #+#    #+#             */
/*   Updated: 2023/09/12 16:37:45 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		begin;
	int		end;
	char	*cpy;

	begin = 0;
	end = ft_strlen(s1);
	cpy = malloc(sizeof(char) * (end + 2));
	ft_memcpy(cpy, s1, ft_strlen(s1));
	if (!cpy || !set)
		return (NULL);
	while (ft_strchr(set, cpy[begin]))
		begin++;
	ft_strlcpy((cpy - begin), cpy, (ft_strlen(cpy) + 1));
	while (ft_strrchr(set, cpy[end]))
		end--;
	//cpy = ft_calloc((end), sizeof(char));
	if (!cpy)
		return (ft_strdup(""));
	ft_strlcpy(cpy, cpy, end + 2);
	return (cpy);
}
//{
//	int	len;
//	int	begin;
//	int	end;
//
//	len = ft_strlen(s1);
//	begin = 0;
//	end = len;
//	while (ft_strchr(set, s1[begin]))
//		begin++;
//	ft_strlcpy((char *) (s1 - begin), s1, (len + 1));
//	len = ft_strlen(s1);
//	while (ft_strrchr(set, s1[end--]));
//	ft_memmove((char *) (s1 + end - 1), s1, (len - end + 1));
//	s1 += end - 1;
//	return ((char *) s1);
//}
//
//#include <stdio.h>
//int	main()
//{
//	char	s1[] = "  hello  ";
//	//char s1[] = "lorem \n ipsum \t dolor \n sit \t amet"
//	char	*set = " ";
//	//ft_strchr(set, s1[0]);
//	printf("%s\n", ft_strtrim(s1, set));
//	printf("%zu\n", ft_strlen(s1));
//}
