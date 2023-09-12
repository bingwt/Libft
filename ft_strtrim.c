/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:52:23 by btan              #+#    #+#             */
/*   Updated: 2023/09/12 12:23:33 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		begin;
	int		end;
	char	*cpy;

	if (!s1 && !set)
		return (NULL);
	begin = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[begin]))
		begin++;
	ft_strlcpy((char *)(s1 - begin), s1, (ft_strlen(s1) + 1));
	while (ft_strrchr(set, s1[end]))
		end--;
	//cpy = malloc(sizeof(char) * (end + 2));
	cpy = ft_calloc((end), sizeof(char));
	if (!cpy)
		return (ft_strdup(""));
	ft_strlcpy(cpy, s1, end + 2);
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
